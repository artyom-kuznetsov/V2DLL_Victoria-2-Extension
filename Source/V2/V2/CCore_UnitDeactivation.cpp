#include <windows.h>
#include <string.h>
#include "CCore_Shared.h"

// Victoria II 3.04 (Win32): CTechnology effect application.
static const DWORD RVA_APPLY_TECH_EFFECT = 0x168DC0; // FUN_00568DC0
static const unsigned char APPLY_TECH_EFFECT_PROLOGUE[6] =
    { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };

// At the second unit-reference check in FUN_0056AEF0, skip the ENABLE row
// when the same definition already produced the DISABLE row above it.
static const DWORD RVA_TOOLTIP_UNIT_ENABLE_GATE = 0x16B1A4;
static const unsigned char TOOLTIP_UNIT_ENABLE_GATE_SIG[9] =
    { 0x8B, 0x55, 0x08, 0x8B, 0x8A, 0x4C, 0x03, 0x00, 0x00 };
static const DWORD RVA_TOOLTIP_AFTER_UNIT_ENABLE = 0x16B412;
// The DISABLE row gets its label through effect+0x34C in vanilla. Redirect only this name lookup to the first (deactivation) slot.
static const DWORD RVA_TOOLTIP_DISABLE_UNIT_NAME_LOAD = 0x16AFB5;
static const unsigned char TOOLTIP_DISABLE_UNIT_NAME_LOAD_SIG[6] =
    { 0x8B, 0x89, 0x4C, 0x03, 0x00, 0x00 };

static const size_t OFF_EFFECT_DISABLE_UNIT = 0x348;
static const size_t OFF_EFFECT_UNIT = 0x34C;
static const size_t OFF_COUNTRY_UNIT_FLAGS_BEGIN = 0x2DC;
static const size_t OFF_COUNTRY_UNIT_FLAGS_END = 0x2E0;
static const size_t OFF_SUBUNIT_INDEX = 0x24;
static const size_t SUBUNIT_HAS_DEFINITION_VTABLE_SLOT = 9; // vtable +0x24

// FUN_007361F0: replace a false NO_UNIT_TECH row when the candidate
// technology only contains a not-yet-discovered invention that deactivates
// this unit. The invention's effect subobject starts at CInvention+0x70.
static const DWORD RVA_UNIT_TOOLTIP_FUTURE_INVENTION_DEACTIVATE_CALL = 0x33665C;
static const DWORD RVA_UNIT_TOOLTIP_INVENTION_OBSOLETE_CALL = 0x3367AD;
static const unsigned char UNIT_TOOLTIP_INVENTION_OBSOLETE_CALL_SIG[5] =
    { 0xE8, 0x5E, 0x84, 0xD0, 0xFF };
static const unsigned char UNIT_TOOLTIP_FUTURE_INVENTION_DEACTIVATE_CALL_SIG[5] =
    { 0xE8, 0xAF, 0x85, 0xD0, 0xFF };
static const DWORD RVA_UNIT_TOOLTIP_FUTURE_TECH_DEACTIVATE_CALL = 0x3368AD;
static const unsigned char UNIT_TOOLTIP_FUTURE_TECH_DEACTIVATE_CALL_SIG[5] =
    { 0xE8, 0x5E, 0x83, 0xD0, 0xFF };
