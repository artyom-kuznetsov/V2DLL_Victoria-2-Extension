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
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
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
static const DWORD VC_RVA_COUNTRY_TAG_LOOKUP = 0x15C6C0; // FUN_0055C6C0: stdcall(manager, out, tag)
static const DWORD VC_RVA_CONSOLE_LOOKUP = 0x0023A50;    // FUN_00423A50
static const DWORD VC_RVA_FLAG_ENTRY_ALLOC = 0x6AE9AF;    // engine operator new
static const DWORD VC_RVA_BRIGHTNESS     = 0xB092FC;   // factor normal
static const DWORD VC_RVA_VIS_FLAG_A     = 0xB092FA;
static const DWORD VC_RVA_VIS_FLAG_B     = 0xB092FB;
static const DWORD VC_RVA_BRIGHTNESS_DIM = 0x9EFC8C;   // factor cuando la provincia no se ve

static const unsigned char VC_PALETTE_SIG[6]       = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };
static const unsigned char VC_COUNTRY_COLOR_SIG[10] = { 0x55, 0x8B, 0xEC, 0x51, 0x8B, 0x96, 0xD0, 0x15, 0x00, 0x00 };
static const unsigned char VC_CONSOLE_LOOKUP_SIG[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x14 };

typedef void     (__stdcall* tVcBuildPalette)(void* palette);
typedef uint32_t (__thiscall* tVcPackColor)(void* color);

static tVcBuildPalette g_vcOrigPalette = 0;
__declspec(align(16)) static unsigned char g_vcTrampPalette[32];
static bool  g_vcInstalled = false;
static bool  g_vcEnabled = false;
static int   g_vcPercent = 65;
static DWORD g_vcRebuilds = 0;

struct VcCountryColorOverride
{
    bool active;
    bool baselineCaptured;
    unsigned char rgb[3];
    float baseline[3];
    void* country;
};
static VcCountryColorOverride g_ccOverrides[8192] = {};
static int g_ccOverrideIds[8192] = {};
static bool g_ccOverrideSeen[8192] = {};
static unsigned g_ccOverrideCount = 0;
static unsigned char g_ccConsoleTrampoline[32] = {};
static void* g_ccConsoleOriginal = 0;
static unsigned char g_ccCommandEntry[0x4C] = {};
static unsigned char g_activateUnitCommandEntry[0x4C] = {};
static unsigned char g_deactivateUnitCommandEntry[0x4C] = {};
static const char g_ccCommandName[] = "change_color";
static const char g_activateUnitCommandName[] = "activate_unit";
static const char g_deactivateUnitCommandName[] = "deactivate_unit";
static bool g_ccCommandInstalled = false;
static bool g_ccColorCommandEnabled = false;
static bool g_unitConsoleCommandsEnabled = false;
static volatile LONG g_ccRestoreSavedColors = 0;
static const char g_ccSavedColorMarker[] = "ccore_color_v1";

static void VcRememberCountryColor(int index, void* country, const unsigned char rgb[3],
                                   const float* baseline, bool baselineCaptured);

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

// The game's serializable flag container is shared by country (+0x1B0) and province (+0x328).
// Its vtable slot 2 finds a flag by name; slot 6 inserts an entry. Entries store a 24-byte
// MSVC string followed by the active byte at +0x1C. The country saver writes this container
// as the country's native `flags = { ... }` block.
static void* VcFindFlag(void* container, const char* name)
{
    if (!VcReadable(container, 12) || !name) return 0;
    void** vtable = VcRead<void**>(container);
    if (!VcReadable(vtable, 12) || !vtable[2]) return 0;
    typedef void* (__fastcall* VcFindFlagFn)(void*, void*, const char*);
    return reinterpret_cast<VcFindFlagFn>(vtable[2])(container, 0, name);
}

