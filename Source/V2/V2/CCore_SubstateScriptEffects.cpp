#include <windows.h>
#include <stdint.h>
#include <string.h>
#include "CCore_Shared.h"

// Parse create_substate with the native create_vassal effect, then preserve its
// native relationship creation and change only the target country's subject type.
static const int OFF_PARSER_KEY_TEXT = 0x24;
static const int KW_CREATE_VASSAL_EFFECT = 0x585;
static const int OFF_EFFECT_CHILD_TAIL = 0x0C;
static const int OFF_VASSAL_EFFECT_TAG = 0x20; // CCreateVassalEffect initializes this to "---".
static const int OFF_VASSAL_EFFECT_TARGET_INDEX = 0x24;
static const int EFFECT_EXECUTE_SLOT = 11;
static const int EFFECT_TOOLTIP_SLOT = 9;
static const int EFFECT_VTABLE_SLOTS = 16;
static const int OFF_COUNTRY_RELATIONS_BEGIN = 0xBE8;
static const int OFF_COUNTRY_RELATIONS_END = 0xBEC;
static const int OFF_RELATION_OBJECT = 0x24;
static const int OFF_RELATION_FIRST_COUNTRY = 0x0C;
static const int OFF_RELATION_SECOND_COUNTRY = 0x14;
static const int RELATION_REFRESH_SLOT = 10;
static const DWORD RVA_CREATE_VASSAL_EXECUTE = 0x00491480;
static const DWORD RVA_CREATE_VASSAL_CONSTRUCTOR = 0x00479BE0;
static const DWORD RVA_GAME_ALLOC = 0x006AE9AF;
static const DWORD RVA_GAME_FREE = 0x006AE91B;
static const DWORD RVA_CREATE_VASSAL_TOOLTIP = 0x004919E0;
static const DWORD RVA_VASSAL_VTABLE = 0x00A01790;
static const DWORD RVA_SUBSTATE_VTABLE = 0x00A03E74;
static const int OFF_CTX_COUNTRY = 0x0C;
static const int OFF_COUNTRY_SUBSTATE = 0xCF4;
static const int OFF_COUNTRY_OVERLORD = 0xCFC;
static const DWORD RVA_COUNTRIES_VECTOR = 0xE587E4;
static const DWORD RVA_COUNTRY_TAG_LOOKUP = 0x0015C6C0; // FUN_0055C6C0: __stdcall(manager, out, tag)
static const unsigned char COUNTRY_TAG_LOOKUP_SIG[10] =
    { 0x55, 0x8B, 0xEC, 0x8B, 0x45, 0x10, 0x0F, 0xBE, 0x50, 0x01 };
static const unsigned MAX_SUBSTATE_EFFECTS = 4096;

typedef void(__fastcall* tSubstateEffectExecute)(void* self, void* edx,
    void* context, int scale);
typedef void*(__thiscall* tSubstateEffectTooltip)(void* self, void* outString,
    uintptr_t a1, uintptr_t a2, uintptr_t a3, uintptr_t a4, uintptr_t a5,
    uintptr_t a6, uintptr_t a7, uintptr_t a8, uintptr_t a9);

struct SubstateGameString
{
    union { char buf[16]; char* ptr; } u;
    unsigned size;
    unsigned cap;
};

static const char* SubstateStringData(const SubstateGameString* text)
{
    if (!text)
        return "";
    return text->cap < 16 ? text->u.buf : (text->u.ptr ? text->u.ptr : "");
}