static const DWORD RVA_UNIT_TOOLTIP_LOCALIZATION_FORMATTER = 0x0003EC10;
static const DWORD RVA_UNIT_TOOLTIP_WORLD_PTR = 0xE588E8;
static const DWORD RVA_UNIT_TOOLTIP_COUNTRIES_VECTOR = 0xE587E4;
static const DWORD RVA_UNIT_TOOLTIP_TECHNOLOGY_VECTOR = 0xE5EADC;
static const DWORD RVA_UNIT_TOOLTIP_CINVENTION_VTABLE = 0x00A000C0;
static const DWORD RVA_UNIT_TOOLTIP_CTECHNOLOGY_VTABLE = 0x00A00A84;
static const size_t OFF_UNIT_TOOLTIP_INVENTIONS = 0xC8;
static const size_t OFF_UNIT_TOOLTIP_INVENTION_EFFECT = 0x70;
static const size_t OFF_UNIT_TOOLTIP_INVENTION_NAME = 0x30;
static const size_t OFF_UNIT_TOOLTIP_EFFECT_DEACTIVATE_UNIT = 0x348;
static const size_t OFF_UNIT_TOOLTIP_COUNTRY_INVENTIONS = 0x4F8;
static const size_t OFF_UNIT_TOOLTIP_COUNTRY_TECH_STATUS = 0x2B8;
static const size_t OFF_UNIT_TOOLTIP_TECH_INDEX = 0x2E4;
static const size_t OFF_UNIT_TOOLTIP_TECH_NAME = 0x2C8;
static const size_t OFF_UNIT_TOOLTIP_WORLD_PLAYER_COUNTRY = 0xB60;
static const size_t MAX_UNIT_TOOLTIP_INVENTIONS = 4096;
struct UnitTooltipLocalizedGameString
{
    union { char buf[16]; char* ptr; } data;
    unsigned size;
    unsigned capacity;
};
static DWORD g_unitTooltipLocalizationFormatter = 0;
static bool g_futureDeactivationTooltipInstalled = false;

// The native routine receives (country, effect, scale) and ends in RET 0x0C.
// Scale is in thousandths (normally 1000) and must pass through unchanged.
typedef void(__stdcall* tApplyTechEffect)(void* country, void* effect, DWORD scale);
typedef char(__thiscall* tSubunitHasDefinition)(void* subunit);

static tApplyTechEffect g_applyTechEffectOriginal = 0;
static bool g_unitDeactivationFixInstalled = false;
__declspec(align(16)) static unsigned char g_applyTechEffectTrampoline[32];
static bool g_unitDeactivationTooltipFixInstalled = false;
static bool g_unitDeactivationDisableLabelFixInstalled = false;
static void* g_tooltipUnitEnableTrampoline = 0;
static void* g_tooltipAfterUnitEnable = 0;
__declspec(align(16)) static unsigned char g_tooltipUnitEnableTrampolineStorage[32];

__declspec(naked) static void TooltipUnitEnableGate()
{
    __asm {
        pushfd
        pushad
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 348h]
        cmp edx, dword ptr [eax + 34Ch]
        jne keep_enable_row
        popad
        popfd
        jmp dword ptr [g_tooltipAfterUnitEnable]
    keep_enable_row:
        popad
        popfd
        jmp dword ptr [g_tooltipUnitEnableTrampoline]
    }
}

static bool SubunitHasDefinition(void* subunit)
{
    if (!subunit)
        return false;

    void** vtable = *(void***)subunit;
    if (!vtable || !vtable[SUBUNIT_HAS_DEFINITION_VTABLE_SLOT])
        return false;

    tSubunitHasDefinition hasDefinition =
        (tSubunitHasDefinition)vtable[SUBUNIT_HAS_DEFINITION_VTABLE_SLOT];
    return hasDefinition(subunit) != 0;
}

static void __stdcall ApplyTechEffectWithUnitDeactivationFix(
    void* country, void* effect, DWORD scale)
{
    g_applyTechEffectOriginal(country, effect, scale);

    if (!country || !effect)
        return;

    void* disableUnit = *(void**)((char*)effect + OFF_EFFECT_DISABLE_UNIT);
    void* affectedUnit = *(void**)((char*)effect + OFF_EFFECT_UNIT);
    if (!SubunitHasDefinition(disableUnit) || !SubunitHasDefinition(affectedUnit))
        return;

    char* countryBytes = (char*)country;
    unsigned char* flagsBegin =
        *(unsigned char**)(countryBytes + OFF_COUNTRY_UNIT_FLAGS_BEGIN);
    unsigned char* flagsEnd =
        *(unsigned char**)(countryBytes + OFF_COUNTRY_UNIT_FLAGS_END);
    // The first slot identifies the unit being deactivated; the second is the native activation target.
    const int unitIndex = *(int*)((char*)disableUnit + OFF_SUBUNIT_INDEX);
    if (!flagsBegin || !flagsEnd || unitIndex < 0)
        return;

    const uintptr_t beginAddress = (uintptr_t)flagsBegin;
    const uintptr_t endAddress = (uintptr_t)flagsEnd;
    if (endAddress <= beginAddress ||
        (uintptr_t)unitIndex >= endAddress - beginAddress)
        return;

    // The native function uses the second slot as its activation target. Reapply deactivation to the first-slot unit after native processing.
    flagsBegin[unitIndex] = 0;
}