static bool VcEnsureFlag(void* container, const char* name)
{
    __try
    {
        if (VcFindFlag(container, name)) return true;
        if (!VcReadable(container, 12) || !name) return false;
        void** vtable = VcRead<void**>(container);
        if (!VcReadable(vtable, 0x1C) || !vtable[6]) return false;

        typedef void* (__cdecl* VcAllocFn)(size_t);
        void* entry = reinterpret_cast<VcAllocFn>(g_base + VC_RVA_FLAG_ENTRY_ALLOC)(0x20);
        if (!entry) return false;
        memset(entry, 0, 0x20);
        *(uint32_t*)((unsigned char*)entry + 0x14) = 15;
        typedef void* (__thiscall* VcStringAssignFn)(void*, const char*, unsigned);
        reinterpret_cast<VcStringAssignFn>(g_base + 0x9350)(entry, name, (unsigned)strlen(name));

        typedef void (__thiscall* VcInsertFlagFn)(void*, void*, void*);
        reinterpret_cast<VcInsertFlagFn>(vtable[6])(container, entry, entry);
        return VcFindFlag(container, name) != 0;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

static bool VcSetFlag(void* container, const char* name, bool active)
{
    if (!VcEnsureFlag(container, name)) return false;
    void* entry = VcFindFlag(container, name);
    if (!VcReadable(entry, 0x20)) return false;
    *((unsigned char*)entry + 0x1C) = active ? 1 : 0;
    return true;
}

static void VcColorBitFlagName(int channel, int bit, char* output, size_t capacity)
{
    static const char channels[] = { 'r', 'g', 'b' };
    _snprintf_s(output, capacity, _TRUNCATE, "ccore_%c%d", channels[channel], bit);
}

static void* VcCountryFlags(void* country)
{
    return country ? (unsigned char*)country + 0x1B0 : 0;
}

static bool VcEnsureSavedColorFlags(void* country)
{
    void* flags = VcCountryFlags(country);
    if (!VcReadable(flags, 12) || !VcEnsureFlag(flags, g_ccSavedColorMarker)) return false;
    for (int channel = 0; channel < 3; ++channel)
        for (int bit = 0; bit < 8; ++bit)
        {
            char name[24];
            VcColorBitFlagName(channel, bit, name, sizeof(name));
            if (!VcEnsureFlag(flags, name)) return false;
        }
    return true;
}

static bool VcStoreSavedCountryColor(void* country, const unsigned char rgb[3])
{
    if (!VcEnsureSavedColorFlags(country)) return false;
    void* flags = VcCountryFlags(country);
    if (!VcSetFlag(flags, g_ccSavedColorMarker, false)) return false;
    for (int channel = 0; channel < 3; ++channel)
        for (int bit = 0; bit < 8; ++bit)
        {
            char name[24];
            VcColorBitFlagName(channel, bit, name, sizeof(name));
            if (!VcSetFlag(flags, name, (rgb[channel] & (1u << bit)) != 0))
                return false;
        }
    return VcSetFlag(flags, g_ccSavedColorMarker, true);
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

static bool VcHasActiveCountryColorOverrides()
{
    for (unsigned n = 0; n < g_ccOverrideCount; ++n)
    {
        const int index = g_ccOverrideIds[n];
        if (index > 0 && index < 8192 && g_ccOverrides[index].active) return true;
    }
    return false;
}

static void VcClearCountryColorOverrides()
{
    for (unsigned n = 0; n < g_ccOverrideCount; ++n)
    {
        const int index = g_ccOverrideIds[n];
        if (index > 0 && index < 8192) g_ccOverrides[index].active = false;
    }
}

static bool VcParseRgbByte(const char* text, int* out)
{
    if (!text || !*text || !out) return false;
    char* end = 0;
    const long value = strtol(text, &end, 10);
    if (!end || end == text || *end || value < 0 || value > 255) return false;
    *out = (int)value;
    return true;
}

// Console callback arguments are a std::vector<std::string>, with 0x1C-byte strings.
static const char* VcCommandArg(const void* args, int index, int count)
{
    if (!VcReadable(args, 12)) return 0;
    const uintptr_t begin = (uintptr_t)VcRead<void*>(args, 0);
    const uintptr_t end = (uintptr_t)VcRead<void*>(args, 4);
    if (!begin || end < begin || (end - begin) % 0x1C ||
        (end - begin) / 0x1C != (uintptr_t)count || index < 0 || index >= count ||
        !VcReadable((void*)begin, end - begin)) return 0;
    const char* item = (const char*)(begin + (size_t)index * 0x1C);
    return VcRead<uint32_t>(item, 20) >= 16 ? VcRead<const char*>(item, 0) : item;
}

// FUN_00423B50 expects a 0x1C-byte response object and consumes its returned pointer.
static void VcSetCountryColorResult(unsigned char* result, bool ok, const char* message)
{
    if (!VcReadable(result, 0x1C)) return;
    result[0] = ok ? 1 : 0;
    void* text = result + 4;
    memset(text, 0, 24);
    *(uint32_t*)((unsigned char*)text + 20) = 15;
    typedef void* (__thiscall* VcStringAssignFn)(void*, const char*, unsigned);
    reinterpret_cast<VcStringAssignFn>(g_base + 0x9350)(text, message, (unsigned)strlen(message));
}

static unsigned char* __cdecl VcCountryColorCommand(unsigned char* result, const void* args)
{
    if (!result) return result;
    if (!VcReadable(args, 12))
    {
        VcSetCountryColorResult(result, false, "Country data unavailable");
        return result;
    }
    const uintptr_t begin = (uintptr_t)VcRead<void*>(args, 0);
    const uintptr_t end = (uintptr_t)VcRead<void*>(args, 4);
    const int argc = (begin && end >= begin && (end - begin) % 0x1C == 0)
        ? (int)((end - begin) / 0x1C) : -1;
    if (argc != 4)
    {
        VcSetCountryColorResult(result, false, "Usage: change_color TAG R G B");
        return result;
    }

    const char* tag = VcCommandArg(args, 0, 4);
    int rgb[3] = {};
    if (!tag || strlen(tag) != 3 ||
        !VcParseRgbByte(VcCommandArg(args, 1, 4), &rgb[0]) ||
        !VcParseRgbByte(VcCommandArg(args, 2, 4), &rgb[1]) ||
        !VcParseRgbByte(VcCommandArg(args, 3, 4), &rgb[2]))
    {
        VcSetCountryColorResult(result, false, "Bad TAG/RGB");
        return result;
    }

    void* manager = VcRead<void*>((void*)(g_base + VC_RVA_COUNTRY_TABLE));
    if (!VcReadable(manager, 12))
    {
        VcSetCountryColorResult(result, false, "Country data unavailable");
        return result;
    }

    int resolved[2] = {};
    typedef void (__stdcall* VcTagLookupFn)(void*, int*, const char*);
    reinterpret_cast<VcTagLookupFn>(g_base + VC_RVA_COUNTRY_TAG_LOOKUP)(manager, resolved, tag);
    const int index = resolved[1];
    if (index <= 0 || index >= 8192 || resolved[0] == 0x2D2D2D)
    {
        VcSetCountryColorResult(result, false, "Unknown country TAG");
        return result;
    }

    const uintptr_t first = VcRead<uintptr_t>(manager, 4);
    const uintptr_t last = VcRead<uintptr_t>(manager, 8);
    if (last <= first || (last - first) % 4 || (size_t)index >= (last - first) / 4 ||
        (last - first) / 4 > 8192 || !VcReadable((void*)first, last - first))
    {
        VcSetCountryColorResult(result, false, "Country index invalid");
        return result;
    }
    void* country = VcRead<void*>((void*)first, (size_t)index * 4);
    if (!VcReadable(country, 0x15D4))
    {
        VcSetCountryColorResult(result, false, "Country data invalid");
        return result;
    }

    unsigned char nativeColor[0x1C] = {};
    VcCountryColor(country, nativeColor);
    const float* baseline = reinterpret_cast<const float*>(nativeColor + 8);
    if (!_finite(baseline[0]) || !_finite(baseline[1]) || !_finite(baseline[2]) ||
        baseline[0] < 0 || baseline[0] > 1 || baseline[1] < 0 || baseline[1] > 1 ||
        baseline[2] < 0 || baseline[2] > 1)
    {
        VcSetCountryColorResult(result, false, "Native country RGB invalid");
        return result;
    }

    unsigned char storedRgb[3] = {
        (unsigned char)rgb[0], (unsigned char)rgb[1], (unsigned char)rgb[2]
    };
    bool stored = false;
    __try { stored = VcStoreSavedCountryColor(country, storedRgb); }
    __except (EXCEPTION_EXECUTE_HANDLER) { stored = false; }
    if (!stored)
    {
        VcSetCountryColorResult(result, false, "Could not store country color in save data");
        return result;
    }
    VcRememberCountryColor(index, country, storedRgb, baseline, true);

    Log("CountryColor: change_color accepted; RGB stored in country save data");
    VcSetCountryColorResult(result, true, "Color set");
    return result;
}

typedef int (__thiscall* VcConsoleLookupFn)(void*, const char*);
static int __fastcall VcConsoleLookupHook(void* self, void*, const char* name)
{
    if (name && g_ccColorCommandEnabled && _stricmp(name, g_ccCommandName) == 0)
        return (int)g_ccCommandEntry;
    if (name && g_unitConsoleCommandsEnabled && _stricmp(name, g_activateUnitCommandName) == 0)
        return (int)g_activateUnitCommandEntry;
    if (name && g_unitConsoleCommandsEnabled && _stricmp(name, g_deactivateUnitCommandName) == 0)
        return (int)g_deactivateUnitCommandEntry;
    return reinterpret_cast<VcConsoleLookupFn>(g_ccConsoleOriginal)(self, name);
}

struct VcCountries
{
    void** list;
    size_t count;
};

static void VcRememberCountryColor(int index, void* country, const unsigned char rgb[3],
                                   const float* baseline, bool baselineCaptured)
{
    if (index <= 0 || index >= 8192 || !country) return;
    VcCountryColorOverride& overrideColor = g_ccOverrides[index];
    overrideColor.country = country;
    overrideColor.active = true;
    overrideColor.baselineCaptured = baselineCaptured;
    for (int channel = 0; channel < 3; ++channel)
    {
        overrideColor.rgb[channel] = rgb[channel];
        overrideColor.baseline[channel] = baselineCaptured ? baseline[channel] : 0.0f;
    }
    if (!g_ccOverrideSeen[index] && g_ccOverrideCount < 8192)
    {
        g_ccOverrideSeen[index] = true;
        g_ccOverrideIds[g_ccOverrideCount++] = index;
    }
}

static bool VcReadSavedCountryColor(void* country, unsigned char rgb[3])
{
    void* flags = VcCountryFlags(country);
    if (!VcReadable(flags, 12)) return false;
    void* marker = VcFindFlag(flags, g_ccSavedColorMarker);
    if (!VcReadable(marker, 0x20) || !*((unsigned char*)marker + 0x1C)) return false;

    unsigned char decoded[3] = {};
    for (int channel = 0; channel < 3; ++channel)
        for (int bit = 0; bit < 8; ++bit)
        {
            char name[24];
            VcColorBitFlagName(channel, bit, name, sizeof(name));
            void* flag = VcFindFlag(flags, name);
            if (!flag) continue; // serializers may omit false-valued flags
            if (!VcReadable(flag, 0x20)) return false;
            if (*((unsigned char*)flag + 0x1C)) decoded[channel] |= (unsigned char)(1u << bit);
        }
    memcpy(rgb, decoded, sizeof(decoded));
    return true;
}

static void VcRestoreSavedCountryColors(const VcCountries& countries)
{
    if (InterlockedCompareExchange(&g_ccRestoreSavedColors, 0, 0) == 0) return;
    unsigned restored = 0;
    for (size_t index = 1; index < countries.count && index < 8192; ++index)
    {
        void* country = countries.list[index];
        if (!VcReadable(country, 0x1C0)) continue;
        unsigned char rgb[3] = {};
        if (VcReadSavedCountryColor(country, rgb))
        {
            VcRememberCountryColor((int)index, country, rgb, 0, false);
            ++restored;
        }
    }
    if (restored)
        Log("CountryColor: restored %u saved country color override(s)", restored);
    InterlockedDecrement(&g_ccRestoreSavedColors);
}

// Senor directo de un pais: 0 = independiente, -1 = dato invalido.
static int VcParentOf(void* ctx, int index)
{
    const VcCountries* c = static_cast<const VcCountries*>(ctx);
    void* country = c->list[index];
    if (!VcReadable(country, 0xD00)) return -1;
    if (!VcRead<unsigned char>(country, 0xCF4) && !VcRead<unsigned char>(country, 0xCF5)) return 0;
    return VcRead<int>(country, 0xCFC);
}

static bool VcApplyCountryColorOverrides(const VcCountries& countries,
                                         uintptr_t begin, uintptr_t end)
{
    if (!VcHasActiveCountryColorOverrides()) return true;

    bool nativeColorChanged = false;
    for (unsigned n = 0; n < g_ccOverrideCount; ++n)
    {
        const int index = g_ccOverrideIds[n];
        if (index <= 0 || index >= 8192) continue;
        VcCountryColorOverride& overrideColor = g_ccOverrides[index];
        if (!overrideColor.active) continue;
        if ((size_t)index >= countries.count ||
            countries.list[index] != overrideColor.country ||
            !VcReadable(overrideColor.country, 0x15D4))
        {
            overrideColor.active = false;
            continue;
        }

        unsigned char color[0x1C] = {};
        VcCountryColor(overrideColor.country, color);
        const float* rgb = reinterpret_cast<const float*>(color + 8);
        if (!_finite(rgb[0]) || !_finite(rgb[1]) || !_finite(rgb[2])) return false;
        if (!overrideColor.baselineCaptured)
        {
            for (int channel = 0; channel < 3; ++channel)
                overrideColor.baseline[channel] = rgb[channel];
            overrideColor.baselineCaptured = true;
            continue;
        }
        if (fabsf(rgb[0] - overrideColor.baseline[0]) > 0.0001f ||
            fabsf(rgb[1] - overrideColor.baseline[1]) > 0.0001f ||
            fabsf(rgb[2] - overrideColor.baseline[2]) > 0.0001f)
        {
            VcSetFlag(VcCountryFlags(overrideColor.country), g_ccSavedColorMarker, false);
            overrideColor.active = false;
            nativeColorChanged = true;
        }
    }
    if (nativeColorChanged)
        Log("CountryColor: native country RGB changed; temporary override cleared");
    if (!VcHasActiveCountryColorOverrides()) return true;

    for (size_t i = 1; i < (end - begin) / 4; ++i)
    {
        void* entry = VcRead<void*>((void*)begin, i * 4);
        if (!VcReadable(entry, 16)) return false;
        void* province = VcRead<void*>(entry, 12);
        if (!VcReadable(province, 0x138)) return false;
        if (VcRead<int>(province, 0x12C) == 0) continue;

        float brightness = VcRead<float>((void*)(g_base + VC_RVA_BRIGHTNESS));
        if (VcRead<unsigned char>((void*)(g_base + VC_RVA_VIS_FLAG_A)) &&
            VcRead<unsigned char>((void*)(g_base + VC_RVA_VIS_FLAG_B)))
        {
            void* visibility = VcRead<void*>(province, 0x5C);
            if (!VcReadable(visibility, 0x364)) return false;
            if (VcRead<int>(visibility, 0x360) < 1)
                brightness = VcRead<float>((void*)(g_base + VC_RVA_BRIGHTNESS_DIM));
        }

        for (unsigned part = 0; part < 2; ++part)
        {
            const int index = VcRead<int>(province, part == 0 ? 0x12C : 0x134);
            if (index <= 0 || (size_t)index >= countries.count ||
                !g_ccOverrides[index].active) continue;
            VcCountryColorOverride& overrideColor = g_ccOverrides[index];
            void* country = countries.list[index];
            if (country != overrideColor.country || !VcReadable(country, 0x15D4))
            {
                overrideColor.active = false;
                continue;
            }

            unsigned char color[0x1C] = {};
            VcCountryColor(country, color);
            float* rgb = reinterpret_cast<float*>(color + 8);
            for (int channel = 0; channel < 3; ++channel)
                rgb[channel] = (float)overrideColor.rgb[channel] / 255.0f;
            static_cast<uint32_t*>(entry)[part] = VcShadedColor(color, brightness);
        }
    }
    return true;
}

static bool VcApplyPalette(void* palette)
{
    void* manager = VcRead<void*>((void*)(g_base + VC_RVA_COUNTRY_TABLE));
    if (!VcReadable(manager, 12) || !VcReadable(palette, 0x24)) return false;
    const uintptr_t first = VcRead<uintptr_t>(manager, 4), last = VcRead<uintptr_t>(manager, 8);
    if (last <= first || (last - first) % 4 || (last - first) / 4 > 8192 ||
        !VcReadable((void*)first, last - first)) return false;

    VcCountries countries;
    countries.list = (void**)first;
    countries.count = (last - first) / 4;
    VcRestoreSavedCountryColors(countries);

    const uintptr_t begin = VcRead<uintptr_t>(palette, 0x1C), end = VcRead<uintptr_t>(palette, 0x20);
    if (end < begin || (end - begin) % 4 || (end - begin) / 4 > 65536 ||
        !VcReadable((void*)begin, end - begin)) return false;

    unsigned changed = 0;
    if (g_vcEnabled)
    {
        static int lords[8192];                       // senor final de cada pais (0 = ninguno)
        memset(lords, 0, sizeof(lords));
        for (size_t i = 1; i < countries.count; ++i)
            lords[i] = VcOverlord((int)i, countries.count, VcParentOf, &countries);

        for (size_t i = 1; i < (end - begin) / 4; ++i)
        {
            void* entry = VcRead<void*>((void*)begin, i * 4);
            if (!VcReadable(entry, 16)) return false;
            void* province = VcRead<void*>(entry, 12);
            if (!VcReadable(province, 0x138)) return false;
            if (VcRead<int>(province, 0x12C) == 0) continue;

            float brightness = VcRead<float>((void*)(g_base + VC_RVA_BRIGHTNESS));
            if (VcRead<unsigned char>((void*)(g_base + VC_RVA_VIS_FLAG_A)) &&
                VcRead<unsigned char>((void*)(g_base + VC_RVA_VIS_FLAG_B)))
            {
                void* visibility = VcRead<void*>(province, 0x5C);
                if (!VcReadable(visibility, 0x364)) return false;
                if (VcRead<int>(visibility, 0x360) < 1)
                    brightness = VcRead<float>((void*)(g_base + VC_RVA_BRIGHTNESS_DIM));
            }

            for (unsigned part = 0; part < 2; ++part)
            {
                const int index = VcRead<int>(province, part == 0 ? 0x12C : 0x134);
                if (index <= 0 || (size_t)index >= countries.count || !lords[index]) continue;
                void* lord = countries.list[lords[index]];
                void* subject = countries.list[index];
                if (!VcReadable(lord, 0x15D4) || !VcReadable(subject, 0x15D4)) return false;

                unsigned char color[0x1C] = {}, lordColor[0x1C] = {};
                VcCountryColor(subject, color);
                VcCountryColor(lord, lordColor);
                float* rgb = reinterpret_cast<float*>(color + 8);
                const float* lordRgb = reinterpret_cast<const float*>(lordColor + 8);
                if (!VcTint(rgb[0], rgb[1], rgb[2], lordRgb[0], lordRgb[1], lordRgb[2], g_vcPercent)) return false;
                static_cast<uint32_t*>(entry)[part] = VcShadedColor(color, brightness);
                ++changed;
            }
        }
    }

    if (!VcApplyCountryColorOverrides(countries, begin, end)) return false;
    ++g_vcRebuilds;
    if (g_vcEnabled && (g_vcRebuilds <= 3 || g_vcRebuilds % 100 == 0))
        Log("VasalleColor: paleta #%lu: %u colores de dueno/controlador mezclados (%d%% color del senor)",
            (unsigned long)g_vcRebuilds, changed, g_vcPercent);
    return true;
}

static void __stdcall VcPaletteHook(void* palette)
{
    g_vcOrigPalette(palette);                    // la paleta nativa primero
    if (!g_vcEnabled && !VcHasActiveCountryColorOverrides() &&
        InterlockedCompareExchange(&g_ccRestoreSavedColors, 0, 0) == 0) return;
    bool ok = false;
    __try { ok = VcApplyPalette(palette); }
    __except (EXCEPTION_EXECUTE_HANDLER) { ok = false; }
    if (!ok)
    {
        g_vcEnabled = false;
        VcClearCountryColorOverrides();
        g_vcOrigPalette(palette);                // restaura los colores originales
        Log("VasalleColor/CountryColor: validacion de paleta fallida; colores restaurados y ajustes temporales desactivados");
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
    g_vcEnabled = percent > 0;
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
    if (g_vcEnabled)
        Log("VasalleColor: instalado (rva %06X), %d%% color del senor + %d%% color propio",
            (unsigned)VC_RVA_PALETTE, percent, 100 - percent);
    else
        Log("CountryColor: hook de paleta instalado; mezcla de vasallos desactivada");
    return true;
}

static bool VcInstallConsoleLookupHook(bool quietFailure = false)
{
    if (g_ccCommandInstalled) return true;
    if (!VcMatch(VC_RVA_CONSOLE_LOOKUP, VC_CONSOLE_LOOKUP_SIG, sizeof(VC_CONSOLE_LOOKUP_SIG)))
    {
        if (!quietFailure) Log("CoreConsole: console lookup signature mismatch; commands not registered");
        return false;
    }
    memset(g_ccCommandEntry, 0, sizeof(g_ccCommandEntry));
    memset(g_activateUnitCommandEntry, 0, sizeof(g_activateUnitCommandEntry));
    memset(g_deactivateUnitCommandEntry, 0, sizeof(g_deactivateUnitCommandEntry));
    g_ccCommandEntry[0] = g_activateUnitCommandEntry[0] = g_deactivateUnitCommandEntry[0] = 1;
    *(const char**)(g_ccCommandEntry + 4) = g_ccCommandName;
    *(void**)(g_ccCommandEntry + 0x1C) = (void*)&VcCountryColorCommand;
    *(const char**)(g_activateUnitCommandEntry + 4) = g_activateUnitCommandName;
    *(void**)(g_activateUnitCommandEntry + 0x1C) = (void*)&ActivateUnitConsoleCommand;
    *(const char**)(g_deactivateUnitCommandEntry + 4) = g_deactivateUnitCommandName;
    *(void**)(g_deactivateUnitCommandEntry + 0x1C) = (void*)&DeactivateUnitConsoleCommand;
    if (!StealToTrampoline(VC_RVA_CONSOLE_LOOKUP, sizeof(VC_CONSOLE_LOOKUP_SIG),
                           g_ccConsoleTrampoline, sizeof(g_ccConsoleTrampoline),
                           VC_CONSOLE_LOOKUP_SIG, (void*)&VcConsoleLookupHook,
                           &g_ccConsoleOriginal, "CoreConsole(console lookup)", quietFailure))
    {
        if (!quietFailure) Log("CoreConsole: could not install console lookup hook");
        return false;
    }
    g_ccCommandInstalled = true;
    return true;
}

bool InstallUnitConsoleCommands()
{
    if (!VcInstallConsoleLookupHook(true)) return false;
    g_unitConsoleCommandsEnabled = true;
    return true;
}

bool InstallCountryColorConsole()
{
    if (!g_vcInstalled && !InstallVassalColors(0))
    {
        Log("CountryColor: shared palette hook could not be installed");
        return false;
    }
    if (!VcInstallConsoleLookupHook()) return false;
    g_ccColorCommandEnabled = true;
    Log("CountryColor: command change_color TAG R G B registered in Core");
    return true;
}
void CountryColorOnSaveLoadStart()
{
    memset(g_ccOverrides, 0, sizeof(g_ccOverrides));
    memset(g_ccOverrideIds, 0, sizeof(g_ccOverrideIds));
    memset(g_ccOverrideSeen, 0, sizeof(g_ccOverrideSeen));
    g_ccOverrideCount = 0;
    InterlockedExchange(&g_ccRestoreSavedColors, 4);
}
