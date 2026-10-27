#include <windows.h>
#include <string.h>
#include <stdio.h>
#include <intrin.h>
#include "CCore_Shared.h"

// Province-scoped POP culture modifier aliases. Script values are stored
// on timed province modifiers and applied in the per-POP simulation update.
static const DWORD RVA_MODIFIER_PROPERTY_PARSER = 0x4BEF0;
static const DWORD RVA_MODIFIER_VALUES_COPY = 0x1DAAD0; // FUN_005daad0, modifier value-vector copy
static const DWORD RVA_MODIFIER_DEFS_BEGIN = 0xE5A5B4;
static const DWORD RVA_MODIFIER_DEFS_END = 0xE5A5B8;
static const DWORD RVA_POP_MONTHLY_UPDATE = 0x558DF0; // FUN_00958DF0, EAX = CPop*
static const DWORD RVA_POP_MILITANCY_DELTA = 0x561170; // FUN_00961170, result via ESI longlong*
static const DWORD RVA_POP_CONSCIOUSNESS_DELTA = 0x55FCB0; // FUN_0095FCB0, result via stack longlong*
static const DWORD RVA_POP_MILITANCY_TOOLTIP = 0x561790; // FUN_00961790, CPop militancy tooltip
static const DWORD RVA_POP_CONSCIOUSNESS_TOOLTIP = 0x560110; // FUN_00960110, CPop consciousness tooltip
static const DWORD RVA_MODIFIER_SUMMARY_FORMATTER = 0x4C410; // FUN_0044C410, CModifier summary rows
static const DWORD RVA_MODIFIER_TOOLTIP_FORMATTER = 0x4C7B0; // FUN_0044C7B0, CModifier property source rows
static const DWORD RVA_MILITANCY_TOOLTIP_DELTA_RETURN = 0x5618EB; // FUN_00961790 -> FUN_00961170
static const DWORD RVA_CONSCIOUSNESS_TOOLTIP_DELTA_RETURN = 0x56029E; // FUN_00960110 -> FUN_0095FCB0
static const DWORD RVA_COUNTRY_MANAGER = 0xE587E4; // g_countryManager
static const int OFF_PARSER_KEY_TEXT = 0x24;
static const int OFF_MODIFIER_KEY_ID = 0x20;
static const int OFF_MODIFIER_VALUES = 0x18;
static const int OFF_PROVINCE_OWNER = 0x12C;
static const int OFF_PROVINCE_TIMED_HEAD = 0xC8;
static const int OFF_PROVINCE_TIMED_COUNT = 0xD0;
static const int OFF_TIMED_DATA = 0x08;
static const int OFF_TIMED_DATE = 0x0C;
static const int OFF_TIMED_NODE_NEXT = 0x08;
static const int OFF_POP_PROVINCE = 0x64;
static const int OFF_POP_CULTURE = 0x6C;
static const int OFF_POP_MILITANCY = 0x120;
static const int OFF_POP_CONSCIOUSNESS = 0x118;
static const int OFF_COUNTRY_ACCEPTED_CULTURES = 0xE54;
static const int OFF_COUNTRY_PRIMARY_CULTURE = 0xE64;
static const int OFF_PROVINCE_STATE = 0x188;
static const int OFF_STATE_IS_COLONIAL = 0x84;
static const int OFF_COUNTRY_TIMED_HEAD = 0x4D8;
static const int OFF_COUNTRY_TIMED_COUNT = 0x4E0;
static const int Q15_ONE = 0x8000;
static const int Q15_MAX = 0x50000;

typedef void(__thiscall* tModifierPropertyParser)(void*, void*, int);
typedef int* (__stdcall* tModifierValuesCopy)(int*, int*);
static tModifierPropertyParser g_realParser = 0;
static tModifierValuesCopy g_realModifierValuesCopy = 0;
static void* g_realPopUpdate = 0;
static void* g_realMilitancyDelta = 0;
static void* g_realConsciousnessDelta = 0;
// FUN_00961790 is called with two stack arguments and ends in `ret 8`.
// Keep both the trampoline and detour stdcall so the original stack layout is
// preserved (the previous fastcall detour consumed one argument from ECX).
typedef char* (__stdcall* tPopMilitancyTooltip)(void*, char*);
static tPopMilitancyTooltip g_realPopMilitancyTooltip = 0;
static tPopMilitancyTooltip g_realPopConsciousnessTooltip = 0;
typedef char* (__thiscall* tModifierSummaryFormatter)(void*, char*);
static tModifierSummaryFormatter g_realModifierSummaryFormatter = 0;
typedef char* (__thiscall* tModifierTooltipFormatter)(void*, char*, int, int, const void*);
static tModifierTooltipFormatter g_realModifierTooltipFormatter = 0;
static int g_nativeMilKey = -1;
static int g_nativeConKey = -1;
__declspec(align(16)) static unsigned char g_parserTramp[32];
__declspec(align(16)) static unsigned char g_modifierValuesCopyTramp[32];
__declspec(align(16)) static unsigned char g_popUpdateTramp[32];
__declspec(align(16)) static unsigned char g_militancyDeltaTramp[32];
__declspec(align(16)) static unsigned char g_consciousnessDeltaTramp[32];
__declspec(align(16)) static unsigned char g_popMilitancyTooltipTramp[32];
__declspec(align(16)) static unsigned char g_popConsciousnessTooltipTramp[32];
__declspec(align(16)) static unsigned char g_modifierSummaryFormatterTramp[32];
__declspec(align(16)) static unsigned char g_modifierTooltipFormatterTramp[32];

struct CapturedValues { void* definition; void* valueArray; int milIndex; int conIndex; int countryMilIndex; int countryConIndex; int mil; int con; int primaryMil; int primaryCon; int acceptedMil; int acceptedCon; int countryPrimaryMil; int countryPrimaryCon; int countryAcceptedMil; int countryAcceptedCon; int countryColonialMil; int countryColonialCon; };
static CapturedValues g_values[8192];
static volatile LONG g_valueCount = 0;
static bool g_countryPrimaryEnabled = true;
static bool g_countryAcceptedEnabled = true;
static bool g_countryColonialEnabled = true;
static volatile LONG g_loggedPopEffectMask = 0;
static void LogAppliedPopEffectOnce(unsigned effectId, const char* effectKey,
    const char* source, int rawValue)
{
    if (effectId >= 12 || !effectKey || !source || !rawValue) return;
    LONG bit = (LONG)(1u << effectId);
    LONG previous = InterlockedOr(&g_loggedPopEffectMask, bit);
    if (!(previous & bit))
        Log("NewPopEffect apply: %s source=%s value=%+.3f", effectKey, source,
            rawValue / 1000.0);
}
__declspec(thread) static void* g_currentPop = 0;
__declspec(thread) static int g_tooltipKind = 0; // 1=militancy, 2=consciousness
__declspec(thread) static int g_modifierTooltipFilterDepth = 0;
__declspec(thread) static bool g_currentPopPrimary = false;
__declspec(thread) static bool g_popUpdateActive = false;
__declspec(thread) static bool g_currentPopNonAccepted = false;
__declspec(thread) static bool g_currentPopAccepted = false;
__declspec(thread) static bool g_currentPopColonial = false;
__declspec(thread) static long long* g_milDeltaOut = 0;
__declspec(thread) static long long* g_conDeltaOut = 0;
__declspec(thread) static DWORD g_milReturnStack[16];
__declspec(thread) static LONG g_milReturnDepth = 0;
__declspec(thread) static DWORD g_conReturnStack[16];
__declspec(thread) static LONG g_conReturnDepth = 0;
__declspec(thread) static DWORD g_popReturnStack[32];
__declspec(thread) static LONG g_popReturnDepth = 0;

static void __cdecl PushPopCallerReturn(DWORD address) { LONG depth = g_popReturnDepth; if (depth >= 0 && depth < 32) { g_popReturnStack[depth] = address; g_popReturnDepth = depth + 1; } }
static DWORD __cdecl PopPopCallerReturn() { LONG depth = g_popReturnDepth; if (depth <= 0 || depth > 32) return 0; g_popReturnDepth = depth - 1; return g_popReturnStack[depth - 1]; }