static bool InstallUnitDeactivationDisableLabelFix()
{
    if (g_unitDeactivationDisableLabelFixInstalled)
        return true;

    unsigned char* site = (unsigned char*)(g_base + RVA_TOOLTIP_DISABLE_UNIT_NAME_LOAD);
    if (memcmp(site, TOOLTIP_DISABLE_UNIT_NAME_LOAD_SIG,
            sizeof(TOOLTIP_DISABLE_UNIT_NAME_LOAD_SIG)) != 0)
    {
        return false;
    }

    DWORD oldProtect = 0;
    if (!VirtualProtect(site + 2, 1, PAGE_EXECUTE_READWRITE, &oldProtect))
    {
        return false;
    }

    // Change [effect + 0x34C] to [effect + 0x348] for the DISABLE row label only.
    site[2] = 0x48;
    FlushInstructionCache(GetCurrentProcess(), site, sizeof(TOOLTIP_DISABLE_UNIT_NAME_LOAD_SIG));
    DWORD ignoredProtect = 0;
    VirtualProtect(site + 2, 1, oldProtect, &ignoredProtect);

    g_unitDeactivationDisableLabelFixInstalled = true;
    return true;
}
static bool InstallUnitDeactivationTooltipFix()
{
    const bool disableLabelOk = InstallUnitDeactivationDisableLabelFix();

    if (g_unitDeactivationTooltipFixInstalled)
        return disableLabelOk;

    g_tooltipAfterUnitEnable = (void*)(g_base + RVA_TOOLTIP_AFTER_UNIT_ENABLE);
    void* trampoline = 0;
    if (!StealToTrampoline(RVA_TOOLTIP_UNIT_ENABLE_GATE,
            sizeof(TOOLTIP_UNIT_ENABLE_GATE_SIG),
            g_tooltipUnitEnableTrampolineStorage,
            sizeof(g_tooltipUnitEnableTrampolineStorage),
            TOOLTIP_UNIT_ENABLE_GATE_SIG, (void*)&TooltipUnitEnableGate,
            &trampoline, "UnitDeactivationTooltip", true))
    {
        return false;
    }

    g_tooltipUnitEnableTrampoline = trampoline;
    g_unitDeactivationTooltipFixInstalled = true;
    return disableLabelOk;
}

static bool ReadUnitTooltipGameStringObject(void* object, size_t offset, void** outputObject)
{
    if (!object || !outputObject) return false;
    char* field = (char*)object + offset;
    const unsigned int size = *(unsigned int*)(field + 0x10);
    const unsigned int capacity = *(unsigned int*)(field + 0x14);
    if (!size || size > 512 || capacity < size || capacity > 0x1000000) return false;
    const char* data = capacity < 16 ? field : *(const char**)field;
    if (!data) return false;
    *outputObject = field;
    return true;
}

