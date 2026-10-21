// vasalle_color.cpp - en el mapa politico, los vasallos se pintan con su propio color
// mezclado con el color de su senor (ultimo senor de la cadena de vasallaje).
//
// Ajustes en creatinecore_settings.ini (los lee V2TechButton.cpp):
//   ENABLE_VASSAL_COLORS=1      activa la funcion
//   VASSAL_COLOR_PERCENT=65     peso del color del senor (0..100). 65 = 35% color original
//                               del vasallo + 65% color del senor. Con 0 no se instala nada;
//                               con 100 el vasallo se ve exactamente del color de su senor.
//
// Como funciona (v3.04, base 0x400000; direcciones verificadas en NATIVE_VERIFICATION del
// proyecto prueba-dll):
//   - 007FCA30 construye la paleta politica: por provincia guarda el color del dueno (+0) y
//     del controlador (+4). Se engancha esa funcion: se deja correr la original y luego se
//     tine solo el color de los vasallos antes del sombreado nativo de visibilidad.
//   - Relacion de vasallaje: bytes country+0xCF4 / 0xCF5 (es vasallo) y country+0xCFC (indice
//     del senor), con la tabla de paises en [0x012587E4] (inicio +4, fin +8). Una cadena con
//     datos invalidos o un ciclo cuenta como independiente.
//   - 004FB5C0 da el color de un pais (ESI = pais, EAX = salida); 007EBB80 aplica el sombreado
//     de visibilidad; 009B6DF0 empaqueta a ARGB. Nunca se modifica al pais ni su dueno real.
//   - Si algun dato no pasa la validacion, se restauran los colores originales y la funcion se
//     desactiva sola (el juego sigue normal).
#include <windows.h>
#include <float.h>
#include <string.h>
#include <stdint.h>
#include "CCore_Shared.h"

bool InstallVassalColors(int percent);

// ---------------------------------------------------------------
// LOGICA PURA (inicio)
// ---------------------------------------------------------------
// Devuelve el senor final de la cadena, o 0 si es independiente, hay datos invalidos o ciclo.
// parent(ctx, i): senor directo de i, 0 si es independiente, -1 si el dato es invalido.
typedef int (*VcParentFn)(void* ctx, int index);

static int VcOverlord(int country, size_t count, VcParentFn parent, void* ctx)
{
    if (country <= 0 || (size_t)country >= count) return 0;
    int current = country;
    for (size_t hops = 0; hops < count; ++hops)
    {
        const int next = parent(ctx, current);
        if (next == 0) return current == country ? 0 : current;
        if (next < 0 || (size_t)next >= count || next == current || next == country) return 0;
        current = next;
    }
    return 0;
}

// Mezcla el color del vasallo con el de su senor: (1-w)*propio + w*senor, w = percent/100.
// Falso (y sin tocar nada) si algun canal no es finito o esta fuera de 0..1.
static bool VcTint(float& r, float& g, float& b, float lordR, float lordG, float lordB, int percent)
{
    if (!_finite(r) || !_finite(g) || !_finite(b) ||
        !_finite(lordR) || !_finite(lordG) || !_finite(lordB) ||
        r < 0 || r > 1 || g < 0 || g > 1 || b < 0 || b > 1 ||
        lordR < 0 || lordR > 1 || lordG < 0 || lordG > 1 || lordB < 0 || lordB > 1) return false;
    if (percent < 0) percent = 0;
    if (percent > 100) percent = 100;
    const float w = (float)percent / 100.0f;
    const float keep = 1.0f - w;
    r = keep * r + w * lordR;
    g = keep * g + w * lordG;
    b = keep * b + w * lordB;
    return true;
}
// ---------------------------------------------------------------
// LOGICA PURA (fin)
// ---------------------------------------------------------------

static const DWORD VC_RVA_PALETTE        = 0x3FCA30;   // 007FCA30: construye la paleta politica
static const DWORD VC_RVA_COUNTRY_COLOR  = 0x0FB5C0;   // 004FB5C0: color del pais (ESI, EAX)
static const DWORD VC_RVA_SHADE          = 0x3EBB80;   // 007EBB80: sombreado de visibilidad
static const DWORD VC_RVA_PACK           = 0x5B6DF0;   // 009B6DF0: empaqueta a ARGB
static const DWORD VC_RVA_COUNTRY_TABLE  = 0xE587E4;   // DAT_012587E4: gestor de paises
static const DWORD VC_RVA_BRIGHTNESS     = 0xB092FC;   // factor normal
static const DWORD VC_RVA_VIS_FLAG_A     = 0xB092FA;
static const DWORD VC_RVA_VIS_FLAG_B     = 0xB092FB;
static const DWORD VC_RVA_BRIGHTNESS_DIM = 0x9EFC8C;   // factor cuando la provincia no se ve

