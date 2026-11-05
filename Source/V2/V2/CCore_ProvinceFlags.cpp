// Shared script-trigger factory extensions for Victoria II.
// FIX_PROVINCE_FLAGS adds has_province_flag and its effects.
// NEW_COUNTRY_SCOPE_CONDITIONS adds country_religion and unit_enabled.
//
// set_province_flag / clr_province_flag / has_province_flag are registered script keywords (tokens
// 0x439 / 0x43A / 0x43B). The effects exist: the effect factory FUN_00876B30 creates classes with vtable
// VA 0xE2ACF8 (set) / 0xE2AD30 (clr); their Execute (slot 11, thiscall(ctx, arg), ret 8) finds the province
// by ctx+0x10 (index into world+0xACC) and sets / clears the entry in the province flag container at
// province+0x328 (same class, vtable 0xDF817C, as the country container at country+0x1B0; the province
// constructor builds it; the province saver writes it as a "flags = { }" block, token 0x40D, and the
// province loader reads it back through the same token). The trigger does not exist: the trigger factory
// FUN_008B33E0 (thiscall(this, ctx, token), ret 8; this+8 = vector<CTrigger*>) picks the class by token with
// compare chains and jump tables. Tokens 0x343..0x437 use the table at VA 0x8B6220 (has_country_flag 0x40A ->
// index 24 -> case 0x8B3E34, class vtable 0xE307E8, 0x38 bytes, flag name std::string at +0x1C), but 0x43B is
// past the end of that range and falls into the default branch (the keyword is looked up as a user-defined
// object), so has_province_flag never produced a trigger. The tooltip strings agree: HAVE_COUNTRY_FLAG,
// HAVE_NOT_COUNTRY_FLAG, HAVE_GLOBAL_FLAG, ... exist, nothing for provinces.
//
// Fix: an entry hook on FUN_008B33E0. For token 0x43B the original is called with the has_country_flag token
// (0x40A); it creates and parses an object of the right layout and appends it to this+8..this+0xC. The vtable
// pointer of that object is then replaced by a copy of 0xE307E8 whose slot 6 (Evaluate(ctx), thiscall, ret 4)
// reads the context like has_province_modifier does (ctx+0x10 = province index) and tests the flag in
// province+0x328, and whose slot 10 (tooltip, thiscall with 4 stack arguments, ret 0x10) builds its own text.
// For country_religion, the same hook recognizes the parser key text and calls the native
// pop_majority_religion token 0x880 (CPopMajorityReligionTrigger, 0x20-byte object). Its parser resolves the
// religion name into the object at +0x1C. A cloned vtable replaces slot 6 to compare the country's state
// religion at +0xE68, and slot 10 to report the new keyword. The country field is different from the POP
// religion aggregate at +0x12E8 used by vanilla pop_majority_religion.
//
// Diagnostics (DEBUG_LOG=1): Execute of the two effect classes is wrapped and logs province, flag name and the
// state of the flag in the container after the call; the first trigger evaluations are logged as well.
#include <windows.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "CCore_Shared.h"