static bool ReadUnitTooltipGameStringText(void* object, size_t offset,
    char* output, size_t outputCapacity)
{
    if (!object || !output || outputCapacity < 2) return false;
    char* field = (char*)object + offset;
    const unsigned int size = *(unsigned int*)(field + 0x10);
    const unsigned int capacity = *(unsigned int*)(field + 0x14);
    if (!size || size >= outputCapacity || size > 512 || capacity < size || capacity > 0x1000000)
        return false;
    const char* data = capacity < 16 ? field : *(const char**)field;
    if (!data) return false;
    memcpy(output, data, size);
    output[size] = 0;
    return true;
}
static void* GetUnitTooltipCountry()
{
    void* world = *(void**)(g_base + RVA_UNIT_TOOLTIP_WORLD_PTR);
    if (!world) return 0;
    const int index = *(int*)((char*)world + OFF_UNIT_TOOLTIP_WORLD_PLAYER_COUNTRY);
    if (index < 0) return 0;
    char* manager = *(char**)(g_base + RVA_UNIT_TOOLTIP_COUNTRIES_VECTOR);
    if (!manager) return 0;
    void** begin = *(void***)(manager + 4);
    void** end = *(void***)(manager + 8);
    if (!begin || !end || end < begin || index >= end - begin) return 0;
    return begin[index];
}

static bool UnitTooltipCountryHasInvention(void* country, void* invention)
{
    if (!country || !invention) return false;
    void* node = *(void**)((char*)country + OFF_UNIT_TOOLTIP_COUNTRY_INVENTIONS);
    for (size_t i = 0; node && i < MAX_UNIT_TOOLTIP_INVENTIONS; ++i)
    {
        if (*(void**)node == invention) return true;
        node = *(void**)((char*)node + 8);
    }
    return false;
}

static int UnitTooltipSubunitIndex(void* unit, bool* valid)
{
    if (valid) *valid = false;
    if (!unit) return -1;
    __try
    {
        void** vtable = *(void***)unit;
        if (!vtable || !vtable[SUBUNIT_HAS_DEFINITION_VTABLE_SLOT] ||
            !SubunitHasDefinition(unit))
            return -1;
        int index = *(int*)((char*)unit + OFF_SUBUNIT_INDEX);
        if (valid) *valid = true;
        return index;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return -1;
    }
}