static const unsigned char VC_PALETTE_SIG[6]       = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };
static const unsigned char VC_COUNTRY_COLOR_SIG[10] = { 0x55, 0x8B, 0xEC, 0x51, 0x8B, 0x96, 0xD0, 0x15, 0x00, 0x00 };

typedef void     (__stdcall* tVcBuildPalette)(void* palette);
typedef uint32_t (__thiscall* tVcPackColor)(void* color);

static tVcBuildPalette g_vcOrigPalette = 0;
__declspec(align(16)) static unsigned char g_vcTrampPalette[32];
static bool  g_vcInstalled = false;
static bool  g_vcEnabled = false;
static int   g_vcPercent = 65;
static DWORD g_vcRebuilds = 0;

template<class T> static T VcRead(const void* p, size_t offset = 0)
{
    return *reinterpret_cast<const T*>(reinterpret_cast<const unsigned char*>(p) + offset);
}

static bool VcReadable(const void* p, size_t size)
{
    if (!p || !size) return false;
    uintptr_t a = reinterpret_cast<uintptr_t>(p), end = a + size;
    if (end < a) return false;
    while (a < end)
    {
        MEMORY_BASIC_INFORMATION m;
        memset(&m, 0, sizeof(m));
        if (!VirtualQuery(reinterpret_cast<void*>(a), &m, sizeof(m)) ||
            m.State != MEM_COMMIT || (m.Protect & (PAGE_GUARD | PAGE_NOACCESS))) return false;
        const uintptr_t next = reinterpret_cast<uintptr_t>(m.BaseAddress) + m.RegionSize;
        if (next <= a) return false;
        a = next;
    }
    return true;
}

// Color del pais ya resuelto por el juego (incluye colores por gobierno). ABI: ESI=pais, EAX=salida.
static void VcCountryColor(void* country, void* output)
{
    const DWORD address = g_base + VC_RVA_COUNTRY_COLOR;
    __asm {
        push esi
        mov esi, country
        mov eax, output
        call address
        pop esi
    }
}

// Aplica el sombreado nativo de visibilidad y devuelve el color empaquetado ARGB.
static uint32_t VcShadedColor(void* color, float brightness)
{
    unsigned char scaled[0x1c];
    memset(scaled, 0, sizeof(scaled));
    void* output = scaled;
    const DWORD address = g_base + VC_RVA_SHADE;
    __asm {
        mov ecx, color
        mov eax, output
        movss xmm1, brightness
        call address
    }
    return reinterpret_cast<tVcPackColor>(g_base + VC_RVA_PACK)(scaled);
}

struct VcCountries
{
    void** list;
    size_t count;
};

// Senor directo de un pais: 0 = independiente, -1 = dato invalido.
static int VcParentOf(void* ctx, int index)
{
    const VcCountries* c = static_cast<const VcCountries*>(ctx);
    void* country = c->list[index];
    if (!VcReadable(country, 0xD00)) return -1;
    if (!VcRead<unsigned char>(country, 0xCF4) && !VcRead<unsigned char>(country, 0xCF5)) return 0;
    return VcRead<int>(country, 0xCFC);
}