static const DWORD RVA_WORLD_PTR          = 0xE588E8;     // DAT_012588E8
static const int   OFF_WORLD_PROVINCES    = 0xACC;
static const DWORD RVA_TRIGGER_FACTORY    = 0x4B33E0;     // FUN_008B33E0
static const DWORD RVA_FLAG_TRIGGER_VT    = 0xA307E8;     // has_country_flag trigger class
static const DWORD RVA_FLAG_EVALUATE      = 0x4CCB90;     // its slot 6
static const DWORD RVA_FLAG_TOOLTIP       = 0x4CCBF0;     // its slot 10
static const DWORD RVA_COUNTRIES_VECTOR   = 0xE587E4;     // DAT_012587E4, country manager pointer
static const DWORD RVA_COUNTRY_RELIGION_VT = 0xA31F88;     // CPopMajorityReligionTrigger
static const DWORD RVA_MAJ_RELIGION_EVAL   = 0x4F1320;     // slot 6, FUN_008F1320
static const DWORD RVA_MAJ_RELIGION_TIP    = 0x4F13D0;     // slot 10, FUN_008F13D0
static const DWORD RVA_STD_STRING_ASSIGN   = 0x009350;
static const DWORD RVA_FMT_FROM_KEY        = 0x5A8EE0;
static const DWORD RVA_FMT_FINISH           = 0x5A9880;
static const DWORD RVA_FMT_FREE             = 0x5A9740;
static const DWORD RVA_LOC_SINGLETON        = 0x075500;
static const DWORD RVA_EFFECT_VT[2]       = { 0xA2ACF8, 0xA2AD30 };   // set_province_flag, clr_province_flag
static const DWORD RVA_EFFECT_EXECUTE[2]  = { 0x482A90, 0x482B00 };   // their slot 11
static const int   EFFECT_EXECUTE_SLOT    = 11;
static const int   TOKEN_HAS_PROVINCE     = 0x43B;
static const int   TOKEN_HAS_COUNTRY      = 0x40A;
static const int   TOKEN_POP_MAJ_RELIGION = 0x880;
static const int   OFF_PROVINCE_FLAGS     = 0x328;
static const int   OFF_CTX_PROVINCE       = 0x10;
static const int   OFF_CTX_COUNTRY        = 0x0C;
static const int   OFF_COUNTRY_RELIGION   = 0xE68;
static const int   OFF_PARSER_KEY_TEXT    = 0x24;
static const int   OFF_PARSER_VALUE_TEXT  = 0x22C;

static void LogDbgPf(const char* fmt, ...)
{
    if (!V2_DebugLogEnabled())
        return;
    char buf[512];
    va_list ap;
    va_start(ap, fmt);
    _vsnprintf_s(buf, sizeof(buf), _TRUNCATE, fmt, ap);
    va_end(ap);
    Log("%s", buf);
}

typedef void (__fastcall* tFactory)(void* self, void* edx, void* ctx, int token);
static tFactory g_realFactory = 0;
__declspec(align(16)) static unsigned char g_trampFactory[32];
static void* g_flagVtableBuf[17];      // [0] = RTTI pointer, [1..16] = trigger slots
static void** g_flagVtable = 0;
static void* g_religionVtableBuf[17];
static void** g_religionVtable = 0;
static void* g_unitEnabledVtableBuf[17];
static void** g_unitEnabledVtable = 0;
static bool g_enableProvinceFlags = false;
static bool g_enableCountryReligion = false;
static bool g_enableUnitEnabled = false;
static volatile LONG g_created = 0;
static volatile LONG g_religionCreated = 0;
static volatile LONG g_unitEnabledCreated = 0;
static volatile LONG g_evalLogs = 0;
static volatile LONG g_execLogs = 0;

static const unsigned COUNTRY_RELIGION_META_CAPACITY = 8192;
struct CountryReligionTriggerName
{
    void* trigger;
    char name[64];
    char localizedName[128];
    volatile LONG localizationState;
};
static CountryReligionTriggerName g_religionNames[COUNTRY_RELIGION_META_CAPACITY];
static char g_countryReligionPrefixes[2][128];
static char g_unitEnabledPrefixes[2][128];
static volatile LONG g_countryReligionPrefixState[2] = {};
static volatile LONG g_unitEnabledPrefixState[2] = {};
static bool CountryReligionLocalizeKey(const char* key, char* output, unsigned outputCapacity);

static unsigned TriggerNameHash(void* trigger)
{
    DWORD x = (DWORD)(DWORD_PTR)trigger >> 4;
    x ^= x >> 16;
    x *= 0x7FEB352D;
    x ^= x >> 15;
    return x & (COUNTRY_RELIGION_META_CAPACITY - 1);
}

static void RememberCountryReligionName(void* trigger, const char* name)
{
    if (!trigger || !name || !name[0])
        return;
    unsigned at = TriggerNameHash(trigger);
    for (unsigned i = 0; i < COUNTRY_RELIGION_META_CAPACITY; ++i)
    {
        CountryReligionTriggerName* entry = &g_religionNames[(at + i) & (COUNTRY_RELIGION_META_CAPACITY - 1)];
        if (!entry->trigger || entry->trigger == trigger)
        {
            entry->trigger = trigger;
            strncpy_s(entry->name, sizeof(entry->name), name, _TRUNCATE);
            entry->localizedName[0] = 0;
            InterlockedExchange(&entry->localizationState, 0);
            return;
        }
    }
    Log("CountryReligion: trigger-name table is full; tooltip name omitted");
}