static bool FindPendingUnitDeactivationInvention(void* candidate, void* unit,
    void* country, void** inventionName)
{
    if (!candidate || !unit || !country || !inventionName)
        return false;
    if (*(void***)candidate != (void**)(g_base + RVA_UNIT_TOOLTIP_CTECHNOLOGY_VTABLE))
        return false;
    *inventionName = 0;
    void* node = *(void**)((char*)candidate + OFF_UNIT_TOOLTIP_INVENTIONS);
    for (size_t i = 0; node && i < MAX_UNIT_TOOLTIP_INVENTIONS; ++i)
    {
        void* invention = *(void**)node;
        void* next = *(void**)((char*)node + 8);
        if (invention && *(void***)invention ==
                (void**)(g_base + RVA_UNIT_TOOLTIP_CINVENTION_VTABLE))
        {
            void* effect = (char*)invention + OFF_UNIT_TOOLTIP_INVENTION_EFFECT;
            if (*(void***)effect == (void**)(g_base + RVA_UNIT_TOOLTIP_CTECHNOLOGY_VTABLE))
            {
                void* deactivateUnit = *(void**)((char*)effect + OFF_UNIT_TOOLTIP_EFFECT_DEACTIVATE_UNIT);
                bool unitMatch = deactivateUnit == unit;
                if (!unitMatch && deactivateUnit)
                {
                    bool disableIndexValid = false;
                    bool selectedIndexValid = false;
                    int disableIndex = UnitTooltipSubunitIndex(deactivateUnit, &disableIndexValid);
                    int selectedIndex = UnitTooltipSubunitIndex(unit, &selectedIndexValid);
                    unitMatch = disableIndexValid && selectedIndexValid && disableIndex == selectedIndex;
                }
                if (unitMatch && !UnitTooltipCountryHasInvention(country, invention))
                {
                    if (ReadUnitTooltipGameStringObject(invention, OFF_UNIT_TOOLTIP_INVENTION_NAME,
                            inventionName))
                    {
                        return true;
                    }
                }
            }
        }
        node = next;
    }
    return false;
}
static bool FindInventionForNativeTechTooltip(void* candidate, void* unit,
    void* country, bool obsolete, void** inventionName)
{
    if (!candidate || !unit || !country || !inventionName || !g_base)
        return false;
    *inventionName = 0;
    if (*(void***)candidate != (void**)(g_base + RVA_UNIT_TOOLTIP_CTECHNOLOGY_VTABLE))
        return false;

    void* node = *(void**)((char*)candidate + OFF_UNIT_TOOLTIP_INVENTIONS);
    for (size_t i = 0; node && i < MAX_UNIT_TOOLTIP_INVENTIONS; ++i)
    {
        void* invention = 0;
        void* next = 0;
        bool match = false;
        bool acquired = false;
        __try
        {
            invention = *(void**)node;
            next = *(void**)((char*)node + 8);
            if (invention && *(void***)invention ==
                    (void**)(g_base + RVA_UNIT_TOOLTIP_CINVENTION_VTABLE))
            {
                void* effect = (char*)invention + OFF_UNIT_TOOLTIP_INVENTION_EFFECT;
                if (*(void***)effect == (void**)(g_base + RVA_UNIT_TOOLTIP_CTECHNOLOGY_VTABLE))
                {
                    size_t slot = OFF_UNIT_TOOLTIP_EFFECT_DEACTIVATE_UNIT + (obsolete ? 0 : 4);
                    void* effectUnit = *(void**)((char*)effect + slot);
                    match = effectUnit == unit;
                    if (!match && effectUnit)
                    {
                        bool effectIndexValid = false;
                        bool selectedIndexValid = false;
                        int effectIndex = UnitTooltipSubunitIndex(effectUnit, &effectIndexValid);
                        int selectedIndex = UnitTooltipSubunitIndex(unit, &selectedIndexValid);
                        match = effectIndexValid && selectedIndexValid && effectIndex == selectedIndex;
                    }
                    acquired = UnitTooltipCountryHasInvention(country, invention);
                }
            }
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            node = next;
            continue;
        }
        if (match && acquired == obsolete &&
            ReadUnitTooltipGameStringObject(invention, OFF_UNIT_TOOLTIP_INVENTION_NAME, inventionName))
            return true;
        node = next;
    }
    return false;
}
static bool FindPendingUnitDeactivationTechnology(void* unit, void* country,
    void** technologyName)
{
    if (!unit || !country || !technologyName || !g_base)
        return false;
    *technologyName = 0;

    void* unitManager = *(void**)((char*)country + 0xBCC);
    void* vector = *(void**)(g_base + RVA_UNIT_TOOLTIP_TECHNOLOGY_VECTOR);
    if (!unitManager || !vector)
        return false;

    void** vectorFields = (void**)vector;
    void** begin = (void**)vectorFields[0];
    void** end = (void**)vectorFields[1];
    if (!begin || !end || (uintptr_t)end < (uintptr_t)begin)
        return false;
    uintptr_t bytes = (uintptr_t)end - (uintptr_t)begin;
    if ((bytes & 3) != 0 || bytes / sizeof(void*) > MAX_UNIT_TOOLTIP_INVENTIONS)
        return false;
    size_t count = bytes / sizeof(void*);
    int* techStatus = *(int**)((char*)unitManager + OFF_UNIT_TOOLTIP_COUNTRY_TECH_STATUS);
    if (!techStatus)
        return false;

    bool selectedIndexValid = false;
    int selectedIndex = UnitTooltipSubunitIndex(unit, &selectedIndexValid);
    if (!selectedIndexValid)
        return false;

    for (size_t i = 0; i < count; ++i)
    {
        void* candidate = begin[i];
        if (!candidate)
            continue;
        __try
        {
            if (*(void***)candidate != (void**)(g_base + RVA_UNIT_TOOLTIP_CTECHNOLOGY_VTABLE))
                continue;
            int techIndex = *(int*)((char*)candidate + OFF_UNIT_TOOLTIP_TECH_INDEX);
            if (techIndex < 0 || (size_t)techIndex >= count || techStatus[techIndex] != 0)
                continue;
            void* deactivateUnit = *(void**)((char*)candidate + OFF_UNIT_TOOLTIP_EFFECT_DEACTIVATE_UNIT);
            bool unitMatch = deactivateUnit == unit;
            if (!unitMatch && deactivateUnit)
            {
                bool disableIndexValid = false;
                int disableIndex = UnitTooltipSubunitIndex(deactivateUnit, &disableIndexValid);
                unitMatch = disableIndexValid && disableIndex == selectedIndex;
            }
            if (unitMatch && ReadUnitTooltipGameStringObject(candidate,
                    OFF_UNIT_TOOLTIP_TECH_NAME, technologyName))
                return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            continue;
        }
    }
    return false;
}
static void* CallUnitTooltipLocalizationFormatter(const char* templateKey, void* output,
    const char* firstKey, const char* firstValue, const char* secondKey, const char* secondValue)
{
    void* result = 0;
    __asm {
        push secondValue
        push secondKey
        push firstValue
        push firstKey
        push output
        mov ecx, templateKey
        call dword ptr [g_unitTooltipLocalizationFormatter]
        add esp, 14h
        mov result, eax
    }
    return result;
}