static bool ContainsAsciiToken(const char* data, unsigned length, const char* token)
{
    if (!data || !token || length < 6 || length > 512) return false;
    unsigned tokenLength = (unsigned)strlen(token);
    if (!tokenLength || tokenLength > length) return false;
    __try
    {
        for (unsigned i = 0; i + tokenLength <= length; ++i)
        {
            unsigned j = 0;
            for (; j < tokenLength; ++j)
            {
                unsigned char a = (unsigned char)data[i + j];
                unsigned char b = (unsigned char)token[j];
                if (a >= 'A' && a <= 'Z') a = (unsigned char)(a + ('a' - 'A'));
                if (b >= 'A' && b <= 'Z') b = (unsigned char)(b + ('a' - 'A'));
                if (a != b) break;
            }
            if (j == tokenLength) return true;
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
    return false;
}

static const char* ModifierDefinitionName(void* definition)
{
    char* value = (char*)definition + 4;
    return *(unsigned*)(value + 0x14) >= 0x10 ? *(const char**)value : value;
}

static int FindDescriptor(const char* scriptName, const char* localizationName, int* keyId)
{
    DWORD* begin = *(DWORD**)(g_base + RVA_MODIFIER_DEFS_BEGIN);
    DWORD* end = *(DWORD**)(g_base + RVA_MODIFIER_DEFS_END);
    if (!begin || !end || end < begin || end - begin > 2048) return -1;
    for (DWORD* it = begin; it < end; ++it)
    {
        void* d = (void*)*it;
        if (!d) continue;
        __try
        {
            const char* name = ModifierDefinitionName(d);
            if (name && (!strcmp(name, scriptName) || !strcmp(name, localizationName)))
            {
                *keyId = *(int*)((char*)d + OFF_MODIFIER_KEY_ID);
                return (int)(it - begin);
            }
        }
        __except (EXCEPTION_EXECUTE_HANDLER) {}
    }
    return -1;
}

static int Capture(void* self, int storageIndex, bool militancy, int aliasRaw,
    bool primaryAlias, bool acceptedAlias, bool countryAlias = false,
    bool countryAcceptedAlias = false, bool countryColonialAlias = false)
{
    int* values = *(int**)((char*)self + OFF_MODIFIER_VALUES);
    if (!values) return 0;
    LONG n = g_valueCount;
    for (LONG i = 0; i < n; ++i)
    {
        if (g_values[i].definition != self && g_values[i].valueArray != values) continue;
        if (militancy)
        {
            if (countryAlias) g_values[i].countryMilIndex = storageIndex;
            else g_values[i].milIndex = storageIndex;
            if (primaryAlias) g_values[i].primaryMil += aliasRaw;
            else if (acceptedAlias) g_values[i].acceptedMil += aliasRaw;
            else if (countryAcceptedAlias) g_values[i].countryAcceptedMil += aliasRaw;
            else if (countryColonialAlias) g_values[i].countryColonialMil += aliasRaw;
            else if (countryAlias) g_values[i].countryPrimaryMil += aliasRaw;
            else g_values[i].mil += aliasRaw;
        }
        else
        {
            if (countryAlias) g_values[i].countryConIndex = storageIndex;
            else g_values[i].conIndex = storageIndex;
            if (primaryAlias) g_values[i].primaryCon += aliasRaw;
            else if (acceptedAlias) g_values[i].acceptedCon += aliasRaw;
            else if (countryAcceptedAlias) g_values[i].countryAcceptedCon += aliasRaw;
            else if (countryColonialAlias) g_values[i].countryColonialCon += aliasRaw;
            else if (countryAlias) g_values[i].countryPrimaryCon += aliasRaw;
            else g_values[i].con += aliasRaw;
        }

        return aliasRaw;
    }
    if (n >= (LONG)(sizeof(g_values) / sizeof(g_values[0]))) return 0;
    g_values[n] = {};
    g_values[n].definition = self;
    g_values[n].valueArray = values;
    g_values[n].milIndex = -1;
    g_values[n].conIndex = -1;
    g_values[n].countryMilIndex = -1;
    g_values[n].countryConIndex = -1;
    if (militancy)
    {
        if (countryAlias) g_values[n].countryMilIndex = storageIndex;
        else g_values[n].milIndex = storageIndex;
        if (primaryAlias) g_values[n].primaryMil = aliasRaw;
        else if (acceptedAlias) g_values[n].acceptedMil = aliasRaw;
        else if (countryAcceptedAlias) g_values[n].countryAcceptedMil = aliasRaw;
        else if (countryColonialAlias) g_values[n].countryColonialMil = aliasRaw;
        else if (countryAlias) g_values[n].countryPrimaryMil = aliasRaw;
        else g_values[n].mil = aliasRaw;
    }
    else
    {
        if (countryAlias) g_values[n].countryConIndex = storageIndex;
        else g_values[n].conIndex = storageIndex;
        if (primaryAlias) g_values[n].primaryCon = aliasRaw;
        else if (acceptedAlias) g_values[n].acceptedCon = aliasRaw;
        else if (countryAcceptedAlias) g_values[n].countryAcceptedCon = aliasRaw;
        else if (countryColonialAlias) g_values[n].countryColonialCon = aliasRaw;
        else if (countryAlias) g_values[n].countryPrimaryCon = aliasRaw;
        else g_values[n].con = aliasRaw;
    }
    InterlockedExchange(&g_valueCount, n + 1);

    return aliasRaw;
}
static const CapturedValues* FindValues(void* modifierData)
{
    if (!modifierData) return 0;
    void* modifierValues = 0;
    __try { modifierValues = *(void**)((char*)modifierData + OFF_MODIFIER_VALUES); }
    __except (EXCEPTION_EXECUTE_HANDLER) { return 0; }
    if (!modifierValues) return 0;
    LONG n = g_valueCount;
    for (LONG i = 0; i < n; ++i)
        if ((g_values[i].definition && g_values[i].definition == modifierData) ||
            (g_values[i].valueArray && g_values[i].valueArray == modifierValues))
            return &g_values[i];
    return 0;
}

// Parser aliases are attached to a CModifier instance, but the game copies
// its vector of 8-byte value/definition pairs when building runtime sources.
// Carry the alias marker with that vector so source-row formatting can still
// identify it after the copy.
static void PropagateModifierAlias(void* destinationVector, const void* sourceVector)
{
    if (!destinationVector || !sourceVector || destinationVector == sourceVector) return;
    __try
    {
        void* sourceValues = *(void**)sourceVector;
        void* destinationValues = *(void**)destinationVector;
        if (!destinationValues) return;

        CapturedValues copied = {};
        bool found = false;
        LONG n = g_valueCount;
        if (sourceValues)
        {
            for (LONG i = 0; i < n; ++i)
            {
                if (g_values[i].valueArray == sourceValues &&
                    (g_values[i].mil || g_values[i].con || g_values[i].primaryMil || g_values[i].primaryCon || g_values[i].acceptedMil || g_values[i].acceptedCon || g_values[i].countryPrimaryMil || g_values[i].countryPrimaryCon || g_values[i].countryAcceptedMil || g_values[i].countryAcceptedCon || g_values[i].countryColonialMil || g_values[i].countryColonialCon))
                {
                    copied = g_values[i];
                    found = true;
                    break;
                }
            }
        }

        LONG slot = -1;
        for (LONG i = 0; i < n; ++i)
        {
            if (g_values[i].valueArray == destinationValues)
            {
                slot = i;
                break;
            }
            if (slot < 0 && !g_values[i].definition && !g_values[i].valueArray)
                slot = i;
        }

        if (!found)
        {
            if (slot >= 0 && g_values[slot].valueArray == destinationValues)
                g_values[slot] = {};
            return;
        }

        if (slot < 0)
        {
            if (n >= (LONG)(sizeof(g_values) / sizeof(g_values[0]))) return;
            slot = n;
        }
        copied.definition = 0;
        copied.valueArray = destinationValues;
        g_values[slot] = copied;
        if (slot == n) InterlockedExchange(&g_valueCount, n + 1);

    }
    __except (EXCEPTION_EXECUTE_HANDLER) {}
}

static int* __stdcall ModifierValuesCopyHook(int* destination, int* source)
{
    int* result = g_realModifierValuesCopy(destination, source);
    PropagateModifierAlias(destination, source);
    return result;
}

static void __fastcall ModifierParserHook(void* self, void* edx, void* ctx, int keyId)
{
    (void)edx;
    if (ctx)
    {
        const char* key = (const char*)ctx + OFF_PARSER_KEY_TEXT;
        bool milNonAccepted = strcmp(key, "prov_non_accepted_mil_modifier") == 0;
        bool conNonAccepted = strcmp(key, "prov_non_accepted_con_modifier") == 0;
        bool milPrimary = strcmp(key, "prov_primary_mil_modifier") == 0;
        bool conPrimary = strcmp(key, "prov_primary_con_modifier") == 0;
        bool milProvinceAccepted = strcmp(key, "prov_accepted_mil_modifier") == 0;
        bool conProvinceAccepted = strcmp(key, "prov_accepted_con_modifier") == 0;
        bool milCountryPrimary = strcmp(key, "primary_pop_militancy_modifier") == 0;
        bool conCountryPrimary = strcmp(key, "primary_pop_consciousness_modifier") == 0;
        bool milCountryAccepted = strcmp(key, "accepted_pop_militancy_modifier") == 0;
        bool conCountryAccepted = strcmp(key, "accepted_pop_consciousness_modifier") == 0;
        bool milCountryColonial = strcmp(key, "colonial_pop_militancy_modifier") == 0;
        bool conCountryColonial = strcmp(key, "colonial_pop_consciousness_modifier") == 0;
        bool countryPrimaryAlias = milCountryPrimary || conCountryPrimary;
        bool countryAcceptedAlias = milCountryAccepted || conCountryAccepted;
        bool countryColonialAlias = milCountryColonial || conCountryColonial;
        bool countryAlias = countryPrimaryAlias || countryAcceptedAlias || countryColonialAlias;
        bool mil = milNonAccepted || milPrimary || milProvinceAccepted || milCountryPrimary || milCountryAccepted || milCountryColonial;
        bool con = conNonAccepted || conPrimary || conProvinceAccepted || conCountryPrimary || conCountryAccepted || conCountryColonial;
        bool primaryAlias = milPrimary || conPrimary;
        bool acceptedAlias = milProvinceAccepted || conProvinceAccepted;
        if ((mil || con) &&
            (!countryPrimaryAlias || g_countryPrimaryEnabled) &&
            (!countryAcceptedAlias || g_countryAcceptedEnabled) &&
            (!countryColonialAlias || g_countryColonialEnabled))
        {
            int nativeKey = -1;
            int descriptorIndex = FindDescriptor(
                countryAlias
                    ? (mil ? "global_pop_militancy_modifier" : "global_pop_consciousness_modifier")
                    : (mil ? "pop_militancy_modifier" : "pop_consciousness_modifier"),
                countryAlias
                    ? (mil ? "MODIFIER_GLOBAL_POP_MILITANCY_MODIFIER" : "MODIFIER_GLOBAL_POP_CONSCIOUSNESS_MODIFIER")
                    : (mil ? "MODIFIER_POP_MILITANCY_MODIFIER" : "MODIFIER_POP_CONSCIOUSNESS_MODIFIER"),
                &nativeKey);
            if (descriptorIndex >= 0)
            {
                if (mil) g_nativeMilKey = nativeKey; else g_nativeConKey = nativeKey;
                int* values = *(int**)((char*)self + OFF_MODIFIER_VALUES);
                if (!values) return;
                int previous = values[descriptorIndex * 2];
                g_realParser(self, ctx, nativeKey);
                int aliasRaw = values[descriptorIndex * 2];
                values[descriptorIndex * 2] = previous + aliasRaw;
                Capture(self, descriptorIndex, mil, aliasRaw, primaryAlias, acceptedAlias,
                    countryAlias, countryAcceptedAlias, countryColonialAlias);
                return;
            }
        }
        if (keyId == g_nativeMilKey || keyId == g_nativeConKey)
        {
            const CapturedValues* captured = FindValues(self);
            if (captured)
            {
                bool nativeMil = keyId == g_nativeMilKey;
                int index = nativeMil ? captured->milIndex : captured->conIndex;
                int aliasRaw = nativeMil ? captured->mil + captured->primaryMil + captured->acceptedMil +
                        captured->countryPrimaryMil + captured->countryAcceptedMil + captured->countryColonialMil
                    : captured->con + captured->primaryCon + captured->acceptedCon +
                        captured->countryPrimaryCon + captured->countryAcceptedCon + captured->countryColonialCon;
                if (index >= 0 && aliasRaw)
                {
                    g_realParser(self, ctx, keyId);
                    int* values = *(int**)((char*)self + OFF_MODIFIER_VALUES);
                    if (values) values[index * 2] += aliasRaw;
                    return;
                }
            }
        }
    }
    g_realParser(self, ctx, keyId);
}

static bool IsNonAcceptedCulture(void* province, void* culture, void** countryOut = 0, void** primaryOut = 0, bool* acceptedOut = 0, bool* knownOut = 0)
{
    if (countryOut) *countryOut = 0;
    if (primaryOut) *primaryOut = 0;
    if (acceptedOut) *acceptedOut = false;
    if (knownOut) *knownOut = false;
    if (!province || !culture) return false;
    int ownerId = *(int*)((char*)province + OFF_PROVINCE_OWNER);
    if (ownerId <= 0 || ownerId >= 4096) return false;
    void* manager = *(void**)(g_base + RVA_COUNTRY_MANAGER);
    if (!manager) return false;
    void** countriesBegin = *(void***)((char*)manager + 4);
    void** countriesEnd = *(void***)((char*)manager + 8);
    if (!countriesBegin || !countriesEnd || countriesEnd < countriesBegin ||
        ownerId >= countriesEnd - countriesBegin) return false;
    void* country = countriesBegin[ownerId];
    if (!country) return false;
    void* primary = *(void**)((char*)country + OFF_COUNTRY_PRIMARY_CULTURE);
    if (countryOut) *countryOut = country;
    if (primaryOut) *primaryOut = primary;
    if (knownOut) *knownOut = true;
    if (primary == culture) return false;
    void* node = *(void**)((char*)country + OFF_COUNTRY_ACCEPTED_CULTURES);
    for (int guard = 0; node && guard < 256; ++guard)
    {
        if (*(void**)node == culture) { if (acceptedOut) *acceptedOut = true; return false; }
        node = *(void**)((char*)node + 8);
    }
    return true;
}
static int AliasTotal(const CapturedValues* values, bool militancy)
{
    if (!values) return 0;
    return militancy
        ? values->mil + values->primaryMil + values->acceptedMil
        : values->con + values->primaryCon + values->acceptedCon;
}

static int AliasApplicable(const CapturedValues* values, bool militancy,
    bool nonAccepted, bool primary, bool accepted)
{
    if (!values) return 0;
    if (militancy)
        return (nonAccepted ? values->mil : 0) +
            (primary ? values->primaryMil : 0) + (accepted ? values->acceptedMil : 0);
    return (nonAccepted ? values->con : 0) +
        (primary ? values->primaryCon : 0) + (accepted ? values->acceptedCon : 0);
}

static void GetPopCultureClass(void* pop, bool* nonAcceptedOut,
    bool* primaryOut, bool* acceptedOut)
{
    if (nonAcceptedOut) *nonAcceptedOut = false;
    if (primaryOut) *primaryOut = false;
    if (acceptedOut) *acceptedOut = false;
    if (!pop) return;
    __try
    {
        void* province = *(void**)((char*)pop + OFF_POP_PROVINCE);
        void* culture = *(void**)((char*)pop + OFF_POP_CULTURE);
        void* primaryCulture = 0;
        bool accepted = false, known = false;
        if (!province || !culture) return;
        bool nonAccepted = IsNonAcceptedCulture(province, culture, 0,
            &primaryCulture, &accepted, &known);
        if (nonAcceptedOut) *nonAcceptedOut = nonAccepted;
        if (primaryOut) *primaryOut = primaryCulture && culture == primaryCulture;
        if (acceptedOut) *acceptedOut = known && accepted;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        if (nonAcceptedOut) *nonAcceptedOut = false;
        if (primaryOut) *primaryOut = false;
        if (acceptedOut) *acceptedOut = false;
    }
}

static bool IsPopInColonialState(void* pop)
{
    if (!pop) return false;
    __try
    {
        void* province = *(void**)((char*)pop + OFF_POP_PROVINCE);
        if (!province) return false;
        void* state = *(void**)((char*)province + OFF_PROVINCE_STATE);
        return state && *(int*)((char*)state + OFF_STATE_IS_COLONIAL) > 0;
    }
    __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
}

static void* GetOwnerCountry(void* province)
{
    if (!province) return 0;
    int ownerId = *(int*)((char*)province + OFF_PROVINCE_OWNER);
    if (ownerId <= 0 || ownerId >= 4096) return 0;
    void* manager = *(void**)(g_base + RVA_COUNTRY_MANAGER);
    if (!manager) return 0;
    void** begin = *(void***)((char*)manager + 4);
    void** end = *(void***)((char*)manager + 8);
    if (!begin || !end || end < begin || ownerId >= end - begin) return 0;
    return begin[ownerId];
}
static int SumActiveCountryCulture(void* country, bool militancy, bool accepted)
{
    if (!country || (accepted ? !g_countryAcceptedEnabled : !g_countryPrimaryEnabled)) return 0;
    int total = 0;
    void* node = *(void**)((char*)country + OFF_COUNTRY_TIMED_HEAD);
    int count = *(int*)((char*)country + OFF_COUNTRY_TIMED_COUNT);
    if (count < 0 || count > 4096) return 0;
    for (int i = 0; node && i < count; ++i)
    {
        void* current = node;
        node = *(void**)((char*)current + OFF_TIMED_NODE_NEXT);
        void* timed = *(void**)current;
        if (!timed) continue;
        void* definition = *(void**)((char*)timed + OFF_TIMED_DATA);
        const CapturedValues* values = FindValues(definition);
        if (values)
        {
            if (militancy)
                total += accepted ? values->countryAcceptedMil : values->countryPrimaryMil;
            else
                total += accepted ? values->countryAcceptedCon : values->countryPrimaryCon;
        }
    }
    return total;
}
static int SumActiveCountryColonial(void* country, bool militancy)
{
    if (!country || !g_countryColonialEnabled) return 0;
    int total = 0;
    void* node = *(void**)((char*)country + OFF_COUNTRY_TIMED_HEAD);
    int count = *(int*)((char*)country + OFF_COUNTRY_TIMED_COUNT);
    if (count < 0 || count > 4096) return 0;
    for (int i = 0; node && i < count; ++i)
    {
        void* current = node;
        node = *(void**)((char*)current + OFF_TIMED_NODE_NEXT);
        void* timed = *(void**)current;
        if (!timed) continue;
        const CapturedValues* values = FindValues(*(void**)((char*)timed + OFF_TIMED_DATA));
        if (values) total += militancy ? values->countryColonialMil : values->countryColonialCon;
    }
    return total;
}
static int SumActiveProvinceModifier(void* province, bool militancy,
    bool nonAccepted, bool primary, bool accepted, int* applicableOut, int* matched)
{
    int total = 0;
    *matched = 0;
    *applicableOut = 0;
    void* node = *(void**)((char*)province + OFF_PROVINCE_TIMED_HEAD);
    int count = *(int*)((char*)province + OFF_PROVINCE_TIMED_COUNT);
    if (count < 0 || count > 4096) return 0;
    for (int i = 0; node && i < count; ++i)
    {
        void* current = node;
        node = *(void**)((char*)current + OFF_TIMED_NODE_NEXT);
        void* timed = *(void**)current;
        if (!timed) continue;
        void* definition = *(void**)((char*)timed + OFF_TIMED_DATA);
        const CapturedValues* values = FindValues(definition);
        if (!values) continue;
        int all = AliasTotal(values, militancy);
        int applicable = AliasApplicable(values, militancy, nonAccepted, primary, accepted);
        const char* provinceTag = (const char*)province + 0x130;
        bool rebelProvince = provinceTag[0] == 'R' && provinceTag[1] == 'E' && provinceTag[2] == 'B';
        if (!rebelProvince)
        {
            if (militancy)
            {
                if (nonAccepted && values->mil) LogAppliedPopEffectOnce(0, "prov_non_accepted_mil_modifier", "province", values->mil);
                if (primary && values->primaryMil) LogAppliedPopEffectOnce(2, "prov_primary_mil_modifier", "province", values->primaryMil);
                if (accepted && values->acceptedMil) LogAppliedPopEffectOnce(4, "prov_accepted_mil_modifier", "province", values->acceptedMil);
            }
            else
            {
                if (nonAccepted && values->con) LogAppliedPopEffectOnce(1, "prov_non_accepted_con_modifier", "province", values->con);
                if (primary && values->primaryCon) LogAppliedPopEffectOnce(3, "prov_primary_con_modifier", "province", values->primaryCon);
                if (accepted && values->acceptedCon) LogAppliedPopEffectOnce(5, "prov_accepted_con_modifier", "province", values->acceptedCon);
            }
        }
        if (all || applicable)
        {
            total += all;
            *applicableOut += applicable;
            ++*matched;
        }
    }
    return total;
}
static void AdjustCurrentDelta(bool militancy)
{
    if (!g_popUpdateActive || !g_currentPop) return;
    long long* output = militancy ? g_milDeltaOut : g_conDeltaOut;
    if (!output) return;
    __try
    {
        void* pop = g_currentPop;
        void* province = *(void**)((char*)pop + OFF_POP_PROVINCE);
        if (!province) return;
        bool nonAccepted = false, primary = false, accepted = false;
        GetPopCultureClass(pop, &nonAccepted, &primary, &accepted);
        bool colonial = IsPopInColonialState(pop);
        void* country = GetOwnerCountry(province);
        int countryPrimaryRaw = SumActiveCountryCulture(country, militancy, false);
        if (countryPrimaryRaw && primary)
            LogAppliedPopEffectOnce(militancy ? 6 : 7,
                militancy ? "primary_pop_militancy_modifier" : "primary_pop_consciousness_modifier",
                "country_modifier", countryPrimaryRaw);
        if (countryPrimaryRaw && !primary) *output -= (long long)countryPrimaryRaw * Q15_ONE / 1000;
        int countryAcceptedRaw = SumActiveCountryCulture(country, militancy, true);
        if (countryAcceptedRaw && accepted)
            LogAppliedPopEffectOnce(militancy ? 8 : 9,
                militancy ? "accepted_pop_militancy_modifier" : "accepted_pop_consciousness_modifier",
                "country_modifier", countryAcceptedRaw);
        if (countryAcceptedRaw && !accepted) *output -= (long long)countryAcceptedRaw * Q15_ONE / 1000;
        int countryColonialRaw = SumActiveCountryColonial(country, militancy);
        if (countryColonialRaw && colonial)
            LogAppliedPopEffectOnce(militancy ? 10 : 11,
                militancy ? "colonial_pop_militancy_modifier" : "colonial_pop_consciousness_modifier",
                "country_modifier", countryColonialRaw);
        if (countryColonialRaw && !colonial) *output -= (long long)countryColonialRaw * Q15_ONE / 1000;
        if (country) {
            unsigned countryIndex = *(unsigned*)((char*)country + 0x20);
            int techPrimaryRaw = GetTechPrimaryPopModifier(countryIndex, militancy);
            if (primary && techPrimaryRaw)
            {
                LogAppliedPopEffectOnce(militancy ? 6 : 7,
                    militancy ? "primary_pop_militancy_modifier" : "primary_pop_consciousness_modifier",
                    "technology_invention", techPrimaryRaw);
                *output += (long long)techPrimaryRaw * Q15_ONE / 1000;
            }
            int techAcceptedRaw = GetTechAcceptedPopModifier(countryIndex, militancy);
            if (accepted && techAcceptedRaw)
            {
                LogAppliedPopEffectOnce(militancy ? 8 : 9,
                    militancy ? "accepted_pop_militancy_modifier" : "accepted_pop_consciousness_modifier",
                    "technology_invention", techAcceptedRaw);
                *output += (long long)techAcceptedRaw * Q15_ONE / 1000;
            }
            int techColonialRaw = GetTechColonialPopModifier(countryIndex, militancy);
            if (colonial && techColonialRaw)
            {
                LogAppliedPopEffectOnce(militancy ? 10 : 11,
                    militancy ? "colonial_pop_militancy_modifier" : "colonial_pop_consciousness_modifier",
                    "technology_invention", techColonialRaw);
                *output += (long long)techColonialRaw * Q15_ONE / 1000;
            }
        }
        int applicableRaw = 0, matches = 0;
        int aliasRaw = SumActiveProvinceModifier(province, militancy,
            nonAccepted, primary, accepted, &applicableRaw, &matches);
        if (aliasRaw && matches)
        {
            // FUN_004BE000 skips province modifiers for rebel provinces.
            const char* tag = (const char*)province + 0x130;
            if (tag[0] == 'R' && tag[1] == 'E' && tag[2] == 'B') return;
            // Keep only non-accepted aliases for non-accepted POPs and primary
            // aliases for the owner's primary-culture POPs.
            int property = militancy ? 0x55 : 0x56;
            char* provinceValues = *(char**)((char*)province + 0x9C);
            if (!provinceValues) return;
            int totalRaw = *(int*)(provinceValues + property * 8);
            int filteredRaw = totalRaw - (aliasRaw - applicableRaw);
            long long nativeAmount = (long long)totalRaw * Q15_ONE / 1000;
            long long withoutDisallowedAliases = (long long)filteredRaw * Q15_ONE / 1000;
            *output -= nativeAmount - withoutDisallowedAliases;
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        (void)GetExceptionCode();
    }
}static void __cdecl RememberMilDeltaOut(long long* out) { g_milDeltaOut = out; }
static void __cdecl RememberConDeltaOut(long long* out) { g_conDeltaOut = out; }
static void __cdecl PushMilDeltaReturn(DWORD address) { LONG d = g_milReturnDepth; if (d >= 0 && d < 16) { g_milReturnStack[d] = address; g_milReturnDepth = d + 1; } }
static DWORD __cdecl PopMilDeltaReturn() { LONG d = g_milReturnDepth; if (d <= 0 || d > 16) return 0; g_milReturnDepth = d - 1; return g_milReturnStack[d - 1]; }
static void __cdecl PushConDeltaReturn(DWORD address) { LONG d = g_conReturnDepth; if (d >= 0 && d < 16) { g_conReturnStack[d] = address; g_conReturnDepth = d + 1; } }
static DWORD __cdecl PopConDeltaReturn() { LONG d = g_conReturnDepth; if (d <= 0 || d > 16) return 0; g_conReturnDepth = d - 1; return g_conReturnStack[d - 1]; }
static void __cdecl FinishPopUpdate() { g_popUpdateActive = false; g_currentPop = 0; }
static void __cdecl RememberCurrentPop(void* pop) { g_currentPop = pop; g_popUpdateActive = pop != 0; }
static void __cdecl AdjustMilitancyDelta() { AdjustCurrentDelta(true); }
static void __cdecl AdjustConsciousnessDelta() { AdjustCurrentDelta(false); }

// The game's source-row formatter walks the province's live modifier tree.
// For an accepted POP, feed a private copy of only the affected leaf to the
// native formatter. Shared game values and localisation remain untouched.
static const DWORD RVA_STD_STRING_ASSIGN = 0x009350;
static const DWORD RVA_FMT_FROM_KEY = 0x5A8EE0;
static const DWORD RVA_FMT_FINISH = 0x5A9880;
static const DWORD RVA_FMT_FREE = 0x5A9740;
static const DWORD RVA_LOC_SINGLETON = 0x075500;

struct ProvinceLabelString
{
    union { char buffer[16]; char* pointer; } data;
    unsigned size;
    unsigned capacity;
};
typedef void* (__thiscall* tProvinceStringAssign)(void*, const char*, unsigned);

static void ProvinceLabelStringSet(ProvinceLabelString* value, const char* text)
{
    memset(value, 0, sizeof(*value));
    value->capacity = 15;
    ((tProvinceStringAssign)(g_base + RVA_STD_STRING_ASSIGN))(
        value, text, (unsigned)strlen(text));
}

static bool ProvinceLocalizeKey(const char* key, char* output, unsigned outputCapacity)
{
    ProvinceLabelString keyString, gameOutput;
    unsigned char formatter[0x60];
    memset(&keyString, 0, sizeof(keyString));
    memset(&gameOutput, 0, sizeof(gameOutput));
    gameOutput.capacity = 15;
    memset(formatter, 0, sizeof(formatter));
    if (output && outputCapacity) output[0] = 0;
    bool formatterStarted = false;
    __try
    {
        ProvinceLabelStringSet(&keyString, key);
        ProvinceLabelString* keyPtr = &keyString;
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
            DWORD freeFormatter = g_base + RVA_FMT_FREE;
            __asm
            {
                push formatterPtr
                call freeFormatter
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
        const char* text = gameOutput.capacity < 16
            ? gameOutput.data.buffer : gameOutput.data.pointer;
        bool copied = text && gameOutput.size > 0 && gameOutput.size < outputCapacity;
        if (copied)
        {
            memcpy(output, text, gameOutput.size);
            output[gameOutput.size] = 0;
        }
        DWORD freeFormatter = g_base + RVA_FMT_FREE;
        __asm
        {
            push formatterPtr
            call freeFormatter
        }
        formatterStarted = false;
        return copied;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        if (formatterStarted)
        {
            void* formatterPtr = formatter;
            DWORD freeFormatter = g_base + RVA_FMT_FREE;
            __asm
        {
            push formatterPtr
            call freeFormatter
        }
        }
        return false;
    }
}

// FUN_0044c7b0 receives an aggregated CModifier. The individual parsed
// CStaticModifier sources live in the linked list rooted at this+0x08
// (node value at +0x00, next at +0x08; count at this+0x10).
static bool ModifierSourcesContainProvinceAlias(void* modifier, bool militancy, bool nonAccepted, bool primary, bool accepted, int* visitedOut = 0)
{
    if (visitedOut) *visitedOut = 0;
    if (!modifier) return false;
    __try
    {
        void* node = *(void**)((char*)modifier + 0x08);
        // CModifier stores source nodes at +0x08; each node has the source
        // object at +0x00 and the next node at +0x08. CModifier+0x10 belongs
        // to the container control block and is not a source count.
        // Bound traversal in case a malformed or cyclic chain is encountered.
        for (int i = 0; node && i < 4096; ++i)
        {
            if (visitedOut) *visitedOut = i + 1;
            void* source = *(void**)node;
            void* next = *(void**)((char*)node + 0x08);
            const CapturedValues* captured = FindValues(source);
            if (captured && AliasApplicable(captured, militancy, nonAccepted, primary, accepted))
                return true;
            node = next;
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
    return false;
}

static bool ModifierSourcesContainCountryCulture(void* modifier, bool militancy, bool accepted)
{
    if (!modifier) return false;
    __try
    {
        void* node = *(void**)((char*)modifier + 0x08);
        for (int i = 0; node && i < 4096; ++i)
        {
            void* source = *(void**)node;
            const CapturedValues* captured = FindValues(source);
            if (captured)
            {
                int amount = militancy
                    ? (accepted ? captured->countryAcceptedMil : captured->countryPrimaryMil)
                    : (accepted ? captured->countryAcceptedCon : captured->countryPrimaryCon);
                if (amount) return true;
            }
            node = *(void**)((char*)node + 0x08);
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
    return false;
}
static bool ModifierSourcesContainCountryColonial(void* modifier, bool militancy)
{
    if (!modifier) return false;
    __try
    {
        void* node = *(void**)((char*)modifier + 0x08);
        for (int i = 0; node && i < 4096; ++i)
        {
            const CapturedValues* captured = FindValues(*(void**)node);
            if (captured && (militancy ? captured->countryColonialMil : captured->countryColonialCon)) return true;
            node = *(void**)((char*)node + 0x08);
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
    return false;
}
static int ModifierDisallowedAliases(void* modifier, bool militancy,
    bool nonAccepted, bool primary, bool accepted, bool colonial)
{
    if (!modifier) return 0;
    int disallowed = 0;
    __try
    {
        void* node = *(void**)((char*)modifier + 0x08);
        for (int i = 0; node && i < 4096; ++i)
        {
            void* source = *(void**)node;
            void* next = *(void**)((char*)node + 0x08);
            const CapturedValues* captured = FindValues(source);
            if (captured)
            {
                int country = militancy ? captured->countryPrimaryMil : captured->countryPrimaryCon;
                int all = AliasTotal(captured, militancy) + country;
                int applicable = AliasApplicable(captured, militancy,
                    nonAccepted, primary, accepted) + (primary ? country : 0);
                disallowed += all - applicable;
            }
            node = next;
        }
        if (!disallowed)
        {
            const CapturedValues* captured = FindValues(modifier);
            if (captured)
            {
                int country = militancy ? captured->countryPrimaryMil : captured->countryPrimaryCon;
                int all = AliasTotal(captured, militancy) + country;
                int applicable = AliasApplicable(captured, militancy,
                    nonAccepted, primary, accepted) + (primary ? country : 0);
                disallowed = all - applicable;
            }
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER) { return 0; }
    return disallowed;
}static bool ProvinceReplaceTooltipLabel(char* out, const char* oldKey, const char* newText)
{
    if (!out) return false;
    char oldLabel[256], newLabel[256];
    if (!ProvinceLocalizeKey(oldKey, oldLabel, sizeof(oldLabel)) ||
        !oldLabel[0] || !newText || !newText[0])
    {
        return false;
    }
    // Resolve the custom key through the same game localization service. Keep
    // the key itself as a useful fallback when no translation is installed.
    const char* replacementText = newText;
    if (ProvinceLocalizeKey(newText, newLabel, sizeof(newLabel)) && newLabel[0])
        replacementText = newLabel;
    unsigned length = *(unsigned*)(out + 0x10);
    unsigned capacity = *(unsigned*)(out + 0x14);
    if (!length || length > 4096 || capacity > 0x10000) return false;
    const char* current = capacity >= 16 ? *(const char**)out : out;
    if (!current) return false;
    const char* match = strstr(current, oldLabel);
    if (!match)
    {
        return false;
    }
    size_t prefixLength = (size_t)(match - current);
    size_t oldLength = strlen(oldLabel), newLength = strlen(replacementText);
    if (prefixLength + newLength + length - prefixLength - oldLength >= 4095) return false;
    char replaced[4096];
    memcpy(replaced, current, prefixLength);
    memcpy(replaced + prefixLength, replacementText, newLength);
    memcpy(replaced + prefixLength + newLength, match + oldLength,
        length - prefixLength - oldLength);
    unsigned replacedLength = (unsigned)(length - oldLength + newLength);
    replaced[replacedLength] = 0;
    ((tProvinceStringAssign)(g_base + RVA_STD_STRING_ASSIGN))(out, replaced, replacedLength);
    return true;
}

// CAddProvinceModifierEffect builds MODIFIER_ADDED's $EFFECT$ by calling
// CModifier::get_summary (FUN_0044C410). Render the captured aliases as
// independent rows while retaining any native part in the vanilla rows.
static char* __fastcall ModifierSummaryFormatterHook(void* self, void*, char* out)
{
    const CapturedValues* found = FindValues(self);
    if (!found || !self || !out || !(found->mil || found->con ||
        found->primaryMil || found->primaryCon || found->acceptedMil ||
        found->acceptedCon || found->countryPrimaryMil || found->countryPrimaryCon ||
        found->countryAcceptedMil || found->countryAcceptedCon ||
        found->countryColonialMil || found->countryColonialCon))
        return g_realModifierSummaryFormatter(self, out);

    int* originalValues = 0;
    DWORD* definitionsBegin = 0;
    DWORD* definitionsEnd = 0;
    __try
    {
        originalValues = *(int**)((char*)self + OFF_MODIFIER_VALUES);
        definitionsBegin = *(DWORD**)(g_base + RVA_MODIFIER_DEFS_BEGIN);
        definitionsEnd = *(DWORD**)(g_base + RVA_MODIFIER_DEFS_END);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return g_realModifierSummaryFormatter(self, out);
    }
    if (!originalValues || !definitionsBegin || !definitionsEnd ||
        definitionsEnd < definitionsBegin || definitionsEnd - definitionsBegin > 2048)
        return g_realModifierSummaryFormatter(self, out);

    const int definitionCount = (int)(definitionsEnd - definitionsBegin);
    const int localMilIndex = found->milIndex;
    const int localConIndex = found->conIndex;
    const int countryMilIndex = found->countryMilIndex;
    const int countryConIndex = found->countryConIndex;
    const bool showAlias[12] = {
        found->mil && localMilIndex >= 0 && localMilIndex < definitionCount,
        found->primaryMil && localMilIndex >= 0 && localMilIndex < definitionCount,
        found->acceptedMil && localMilIndex >= 0 && localMilIndex < definitionCount,
        found->con && localConIndex >= 0 && localConIndex < definitionCount,
        found->primaryCon && localConIndex >= 0 && localConIndex < definitionCount,
        found->acceptedCon && localConIndex >= 0 && localConIndex < definitionCount,
        found->countryPrimaryMil && countryMilIndex >= 0 && countryMilIndex < definitionCount,
        found->countryPrimaryCon && countryConIndex >= 0 && countryConIndex < definitionCount,
        found->countryAcceptedMil && countryMilIndex >= 0 && countryMilIndex < definitionCount,
        found->countryAcceptedCon && countryConIndex >= 0 && countryConIndex < definitionCount,
        found->countryColonialMil && countryMilIndex >= 0 && countryMilIndex < definitionCount,
        found->countryColonialCon && countryConIndex >= 0 && countryConIndex < definitionCount
    };
    bool anyAlias = false;
    for (int i = 0; i < 12; ++i) anyAlias |= showAlias[i];
    if (!anyAlias) return g_realModifierSummaryFormatter(self, out);

    size_t vectorBytes = (size_t)definitionCount * 2 * sizeof(int);
    int* shadowValues = (int*)HeapAlloc(GetProcessHeap(), 0, vectorBytes);
    if (!shadowValues) return g_realModifierSummaryFormatter(self, out);

    __declspec(align(16)) unsigned char shadowModifier[0x30];
    memcpy(shadowModifier, self, sizeof(shadowModifier));
    *(int**)(shadowModifier + OFF_MODIFIER_VALUES) = shadowValues;
    memcpy(shadowValues, originalValues, vectorBytes);
    if (localMilIndex >= 0 && localMilIndex < definitionCount)
        shadowValues[localMilIndex * 2] -= found->mil + found->primaryMil + found->acceptedMil;
    if (countryMilIndex >= 0 && countryMilIndex < definitionCount)
        shadowValues[countryMilIndex * 2] -= found->countryPrimaryMil + found->countryAcceptedMil + found->countryColonialMil;
    if (localConIndex >= 0 && localConIndex < definitionCount)
        shadowValues[localConIndex * 2] -= found->con + found->primaryCon + found->acceptedCon;
    if (countryConIndex >= 0 && countryConIndex < definitionCount)
        shadowValues[countryConIndex * 2] -= found->countryPrimaryCon + found->countryAcceptedCon + found->countryColonialCon;
    g_realModifierSummaryFormatter(shadowModifier, out);

    ProvinceLabelString rows[12];
    const char* oldKeys[12] = {
        "MODIFIER_POP_MILITANCY_MODIFIER", "MODIFIER_POP_MILITANCY_MODIFIER", "MODIFIER_POP_MILITANCY_MODIFIER",
        "MODIFIER_POP_CONSCIOUSNESS_MODIFIER", "MODIFIER_POP_CONSCIOUSNESS_MODIFIER", "MODIFIER_POP_CONSCIOUSNESS_MODIFIER",
        "MODIFIER_GLOBAL_POP_MILITANCY_MODIFIER", "MODIFIER_GLOBAL_POP_CONSCIOUSNESS_MODIFIER",
        "MODIFIER_GLOBAL_POP_MILITANCY_MODIFIER", "MODIFIER_GLOBAL_POP_CONSCIOUSNESS_MODIFIER",
        "MODIFIER_GLOBAL_POP_MILITANCY_MODIFIER", "MODIFIER_GLOBAL_POP_CONSCIOUSNESS_MODIFIER"
    };
    const char* newKeys[12] = {
        "PROV_NON_ACC_MIL_MODIFIER", "PROV_PRIMARY_MIL_MODIFIER", "PROV_ACC_MIL_MODIFIER",
        "PROV_NON_ACC_CON_MODIFIER", "PROV_PRIMARY_CON_MODIFIER", "PROV_ACC_CON_MODIFIER",
        "PRIMARY_POP_MILITANCY_MODIFIER", "PRIMARY_POP_CONSCIOUSNESS_MODIFIER",
        "ACCEPTED_POP_MILITANCY_MODIFIER", "ACCEPTED_POP_CONSCIOUSNESS_MODIFIER",
        "COLONIAL_POP_MILITANCY_MODIFIER", "COLONIAL_POP_CONSCIOUSNESS_MODIFIER"
    };
    const int aliasIndices[12] = {
        localMilIndex, localMilIndex, localMilIndex,
        localConIndex, localConIndex, localConIndex,
        countryMilIndex, countryConIndex, countryMilIndex, countryConIndex,
        countryMilIndex, countryConIndex
    };
    const int aliasValues[12] = {
        found->mil, found->primaryMil, found->acceptedMil,
        found->con, found->primaryCon, found->acceptedCon,
        found->countryPrimaryMil, found->countryPrimaryCon,
        found->countryAcceptedMil, found->countryAcceptedCon,
        found->countryColonialMil, found->countryColonialCon
    };
    const char* baseData = *(unsigned*)(out + 0x14) >= 16 ? *(const char**)out : out;
    unsigned baseLength = *(unsigned*)(out + 0x10);
    if (!baseData || baseLength > 2500)
    {
        HeapFree(GetProcessHeap(), 0, shadowValues);
        return g_realModifierSummaryFormatter(self, out);
    }
    char combined[4096];
    unsigned combinedLength = 0;
    if (baseLength)
    {
        memcpy(combined, baseData, baseLength);
        combinedLength = baseLength;
    }
    bool failed = false;
    for (int i = 0; i < 12; ++i)
    {
        if (!showAlias[i]) continue;
        memcpy(shadowValues, originalValues, vectorBytes);
        for (int slot = 0; slot < definitionCount; ++slot)
            shadowValues[slot * 2] = 0;
        shadowValues[aliasIndices[i] * 2] = aliasValues[i];
        memset(&rows[i], 0, sizeof(rows[i]));
        rows[i].capacity = 15;
        g_realModifierSummaryFormatter(shadowModifier, (char*)&rows[i]);
        if (!ProvinceReplaceTooltipLabel((char*)&rows[i], oldKeys[i], newKeys[i]))
        {
            failed = true;
            break;
        }
        const char* rowData = rows[i].capacity >= 16 ? rows[i].data.pointer : rows[i].data.buffer;
        if (!rowData || rows[i].size == 0 || rows[i].size > 500 ||
            combinedLength + rows[i].size + (combinedLength ? 1 : 0) >= sizeof(combined))
        {
            failed = true;
            break;
        }
        if (combinedLength) combined[combinedLength++] = '\n';
        memcpy(combined + combinedLength, rowData, rows[i].size);
        combinedLength += rows[i].size;
    }
    if (failed)
    {
        HeapFree(GetProcessHeap(), 0, shadowValues);
        return g_realModifierSummaryFormatter(self, out);
    }
    if (combinedLength)
        ((tProvinceStringAssign)(g_base + RVA_STD_STRING_ASSIGN))(out, combined, combinedLength);
    HeapFree(GetProcessHeap(), 0, shadowValues);
    return out;
}struct ModifierTooltipRestore
{
    int* slot;
    int original;
};

// FUN_0044c7b0 renders its source tree from child modifier objects. Filtering
// a copy of the aggregate CModifier leaves those rows untouched; adjust only
// the disallowed alias contribution on each source vector during formatting.
static void FilterModifierTooltipSourceTree(void* modifier, bool militancy,
    bool countryProperty, bool nonAccepted, bool primary, bool accepted, bool colonial,
    ModifierTooltipRestore* restore, int* restoreCount, int restoreCapacity,
    int depth)
{
    if (!modifier || !restore || !restoreCount || depth > 32) return;

    const CapturedValues* captured = FindValues(modifier);
    if (captured)
    {
        int countryPrimary = militancy ? captured->countryPrimaryMil : captured->countryPrimaryCon;
        int countryAccepted = militancy ? captured->countryAcceptedMil : captured->countryAcceptedCon;
        int countryColonial = militancy ? captured->countryColonialMil : captured->countryColonialCon;
        int all = countryProperty ? countryPrimary + countryAccepted + countryColonial : AliasTotal(captured, militancy);
        int applicable = countryProperty
            ? (primary ? countryPrimary : 0) + (accepted ? countryAccepted : 0) + (colonial ? countryColonial : 0)
            : AliasApplicable(captured, militancy, nonAccepted, primary, accepted);
        int disallowed = all - applicable;
        int index = countryProperty
            ? (militancy ? captured->countryMilIndex : captured->countryConIndex)
            : (militancy ? captured->milIndex : captured->conIndex);
        __try
        {
            int* values = *(int**)((char*)modifier + OFF_MODIFIER_VALUES);
            if (values && disallowed && index >= 0 && index < 0x18d)
            {
                int* slot = values + index * 2;
                bool alreadySaved = false;
                for (int i = 0; i < *restoreCount; ++i)
                    if (restore[i].slot == slot) { alreadySaved = true; break; }
                if (!alreadySaved && *restoreCount < restoreCapacity)
                {
                    restore[*restoreCount].slot = slot;
                    restore[*restoreCount].original = *slot;
                    ++*restoreCount;
                    *slot -= disallowed;
                }
            }
        }
        __except (EXCEPTION_EXECUTE_HANDLER) {}
    }

    __try
    {
        void* node = *(void**)((char*)modifier + 0x08);
        for (int guard = 0; node && guard < 4096; ++guard)
        {
            void* source = *(void**)node;
            void* next = *(void**)((char*)node + 0x08);
            if (!source || source == modifier) break;
            FilterModifierTooltipSourceTree(source, militancy, countryProperty,
                nonAccepted, primary, accepted, colonial,
                restore, restoreCount, restoreCapacity, depth + 1);
            node = next;
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER) {}
}
static char* __fastcall ModifierTooltipFormatterHook(
    void* self, void*, char* out, int property, int scale, const void* prefix)
{
    if (!self || !out) return g_realModifierTooltipFormatter(self, out, property, scale, prefix);
    bool popContext = g_tooltipKind && g_currentPop;
    bool countryProperty = property == 0x65 || property == 0x66;
    bool militancyProperty = property == 0x65 || property == 0x55;
    bool consciousnessProperty = property == 0x66 || property == 0x56;
    char* result = 0;

    if (popContext && g_modifierTooltipFilterDepth == 0 &&
        (militancyProperty || consciousnessProperty))
    {
        ModifierTooltipRestore restore[256];
        int restoreCount = 0;
        FilterModifierTooltipSourceTree(self, militancyProperty, countryProperty,
            g_currentPopNonAccepted, g_currentPopPrimary, g_currentPopAccepted, g_currentPopColonial,
            restore, &restoreCount, (int)(sizeof(restore) / sizeof(restore[0])), 0);
        ++g_modifierTooltipFilterDepth;
        result = g_realModifierTooltipFormatter(self, out, property, scale, prefix);
        --g_modifierTooltipFilterDepth;
        for (int i = restoreCount - 1; i >= 0; --i)
            *restore[i].slot = restore[i].original;

    }
    else
    {
        result = g_realModifierTooltipFormatter(self, out, property, scale, prefix);
    }

    bool replaced = false;
    bool nonAccepted = popContext ? g_currentPopNonAccepted : true;
    bool primary = popContext ? g_currentPopPrimary : true;
    bool accepted = popContext ? g_currentPopAccepted : true;
    bool colonial = popContext ? g_currentPopColonial : true;
    if (property == 2)
    {
        bool milNon = ModifierSourcesContainProvinceAlias(self, true, nonAccepted, false, false);
        bool milPrimary = ModifierSourcesContainProvinceAlias(self, true, false, primary, false);
        bool milProvinceAccepted = ModifierSourcesContainProvinceAlias(self, true, false, false, accepted);
        bool milPrimaryCountry = primary && ModifierSourcesContainCountryCulture(self, true, false);
        bool milAcceptedCountry = accepted && ModifierSourcesContainCountryCulture(self, true, true);
        bool milColonialCountry = g_currentPopColonial && ModifierSourcesContainCountryColonial(self, true);
        bool conNon = ModifierSourcesContainProvinceAlias(self, false, nonAccepted, false, false);
        bool conPrimary = ModifierSourcesContainProvinceAlias(self, false, false, primary, false);
        bool conProvinceAccepted = ModifierSourcesContainProvinceAlias(self, false, false, false, accepted);
        bool conPrimaryCountry = primary && ModifierSourcesContainCountryCulture(self, false, false);
        bool conAcceptedCountry = accepted && ModifierSourcesContainCountryCulture(self, false, true);
        bool conColonialCountry = g_currentPopColonial && ModifierSourcesContainCountryColonial(self, false);
        const char* milKey = milPrimaryCountry ? "PRIMARY_POP_MILITANCY_MODIFIER" :
            (milAcceptedCountry ? "ACCEPTED_POP_MILITANCY_MODIFIER" :
            (milColonialCountry ? "COLONIAL_POP_MILITANCY_MODIFIER" :
            (milNon ? "PROV_NON_ACC_MIL_MODIFIER" :
            (milPrimary ? "PROV_PRIMARY_MIL_MODIFIER" :
            (milProvinceAccepted ? "PROV_ACC_MIL_MODIFIER" : 0)))));
        const char* conKey = conPrimaryCountry ? "PRIMARY_POP_CONSCIOUSNESS_MODIFIER" :
            (conAcceptedCountry ? "ACCEPTED_POP_CONSCIOUSNESS_MODIFIER" :
            (conColonialCountry ? "COLONIAL_POP_CONSCIOUSNESS_MODIFIER" :
            (conNon ? "PROV_NON_ACC_CON_MODIFIER" :
            (conPrimary ? "PROV_PRIMARY_CON_MODIFIER" :
            (conProvinceAccepted ? "PROV_ACC_CON_MODIFIER" : 0)))));
        const char* milOldKey = (milPrimaryCountry || milAcceptedCountry || milColonialCountry)
            ? "MODIFIER_GLOBAL_POP_MILITANCY_MODIFIER" : "MODIFIER_POP_MILITANCY_MODIFIER";
        const char* conOldKey = (conPrimaryCountry || conAcceptedCountry || conColonialCountry)
            ? "MODIFIER_GLOBAL_POP_CONSCIOUSNESS_MODIFIER" : "MODIFIER_POP_CONSCIOUSNESS_MODIFIER";
        if (milKey) replaced |= ProvinceReplaceTooltipLabel(out, milOldKey, milKey);
        if (conKey) replaced |= ProvinceReplaceTooltipLabel(out, conOldKey, conKey);
    }
    else if (property == 0x55 || property == 0x56)
    {
        const CapturedValues* source = FindValues(self);
        bool militancy = property == 0x55;
        const char* key = 0;
        if (source)
        {
            int nonAcceptedAmount = nonAccepted ? (militancy ? source->mil : source->con) : 0;
            int primaryAmount = primary ? (militancy ? source->primaryMil : source->primaryCon) : 0;
            int acceptedAmount = accepted ? (militancy ? source->acceptedMil : source->acceptedCon) : 0;
            if (nonAcceptedAmount)
                key = militancy ? "PROV_NON_ACC_MIL_MODIFIER" : "PROV_NON_ACC_CON_MODIFIER";
            else if (primaryAmount)
                key = militancy ? "PROV_PRIMARY_MIL_MODIFIER" : "PROV_PRIMARY_CON_MODIFIER";
            else if (acceptedAmount)
                key = militancy ? "PROV_ACC_MIL_MODIFIER" : "PROV_ACC_CON_MODIFIER";
        }
        if (key)
            replaced = ProvinceReplaceTooltipLabel(out,
                militancy ? "MODIFIER_POP_MILITANCY_MODIFIER" : "MODIFIER_POP_CONSCIOUSNESS_MODIFIER",
                key);
    }
    if (replaced)
    {
        unsigned capacity = *(unsigned*)(out + 0x14);
        result = capacity >= 16 ? *(char**)out : out;
    }
    return result;
}
static bool AppendColonialTechTooltipLine(char* out, const char* key, int raw)
{
    if (!out || !key || !raw) return false;
    unsigned size = *(unsigned*)(out + 0x10);
    unsigned capacity = *(unsigned*)(out + 0x14);
    if (size > 3500 || capacity > 0x10000) return false;
    const char* current = capacity >= 16 ? *(const char**)out : out;
    if (!current) return false;
    char label[256];
    if (!ProvinceLocalizeKey(key, label, sizeof(label)) || !label[0])
        strncpy_s(label, sizeof(label), key, _TRUNCATE);
    char line[320];
    const char* color = raw > 0 ? "\xA7R" : "\xA7G";
    int lineLength = _snprintf_s(line, sizeof(line), _TRUNCATE, "\n%s: %s%+.2f\xA7W",
        label, color, raw / 1000.0);
    if (lineLength <= 0 || size + (unsigned)lineLength >= 4095) return false;
    char combined[4096];
    memcpy(combined, current, size);
    memcpy(combined + size, line, (size_t)lineLength);
    unsigned total = size + (unsigned)lineLength;
    combined[total] = 0;
    ((tProvinceStringAssign)(g_base + RVA_STD_STRING_ASSIGN))(out, combined, total);
    return true;
}
static void AppendColonialTechPopTooltip(void* pop, char* out, bool militancy)
{
    if (!pop || !out || !IsPopInColonialState(pop)) return;
    __try
    {
        void* province = *(void**)((char*)pop + OFF_POP_PROVINCE);
        void* country = GetOwnerCountry(province);
        if (!country) return;
        unsigned countryIndex = *(unsigned*)((char*)country + 0x20);
        int raw = GetTechColonialPopModifier(countryIndex, militancy);
        if (raw) AppendColonialTechTooltipLine(out,
            militancy ? "COLONIAL_POP_MILITANCY_MODIFIER" : "COLONIAL_POP_CONSCIOUSNESS_MODIFIER", raw);
    }
    __except (EXCEPTION_EXECUTE_HANDLER) {}
}
static char* __stdcall PopMilitancyTooltipHook(void* pop, char* out)
{
    void* previousPop = g_currentPop;
    bool previousActive = g_popUpdateActive;
    bool previousPrimary = g_currentPopPrimary;
    bool previousNonAccepted = g_currentPopNonAccepted;
    bool previousAccepted = g_currentPopAccepted;
    bool previousColonial = g_currentPopColonial;
    int previousKind = g_tooltipKind;
    g_currentPop = pop;
    g_popUpdateActive = pop != 0;
    GetPopCultureClass(pop, &g_currentPopNonAccepted, &g_currentPopPrimary, &g_currentPopAccepted);
    g_currentPopColonial = IsPopInColonialState(pop);
    g_tooltipKind = 1;
    char* result = g_realPopMilitancyTooltip(pop, out);
    AppendColonialTechPopTooltip(pop, out, true);
    g_tooltipKind = previousKind;
    g_currentPop = previousPop;
    g_popUpdateActive = previousActive;
    g_currentPopPrimary = previousPrimary;
    g_currentPopNonAccepted = previousNonAccepted;
    g_currentPopAccepted = previousAccepted;
    g_currentPopColonial = previousColonial;
    return result;
}
static char* __stdcall PopConsciousnessTooltipHook(void* pop, char* out)
{
    void* previousPop = g_currentPop;
    bool previousActive = g_popUpdateActive;
    bool previousPrimary = g_currentPopPrimary;
    bool previousNonAccepted = g_currentPopNonAccepted;
    bool previousAccepted = g_currentPopAccepted;
    bool previousColonial = g_currentPopColonial;
    int previousKind = g_tooltipKind;
    g_currentPop = pop;
    g_popUpdateActive = pop != 0;
    GetPopCultureClass(pop, &g_currentPopNonAccepted, &g_currentPopPrimary, &g_currentPopAccepted);
    g_currentPopColonial = IsPopInColonialState(pop);
    g_tooltipKind = 2;
    char* result = g_realPopConsciousnessTooltip(pop, out);
    AppendColonialTechPopTooltip(pop, out, false);
    g_tooltipKind = previousKind;
    g_currentPop = previousPop;
    g_popUpdateActive = previousActive;
    g_currentPopPrimary = previousPrimary;
    g_currentPopNonAccepted = previousNonAccepted;
    g_currentPopAccepted = previousAccepted;
    g_currentPopColonial = previousColonial;
    return result;
}
static int __cdecl IsMilitancyUpdateCall(DWORD returnAddress)
{
    return returnAddress == (DWORD)(g_base + 0x5597A7) ||
        returnAddress == (DWORD)(g_base + RVA_MILITANCY_TOOLTIP_DELTA_RETURN);
}
static int __cdecl IsConsciousnessUpdateCall(DWORD returnAddress)
{
    return returnAddress == (DWORD)(g_base + 0x559814) ||
        returnAddress == (DWORD)(g_base + RVA_CONSCIOUSNESS_TOOLTIP_DELTA_RETURN);
}
static void PopMonthlyUpdateAfter();
static void MilitancyDeltaAfter();
static void ConsciousnessDeltaAfter();

__declspec(naked) static void PopMonthlyUpdateHook()
{
    __asm {
        pushfd
        pushad
        push eax
        call RememberCurrentPop
        add esp, 4
        push dword ptr [esp + 36]
        call PushPopCallerReturn
        add esp, 4
        popad
        popfd
        mov dword ptr [esp], offset PopMonthlyUpdateAfter
        jmp dword ptr [g_realPopUpdate]
    }
}

__declspec(naked) static void PopMonthlyUpdateAfter()
{
    __asm {
        push 0
        pushfd
        pushad
        call FinishPopUpdate
        call PopPopCallerReturn
        mov dword ptr [esp + 36], eax
        popad
        popfd
        ret
    }
}

__declspec(naked) static void MilitancyDeltaHook()
{
    __asm {
        pushfd
        pushad
        push dword ptr [esp + 36]
        call IsMilitancyUpdateCall
        add esp, 4
        test eax, eax
        jz bypass_mil_update
        push esi
        call RememberMilDeltaOut
        add esp, 4
        push dword ptr [esp + 36]
        call PushMilDeltaReturn
        add esp, 4
        popad
        popfd
        mov dword ptr [esp], offset MilitancyDeltaAfter
        jmp dword ptr [g_realMilitancyDelta]
    bypass_mil_update:
        popad
        popfd
        jmp dword ptr [g_realMilitancyDelta]
    }
}

__declspec(naked) static void MilitancyDeltaAfter()
{
    __asm {
        push 0
        pushfd
        pushad
        call AdjustMilitancyDelta
        call PopMilDeltaReturn
        mov dword ptr [esp + 36], eax
        popad
        popfd
        ret
    }
}

__declspec(naked) static void ConsciousnessDeltaHook()
{
    __asm {
        pushfd
        pushad
        push dword ptr [esp + 36]
        call IsConsciousnessUpdateCall
        add esp, 4
        test eax, eax
        jz bypass_con_update
        push dword ptr [esp + 40]
        call RememberConDeltaOut
        add esp, 4
        push dword ptr [esp + 36]
        call PushConDeltaReturn
        add esp, 4
        popad
        popfd
        mov dword ptr [esp], offset ConsciousnessDeltaAfter
        jmp dword ptr [g_realConsciousnessDelta]
    bypass_con_update:
        popad
        popfd
        jmp dword ptr [g_realConsciousnessDelta]
    }
}

__declspec(naked) static void ConsciousnessDeltaAfter()
{
    __asm {
        push 0
        pushfd
        pushad
        call AdjustConsciousnessDelta
        call PopConDeltaReturn
        mov dword ptr [esp + 36], eax
        popad
        popfd
        ret
    }
}
bool InstallNewPopModifiers()
{
    static const unsigned char COMMON_DELTA_SIG[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };
    static const unsigned char POP_UPDATE_SIG[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x74 };
    static const unsigned char PARSER_SIG[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };
    void* original = 0;
    if (!StealToTrampoline(RVA_MODIFIER_PROPERTY_PARSER, sizeof(PARSER_SIG), g_parserTramp,
            sizeof(g_parserTramp), PARSER_SIG, (void*)&ModifierParserHook, &original,
            "NewPopModifiers(parser)"))
    {
        return false;
    }
    g_realParser = (tModifierPropertyParser)original;
    static const unsigned char MODIFIER_VALUES_COPY_SIG[7] =
        { 0x55, 0x8B, 0xEC, 0x53, 0x8B, 0x5D, 0x08 };
    if (!StealToTrampoline(RVA_MODIFIER_VALUES_COPY, sizeof(MODIFIER_VALUES_COPY_SIG),
            g_modifierValuesCopyTramp, sizeof(g_modifierValuesCopyTramp),
            MODIFIER_VALUES_COPY_SIG, (void*)&ModifierValuesCopyHook,
            (void**)&g_realModifierValuesCopy,
            "NewPopModifiers(modifier-values-copy)"))
    {
        return false;
    }
    if (!StealToTrampoline(RVA_POP_MILITANCY_DELTA, sizeof(COMMON_DELTA_SIG), g_militancyDeltaTramp,
            sizeof(g_militancyDeltaTramp), COMMON_DELTA_SIG, (void*)&MilitancyDeltaHook,
            &g_realMilitancyDelta, "NewPopModifiers(militancy-delta)"))
    {
        return false;
    }
    if (!StealToTrampoline(RVA_POP_CONSCIOUSNESS_DELTA, sizeof(COMMON_DELTA_SIG), g_consciousnessDeltaTramp,
            sizeof(g_consciousnessDeltaTramp), COMMON_DELTA_SIG, (void*)&ConsciousnessDeltaHook,
            &g_realConsciousnessDelta, "NewPopModifiers(consciousness-delta)"))
    {
        return false;
    }
    if (!StealToTrampoline(RVA_POP_MONTHLY_UPDATE, sizeof(POP_UPDATE_SIG), g_popUpdateTramp,
            sizeof(g_popUpdateTramp), POP_UPDATE_SIG, (void*)&PopMonthlyUpdateHook,
            &g_realPopUpdate, "NewPopModifiers(pop-update)"))
    {
        return false;
    }
    static const unsigned char POP_MIL_TOOLTIP_SIG[5] = { 0x55, 0x8B, 0xEC, 0x6A, 0xFF };
    if (!StealToTrampoline(RVA_POP_MILITANCY_TOOLTIP, sizeof(POP_MIL_TOOLTIP_SIG), g_popMilitancyTooltipTramp,
            sizeof(g_popMilitancyTooltipTramp), POP_MIL_TOOLTIP_SIG, (void*)&PopMilitancyTooltipHook,
            (void**)&g_realPopMilitancyTooltip, "NewPopModifiers(pop-militancy-tooltip)"))
        return false;

    if (!StealToTrampoline(RVA_POP_CONSCIOUSNESS_TOOLTIP,
            sizeof(POP_MIL_TOOLTIP_SIG), g_popConsciousnessTooltipTramp,
            sizeof(g_popConsciousnessTooltipTramp), POP_MIL_TOOLTIP_SIG,
            (void*)&PopConsciousnessTooltipHook,
            (void**)&g_realPopConsciousnessTooltip,
            "NewPopModifiers(pop-consciousness-tooltip)"))
        return false;
    static const unsigned char MODIFIER_SUMMARY_SIG[5] = { 0x55, 0x8B, 0xEC, 0x6A, 0xFF };
    if (!StealToTrampoline(RVA_MODIFIER_SUMMARY_FORMATTER,
            sizeof(MODIFIER_SUMMARY_SIG), g_modifierSummaryFormatterTramp,
            sizeof(g_modifierSummaryFormatterTramp), MODIFIER_SUMMARY_SIG,
            (void*)&ModifierSummaryFormatterHook,
            (void**)&g_realModifierSummaryFormatter,
            "NewPopModifiers(modifier-summary)"))
        return false;    static const unsigned char MODIFIER_TOOLTIP_SIG[5] = { 0x55, 0x8B, 0xEC, 0x6A, 0xFF };
    if (!StealToTrampoline(RVA_MODIFIER_TOOLTIP_FORMATTER,
            sizeof(MODIFIER_TOOLTIP_SIG), g_modifierTooltipFormatterTramp,
            sizeof(g_modifierTooltipFormatterTramp), MODIFIER_TOOLTIP_SIG,
            (void*)&ModifierTooltipFormatterHook,
            (void**)&g_realModifierTooltipFormatter,
            "NewPopModifiers(modifier-source-tooltip)"))
        return false;
    return true;
}

void ConfigureExtendedCountryPrimaryPopModifiers(bool enabled) { g_countryPrimaryEnabled = enabled; }
void ConfigureExtendedCountryAcceptedPopModifiers(bool enabled) { g_countryAcceptedEnabled = enabled; }
void ConfigureExtendedCountryColonialPopModifiers(bool enabled) { g_countryColonialEnabled = enabled; }