static CountryReligionTriggerName* FindCountryReligionEntry(void* trigger)
{
    if (!trigger)
        return 0;
    unsigned at = TriggerNameHash(trigger);
    for (unsigned i = 0; i < COUNTRY_RELIGION_META_CAPACITY; ++i)
    {
        CountryReligionTriggerName* entry = &g_religionNames[(at + i) & (COUNTRY_RELIGION_META_CAPACITY - 1)];
        if (!entry->trigger)
            return 0;
        if (entry->trigger == trigger)
            return entry;
    }
    return 0;
}

static const char* CountryReligionLocalizedPrefix(bool negate)
{
    int index = negate ? 1 : 0;
    LONG state = InterlockedCompareExchange(&g_countryReligionPrefixState[index], 1, 0);
    if (state == 0)
    {
        const char* key = negate ? "CC_COUNTRY_RELIGION_IS_NOT" : "CC_COUNTRY_RELIGION_IS";
        if (!CountryReligionLocalizeKey(key, g_countryReligionPrefixes[index],
                sizeof(g_countryReligionPrefixes[index])))
            strncpy_s(g_countryReligionPrefixes[index], sizeof(g_countryReligionPrefixes[index]),
                negate ? "Country religion is NOT " : "Country religion is ", _TRUNCATE);
        InterlockedExchange(&g_countryReligionPrefixState[index], 2);
    }
    else if (state == 1)
    {
        return negate ? "Country religion is NOT " : "Country religion is ";
    }
    return g_countryReligionPrefixes[index];
}

static const char* UnitEnabledLocalizedPrefix(bool negate)
{
    int index = negate ? 1 : 0;
    LONG state = InterlockedCompareExchange(&g_unitEnabledPrefixState[index], 1, 0);
    if (state == 0)
    {
        const char* key = negate ? "UNIT_ENABLED_NOT" : "UNIT_ENABLED_IS";
        if (!CountryReligionLocalizeKey(key, g_unitEnabledPrefixes[index],
                sizeof(g_unitEnabledPrefixes[index])))
            strncpy_s(g_unitEnabledPrefixes[index], sizeof(g_unitEnabledPrefixes[index]),
                negate ? "Unit is NOT enabled: " : "Unit is enabled: ", _TRUNCATE);
        InterlockedExchange(&g_unitEnabledPrefixState[index], 2);
    }
    else if (state == 1)
    {
        return negate ? "Unit is NOT enabled: " : "Unit is enabled: ";
    }
    return g_unitEnabledPrefixes[index];
}

static const char* CountryReligionLocalizedName(CountryReligionTriggerName* entry)
{
    if (!entry)
        return "?";
    LONG state = InterlockedCompareExchange(&entry->localizationState, 1, 0);
    if (state == 0)
    {
        if (!CountryReligionLocalizeKey(entry->name, entry->localizedName, sizeof(entry->localizedName)))
            strncpy_s(entry->localizedName, sizeof(entry->localizedName), entry->name, _TRUNCATE);
        InterlockedExchange(&entry->localizationState, 2);
    }
    else if (state == 1)
    {
        return entry->name;
    }
    return entry->localizedName[0] ? entry->localizedName : entry->name;
}

static void* ProvinceByIndex(unsigned idx)
{
    char* world = *(char**)(g_base + RVA_WORLD_PTR);
    char** provinces = world ? *(char***)(world + OFF_WORLD_PROVINCES) : 0;
    if (!provinces || idx >= 20000)
        return 0;
    return provinces[idx];
}

static void* CountryByIndex(unsigned idx)
{
    char* manager = *(char**)(g_base + RVA_COUNTRIES_VECTOR);
    char** begin = manager ? *(char***)(manager + 4) : 0;
    char** end = manager ? *(char***)(manager + 8) : 0;
    if (!begin || !end || idx == 0 || begin > end || idx >= (unsigned)(end - begin))
        return 0;
    return begin[idx];
}