static void* FormatFutureUnitDeactivationBySource(void* output,
    const char* unitValue, void* sourceName, const char* sourceType)
{
    char sourceKey[128] = {};
    UnitTooltipLocalizedGameString localizedSource = {};
    bool sourceKeyValid = ReadUnitTooltipGameStringText(sourceName, 0,
        sourceKey, sizeof(sourceKey));
    bool localized = sourceKeyValid &&
        CoreLocalizeKeyToGameString(sourceKey, &localizedSource);
    if (localized)
    {
        void* formatted = CallUnitTooltipLocalizationFormatter(
            "UNIT_WILL_BE_DEACTIVATED_BY_SOURCE", output,
            "UNIT", unitValue, "SOURCE", (const char*)&localizedSource);
        CoreFreeGameString(&localizedSource);
        return formatted;
    }
    return CallUnitTooltipLocalizationFormatter(
        "UNIT_WILL_BE_DEACTIVATED_BY_SOURCE", output,
        "UNIT", unitValue, "SOURCE", (const char*)sourceName);
}
static void* FormatNativeTechTooltipWithInvention(void* output,
    const char* originalTemplate, const char* firstKey, const char* firstValue,
    const char* secondKey, const char* secondValue, void* inventionName)
{
    char inventionKey[128] = {};
    UnitTooltipLocalizedGameString localizedInvention = {};
    bool keyValid = ReadUnitTooltipGameStringText(inventionName, 0,
        inventionKey, sizeof(inventionKey));
    bool localized = keyValid &&
        CoreLocalizeKeyToGameString(inventionKey, &localizedInvention);
    const char* techValue = localized ?
        (const char*)&localizedInvention : (const char*)inventionName;
    if (firstKey && _stricmp(firstKey, "TECH") == 0)
        firstValue = techValue;
    else if (secondKey && _stricmp(secondKey, "TECH") == 0)
        secondValue = techValue;
    else
    {
        if (localized) CoreFreeGameString(&localizedInvention);
        return CallUnitTooltipLocalizationFormatter(originalTemplate, output,
            firstKey, firstValue, secondKey, secondValue);
    }
    void* formatted = CallUnitTooltipLocalizationFormatter(originalTemplate, output,
        firstKey, firstValue, secondKey, secondValue);
    if (localized)
        CoreFreeGameString(&localizedInvention);
    return formatted;
}
static bool ReadTooltipUnitArgument(const char* firstKey, const char* firstValue,
    const char* secondKey, const char* secondValue, char* unitName,
    size_t unitNameCapacity, const char** unitValue)
{
    if (unitValue) *unitValue = 0;
    const char* value = 0;
    __try
    {
        if (firstKey && _stricmp(firstKey, "UNIT") == 0) value = firstValue;
        else if (secondKey && _stricmp(secondKey, "UNIT") == 0) value = secondValue;
        if (!value || !ReadUnitTooltipGameStringText((void*)value, 0, unitName, unitNameCapacity))
            return false;
        if (unitValue) *unitValue = value;
        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        if (unitName && unitNameCapacity) unitName[0] = 0;
        return false;
    }
}

