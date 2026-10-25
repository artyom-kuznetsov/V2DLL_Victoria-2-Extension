#include <windows.h>
#include <string.h>
#include "CCore_Shared.h"

// Victoria II 3.04 (Win32): CSubUnitDefinition::read_property and
// CConstructUnitCommand::execute.
static const DWORD RVA_SUBUNIT_READ_PROPERTY = 0x1BA7E0;
static const DWORD RVA_CONSTRUCT_UNIT_EXECUTE = 0x17D2F0;
static const DWORD RVA_CANDIDATE_ELIGIBILITY = 0x114030;
// FUN_005141D0 (can-build predicate). Its entry (first 26 bytes), the free-regiments call and the success
// exit (RVA 0x114284) are signature-checked by the TGCX submod, so the entry is NOT patched: the filter sits at
// 0x114269 (common point of every success path: "cmp [ecx+10Ch],0", ECX = province, EDI = POP).
static const DWORD RVA_CAN_BUILD_GATE = 0x114269;
static const DWORD RVA_CAN_BUILD_GATE_RESUME = 0x114270;   // je success_exit
static const DWORD RVA_CAN_BUILD_FAIL = 0x1142FD;          // pop edi / pop esi / xor al,al ... ret 8
static const DWORD RVA_COUNTRIES_VECTOR = 0xE587E4;
static const DWORD RVA_UNIT_DEFINITION_TOOLTIP = 0x1BBAA0; // FUN_005BBAA0
static const DWORD RVA_STD_STRING_ASSIGN = 0x009350;
static const DWORD RVA_FMT_FROM_KEY = 0x5A8EE0;
static const DWORD RVA_FMT_FINISH = 0x5A9880;
static const DWORD RVA_FMT_FREE = 0x5A9740;
static const DWORD RVA_LOC_SINGLETON = 0x075500;

static const int OFF_PARSER_KEY_TEXT = 0x24;
static const int OFF_PARSER_VALUE_TOKEN = 0x228;
static const int TOKEN_YES = 0x29F;
static const int OFF_COMMAND_UNIT_DEF = 0x60;
static const int OFF_COMMAND_SOURCE_POP = 0x64;
static const int OFF_POP_PROVINCE = 0x64;
static const int OFF_POP_CULTURE = 0x6C;
// CProvince::state is at +0x188 (also used by the POP move/merge hooks).
static const int OFF_PROVINCE_STATE = 0x188;
static const int OFF_STATE_IS_COLONIAL = 0x84;
static const int OFF_PROVINCE_OWNER = 0x12C;
static const int OFF_COUNTRY_ACCEPTED_CULTURES = 0xE54;
static const int OFF_COUNTRY_PRIMARY_CULTURE = 0xE64;

typedef void(__thiscall* tSubunitReadProperty)(void* self, void* ctx, int keyId);
typedef void(__thiscall* tConstructUnitExecute)(void* self);
typedef void*(__thiscall* tUnitDefinitionTooltip)(void* self, void* outString,
    uintptr_t a1, uintptr_t a2, uintptr_t a3);
typedef void*(__thiscall* tStdStringAssign)(void* self, const char* text, unsigned length);
typedef void*(__thiscall* tStdStringAppendChars)(void* self, const char* source,
    unsigned length);
static tSubunitReadProperty g_readProperty = 0;
static tConstructUnitExecute g_constructExecute = 0;
static tUnitDefinitionTooltip g_unitDefinitionTooltip = 0;
static void* g_candidateEligibility = 0;
static DWORD g_canBuildGateResume = 0;
static DWORD g_canBuildFail = 0;
__declspec(align(16)) static unsigned char g_readPropertyTramp[32];
__declspec(align(16)) static unsigned char g_constructExecuteTramp[32];
__declspec(align(16)) static unsigned char g_unitTooltipTramp[32];
__declspec(align(16)) static unsigned char g_candidateEligibilityTramp[32];
static bool g_installed = false;
static bool g_tooltipInstalled = false;
static bool g_extendedRecruitmentRulesEnabled = false;
static volatile LONG g_tooltipLocalizationErrorLogged = 0;
static volatile LONG g_tooltipAppendErrorLogged = 0;

struct UnitCultureRule
{
    char name[64];
    BYTE flags;
};

struct UnitGameString
{
    union { char buffer[16]; char* pointer; } data;
    unsigned size;
    unsigned capacity;
};