static bool ExtractNativeCountryNames(const char* rendered, char* targetName,
    unsigned targetCapacity, char* countryName, unsigned countryCapacity)
{
    if (!rendered || !targetName || !targetCapacity || !countryName || !countryCapacity)
        return false;
    char templateText[1024] = {};
    if (!CoreFormatLocalizationToBuffer("CREATE_VASSAL_EFFECT", "TARGET_COUNTRY", "__CC_TARGET_71A__", "COUNTRY", "__CC_COUNTRY_71A__", templateText, sizeof(templateText)))
        return false;
    const char* targetToken = "__CC_TARGET_71A__";
    const char* countryToken = "__CC_COUNTRY_71A__";
    const char* first = strstr(templateText, targetToken);
    const char* second = strstr(templateText, countryToken);
    if (!first || !second || second < first + strlen(targetToken))
        return false;
    const size_t prefixLen = (size_t)(first - templateText);
    const char* middle = first + strlen(targetToken);
    const size_t middleLen = (size_t)(second - middle);
    const char* suffix = second + strlen(countryToken);
    const size_t suffixLen = strlen(suffix);
    const size_t renderedLen = strlen(rendered);
    if (renderedLen < prefixLen + middleLen + suffixLen ||
        memcmp(rendered, templateText, prefixLen) != 0 ||
        (suffixLen && memcmp(rendered + renderedLen - suffixLen, suffix, suffixLen) != 0))
        return false;
    const char* split = 0;
    for (const char* at = rendered + prefixLen; ; ++at)
    {
        if (!*at)
            break;
        if (middleLen == 0 || memcmp(at, middle, middleLen) == 0)
        {
            split = at;
            break;
        }
    }
    if (!split)
        return false;
    const size_t targetLen = (size_t)(split - (rendered + prefixLen));
    const char* actorStart = split + middleLen;
    const char* actorEnd = rendered + renderedLen - suffixLen;
    const size_t actorLen = (size_t)(actorEnd - actorStart);
    if (!targetLen || !actorLen || targetLen + 1 > targetCapacity || actorLen + 1 > countryCapacity)
        return false;
    memcpy(targetName, rendered + prefixLen, targetLen);
    targetName[targetLen] = 0;
    memcpy(countryName, actorStart, actorLen);
    countryName[actorLen] = 0;
    return true;
}
struct SubstateEffectMeta
{
    void* effect;
    tSubstateEffectExecute originalExecute;
    tSubstateEffectTooltip originalTooltip;
    char targetTag[4];
    void* vtableWithRtti[EFFECT_VTABLE_SLOTS + 1];
};

static SubstateEffectMeta g_substateEffects[MAX_SUBSTATE_EFFECTS];
static unsigned g_substateEffectCount = 0;
static bool g_substateEffectsEnabled = false;
static bool g_substateEffectOverflowVtableReady = false;
__declspec(align(16)) static void* g_substateEffectOverflowVtable[EFFECT_VTABLE_SLOTS + 1];

static SubstateEffectMeta* FindSubstateEffect(void* effect)
{
    for (unsigned i = 0; i < g_substateEffectCount; ++i)
        if (g_substateEffects[i].effect == effect)
            return &g_substateEffects[i];
    return 0;
}