static bool ResolveTooltipUnitDefinition(const char* unitName, void** unit)
{
    if (!unitName || !*unitName || !unit)
        return false;
    *unit = 0;
    char normalized[128] = {};
    size_t i = 0;
    for (; i + 1 < sizeof(normalized) && unitName[i]; ++i)
    {
        unsigned char c = (unsigned char)unitName[i];
        normalized[i] = (char)((c >= 'A' && c <= 'Z') ? c + ('a' - 'A') : c);
    }
    normalized[i] = 0;
    if (ResolveUnitDefinitionByName(normalized, unit))
        return true;
    if (_stricmp(normalized, unitName) != 0 && ResolveUnitDefinitionByName(unitName, unit))
        return true;
    return false;
}

static void* __cdecl FutureUnitDeactivationFormatterHelper(void* originalStack,
    const char* originalTemplate, void* candidate, int sourceKind)
{
    void* output = *(void**)((char*)originalStack + 4);
    const char* firstKey = *(const char**)((char*)originalStack + 8);
    const char* firstValue = *(const char**)((char*)originalStack + 0x0C);
    const char* secondKey = *(const char**)((char*)originalStack + 0x10);
    const char* secondValue = *(const char**)((char*)originalStack + 0x14);
    void* inventionName = 0;
    bool found = false;
    void* unit = 0;
    void* country = 0;
    char unitName[128] = {};
    const char* unitValue = 0;
    bool unitNameValid = false;
    __try
    {
        unitNameValid = ReadTooltipUnitArgument(firstKey, firstValue, secondKey,
            secondValue, unitName, sizeof(unitName), &unitValue);
        if (unitNameValid)
            ResolveTooltipUnitDefinition(unitName, &unit);
        country = GetUnitTooltipCountry();
        if (sourceKind != 2)
            found = FindPendingUnitDeactivationInvention(candidate, unit, country,
                &inventionName);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        found = false;
    }

    if (sourceKind != 2 && found)
        return FormatFutureUnitDeactivationBySource(output, unitValue, inventionName, "invention");

    if (sourceKind == 1 && originalTemplate && _stricmp(originalTemplate, "NO_UNIT_TECH") == 0)
    {
        void* inventionNameForUnlock = 0;
        if (FindInventionForNativeTechTooltip(candidate, unit, country, false,
                &inventionNameForUnlock))
            return FormatNativeTechTooltipWithInvention(output, originalTemplate,
                firstKey, firstValue, secondKey, secondValue, inventionNameForUnlock);
    }
    if (sourceKind == 2 && originalTemplate && _stricmp(originalTemplate, "OBSOLETE_UNIT_TECH") == 0)
    {
        void* inventionNameForObsolete = 0;
        if (FindInventionForNativeTechTooltip(candidate, unit, country, true,
                &inventionNameForObsolete))
            return FormatNativeTechTooltipWithInvention(output, originalTemplate,
                firstKey, firstValue, secondKey, secondValue, inventionNameForObsolete);
    }
    void* technologyName = 0;
    if (sourceKind != 2 && FindPendingUnitDeactivationTechnology(unit, country, &technologyName))
        return FormatFutureUnitDeactivationBySource(output, unitValue, technologyName, "technology");

    return CallUnitTooltipLocalizationFormatter(originalTemplate, output,
        firstKey, firstValue, secondKey, secondValue);
}
__declspec(naked) static void FutureUnitDeactivationFormatterCall()
{
    __asm {
        mov eax, esp
        push 0
        push esi
        push ecx
        push eax
        call FutureUnitDeactivationFormatterHelper
        add esp, 10h
        ret
    }
}
__declspec(naked) static void InventionActivationFormatterCall()
{
    __asm {
        mov eax, esp
        push 1
        push esi
        push ecx
        push eax
        call FutureUnitDeactivationFormatterHelper
        add esp, 10h
        ret
    }
}
__declspec(naked) static void InventionObsoleteFormatterCall()
{
    __asm {
        mov eax, esp
        push 2
        push esi
        push ecx
        push eax
        call FutureUnitDeactivationFormatterHelper
        add esp, 10h
        ret
    }
}
static bool InstallFutureDeactivationTooltipCall(DWORD rva, const unsigned char expected[5], void* replacement, const char* label)
{
    unsigned char* site = (unsigned char*)(g_base + rva);
    if (memcmp(site, expected, 5) != 0)
    {
        return false;
    }
    DWORD oldProtect = 0;
    if (!VirtualProtect(site + 1, sizeof(DWORD), PAGE_EXECUTE_READWRITE, &oldProtect))
    {
        return false;
    }
    const LONGLONG delta = (LONGLONG)(DWORD_PTR)replacement -
        (LONGLONG)(DWORD_PTR)(site + 5);
    if (delta < -2147483647LL - 1 || delta > 2147483647LL)
    {
        DWORD ignored = 0;
        VirtualProtect(site + 1, sizeof(DWORD), oldProtect, &ignored);
        return false;
    }
    *(DWORD*)(site + 1) = (DWORD)(LONG)delta;
    FlushInstructionCache(GetCurrentProcess(), site, 5);
    DWORD ignoredProtect = 0;
    VirtualProtect(site + 1, sizeof(DWORD), oldProtect, &ignoredProtect);
    return true;
}