// container vtable slot 2 = Find(name) -> entry (flag state byte at +0x1C) or null
static void* FlagEntry(void* province, const char* name)
{
    void* container = (char*)province + OFF_PROVINCE_FLAGS;
    void** vt = *(void***)container;
    typedef void* (__fastcall* tFind)(void* container, void* edx, const char* name);
    return ((tFind)vt[2])(container, 0, name);
}

// std::string of the engine: 16-byte buffer / pointer, size at +0x10, capacity at +0x14
static const char* EngineString(void* str)
{
    return (*(unsigned*)((char*)str + 0x14) >= 0x10) ? *(const char**)str : (const char*)str;
}

// Evaluate(ctx): thiscall, ret 4, result in AL
static BOOL __fastcall EvaluateProvinceFlag(void* self, void* edx, void* ctx)
{
    (void)edx;
    BOOL result = FALSE;
    __try
    {
        unsigned pidx = *(unsigned*)((char*)ctx + OFF_CTX_PROVINCE);
        void* province = ProvinceByIndex(pidx);
        if (province)
        {
            const char* name = EngineString((char*)self + 0x1C);
            void* entry = FlagEntry(province, name);
            result = (entry && *(unsigned char*)((char*)entry + 0x1C)) ? TRUE : FALSE;
            if (InterlockedIncrement(&g_evalLogs) <= 12)
                LogDbgPf("ProvinceFlags: has_province_flag %s in province %u -> %d", name, pidx, (int)result);
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        result = FALSE;
    }
    return result;
}

// country_religion is deliberately different from vanilla pop_majority_religion:
// country +0xE68 is the selected state religion, while +0x12E8 is the POP-religion aggregate.
static BOOL __fastcall EvaluateCountryReligion(void* self, void* edx, void* ctx)
{
    (void)edx;
    BOOL result = FALSE;
    __try
    {
        if (ctx)
        {
            unsigned countryIndex = *(unsigned*)((char*)ctx + OFF_CTX_COUNTRY);
            void* country = CountryByIndex(countryIndex);
            void* requiredReligion = *(void**)((char*)self + 0x1C);
            if (country && requiredReligion)
                result = (*(void**)((char*)country + OFF_COUNTRY_RELIGION) == requiredReligion) ? TRUE : FALSE;
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        result = FALSE;
    }
    return result;
}

static void ConstructEngineString(void* dest, const char* text);
static BOOL __fastcall EvaluateUnitEnabled(void* self, void* edx, void* ctx)
{
    (void)edx;
    BOOL result = FALSE;
    __try
    {
        if (ctx)
        {
            unsigned countryIndex = *(unsigned*)((char*)ctx + OFF_CTX_COUNTRY);
            void* country = CountryByIndex(countryIndex);
            const char* unitName = EngineString((char*)self + 0x1C);
            bool enabled = false;
            if (country && GetCountryUnitEnabled(country, unitName, &enabled))
                result = enabled ? TRUE : FALSE;
            if (InterlockedIncrement(&g_evalLogs) <= 20)
                LogDbgPf("UnitEnabled: unit_enabled %s in country %u -> %d",
                    unitName, countryIndex, (int)result);
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        result = FALSE;
    }
    return result;
}

static void* __fastcall UnitEnabledTooltip(void* self, void* edx, void* dest,
    void* arg1, int negate, int arg3)
{
    (void)edx; (void)arg1; (void)arg3;
    __try
    {
        char localizedName[128] = { 0 };
        char text[384];
        const char* unitName = EngineString((char*)self + 0x1C);
        bool isNegated = (negate & 0xFF) != 0;
        const char* prefix = UnitEnabledLocalizedPrefix(isNegated);
        if (!CountryReligionLocalizeKey(unitName, localizedName, sizeof(localizedName)))
            strncpy_s(localizedName, sizeof(localizedName), unitName, _TRUNCATE);
        _snprintf_s(text, sizeof(text), _TRUNCATE, "%s%cY%s%cW%c",
            prefix, 0xA7, localizedName, 0xA7, 10);
        if (dest)
            ConstructEngineString(dest, text);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        if (dest)
            ConstructEngineString(dest, "");
    }
    return dest;
}

// Tooltip (slot 10): thiscall, four stack arguments (the original ends with ret 0x10). The first stack
// argument is the OUTPUT std::string: the original constructs the whole text into it (flag name taken from
// this+0x1C, key HAVE_COUNTRY_FLAG / HAVE_NOT_COUNTRY_FLAG chosen by the third argument) and returns it; the
// caller then appends and destroys it, so it must hold a valid std::string (a stub that left it uninitialised
// crashed the game in the string append, 6.12). Builds "has_province_flag '<name>'" (language neutral).
static void ConstructEngineString(void* dest, const char* text)
{
    unsigned char* p = (unsigned char*)dest;
    unsigned n = (unsigned)strlen(text);
    if (n <= 15)
    {
        memcpy(p, text, n + 1);
        *(unsigned*)(p + 0x10) = n;
        *(unsigned*)(p + 0x14) = 15;
        return;
    }
    typedef void* (__cdecl* tOpNew)(unsigned);
    char* buf = (char*)((tOpNew)(g_base + 0x6AE9AF))(n + 1);   // FUN_00AAE9AF, freed by the engine with FUN_00AAE91B
    if (!buf)
    {
        p[0] = 0;
        *(unsigned*)(p + 0x10) = 0;
        *(unsigned*)(p + 0x14) = 15;
        return;
    }
    memcpy(buf, text, n + 1);
    *(char**)p = buf;
    *(unsigned*)(p + 0x10) = n;
    *(unsigned*)(p + 0x14) = n;
}

struct CountryReligionGameString
{
    union { char buffer[16]; char* pointer; } data;
    unsigned size;
    unsigned capacity;
};

typedef void* (__thiscall* tCountryReligionStringAssign)(void*, const char*, unsigned);
static volatile LONG g_countryReligionLocalizationError = 0;

static void CountryReligionGameStringSet(CountryReligionGameString* value, const char* text)
{
    memset(value, 0, sizeof(*value));
    value->capacity = 15;
    ((tCountryReligionStringAssign)(g_base + RVA_STD_STRING_ASSIGN))(
        value, text, (unsigned)strlen(text));
}

// Uses the engine's localization formatter. Religion script IDs (e.g. "sunni")
// are also the localization keys that provide the visible value (e.g. "Sunni").
static bool CountryReligionLocalizeKey(const char* key, char* output, unsigned outputCapacity)
{
    CountryReligionGameString keyString, gameOutput;
    unsigned char formatter[0x60];
    bool formatterStarted = false;
    memset(&keyString, 0, sizeof(keyString));
    memset(&gameOutput, 0, sizeof(gameOutput));
    memset(formatter, 0, sizeof(formatter));
    gameOutput.capacity = 15;
    if (output && outputCapacity)
        output[0] = 0;
    if (!key || !output || outputCapacity < 2)
        return false;

    __try
    {
        CountryReligionGameStringSet(&keyString, key);
        CountryReligionGameString* keyPtr = &keyString;
        void* formatterPtr = formatter;
        DWORD fromKey = g_base + RVA_FMT_FROM_KEY;
        __asm
        {
            push keyPtr
            push formatterPtr
            mov ecx, keyPtr
            mov edx, formatterPtr
            call fromKey
        }
        formatterStarted = true;

        void* locale = ((void*(__cdecl*)(void))(g_base + RVA_LOC_SINGLETON))();
        if (!locale)
        {
            DWORD freeFmt = g_base + RVA_FMT_FREE;
            __asm
            {
                push formatterPtr
                call freeFmt
            }
            formatterStarted = false;
            return false;
        }

        void* outputPtr = &gameOutput;
        DWORD finish = g_base + RVA_FMT_FINISH;
        __asm
        {
            mov eax, locale
            movq xmm0, qword ptr [eax + 0x6c]
            sub esp, 0x10
            mov ecx, esp
            movq qword ptr [ecx], xmm0
            movq xmm0, qword ptr [eax + 0x74]
            movq qword ptr [ecx + 8], xmm0
            mov esi, outputPtr
            mov ecx, formatterPtr
            call finish
        }

        const char* localized = gameOutput.capacity < 16
            ? gameOutput.data.buffer : gameOutput.data.pointer;
        bool copied = localized && gameOutput.size > 0 && gameOutput.size < outputCapacity;
        if (copied)
        {
            memcpy(output, localized, gameOutput.size);
            output[gameOutput.size] = 0;
        }
        DWORD freeFmt = g_base + RVA_FMT_FREE;
        __asm
        {
            push formatterPtr
            call freeFmt
        }
        formatterStarted = false;
        return copied;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        if (InterlockedCompareExchange(&g_countryReligionLocalizationError, 1, 0) == 0)
            Log("CountryReligion: localization failed for key '%s' (code=%08X)",
                key, (unsigned)GetExceptionCode());
        if (formatterStarted)
        {
            DWORD freeFmt = g_base + RVA_FMT_FREE;
            void* formatterPtr = formatter;
            __asm
            {
                push formatterPtr
                call freeFmt
            }
        }
        return false;
    }
}

static void* __fastcall ProvinceFlagTooltip(void* self, void* edx, void* dest, void* arg1, int negate, int arg3)
{
    (void)edx; (void)arg1; (void)arg3;
    __try
    {
        char text[160];
        const char* name = EngineString((char*)self + 0x1C);
        _snprintf_s(text, sizeof(text), _TRUNCATE, "%shas_province_flag '\xA7" "Y%s\xA7" "W'\n",
            (negate & 0xFF) ? "NOT " : "", name);
        if (dest)
            ConstructEngineString(dest, text);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        if (dest)
            ConstructEngineString(dest, "");
    }
    return dest;
}

static void* __fastcall CountryReligionTooltip(void* self, void* edx, void* dest, void* arg1, int negate, int arg3)
{
    (void)edx; (void)arg1; (void)arg3;
    __try
    {
        char religion[128] = { 0 };
        char text[640];
        CountryReligionTriggerName* entry = FindCountryReligionEntry(self);
        const char* prefix = CountryReligionLocalizedPrefix((negate & 0xFF) != 0);
        strncpy_s(religion, sizeof(religion), CountryReligionLocalizedName(entry), _TRUNCATE);
        _snprintf_s(text, sizeof(text), _TRUNCATE, "%s\xA7" "Y%s\xA7" "W\n", prefix, religion);
        if (dest)
            ConstructEngineString(dest, text);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        if (dest)
            ConstructEngineString(dest, "");
    }
    return dest;
}

static bool ReplaceLastTrigger(void* self, DWORD expectedVtable, void** replacement,
    volatile LONG* created, const char* label)
{
    __try
    {
        void** begin = *(void***)((char*)self + 8);
        void** end = *(void***)((char*)self + 0xC);
        if (!begin || !end || end <= begin)
        {
            Log("%s: trigger list is empty after parsing (begin=%p end=%p)", label, begin, end);
            return false;
        }
        void* obj = end[-1];
        if (!obj || *(DWORD*)obj != g_base + expectedVtable)
        {
            Log("%s: parsed trigger has unexpected class (%p), left unchanged", label, obj);
            return false;
        }
        *(void**)obj = (void*)replacement;
        if (InterlockedIncrement(created) <= 5)
            LogDbgPf("%s: trigger created %p (total %d)", label, obj, (int)*created);
        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        Log("%s: exception while replacing the trigger class", label);
        return false;
    }
}

static volatile LONG g_seenTarget = 0;

static void __fastcall HookTriggerFactory(void* self, void* edx, void* ctx, int token)
{
    if (g_enableProvinceFlags && token == TOKEN_HAS_PROVINCE)
    {
        if (InterlockedIncrement(&g_seenTarget) <= 5)
            LogDbgPf("ProvinceFlags: trigger factory called for has_province_flag (parent %p, children before: %d)", self,
                (int)((*(char**)((char*)self + 0xC) - *(char**)((char*)self + 8)) / 4));
        g_realFactory(self, edx, ctx, TOKEN_HAS_COUNTRY);
        ReplaceLastTrigger(self, RVA_FLAG_TRIGGER_VT, g_flagVtable, &g_created, "ProvinceFlags");
        return;
    }

    const char* key = ctx ? (const char*)((char*)ctx + OFF_PARSER_KEY_TEXT) : 0;
    if (g_enableUnitEnabled && key && _stricmp(key, "unit_enabled") == 0)
    {
        g_realFactory(self, edx, ctx, TOKEN_HAS_COUNTRY);
        ReplaceLastTrigger(self, RVA_FLAG_TRIGGER_VT, g_unitEnabledVtable,
            &g_unitEnabledCreated, "UnitEnabled");
        return;
    }

    if (g_enableCountryReligion && key && _stricmp(key, "country_religion") == 0)
    {
        char religionName[64] = { 0 };
        const char* value = (const char*)ctx + OFF_PARSER_VALUE_TEXT;
        if (value)
            strncpy_s(religionName, sizeof(religionName), value, _TRUNCATE);

        g_realFactory(self, edx, ctx, TOKEN_POP_MAJ_RELIGION);
        if (ReplaceLastTrigger(self, RVA_COUNTRY_RELIGION_VT, g_religionVtable,
                &g_religionCreated, "CountryReligion"))
        {
            void** end = *(void***)((char*)self + 0xC);
            if (end && end > *(void***)((char*)self + 8))
                RememberCountryReligionName(end[-1], religionName);
        }
        return;
    }

    g_realFactory(self, edx, ctx, token);
}

// Diagnostic wrappers of the set / clr effects (Execute = slot 11, thiscall(ctx, arg), ret 8)
typedef void (__fastcall* tExecute)(void* self, void* edx, void* ctx, int arg);
static tExecute g_realExecute[2];

static void LogExecute(int which, void* self, void* ctx)
{
    if (InterlockedIncrement(&g_execLogs) > 30)
        return;
    __try
    {
        unsigned pidx = *(unsigned*)((char*)ctx + OFF_CTX_PROVINCE);
        void* province = ProvinceByIndex(pidx);
        const char* name = EngineString((char*)self + 0x20);
        void* entry = province ? FlagEntry(province, name) : 0;
        LogDbgPf("ProvinceFlags: %s_province_flag province %u '%s' -> %s in container, value %d",
            which == 0 ? "set" : "clr", pidx, name, entry ? "present" : "absent",
            entry ? (int)*(unsigned char*)((char*)entry + 0x1C) : -1);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        LogDbgPf("ProvinceFlags: exception in the effect %d diagnostics", which);
    }
}

static void __fastcall ExecuteSet(void* self, void* edx, void* ctx, int arg)
{
    g_realExecute[0](self, edx, ctx, arg);
    LogExecute(0, self, ctx);
}

static void __fastcall ExecuteClr(void* self, void* edx, void* ctx, int arg)
{
    g_realExecute[1](self, edx, ctx, arg);
    LogExecute(1, self, ctx);
}

bool InstallProvinceTriggerExtensions(bool enableProvinceFlags, bool enableCountryReligion, bool enableUnitEnabled)
{
    static const unsigned char SIG[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };
    if (!enableProvinceFlags && !enableCountryReligion && !enableUnitEnabled)
        return true;

    g_enableProvinceFlags = enableProvinceFlags;
    g_enableCountryReligion = enableCountryReligion;
    g_enableUnitEnabled = enableUnitEnabled;
    if (enableUnitEnabled && !InitializeUnitLookup())
    {
        g_enableUnitEnabled = false;
        Log("UnitEnabled: native unit lookup initialization failed; condition disabled");
    }
    bool classesReady = true;

    if (enableProvinceFlags)
    {
        void** srcVt = (void**)(g_base + RVA_FLAG_TRIGGER_VT);
        if ((DWORD)(DWORD_PTR)srcVt[6] != g_base + RVA_FLAG_EVALUATE ||
            (DWORD)(DWORD_PTR)srcVt[10] != g_base + RVA_FLAG_TOOLTIP)
        {
            Log("ProvinceFlags: has_country_flag trigger vtable does not match (slot6=%p slot10=%p)", srcVt[6], srcVt[10]);
            classesReady = false;
        }
        else
        {
            // Clone with RTTI kept at [-1], so native destruction and RTTI still see the source class.
            g_flagVtableBuf[0] = srcVt[-1];
            for (int i = 0; i < 16; ++i)
                g_flagVtableBuf[1 + i] = srcVt[i];
            g_flagVtable = &g_flagVtableBuf[1];
            g_flagVtable[6] = (void*)&EvaluateProvinceFlag;
            g_flagVtable[10] = (void*)&ProvinceFlagTooltip;
        }
    }

    if (enableUnitEnabled)
    {
        void** srcVt = (void**)(g_base + RVA_FLAG_TRIGGER_VT);
        if ((DWORD)(DWORD_PTR)srcVt[6] != g_base + RVA_FLAG_EVALUATE ||
            (DWORD)(DWORD_PTR)srcVt[10] != g_base + RVA_FLAG_TOOLTIP)
        {
            Log("UnitEnabled: has_country_flag trigger vtable does not match (%p/%p)",
                srcVt[6], srcVt[10]);
            classesReady = false;
        }
        else
        {
            g_unitEnabledVtableBuf[0] = srcVt[-1];
            for (int i = 0; i < 16; ++i)
                g_unitEnabledVtableBuf[1 + i] = srcVt[i];
            g_unitEnabledVtable = &g_unitEnabledVtableBuf[1];
            g_unitEnabledVtable[6] = (void*)&EvaluateUnitEnabled;
            g_unitEnabledVtable[10] = (void*)&UnitEnabledTooltip;
        }
    }

    if (enableCountryReligion)
    {
        void** srcVt = (void**)(g_base + RVA_COUNTRY_RELIGION_VT);
        if ((DWORD)(DWORD_PTR)srcVt[6] != g_base + RVA_MAJ_RELIGION_EVAL ||
            (DWORD)(DWORD_PTR)srcVt[10] != g_base + RVA_MAJ_RELIGION_TIP)
        {
            Log("CountryReligion: CPopMajorityReligionTrigger vtable mismatch (slot6=%p slot10=%p)", srcVt[6], srcVt[10]);
            classesReady = false;
        }
        else
        {
            // Reuse the vanilla parser/layout, but override only evaluation and tooltip.
            g_religionVtableBuf[0] = srcVt[-1];
            for (int i = 0; i < 16; ++i)
                g_religionVtableBuf[1 + i] = srcVt[i];
            g_religionVtable = &g_religionVtableBuf[1];
            g_religionVtable[6] = (void*)&EvaluateCountryReligion;
            g_religionVtable[10] = (void*)&CountryReligionTooltip;
        }
    }

    bool hooked = classesReady && StealToTrampoline(RVA_TRIGGER_FACTORY, sizeof(SIG), g_trampFactory,
        sizeof(g_trampFactory), SIG, (void*)&HookTriggerFactory, (void**)&g_realFactory,
        "ScriptTriggerExtensions(trigger factory)");
    if (!classesReady)
        Log("ScriptTriggerExtensions: class validation failed; trigger factory not hooked");

    int wrapped = 0;
    if (enableProvinceFlags)
    {
        void* thunks[2] = { (void*)&ExecuteSet, (void*)&ExecuteClr };
        for (int i = 0; i < 2; ++i)
        {
            void** vt = (void**)(g_base + RVA_EFFECT_VT[i]);
            if ((DWORD)(DWORD_PTR)vt[EFFECT_EXECUTE_SLOT] != g_base + RVA_EFFECT_EXECUTE[i])
            {
                Log("ProvinceFlags: slot %d of effect %d does not match (%p) - diagnostics not installed",
                    EFFECT_EXECUTE_SLOT, i, vt[EFFECT_EXECUTE_SLOT]);
                continue;
            }
            if (PatchSlot(RVA_EFFECT_VT[i], EFFECT_EXECUTE_SLOT, thunks[i], (void**)&g_realExecute[i]))
                ++wrapped;
        }
    }

    Log("ScriptTriggerExtensions: factory %s (has_province_flag=%d, country_religion=%d, unit_enabled=%d), "
        "province effect Execute wrappers %d of 2",
        hooked ? "hooked" : "NOT hooked", (int)enableProvinceFlags, (int)enableCountryReligion, (int)g_enableUnitEnabled, wrapped);
    return hooked;
}