static bool IsCountryTag(const char* tag)
{
    if (!tag || !tag[0] || !tag[1] || !tag[2] || tag[3])
        return false;
    for (int i = 0; i < 3; ++i)
    {
        const char c = tag[i];
        if (!((c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')))
            return false;
    }
    return true;
}

static bool ResolveCountry(const char* tag, int* countryIndex, uint32_t* packedTag)
{
    if (!g_base || !IsCountryTag(tag) || !countryIndex)
        return false;
    __try
    {
        void* manager = *(void**)(g_base + RVA_COUNTRIES_VECTOR);
        if (!manager)
            return false;
        int resolved[2] = {};
        typedef void(__stdcall* tCountryTagLookup)(void*, int*, const char*);
        ((tCountryTagLookup)(g_base + RVA_COUNTRY_TAG_LOOKUP))(manager, resolved, tag);
        if (resolved[1] <= 0 || resolved[1] >= 8192 || resolved[0] == 0x2D2D2D)
            return false;
        *countryIndex = resolved[1];
        if (packedTag)
            *packedTag = (uint32_t)resolved[0];
        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

static bool ResolveCountryIndex(const char* tag, int* countryIndex)
{
    return ResolveCountry(tag, countryIndex, 0);
}

static void* CountryAtIndex(int countryIndex)
{
    if (countryIndex < 0 || countryIndex >= 8192)
        return 0;
    __try
    {
        void* manager = *(void**)(g_base + RVA_COUNTRIES_VECTOR);
        if (!manager)
            return 0;
        void** begin = *(void***)( (char*)manager + 4);
        void** end = *(void***)( (char*)manager + 8);
        if (!begin || !end || end < begin || end - begin > 8192 ||
            countryIndex >= end - begin)
            return 0;
        return begin[countryIndex];
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return 0;
    }
}

static void* CountryRelationPairAt(int countryIndex, int otherCountryIndex)
{
    void* country = CountryAtIndex(countryIndex);
    if (!country || otherCountryIndex < 0 || otherCountryIndex >= 8192)
        return 0;
    __try
    {
        void** begin = *(void***)((char*)country + OFF_COUNTRY_RELATIONS_BEGIN);
        void** end = *(void***)((char*)country + OFF_COUNTRY_RELATIONS_END);
        if (!begin || !end || end < begin || end - begin > 8192 ||
            otherCountryIndex >= end - begin)
            return 0;
        return begin[otherCountryIndex];
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return 0;
    }
}

typedef void(__thiscall* tRelationRefresh)(void* self);

static const DWORD RVA_WORLD_SLOT = 0x00E588E8;
static const unsigned MAX_SUBSTATE_PENDING_REPAIRS = 64;
struct SubstatePendingRepair
{
    volatile LONG state;
    int actorIndex;
    int targetIndex;
    int startDay;
    void* actor;
    void* target;
};
static SubstatePendingRepair g_substatePendingRepairs[MAX_SUBSTATE_PENDING_REPAIRS];
typedef int(__thiscall* tRelationTypeId)(void* self);
static bool SubstateCurrentDay(int* day)
{
    if (!g_base || !day)
        return false;
    __try
    {
        void* world = *(void**)(g_base + RVA_WORLD_SLOT);
        if (!world)
            return false;
        *day = *(int*)((char*)world + 0xB0C) / 24;
        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

static void QueueSubstateRepair(int actorIndex,
    int targetIndex, void* actor, void* target)
{
    int startDay = -1;
    SubstateCurrentDay(&startDay);
    for (unsigned i = 0; i < MAX_SUBSTATE_PENDING_REPAIRS; ++i)
    {
        SubstatePendingRepair* record = &g_substatePendingRepairs[i];
        if (InterlockedCompareExchange(&record->state, 1, 0) != 0)
            continue;
        record->actorIndex = actorIndex;
        record->targetIndex = targetIndex;
        record->startDay = startDay;
        record->actor = actor;
        record->target = target;
        MemoryBarrier();
        InterlockedExchange(&record->state, 2);
        return;
    }
}


static bool ExecuteSubstateEffect(SubstateEffectMeta* meta, void* self,
    void* edx, void* context, int scale)
{
    if (!meta || !meta->originalExecute || !context)
        return false;

    __try
    {
        const int scopeCountryIndex = *(int*)((char*)context + OFF_CTX_COUNTRY);
        int targetCountryIndex = -1;
        const bool targetResolved = ResolveCountryIndex(meta->targetTag, &targetCountryIndex);
        if (!targetResolved)
            return false;
        if (scopeCountryIndex < 0 || scopeCountryIndex >= 8192)
            return false;
        if (targetCountryIndex < 0 || targetCountryIndex >= 8192)
            return false;
        if (targetCountryIndex == scopeCountryIndex)
            return false;

        meta->originalExecute(self, edx, context, scale);
        QueueSubstateRepair(scopeCountryIndex, targetCountryIndex,
            CountryAtIndex(scopeCountryIndex), CountryAtIndex(targetCountryIndex));

        void* actor = CountryAtIndex(scopeCountryIndex);
        void* target = CountryAtIndex(targetCountryIndex);
        void* pair = CountryRelationPairAt(scopeCountryIndex, targetCountryIndex);
        void* relation = pair ? *(void**)((char*)pair + OFF_RELATION_OBJECT) : 0;
        if (!actor)
            return false;
        if (!target)
            return false;
        if (!pair)
            return false;
        if (!relation)
            return false;

        void** nativeRelationVtable = *(void***)relation;
        const int relationFirst = *(int*)((char*)relation + OFF_RELATION_FIRST_COUNTRY);
        const int relationSecond = *(int*)((char*)relation + OFF_RELATION_SECOND_COUNTRY);
        const bool isExpectedPair =
            (relationFirst == scopeCountryIndex && relationSecond == targetCountryIndex) ||
            (relationFirst == targetCountryIndex && relationSecond == scopeCountryIndex);
        void* expectedOverlord = *(void**)((char*)target + OFF_COUNTRY_OVERLORD);
        const unsigned int actorIdentity = *(unsigned int*)((char*)actor + 0x20);
        const uintptr_t overlordValue = (uintptr_t)expectedOverlord;
        if (!isExpectedPair)
            return false;
        if (!nativeRelationVtable)
            return false;
        if (!expectedOverlord || overlordValue != (uintptr_t)actorIdentity)
            return false;

        void** vassalVtable = (void**)(g_base + RVA_VASSAL_VTABLE);
        void** substateVtable = (void**)(g_base + RVA_SUBSTATE_VTABLE);
        if (nativeRelationVtable == vassalVtable)
        {
            *(void***)relation = substateVtable;
            nativeRelationVtable = substateVtable;
        }
        else if (nativeRelationVtable != substateVtable)
            return false;

        ((tRelationRefresh)nativeRelationVtable[RELATION_REFRESH_SLOT])(relation);
        Log("CreateSubstateEffect: SUCCESS actor_index=%d target=%s relation=substate",
            scopeCountryIndex, meta->targetTag);
        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

static void __fastcall SubstateEffectExecute(void* self, void* edx,
    void* context, int scale)
{
    ExecuteSubstateEffect(FindSubstateEffect(self), self, edx, context, scale);
}

static void InitializeNativeCreateVassalEffect(void* effect)
{
    const DWORD constructor = g_base + RVA_CREATE_VASSAL_CONSTRUCTOR;
    __asm {
        mov eax, effect
        mov edx, constructor
        call edx
    }
}

bool CreateSubstateFromConsole(const char* actorTag, const char* targetTag)
{
    if (!g_substateEffectsEnabled || !IsCountryTag(actorTag) || !IsCountryTag(targetTag))
        return false;

    int actorIndex = -1;
    int targetIndex = -1;
    uint32_t actorPackedTag = 0;
    if (!ResolveCountry(actorTag, &actorIndex, &actorPackedTag) ||
        !ResolveCountryIndex(targetTag, &targetIndex) || actorIndex == targetIndex)
        return false;

    typedef void* (__cdecl* tGameAlloc)(unsigned int);
    typedef void (__cdecl* tGameFree)(void*);
    void* effect = ((tGameAlloc)(g_base + RVA_GAME_ALLOC))(0x28);
    if (!effect)
        return false;

    bool success = false;
    __try
    {
        InitializeNativeCreateVassalEffect(effect);
        memcpy((char*)effect + OFF_VASSAL_EFFECT_TAG, targetTag, 3);
        *((char*)effect + OFF_VASSAL_EFFECT_TAG + 3) = 0;
        *(int*)((char*)effect + OFF_VASSAL_EFFECT_TARGET_INDEX) = targetIndex;

        // Native CCreateVassalEffect reads the actor tag at scope+8 and its
        // country index at scope+0xC, matching the engine's country scope.
        uint32_t scope[4] = {};
        scope[2] = actorPackedTag;
        scope[3] = (uint32_t)actorIndex;

        SubstateEffectMeta meta = {};
        meta.effect = effect;
        meta.originalExecute = (tSubstateEffectExecute)(g_base + RVA_CREATE_VASSAL_EXECUTE);
        memcpy(meta.targetTag, targetTag, 4);
        success = ExecuteSubstateEffect(&meta, effect, 0, scope, 0);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        success = false;
    }
    ((tGameFree)(g_base + RVA_GAME_FREE))(effect);
    return success;
}

void __stdcall ProcessSubstateAfterCountryRecalculate(void* country)
{
    if (!country)
        return;
    int currentDay = -1;
    if (!SubstateCurrentDay(&currentDay))
        return;

    for (unsigned i = 0; i < MAX_SUBSTATE_PENDING_REPAIRS; ++i)
    {
        SubstatePendingRepair* record = &g_substatePendingRepairs[i];
        if (InterlockedCompareExchange(&record->state, 2, 2) != 2 ||
            country != record->target || currentDay <= record->startDay)
            continue;
        if (InterlockedCompareExchange(&record->state, 3, 2) != 2)
            continue;

        InterlockedExchange(&record->state, 4);
    }
}

static void __fastcall SubstateEffectNoop(void*, void*, void*, int) {}

static void* __fastcall SubstateEffectTooltip(void* self, void*, void* outString,
    uintptr_t a1, uintptr_t a2, uintptr_t a3, uintptr_t a4, uintptr_t a5,
    uintptr_t a6, uintptr_t a7, uintptr_t a8, uintptr_t a9)
{
    SubstateEffectMeta* meta = FindSubstateEffect(self);
    if (!meta || !meta->originalTooltip)
        return outString;
    void* result = meta->originalTooltip(self, outString,
        a1, a2, a3, a4, a5, a6, a7, a8, a9);
    if (!outString)
        return result;

    // Reuse the native tooltip's resolved country names, then format the Core key.
    // This keeps both names correct in the currently selected game language.
    char targetName[256] = {};
    char countryName[256] = {};
    SubstateGameString formatted;
    memset(&formatted, 0, sizeof(formatted));
    formatted.cap = 15;
    if (ExtractNativeCountryNames(SubstateStringData((SubstateGameString*)outString),
            targetName, sizeof(targetName), countryName, sizeof(countryName)) &&
        CoreLocalizeKeyWithTwoReplacementsToGameString("CREATE_SUBSTATE_EFFECT",
            "TARGET_COUNTRY", targetName, "COUNTRY", countryName, &formatted))
    {
        CoreFreeGameString(outString);
        memcpy(outString, &formatted, sizeof(formatted));
        memset(&formatted, 0, sizeof(formatted));
    }
    CoreFreeGameString(&formatted);
    return result;
}

void __stdcall ProcessSubstateAfterGreatPowerRebuild()
{
    int currentDay = -1;
    if (!SubstateCurrentDay(&currentDay))
        return;
    const bool optimizerLoaded = GetModuleHandleA("v2dll_country_daily_optimizer.dll") != 0;

    for (unsigned i = 0; i < MAX_SUBSTATE_PENDING_REPAIRS; ++i)
    {
        SubstatePendingRepair* record = &g_substatePendingRepairs[i];
        if (InterlockedCompareExchange(&record->state, 4, 4) != 4 ||
            currentDay <= record->startDay ||
            InterlockedCompareExchange(&record->state, 5, 4) != 4)
            continue;

        __try
        {
            void* pair = CountryRelationPairAt(record->actorIndex, record->targetIndex);
            void* relation = pair ? *(void**)((char*)pair + OFF_RELATION_OBJECT) : 0;
            void** vtable = relation ? *(void***)relation : 0;
            int typeId = relation && vtable && vtable[7]
                ? ((tRelationTypeId)vtable[7])(relation) : -1;
            int endpointA = relation ? *(int*)((char*)relation + OFF_RELATION_FIRST_COUNTRY) : -1;
            int endpointB = relation ? *(int*)((char*)relation + OFF_RELATION_SECOND_COUNTRY) : -1;
            const unsigned char cf4Before = *(unsigned char*)((char*)record->target + 0xCF4);
            const unsigned int overlord = *(unsigned int*)((char*)record->target + OFF_COUNTRY_OVERLORD);
            const unsigned int actorIdentity = *(unsigned int*)((char*)record->actor + 0x20);
            const bool endpointsMatch =
                (endpointA == record->actorIndex && endpointB == record->targetIndex) ||
                (endpointA == record->targetIndex && endpointB == record->actorIndex);
            const bool repairableType = typeId == 0x336 || (typeId == 0x93A && !cf4Before);
            if (optimizerLoaded && relation && endpointsMatch &&
                overlord == actorIdentity && repairableType)
            {
                void** substateVtable = (void**)(g_base + RVA_SUBSTATE_VTABLE);
                if (typeId != 0x93A)
                    *(void***)relation = substateVtable;
                ((tRelationRefresh)substateVtable[RELATION_REFRESH_SLOT])(relation);
            }
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            // Keep the game running if the target country disappeared meanwhile.
        }
        InterlockedExchange(&record->state, 0);
    }
}
static bool IsCreateSubstateKey(void* ctx)
{
    if (!ctx)
        return false;
    return _stricmp((const char*)ctx + OFF_PARSER_KEY_TEXT, "create_substate") == 0;
}

bool CaptureSubstateScriptEffect(void* self, void* edx, void* ctx, int keyId,
    tCoreEffectFactory originalFactory)
{
    (void)keyId;
    if (!IsCreateSubstateKey(ctx))
        return false;
    if (!g_substateEffectsEnabled)
        return false;
    if (!self || !ctx || !originalFactory)
        return true;

    originalFactory(self, edx, ctx, KW_CREATE_VASSAL_EFFECT);

    __try
    {
        void* node = *(void**)((char*)self + OFF_EFFECT_CHILD_TAIL);
        void* effect = node ? *(void**)node : 0;
        if (!effect)
            return true;

        void** nativeVtable = *(void***)effect;
        if (!nativeVtable ||
            nativeVtable[EFFECT_EXECUTE_SLOT] != (void*)(g_base + RVA_CREATE_VASSAL_EXECUTE) ||
            nativeVtable[EFFECT_TOOLTIP_SLOT] != (void*)(g_base + RVA_CREATE_VASSAL_TOOLTIP))
        {
            if (nativeVtable)
            {
                if (!g_substateEffectOverflowVtableReady)
                {
                    g_substateEffectOverflowVtable[0] = nativeVtable[-1];
                    memcpy(&g_substateEffectOverflowVtable[1], nativeVtable,
                        sizeof(void*) * EFFECT_VTABLE_SLOTS);
                    g_substateEffectOverflowVtable[1 + EFFECT_EXECUTE_SLOT] =
                        (void*)&SubstateEffectNoop;
                    g_substateEffectOverflowVtableReady = true;
                }
                *(void***)effect = &g_substateEffectOverflowVtable[1];
            }
            return true;
        }

        char tag[4] = {};
        memcpy(tag, (char*)effect + OFF_VASSAL_EFFECT_TAG, sizeof(tag));
        if (!IsCountryTag(tag) || g_substateEffectCount >= MAX_SUBSTATE_EFFECTS)
        {
            if (!g_substateEffectOverflowVtableReady)
            {
                g_substateEffectOverflowVtable[0] = nativeVtable[-1];
                memcpy(&g_substateEffectOverflowVtable[1], nativeVtable,
                    sizeof(void*) * EFFECT_VTABLE_SLOTS);
                g_substateEffectOverflowVtable[1 + EFFECT_EXECUTE_SLOT] =
                    (void*)&SubstateEffectNoop;
                g_substateEffectOverflowVtableReady = true;
            }
            *(void***)effect = &g_substateEffectOverflowVtable[1];
            return true;
        }

        SubstateEffectMeta* meta = &g_substateEffects[g_substateEffectCount++];
        memset(meta, 0, sizeof(*meta));
        meta->effect = effect;
        meta->originalExecute = (tSubstateEffectExecute)nativeVtable[EFFECT_EXECUTE_SLOT];
        meta->originalTooltip = (tSubstateEffectTooltip)nativeVtable[EFFECT_TOOLTIP_SLOT];
        memcpy(meta->targetTag, tag, sizeof(meta->targetTag));
        meta->vtableWithRtti[0] = nativeVtable[-1];
        memcpy(&meta->vtableWithRtti[1], nativeVtable,
            sizeof(void*) * EFFECT_VTABLE_SLOTS);
        meta->vtableWithRtti[1 + EFFECT_EXECUTE_SLOT] = (void*)&SubstateEffectExecute;
        meta->vtableWithRtti[1 + EFFECT_TOOLTIP_SLOT] = (void*)&SubstateEffectTooltip;
        *(void***)effect = &meta->vtableWithRtti[1];
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return true;
    }
    return true;
}

bool InstallSubstateScriptEffects()
{
    if (memcmp((const void*)(g_base + RVA_COUNTRY_TAG_LOOKUP),
            COUNTRY_TAG_LOOKUP_SIG, sizeof(COUNTRY_TAG_LOOKUP_SIG)) != 0)
    {
        return false;
    }
    const bool installed = InstallEffectFactoryHook(true);
    g_substateEffectsEnabled = installed;
    return installed;
}