static bool InstallFutureUnitDeactivationTooltipFix()
{
    if (g_futureDeactivationTooltipInstalled) return true;
    g_unitTooltipLocalizationFormatter = g_base + RVA_UNIT_TOOLTIP_LOCALIZATION_FORMATTER;
    const bool inventionCall = InstallFutureDeactivationTooltipCall(
        RVA_UNIT_TOOLTIP_FUTURE_INVENTION_DEACTIVATE_CALL,
        UNIT_TOOLTIP_FUTURE_INVENTION_DEACTIVATE_CALL_SIG, (void*)&InventionActivationFormatterCall, "invention NO_UNIT_TECH");
    const bool technologyCall = InstallFutureDeactivationTooltipCall(
        RVA_UNIT_TOOLTIP_FUTURE_TECH_DEACTIVATE_CALL,
        UNIT_TOOLTIP_FUTURE_TECH_DEACTIVATE_CALL_SIG, (void*)&FutureUnitDeactivationFormatterCall, "technology NO_UNIT_TECH");
    const bool inventionObsoleteCall = InstallFutureDeactivationTooltipCall(
        RVA_UNIT_TOOLTIP_INVENTION_OBSOLETE_CALL,
        UNIT_TOOLTIP_INVENTION_OBSOLETE_CALL_SIG, (void*)&InventionObsoleteFormatterCall, "invention OBSOLETE_UNIT_TECH");
    g_futureDeactivationTooltipInstalled = inventionCall && technologyCall && inventionObsoleteCall;
    return g_futureDeactivationTooltipInstalled;
}
bool InstallUnitDeactivationFix()
{
    bool applyEffectOk = g_unitDeactivationFixInstalled;
    if (!applyEffectOk)
    {
        void* original = 0;
        if (StealToTrampoline(RVA_APPLY_TECH_EFFECT,
                sizeof(APPLY_TECH_EFFECT_PROLOGUE), g_applyTechEffectTrampoline,
                sizeof(g_applyTechEffectTrampoline), APPLY_TECH_EFFECT_PROLOGUE,
                (void*)&ApplyTechEffectWithUnitDeactivationFix, &original,
                "UnitDeactivationTechEffect", true))
        {
            g_applyTechEffectOriginal = (tApplyTechEffect)original;
            g_unitDeactivationFixInstalled = true;
            applyEffectOk = true;
        }
    }

    const bool tooltipOk = InstallUnitDeactivationTooltipFix();
    const bool futureDeactivationTooltipOk = InstallFutureUnitDeactivationTooltipFix();
    return applyEffectOk && tooltipOk && futureDeactivationTooltipOk;
}