enum
{
    RULE_PRIMARY_ONLY = 1,
    RULE_ACCEPTED_ONLY = 2,
    RULE_NON_ACCEPTED_ONLY = 4,
    RULE_NON_COLONIAL_ONLY = 8,
    RULE_COLONIAL_ONLY = 16,
    MAX_UNIT_RULES = 256
};

static UnitCultureRule g_rules[MAX_UNIT_RULES];
static int g_ruleCount = 0;

static bool ReadGameString(const void* object, int offset, char* out, size_t cap)
{
    if (!object || !out || cap < 2)
        return false;
    const char* member = (const char*)object + offset;
    const int capacity = *(const int*)(member + 0x14);
    const int length = *(const int*)(member + 0x10);
    if (length < 0 || length >= (int)cap || length > 63)
        return false;
    const char* data = capacity < 0x10 ? member : *(const char**)member;
    if (!data)
        return false;
    memcpy(out, data, length);
    out[length] = 0;
    return true;
}

static BYTE UnitRuleFlags(const void* unit)
{
    char name[64];
    if (!ReadGameString(unit, 8, name, sizeof(name)))
        return 0;
    for (int i = 0; i < g_ruleCount; ++i)
        if (_stricmp(g_rules[i].name, name) == 0)
            return g_rules[i].flags;
    return 0;
}

static void UnitGameStringSet(UnitGameString* value, const char* text)
{
    memset(value, 0, sizeof(*value));
    value->capacity = 15;
    ((tStdStringAssign)(g_base + RVA_STD_STRING_ASSIGN))(
        value, text, (unsigned)strlen(text));
}

static const char* g_unitRuleTooltipKeys[5] = {
    "PRIMARY_CULTURE_ONLY_RECRUITMENT",
    "ACCEPTED_CULTURE_ONLY_RECRUITMENT",
    "NON_ACCEPTED_ONLY_RECRUITMENT",
    "COLONIAL_ONLY_RECRUITMENT",
    "NON_COLONIAL_ONLY_RECRUITMENT"
};
static char g_unitRuleTooltipText[5][256];
static unsigned g_unitRuleTooltipLength[5] = {};
static bool g_unitRuleTooltipReady[5] = {};