static bool VcApplyPalette(void* palette)
{
    void* manager = VcRead<void*>(reinterpret_cast<void*>(g_base + VC_RVA_COUNTRY_TABLE));
    if (!VcReadable(manager, 12) || !VcReadable(palette, 0x24)) return false;
    const uintptr_t first = VcRead<uintptr_t>(manager, 4), last = VcRead<uintptr_t>(manager, 8);
    if (last <= first || (last - first) % 4 || (last - first) / 4 > 8192 ||
        !VcReadable(reinterpret_cast<void*>(first), last - first)) return false;

    VcCountries countries;
    countries.list = reinterpret_cast<void**>(first);
    countries.count = (last - first) / 4;

    static int lords[8192];                       // senor final de cada pais (0 = ninguno)
    memset(lords, 0, sizeof(lords));
    for (size_t i = 1; i < countries.count; ++i)
        lords[i] = VcOverlord((int)i, countries.count, VcParentOf, &countries);

    const uintptr_t begin = VcRead<uintptr_t>(palette, 0x1C), end = VcRead<uintptr_t>(palette, 0x20);
    if (end < begin || (end - begin) % 4 || (end - begin) / 4 > 65536 ||
        !VcReadable(reinterpret_cast<void*>(begin), end - begin)) return false;

    unsigned changed = 0;
    for (size_t i = 1; i < (end - begin) / 4; ++i)
    {
        void* entry = VcRead<void*>(reinterpret_cast<void*>(begin), i * 4);
        if (!VcReadable(entry, 16)) return false;
        void* province = VcRead<void*>(entry, 12);
        if (!VcReadable(province, 0x138)) return false;
        // Sin dueno (mar, sin colonizar): se conservan los colores nativos.
        if (VcRead<int>(province, 0x12C) == 0) continue;

        // Mismo sombreado que el juego, tambien para provincias ocupadas / sin visibilidad.
        float brightness = VcRead<float>(reinterpret_cast<void*>(g_base + VC_RVA_BRIGHTNESS));
        if (VcRead<unsigned char>(reinterpret_cast<void*>(g_base + VC_RVA_VIS_FLAG_A)) &&
            VcRead<unsigned char>(reinterpret_cast<void*>(g_base + VC_RVA_VIS_FLAG_B)))
        {
            void* visibility = VcRead<void*>(province, 0x5C);
            if (!VcReadable(visibility, 0x364)) return false;
            if (VcRead<int>(visibility, 0x360) < 1)
                brightness = VcRead<float>(reinterpret_cast<void*>(g_base + VC_RVA_BRIGHTNESS_DIM));
        }

        for (unsigned part = 0; part < 2; ++part)          // 0 = dueno, 1 = controlador
        {
            const int index = VcRead<int>(province, part == 0 ? 0x12C : 0x134);
            if (index <= 0 || (size_t)index >= countries.count || !lords[index]) continue;
            void* lord = countries.list[lords[index]];
            void* subject = countries.list[index];
            if (!VcReadable(lord, 0x15D4) || !VcReadable(subject, 0x15D4)) return false;

            unsigned char color[0x1c], lordColor[0x1c];
            memset(color, 0, sizeof(color));
            memset(lordColor, 0, sizeof(lordColor));
            VcCountryColor(subject, color);
            VcCountryColor(lord, lordColor);
            float* rgb = reinterpret_cast<float*>(color + 8);
            const float* lordRgb = reinterpret_cast<const float*>(lordColor + 8);
            if (!VcTint(rgb[0], rgb[1], rgb[2], lordRgb[0], lordRgb[1], lordRgb[2], g_vcPercent)) return false;
            static_cast<uint32_t*>(entry)[part] = VcShadedColor(color, brightness);
            ++changed;
        }
    }
    ++g_vcRebuilds;
    if (g_vcRebuilds <= 3 || g_vcRebuilds % 100 == 0)
        Log("VasalleColor: paleta #%lu: %u colores de dueno/controlador mezclados (%d%% color del senor)",
            (unsigned long)g_vcRebuilds, changed, g_vcPercent);
    return true;
}

static void __stdcall VcPaletteHook(void* palette)
{
    g_vcOrigPalette(palette);                    // la paleta nativa primero
    if (!g_vcEnabled) return;
    bool ok = false;
    __try { ok = VcApplyPalette(palette); }
    __except (EXCEPTION_EXECUTE_HANDLER) { ok = false; }
    if (!ok)
    {
        g_vcEnabled = false;
        g_vcOrigPalette(palette);                // restaura los colores originales
        Log("VasalleColor: los datos del mapa no pasaron la validacion; colores originales restaurados y funcion desactivada");
    }
}

static bool VcMatch(DWORD rva, const unsigned char* bytes, size_t count)
{
    const void* p = reinterpret_cast<const void*>(g_base + rva);
    return VcReadable(p, count) && memcmp(p, bytes, count) == 0;
}

// Instala el hook. percent = peso del color del senor (0..100); 65 por defecto.
bool InstallVassalColors(int percent)
{
    if (g_vcInstalled) return true;
    if (percent < 0) percent = 0;
    if (percent > 100) percent = 100;
    if (percent == 0)
    {
        Log("VasalleColor: VASSAL_COLOR_PERCENT=0, no se instala nada");
        return false;
    }
    if (!g_base)
    {
        Log("VasalleColor: base del juego desconocida");
        return false;
    }
    if (!VcMatch(VC_RVA_PALETTE, VC_PALETTE_SIG, sizeof(VC_PALETTE_SIG)) ||
        !VcMatch(VC_RVA_COUNTRY_COLOR, VC_COUNTRY_COLOR_SIG, sizeof(VC_COUNTRY_COLOR_SIG)))
    {
        Log("VasalleColor: las firmas del ejecutable no coinciden (v3.04); no se parchea");
        return false;
    }

    g_vcPercent = percent;
    g_vcEnabled = true;
    void* orig = 0;
    if (!StealToTrampoline(VC_RVA_PALETTE, sizeof(VC_PALETTE_SIG), g_vcTrampPalette, sizeof(g_vcTrampPalette),
                           VC_PALETTE_SIG, (void*)&VcPaletteHook, &orig, "VasalleColor(palette)"))
    {
        g_vcEnabled = false;
        Log("VasalleColor: no se pudo enganchar la paleta politica (rva %06X)", (unsigned)VC_RVA_PALETTE);
        return false;
    }
    g_vcOrigPalette = reinterpret_cast<tVcBuildPalette>(orig);
    g_vcInstalled = true;
    Log("VasalleColor: instalado (rva %06X), %d%% color del senor + %d%% color propio",
        (unsigned)VC_RVA_PALETTE, percent, 100 - percent);
    return true;
}