// Resolve a localization key through the same game formatter used by the
// move_pop tooltip, so the line follows the active game language.
static bool UnitLocalizeTooltipKey(const char* key, char* output, unsigned outputCapacity,
    unsigned* outputLength)
{
    UnitGameString keyString;
    UnitGameString gameOutput;
    unsigned char formatter[0x60];
    bool formatterStarted = false;
    memset(&keyString, 0, sizeof(keyString));
    memset(&gameOutput, 0, sizeof(gameOutput));
    gameOutput.capacity = 15;
    if (output && outputCapacity)
        output[0] = 0;
    if (outputLength)
        *outputLength = 0;
    memset(formatter, 0, sizeof(formatter));

    __try
    {
        UnitGameStringSet(&keyString, key);
        UnitGameString* keyPtr = &keyString;
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
            // Keep temporary strings allocated by the game runtime alive.
            // Their allocator ownership is not compatible with freeing them
            // from this DLL's tooltip path (heap corruption on hover).
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

        // FMT_FREE releases the formatter's result storage in this path.
        // Copy the localized bytes while the formatter and result are alive.
        const char* localizedData = gameOutput.capacity < 16
            ? gameOutput.data.buffer : gameOutput.data.pointer;
        bool copied = localizedData && gameOutput.size > 0 && output && outputLength &&
            gameOutput.size < outputCapacity;
        if (copied)
        {
            memcpy(output, localizedData, gameOutput.size);
            output[gameOutput.size] = 0;
            *outputLength = gameOutput.size;
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
        if (InterlockedCompareExchange(&g_tooltipLocalizationErrorLogged, 1, 0) == 0)
            Log("UnitRecruitmentTooltip: localization failed for key '%s' (code=%08X)",
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

static bool EnsureUnitRuleTooltipText(int index)
{
    if (index < 0 || index >= 5)
        return false;
    if (!g_unitRuleTooltipReady[index])
    {
        g_unitRuleTooltipReady[index] =
            UnitLocalizeTooltipKey(g_unitRuleTooltipKeys[index], g_unitRuleTooltipText[index],
                sizeof(g_unitRuleTooltipText[index]), &g_unitRuleTooltipLength[index]);
    }
    return g_unitRuleTooltipReady[index];
}

// Cache localized rule strings once per process in DLL-owned buffers.
static bool UnitTooltipInsertRuleLines(void* outString, BYTE flags)
{
    static const BYTE bits[] = {
        RULE_PRIMARY_ONLY,
        RULE_ACCEPTED_ONLY,
        RULE_NON_ACCEPTED_ONLY,
        RULE_COLONIAL_ONLY,
        RULE_NON_COLONIAL_ONLY
    };
    int lineIndices[5];
    int lineCount = 0;
    UnitGameString* original = (UnitGameString*)outString;
    char combined[8192];
    unsigned combinedSize = 0;

    for (int i = 0; i < 5; ++i)
    {
        bool enabled = g_extendedRecruitmentRulesEnabled;
        if (enabled && (flags & bits[i]) && EnsureUnitRuleTooltipText(i))
            lineIndices[lineCount++] = i;
    }
    if (!lineCount)
        return false;

    const char* originalData = original->capacity < 16
        ? original->data.buffer : original->data.pointer;
    if (!originalData)
        goto cleanup;
    for (int i = 0; i < lineCount; ++i)
    {
        const int index = lineIndices[i];
        const char* line = g_unitRuleTooltipText[index];
        const unsigned lineLength = g_unitRuleTooltipLength[index];
        if (!lineLength || lineLength > sizeof(combined) - combinedSize - 1)
            goto cleanup;
        memcpy(combined + combinedSize, line, lineLength);
        combinedSize += lineLength;
        combined[combinedSize++] = '\n';
    }
    if (original->size > sizeof(combined) - combinedSize)
        goto cleanup;
    memcpy(combined + combinedSize, originalData, original->size);
    combinedSize += original->size;
    ((tStdStringAssign)(g_base + RVA_STD_STRING_ASSIGN))(
        outString, combined, combinedSize);
    return true;

cleanup:
    return false;
}

static void* __fastcall UnitDefinitionTooltipHook(void* self, void*, void* outString,
    uintptr_t a1, uintptr_t a2, uintptr_t a3)
{
    void* result = g_unitDefinitionTooltip(self, outString, a1, a2, a3);
    if (!outString || !self)
        return result;

    BYTE flags = 0;
    __try
    {
        flags = UnitRuleFlags(self);
        UnitTooltipInsertRuleLines(outString, flags);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        if (InterlockedCompareExchange(&g_tooltipAppendErrorLogged, 1, 0) == 0)
            Log("UnitRecruitmentTooltip: failed to append rule line (code=%08X flags=%02X)",
                (unsigned)GetExceptionCode(), flags);
    }
    return result;
}

static void SaveRule(const void* unit, BYTE bit, bool enabled)
{
    char name[64];
    if (!ReadGameString(unit, 8, name, sizeof(name)))
        return;
    int i = 0;
    while (i < g_ruleCount && _stricmp(g_rules[i].name, name) != 0)
        ++i;
    if (i == g_ruleCount)
    {
        if (g_ruleCount >= MAX_UNIT_RULES)
        {
            Log("ExtendedUnitRecruitmentRules: rule table full; ignored unit '%s'", name);
            return;
        }
        strcpy_s(g_rules[i].name, name);
        g_rules[i].flags = 0;
        ++g_ruleCount;
    }
    if (enabled)
        g_rules[i].flags |= bit;
    else
        g_rules[i].flags &= (BYTE)~bit;
    Log("ExtendedUnitRecruitmentRules: parsed unit='%s' bit=%02X enabled=%d flags=%02X",
        g_rules[i].name, bit, (int)enabled, g_rules[i].flags);
}

static bool CultureInList(void* list, void* culture)
{
    // Country culture lists are linked nodes {value, prev, next}.
    int guard = 0;
    for (char* node = (char*)list; node && guard++ < 4096; node = *(char**)(node + 8))
        if (*(void**)node == culture)
            return true;
    return false;
}

static bool GetPopCultureStatus(void* pop, bool* isPrimary, bool* isAccepted)
{
    if (!pop || !isPrimary || !isAccepted)
        return false;

    __try
    {
        char* province = *(char**)((char*)pop + OFF_POP_PROVINCE);
        if (!province)
            return false;
        int countryId = *(int*)(province + OFF_PROVINCE_OWNER);
        char* mgr = *(char**)(g_base + RVA_COUNTRIES_VECTOR);
        if (!mgr || countryId <= 0)
            return false;
        char** countriesBegin = *(char***)(mgr + 4);
        char** countriesEnd = *(char***)(mgr + 8);
        if (!countriesBegin || countryId >= (int)(countriesEnd - countriesBegin))
            return false;
        char* country = countriesBegin[countryId];
        if (!country)
            return false;

        void* culture = *(void**)((char*)pop + OFF_POP_CULTURE);
        void* primary = *(void**)(country + OFF_COUNTRY_PRIMARY_CULTURE);
        *isPrimary = culture && culture == primary;
        // Keep the three custom categories disjoint. The native
        // primary_culture = yes rule already means primary plus accepted;
        // accepted_culture_only here means accepted, non-primary cultures.
        *isAccepted = culture && !*isPrimary &&
            CultureInList(*(void**)(country + OFF_COUNTRY_ACCEPTED_CULTURES), culture);
        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

static bool GetPopProvinceColonialStatus(void* pop, bool* isColonial)
{
    if (!pop || !isColonial)
        return false;
    __try
    {
        char* province = *(char**)((char*)pop + OFF_POP_PROVINCE);
        if (!province)
            return false;
        char* state = *(char**)(province + OFF_PROVINCE_STATE);
        if (!state)
            return false;
        *isColonial = *(int*)(state + OFF_STATE_IS_COLONIAL) > 0;
        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

static bool PopMeetsExtendedUnitRecruitmentRules(void* unit, void* pop)
{
    if (!unit)
        return true;
    __try
    {
        BYTE flags = UnitRuleFlags(unit);
        bool primaryOnly = (flags & RULE_PRIMARY_ONLY) != 0;
        bool acceptedOnly = (flags & RULE_ACCEPTED_ONLY) != 0;
        bool nonAcceptedOnly = (flags & RULE_NON_ACCEPTED_ONLY) != 0;
        bool cultureRestricted = g_extendedRecruitmentRulesEnabled &&
            (primaryOnly || acceptedOnly || nonAcceptedOnly);
        bool nonColonialOnly = (flags & RULE_NON_COLONIAL_ONLY) != 0;
        bool colonialOnly = (flags & RULE_COLONIAL_ONLY) != 0;
        bool colonialRestricted = g_extendedRecruitmentRulesEnabled &&
            (nonColonialOnly || colonialOnly);
        if (!cultureRestricted && !colonialRestricted)
            return true;

        // A custom culture restriction cannot be satisfied without knowing
        // which POP supplies the unit. Do not let commands with a null source
        // POP bypass the restriction.
        if (!pop)
        {
            Log("ExtendedUnitRecruitmentRules: blocked restricted unit without source POP");
            return false;
        }

        if (cultureRestricted)
        {
            bool primary = false, accepted = false;
            if (!GetPopCultureStatus(pop, &primary, &accepted))
                return false;
            if ((primaryOnly && !primary) || (acceptedOnly && !accepted) ||
                (nonAcceptedOnly && (primary || accepted)))
                return false;
        }

        if (colonialRestricted)
        {
            bool isColonial = false;
            if (!GetPopProvinceColonialStatus(pop, &isColonial))
                return false;
            if ((nonColonialOnly && isColonial) || (colonialOnly && !isColonial))
                return false;
        }
        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

static bool __cdecl RecruitmentPredicateAllows(void* unit, void* pop)
{
    return PopMeetsExtendedUnitRecruitmentRules(unit, pop);
}

// This earlier predicate drives candidate generation for the Army Build list.
// Its native ABI is ECX = unit, EAX = source POP, stack = country, province,
// and an optional failure-reason output pointer (callee removes 12 bytes).
__declspec(naked) static void CandidateEligibilityHook()
{
    __asm {
        push eax
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        sub esp, 8
        mov [ebp - 16], ecx

        push dword ptr [ebp + 20]   // optional failure-reason output
        push dword ptr [ebp + 16]   // province
        push dword ptr [ebp + 12]   // country
        mov ecx, [ebp - 16]
        mov eax, [ebp + 4]          // source POP
        call dword ptr [g_candidateEligibility]
        // The native predicate returns a bool in AL; EAX's upper bits are
        // unspecified on its failure paths.
        test al, al
        jz candidate_done

        push dword ptr [ebp + 4]
        push dword ptr [ebp - 16]
        call RecruitmentPredicateAllows
        add esp, 8

    candidate_done:
        add esp, 8
        pop edi
        pop esi
        pop ebx
        pop ebp
        add esp, 4
        ret 12
    }
}

// The native can-build predicate is also called while the Army Build list is
// assembled. It receives the unit in ECX, its source POP in EAX, then country
// and province as stack arguments. Every path that would return TRUE goes through
// "cmp [ecx+10Ch],0" at 0x514269 (ECX = province, EDI = source POP);
// there we veto the unit if the recruitment rules reject this POP, so invalid POPs
// never become visible as buildable province/unit entries (and the result is still
// correct when the native function is called directly, e.g. by the TGCX submod).
// ESI starts as the unit definition but the native land path replaces it with
// the number of regiments already linked to the POP. The original unit pointer
// is saved at [EBP-4] by the function's "push ecx" prologue.
__declspec(naked) static void CanBuildGateHook()
{
    __asm {
        push ecx
        push edi                    // source POP
        push dword ptr [ebp - 4]    // unit definition saved by native prologue
        call RecruitmentPredicateAllows
        add esp, 8
        test al, al
        pop ecx
        jz rejected
        cmp dword ptr [ecx + 0x10C], 0      // the instruction we replaced
        jmp dword ptr [g_canBuildGateResume]
    rejected:
        jmp dword ptr [g_canBuildFail]
    }
}

static void __fastcall SubunitReadPropertyHook(void* self, void*, void* ctx, int keyId)
{
    __try
    {
        const char* key = (const char*)ctx + OFF_PARSER_KEY_TEXT;
        int token = *(int*)((char*)ctx + OFF_PARSER_VALUE_TOKEN);
        BYTE bit = 0;
        if (strcmp(key, "primary_culture_only") == 0)
            bit = RULE_PRIMARY_ONLY;
        else if (strcmp(key, "accepted_culture_only") == 0)
            bit = RULE_ACCEPTED_ONLY;
        else if (strcmp(key, "non_accepted_only") == 0)
            bit = RULE_NON_ACCEPTED_ONLY;
        else if (strcmp(key, "non_colonial_only") == 0)
            bit = RULE_NON_COLONIAL_ONLY;
        else if (strcmp(key, "colonial_only") == 0)
            bit = RULE_COLONIAL_ONLY;
        if (bit)
        {
            SaveRule(self, bit, token == TOKEN_YES);
            return;
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        // Fall through to the vanilla parser for normal properties.
    }
    g_readProperty(self, ctx, keyId);
}

static void __fastcall ConstructUnitExecuteHook(void* self, void*)
{
    __try
    {
        void* unit = *(void**)((char*)self + OFF_COMMAND_UNIT_DEF);
        void* pop = *(void**)((char*)self + OFF_COMMAND_SOURCE_POP);
        if (!PopMeetsExtendedUnitRecruitmentRules(unit, pop))
        {
            Log("ExtendedUnitRecruitmentRules: blocked unit command by POP/province rule");
            return;
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        // Leave unknown command layouts to the original implementation.
    }
    g_constructExecute(self);
}

bool InstallExtendedUnitRecruitmentRules()
{
    if (g_installed)
        return true;
    g_extendedRecruitmentRulesEnabled = true;

    static const unsigned char PROLOGUE[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };
    void* original = 0;
    if (!StealToTrampoline(RVA_SUBUNIT_READ_PROPERTY, sizeof(PROLOGUE), g_readPropertyTramp,
            sizeof(g_readPropertyTramp), PROLOGUE, (void*)&SubunitReadPropertyHook,
            &original, "UnitCultureParser"))
    {
        Log("ExtendedUnitRecruitmentRules: failed to hook unit parser");
        return false;
    }
    g_readProperty = (tSubunitReadProperty)original;

    original = 0;
    if (!StealToTrampoline(RVA_CONSTRUCT_UNIT_EXECUTE, sizeof(PROLOGUE), g_constructExecuteTramp,
            sizeof(g_constructExecuteTramp), PROLOGUE, (void*)&ConstructUnitExecuteHook,
            &original, "ExtendedUnitRecruitmentRules"))
    {
        Log("ExtendedUnitRecruitmentRules: failed to hook unit command");
        return false;
    }
    g_constructExecute = (tConstructUnitExecute)original;

    static const unsigned char CANDIDATE_SIG[6] =
        { 0x55, 0x8B, 0xEC, 0x8B, 0x55, 0x08 };
    original = 0;
    if (!StealToTrampoline(RVA_CANDIDATE_ELIGIBILITY, sizeof(CANDIDATE_SIG),
            g_candidateEligibilityTramp, sizeof(g_candidateEligibilityTramp),
            CANDIDATE_SIG, (void*)&CandidateEligibilityHook, &original,
            "UnitCultureCandidateList"))
    {
        Log("ExtendedUnitRecruitmentRules: failed to hook candidate-list predicate");
        return false;
    }
    g_candidateEligibility = original;

    // can-build filter: a plain jump at 0x114269 (7 bytes "cmp dword ptr [ecx+10Ch],0" -> jmp + 2 NOP)
    static const unsigned char CAN_BUILD_GATE_ORIG[9] = { 0x83, 0xB9, 0x0C, 0x01, 0x00, 0x00, 0x00, 0x74, 0x12 };
    {
        unsigned char* gate = (unsigned char*)(g_base + RVA_CAN_BUILD_GATE);
        if (memcmp(gate, CAN_BUILD_GATE_ORIG, sizeof(CAN_BUILD_GATE_ORIG)) != 0)
        {
            Log("ExtendedUnitRecruitmentRules: can-build gate bytes do not match (%02X %02X %02X %02X %02X %02X %02X %02X %02X)",
                gate[0], gate[1], gate[2], gate[3], gate[4], gate[5], gate[6], gate[7], gate[8]);
            return false;
        }
        g_canBuildGateResume = g_base + RVA_CAN_BUILD_GATE_RESUME;
        g_canBuildFail = g_base + RVA_CAN_BUILD_FAIL;
        unsigned char patch[7];
        patch[0] = 0xE9;
        *(DWORD*)(patch + 1) = (DWORD)(DWORD_PTR)&CanBuildGateHook - ((DWORD)(DWORD_PTR)gate + 5);
        patch[5] = patch[6] = 0x90;
        DWORD old = 0;
        if (!VirtualProtect(gate, sizeof(patch), PAGE_EXECUTE_READWRITE, &old))
        {
            Log("ExtendedUnitRecruitmentRules: failed to hook can-build predicate");
            return false;
        }
        memcpy(gate, patch, sizeof(patch));
        VirtualProtect(gate, sizeof(patch), old, &old);
        FlushInstructionCache(GetCurrentProcess(), gate, sizeof(patch));
        Log("ExtendedUnitRecruitmentRules: can-build filter at rva %06X (the function entry is left intact)", RVA_CAN_BUILD_GATE);
    }

    // This prologue contains `push imm32`, whose immediate is an absolute
    // handler address and changes when Windows relocates v2game.exe. Validate
    // the stable opcodes and following FS-prologue bytes, then pass the actual
    // relocated bytes to StealToTrampoline. Steal all 10 bytes so the immediate
    // push is never split across the trampoline jump.
    static const unsigned char UNIT_TOOLTIP_PREFIX[6] =
        { 0x55, 0x8B, 0xEC, 0x6A, 0xFF, 0x68 };
    unsigned char* tooltipAddress = (unsigned char*)(g_base + RVA_UNIT_DEFINITION_TOOLTIP);
    unsigned char tooltipSignature[10];
    bool tooltipSignatureValid =
        memcmp(tooltipAddress, UNIT_TOOLTIP_PREFIX, sizeof(UNIT_TOOLTIP_PREFIX)) == 0 &&
        tooltipAddress[10] == 0x64 && tooltipAddress[11] == 0xA1;
    if (tooltipSignatureValid)
        memcpy(tooltipSignature, tooltipAddress, sizeof(tooltipSignature));

    original = 0;
    if (tooltipSignatureValid && StealToTrampoline(RVA_UNIT_DEFINITION_TOOLTIP,
            sizeof(tooltipSignature), g_unitTooltipTramp, sizeof(g_unitTooltipTramp),
            tooltipSignature, (void*)&UnitDefinitionTooltipHook, &original,
            "UnitRecruitmentTooltip"))
    {
        g_unitDefinitionTooltip = (tUnitDefinitionTooltip)original;
        g_tooltipInstalled = true;
        Log("ExtendedUnitRecruitmentRules: localized recruitment-rule tooltip installed");
    }
    else
    {
        Log("ExtendedUnitRecruitmentRules: tooltip hook failed; prologue bytes %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X; recruitment rules remain active",
            tooltipAddress[0], tooltipAddress[1], tooltipAddress[2], tooltipAddress[3],
            tooltipAddress[4], tooltipAddress[5], tooltipAddress[6], tooltipAddress[7],
            tooltipAddress[8], tooltipAddress[9], tooltipAddress[10], tooltipAddress[11]);
    }

    g_installed = true;
    Log("ExtendedUnitRecruitmentRules: POP culture and province recruitment rules installed");
    return true;
}
