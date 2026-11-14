#include <windows.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include "CCore_Shared.h"

// join_war uses the native effect factory for a harmless placeholder and the
// native trigger parser/evaluator for its two country-selector blocks.
static const int OFF_PARSER_LEXER = 0x1C;
static const int OFF_PARSER_KEY_TEXT = 0x24;
static const int OFF_PARSER_VALUE_TOKEN = 0x228;
static const int OFF_PARSER_VALUE_TEXT = 0x22C;
static const int OFF_LEXER_PEEK_FLAG = 0x110;
static const int OFF_EFFECT_CHILD_TAIL = 0x0C;
static const int OFF_CTX_COUNTRY_PAIR = 0x08;
static const int OFF_COUNTRY_PAIR = 0x1C;
static const int OFF_WORLD_WARS = 0xB3C;
static const int OFF_WAR_ATTACKERS_BEGIN = 0x2C;
static const int OFF_WAR_ATTACKERS_END = 0x30;
static const int OFF_WAR_DEFENDERS_BEGIN = 0x3C;
static const int OFF_WAR_DEFENDERS_END = 0x40;
static const int TOKEN_OPEN_BRACE = 3;
static const int TOKEN_YES = 0x29F;
static const int TOKEN_CLOSE_BRACE = 4;
static const int TOKEN_EOF = 0x13;
static const int KW_ASSIMILATE_EFFECT = 0xA5B;
static const int EFFECT_EXECUTE_SLOT = 11;
static const int EFFECT_TOOLTIP_SLOT = 9;
static const int EFFECT_DESTRUCTOR_SLOT = 0;
static const int EFFECT_VTABLE_SLOTS = 16;
static const unsigned MAX_JOIN_WAR_EFFECTS = 4096;
static const unsigned MAX_TOP_LEVEL_PROPERTIES = 2048;
static const unsigned MAX_COUNTRIES = 10000;
static const unsigned MAX_PARTICIPANTS_PER_SIDE = 100000;
static const unsigned MAX_WAR_NODES = 10000;
static const unsigned MAX_JOIN_WAR_TOOLTIP_COUNTRIES = 64;
static const unsigned JOIN_WAR_TOOLTIP_LINE_CAPACITY = 512;
static const unsigned JOIN_WAR_TOOLTIP_LIST_CAPACITY = 32768;
static const unsigned JOIN_WAR_TOOLTIP_OUTPUT_CAPACITY = 65536;
static const DWORD RVA_PARSER_READ_PROPERTY = 0x005A1440;
static const DWORD RVA_CAND_TRIGGER_VTABLE = 0x009F9994;
static const DWORD RVA_CAND_TRIGGER_PARSE = 0x005A2A90;
static const DWORD RVA_CAND_TRIGGER_EVALUATE = 0x004B8260;
static const DWORD RVA_CASSIMILATE_VTABLE = 0x00A2BAE8;
static const DWORD RVA_COUNTRIES_VECTOR = 0x00E587E4;
static const DWORD RVA_WORLD_PTR = 0x00E588E8;
static const DWORD RVA_GAME_ALLOC = 0x006AE9AF;
static const DWORD RVA_GAME_FREE = 0x006AE91B;
static const DWORD RVA_COUNTRY_NAME_RESOLVER = 0x0015C8A0;
static const unsigned char COUNTRY_NAME_RESOLVER_SIG[17] = {
    0x55, 0x8B, 0xEC, 0x51, 0x56, 0x8B, 0xF0, 0x8B, 0x45,
    0x0C, 0xC7, 0x45, 0xFC, 0x00, 0x00, 0x00, 0x00
};
static const DWORD RVA_STD_STRING_ASSIGN = 0x00009350;
static const DWORD RVA_ADD_ATTACKER = 0x00534280;
static const DWORD RVA_ADD_DEFENDER = 0x00535390;
static const DWORD EXPECTED_EFFECT_FACTORY_RVA = 0x00476B30;

struct JoinWarEffectMeta
{
    void* effect;
    void* sideTrigger;
    void* againstTrigger;
    void* originalExecute;
    void* originalTooltip;
    void* originalDestructor;
    bool hasSide;
    bool hasAgainst;
    bool leader;
    bool parseValid;
    bool used;
    void* vtableWithRtti[EFFECT_VTABLE_SLOTS + 1];
};

static JoinWarEffectMeta g_joinWarEffects[MAX_JOIN_WAR_EFFECTS];
static unsigned g_joinWarEffectHighWater = 0;
static unsigned g_joinWarExecuteCount = 0;
static bool g_joinWarEnabled = false;
static bool g_joinWarOverflowVtableReady = false;
static void* g_joinWarOverflowVtable[EFFECT_VTABLE_SLOTS + 1];

// Game parser ABI recovered from FUN_009A1440 and the lexer's virtual slot 1.
typedef int(__fastcall* tJoinWarLexNext)(void* lexer, void* edx);
typedef void(__stdcall* tJoinWarReadProperty)(void* parserContext);
typedef void(__thiscall* tJoinWarTriggerParse)(void* trigger, void* parserContext);
typedef char(__thiscall* tJoinWarTriggerEvaluate)(void* trigger, void* scopeContext);
typedef void*(__cdecl* tJoinWarGameAlloc)(size_t size);
typedef void(__thiscall* tJoinWarTriggerDelete)(void* trigger, unsigned char deleteObject);
typedef void(__stdcall* tJoinWarSideAdd)(void* war, int mode, int add, DWORD pairWord0, DWORD pairWord1);
typedef void*(__thiscall* tJoinWarEffectDestructor)(void* effect, unsigned char deleteObject);
typedef int(__thiscall* tJoinWarCountryCount)(void* world);
typedef void*(__thiscall* tJoinWarEffectTooltip)(void* self, void* outString,
    uintptr_t a1, uintptr_t a2, uintptr_t a3, uintptr_t a4, uintptr_t a5,
    uintptr_t a6, uintptr_t a7, uintptr_t a8, uintptr_t a9);

static JoinWarEffectMeta* JoinWarFindMeta(void* effect)
{
    for (unsigned i = 0; i < g_joinWarEffectHighWater; ++i)
        if (g_joinWarEffects[i].used && g_joinWarEffects[i].effect == effect)
            return &g_joinWarEffects[i];
    return 0;
}

static JoinWarEffectMeta* JoinWarAllocateMeta(void* effect)
{
    for (unsigned i = 0; i < g_joinWarEffectHighWater; ++i)
    {
        if (!g_joinWarEffects[i].used)
        {
            memset(&g_joinWarEffects[i], 0, sizeof(g_joinWarEffects[i]));
            g_joinWarEffects[i].used = true;
            g_joinWarEffects[i].effect = effect;
            return &g_joinWarEffects[i];
        }
    }
    if (g_joinWarEffectHighWater >= MAX_JOIN_WAR_EFFECTS)
        return 0;
    JoinWarEffectMeta* meta = &g_joinWarEffects[g_joinWarEffectHighWater++];
    memset(meta, 0, sizeof(*meta));
    meta->used = true;
    meta->effect = effect;
    return meta;
}

static void JoinWarNoopExecute(void* self, void* edx, void* context, int scale);
static bool JoinWarSetTooltipString(void* output, const char* text);
static void* __fastcall JoinWarNoopTooltip(void* self, void* edx, void* outString,
    uintptr_t a1, uintptr_t a2, uintptr_t a3, uintptr_t a4, uintptr_t a5,
    uintptr_t a6, uintptr_t a7, uintptr_t a8, uintptr_t a9);

static void JoinWarInitializeOverflowVtable(void* nativeVtable)
{
    if (g_joinWarOverflowVtableReady || !nativeVtable)
        return;
    g_joinWarOverflowVtable[0] = ((void**)nativeVtable)[-1];
    memcpy(&g_joinWarOverflowVtable[1], nativeVtable,
        sizeof(void*) * EFFECT_VTABLE_SLOTS);
    g_joinWarOverflowVtable[1 + EFFECT_EXECUTE_SLOT] = (void*)&JoinWarNoopExecute;
    g_joinWarOverflowVtable[1 + EFFECT_TOOLTIP_SLOT] = (void*)&JoinWarNoopTooltip;
    g_joinWarOverflowVtableReady = true;
}

static void JoinWarNoopExecute(void* self, void* edx, void* context, int scale)
{
    (void)self; (void)edx; (void)context; (void)scale;
}

static void* __fastcall JoinWarNoopTooltip(void* self, void* edx, void* outString,
    uintptr_t a1, uintptr_t a2, uintptr_t a3, uintptr_t a4, uintptr_t a5,
    uintptr_t a6, uintptr_t a7, uintptr_t a8, uintptr_t a9)
{
    (void)self; (void)edx; (void)a1; (void)a2; (void)a3; (void)a4; (void)a5;
    (void)a6; (void)a7; (void)a8; (void)a9;
    // The caller passes uninitialized storage; construct a valid empty game string.
    if (outString)
        JoinWarSetTooltipString(outString, "");
    return outString;
}

struct JoinWarGameString
{
    union { char buf[16]; char* ptr; } data;
    unsigned size;
    unsigned capacity;
};

static const char* JoinWarGameStringData(const JoinWarGameString* text)
{
    if (!text)
        return "";
    return text->capacity < 16 ? text->data.buf : (text->data.ptr ? text->data.ptr : "");
}

static bool JoinWarResolveNativeCountryName(DWORD packedTag, int countryIndex,
    char* output, unsigned outputCapacity)
{
    if (!output || !outputCapacity || !g_base || countryIndex < 0 ||
        memcmp((const void*)(g_base + RVA_COUNTRY_NAME_RESOLVER),
            COUNTRY_NAME_RESOLVER_SIG, sizeof(COUNTRY_NAME_RESOLVER_SIG)) != 0)
        return false;

    // FUN_0055c8a0 is the engine's COUNTRY token resolver. Its native caller
    // passes the country tag and country index; it returns the active
    // government-specific country name, falling back to the tag's base key.
    JoinWarGameString localized = {};
    localized.capacity = 15;
    const DWORD resolver = g_base + RVA_COUNTRY_NAME_RESOLVER;
    // Native FUN_0055DD40 passes the packed three-byte country tag here,
    // not a pointer to a C string. FUN_0055C910 unpacks that DWORD itself.
    const DWORD fallbackTag = packedTag;
    const int index = countryIndex;
    bool resolved = false;
    __try
    {
        __asm {
            lea eax, localized
            push index
            push fallbackTag
            call resolver
            add esp, 8
        }
        const char* name = JoinWarGameStringData(&localized);
        if (name && name[0])
        {
            strncpy_s(output, outputCapacity, name, _TRUNCATE);
            resolved = output[0] != 0;
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        resolved = false;
    }
    __try
    {
        CoreFreeGameString(&localized);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        resolved = false;
    }
    return resolved;
}

static void JoinWarDestroyTrigger(void* trigger)
{
    if (!trigger)
        return;
    __try
    {
        tJoinWarTriggerDelete destroy = (tJoinWarTriggerDelete)(*(void***)trigger)[0];
        destroy(trigger, 1);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        Log("JoinWar: exception while freeing selector trigger %p", trigger);
    }
}

static void* __fastcall JoinWarEffectDestructor(void* self, void* edx, unsigned char deleteObject)
{
    (void)edx;
    JoinWarEffectMeta* meta = JoinWarFindMeta(self);
    if (!meta)
        return self;

    void* side = meta->sideTrigger;
    void* against = meta->againstTrigger;
    meta->sideTrigger = 0;
    meta->againstTrigger = 0;
    meta->effect = 0;
    meta->used = false;
    JoinWarDestroyTrigger(side);
    JoinWarDestroyTrigger(against);

    tJoinWarEffectDestructor original = (tJoinWarEffectDestructor)meta->originalDestructor;
    if (original)
        return original(self, deleteObject);
    return self;
}

static void* JoinWarCreateTriggerRoot()
{
    tJoinWarGameAlloc allocate = (tJoinWarGameAlloc)(g_base + RVA_GAME_ALLOC);
    void* root = allocate(0x20);
    if (!root)
        return 0;
    memset(root, 0, 0x20);
    *(DWORD*)root = g_base + RVA_CAND_TRIGGER_VTABLE;
    *(DWORD*)((char*)root + 4) = 0x18D;
    return root;
}

static bool JoinWarPeek(void* parserContext, int* outToken)
{
    if (!parserContext || !outToken)
        return false;
    int* lexer = *(int**)((char*)parserContext + OFF_PARSER_LEXER);
    if (!lexer)
        return false;
    if (*((unsigned char*)lexer + OFF_LEXER_PEEK_FLAG) == 0)
    {
        tJoinWarLexNext next = (tJoinWarLexNext)(*(void***)lexer)[1];
        int result = next(lexer, 0);
        lexer[2] = result;
        if (result == 0)
            lexer[3] = TOKEN_EOF;
        *((unsigned char*)lexer + OFF_LEXER_PEEK_FLAG) = 1;
    }
    *outToken = lexer[3];
    return true;
}

static bool JoinWarSkipNestedBlock(void* parserContext)
{
    int* lexer = *(int**)((char*)parserContext + OFF_PARSER_LEXER);
    if (!lexer || lexer[3] != TOKEN_OPEN_BRACE)
        return false;
    tJoinWarLexNext next = (tJoinWarLexNext)(*(void***)lexer)[1];
    int depth = 1;
    for (unsigned guard = 0; guard < 100000 && depth > 0; ++guard)
    {
        int result = next(lexer, 0);
        lexer[2] = result;
        if (result == 0)
            lexer[3] = TOKEN_EOF;
        *((unsigned char*)lexer + OFF_LEXER_PEEK_FLAG) = 1;
        if (lexer[3] == TOKEN_OPEN_BRACE)
            ++depth;
        else if (lexer[3] == TOKEN_CLOSE_BRACE)
            --depth;
        else if (lexer[3] == TOKEN_EOF)
            return false;
    }
    return depth == 0;
}

static bool JoinWarParseSelector(void* parserContext, void** outTrigger)
{
    *outTrigger = JoinWarCreateTriggerRoot();
    if (!*outTrigger)
        return false;
    tJoinWarTriggerParse parse = (tJoinWarTriggerParse)(g_base + RVA_CAND_TRIGGER_PARSE);
    parse(*outTrigger, parserContext);
    return true;
}

static bool JoinWarParseBlock(void* parserContext, JoinWarEffectMeta* meta)
{
    if (!parserContext || !meta)
        return false;
    int* lexer = *(int**)((char*)parserContext + OFF_PARSER_LEXER);
    if (!lexer)
        return false;
    tJoinWarReadProperty readProperty = (tJoinWarReadProperty)(g_base + RVA_PARSER_READ_PROPERTY);
    bool valid = true;
    bool closed = false;

    for (unsigned propertyCount = 0; propertyCount < MAX_TOP_LEVEL_PROPERTIES; ++propertyCount)
    {
        int token = TOKEN_EOF;
        if (!JoinWarPeek(parserContext, &token))
            return false;
        if (token == TOKEN_CLOSE_BRACE || token == TOKEN_EOF)
        {
            closed = token == TOKEN_CLOSE_BRACE;
            break;
        }

        readProperty(parserContext);
        const char* key = (const char*)parserContext + OFF_PARSER_KEY_TEXT;
        int valueToken = *(int*)((char*)parserContext + OFF_PARSER_VALUE_TOKEN);
        const bool isSide = _stricmp(key, "side") == 0;
        const bool isAgainst = _stricmp(key, "against") == 0;

        if (_stricmp(key, "leader") == 0)
        {
            if (valueToken == TOKEN_OPEN_BRACE)
            {
                valid = false;
                JoinWarSkipNestedBlock(parserContext);
            }
            else
            {
                // Default is false; only the script token "yes" enables native leader promotion.
                meta->leader = valueToken == TOKEN_YES;
            }
            continue;
        }

        if (isSide || isAgainst)
        {
            bool* present = isSide ? &meta->hasSide : &meta->hasAgainst;
            void** root = isSide ? &meta->sideTrigger : &meta->againstTrigger;
            if (valueToken != TOKEN_OPEN_BRACE)
            {
                valid = false;
                continue;
            }
            if (*present)
            {
                valid = false;
                JoinWarSkipNestedBlock(parserContext);
                continue;
            }
            *present = true;
            if (!JoinWarParseSelector(parserContext, root))
            {
                valid = false;
                JoinWarSkipNestedBlock(parserContext);
            }
            continue;
        }

        // Unknown nested properties are skipped as a unit so the outer event
        // or decision parser remains synchronized.
        if (valueToken == TOKEN_OPEN_BRACE)
        {
            valid = false;
            JoinWarSkipNestedBlock(parserContext);
        }
    }

    if (closed)
    {
        tJoinWarLexNext next = (tJoinWarLexNext)(*(void***)lexer)[1];
        next(lexer, 0); // consume join_war's closing brace
    }
    else
    {
        valid = false;
    }
    if (!meta->hasSide && !meta->hasAgainst)
        valid = false;
    return valid;
}

static void JoinWarMakeCountryScope(void* outScope, void* parentScope, const DWORD* pair)
{
    memset(outScope, 0, 0x44);
    *(DWORD*)outScope = g_base + 0x00A2C904; // CEventScope vtable
    *(DWORD*)((char*)outScope + 4) = 0x18D;
    memcpy((char*)outScope + 8, (char*)parentScope + 8, 0x38);
    *(DWORD*)((char*)outScope + OFF_CTX_COUNTRY_PAIR) = pair[0];
    *(DWORD*)((char*)outScope + OFF_CTX_COUNTRY_PAIR + 4) = pair[1];
    *(DWORD*)((char*)outScope + 0x40) = 1;
}

static bool JoinWarTriggerMatches(void* trigger, const DWORD* pair, void* parentScope)
{
    if (!trigger || !pair || !parentScope)
        return false;
    unsigned char scope[0x44];
    JoinWarMakeCountryScope(scope, parentScope, pair);
    tJoinWarTriggerEvaluate evaluate = (tJoinWarTriggerEvaluate)(g_base + RVA_CAND_TRIGGER_EVALUATE);
    return evaluate(trigger, scope) != 0;
}

static bool JoinWarMatchVector(void* trigger, void* beginPtr, void* endPtr, void* parentScope)
{
    uintptr_t begin = (uintptr_t)beginPtr;
    uintptr_t end = (uintptr_t)endPtr;
    if (!trigger || !begin || end < begin || ((end - begin) & 7) != 0)
        return false;
    unsigned count = (unsigned)((end - begin) / 8);
    if (count > MAX_PARTICIPANTS_PER_SIDE)
        return false;
    for (unsigned i = 0; i < count; ++i)
    {
        const DWORD* pair = (const DWORD*)(begin + (uintptr_t)i * 8);
        if (JoinWarTriggerMatches(trigger, pair, parentScope))
            return true;
    }
    return false;
}

struct JoinWarTooltipCountryList
{
    DWORD tags[MAX_JOIN_WAR_TOOLTIP_COUNTRIES];
    unsigned count;
    bool truncated;
    char text[JOIN_WAR_TOOLTIP_LIST_CAPACITY];
};

static bool JoinWarVectorContains(void* beginPtr, void* endPtr, const DWORD* pair);

static bool JoinWarSetTooltipString(void* output, const char* text)
{
    if (!output || !text || !g_base)
        return false;
    JoinWarGameString* string = (JoinWarGameString*)output;
    memset(string, 0, sizeof(*string));
    string->capacity = 15;
    __try
    {
        typedef void*(__thiscall* tStdStringAssign)(void*, const char*, unsigned);
        ((tStdStringAssign)(g_base + RVA_STD_STRING_ASSIGN))(
            string, text, (unsigned)strlen(text));
        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        memset(string, 0, sizeof(*string));
        return false;
    }
}

static void JoinWarAddTooltipCountry(JoinWarTooltipCountryList* list, const DWORD* pair,
    const char* lineKey)
{
    if (!list || !pair || !lineKey || list->truncated)
        return;
    const DWORD packedTag = pair[0];
    char tag[4] = {
        (char)(packedTag & 0xFF),
        (char)((packedTag >> 8) & 0xFF),
        (char)((packedTag >> 16) & 0xFF),
        0
    };
    if (!((tag[0] >= 'A' && tag[0] <= 'Z') || (tag[0] >= '0' && tag[0] <= '9') || tag[0] == '_') ||
        !((tag[1] >= 'A' && tag[1] <= 'Z') || (tag[1] >= '0' && tag[1] <= '9') || tag[1] == '_') ||
        !((tag[2] >= 'A' && tag[2] <= 'Z') || (tag[2] >= '0' && tag[2] <= '9') || tag[2] == '_'))
        return;
    for (unsigned i = 0; i < list->count; ++i)
        if (list->tags[i] == packedTag)
            return;
    if (list->count >= MAX_JOIN_WAR_TOOLTIP_COUNTRIES)
    {
        list->truncated = true;
        return;
    }

    char countryName[256] = {};
    if (!JoinWarResolveNativeCountryName(packedTag, (int)pair[1],
            countryName, sizeof(countryName)) || !countryName[0])
    {
        if (!CoreLocalizeKeyToBuffer(tag, countryName, sizeof(countryName)) || !countryName[0])
            memcpy(countryName, tag, sizeof(tag));
    }

    char line[JOIN_WAR_TOOLTIP_LINE_CAPACITY] = {};
    if (!CoreFormatLocalizationToBuffer(lineKey, "COUNTRY", countryName,
            "JOIN_WAR_UNUSED_TOKEN", "", line, sizeof(line)) || !line[0])
        return;

    const size_t used = strlen(list->text);
    const char* separator = list->count ? "\n" : "";
    const size_t needed = strlen(separator) + strlen(line);
    if (used + needed + 1 >= sizeof(list->text))
    {
        list->truncated = true;
        return;
    }
    strcat_s(list->text, sizeof(list->text), separator);
    strcat_s(list->text, sizeof(list->text), line);
    list->tags[list->count++] = packedTag;
}

static void JoinWarCollectMatchingCountries(void* trigger, void* beginPtr, void* endPtr,
    void* parentScope, JoinWarTooltipCountryList* list, const char* lineKey)
{
    uintptr_t begin = (uintptr_t)beginPtr;
    uintptr_t end = (uintptr_t)endPtr;
    if (!trigger || !list || !begin || end < begin || ((end - begin) & 7) != 0)
        return;
    unsigned count = (unsigned)((end - begin) / 8);
    if (count > MAX_PARTICIPANTS_PER_SIDE)
        return;
    for (unsigned i = 0; i < count; ++i)
    {
        const DWORD* pair = (const DWORD*)(begin + (uintptr_t)i * 8);
        if (JoinWarTriggerMatches(trigger, pair, parentScope))
            JoinWarAddTooltipCountry(list, pair, lineKey);
    }
}

static bool JoinWarBuildTooltipCountryLists(JoinWarEffectMeta* meta, void* parentScope,
    JoinWarTooltipCountryList* sideList, JoinWarTooltipCountryList* againstList)
{
    if (!meta || !parentScope || !sideList || !againstList || !g_base)
        return false;
    __try
    {
        const DWORD* entrant = (const DWORD*)((char*)parentScope + OFF_CTX_COUNTRY_PAIR);
        void* world = *(void**)(g_base + RVA_WORLD_PTR);
        if (!world)
            return false;
        void* node = *(void**)((char*)world + OFF_WORLD_WARS);
        unsigned warCount = 0;
        while (node && warCount++ < MAX_WAR_NODES)
        {
            void* war = *(void**)node;
            void* next = *(void**)((char*)node + 8);
            if (war)
            {
                void* attackersBegin = *(void**)((char*)war + OFF_WAR_ATTACKERS_BEGIN);
                void* attackersEnd = *(void**)((char*)war + OFF_WAR_ATTACKERS_END);
                void* defendersBegin = *(void**)((char*)war + OFF_WAR_DEFENDERS_BEGIN);
                void* defendersEnd = *(void**)((char*)war + OFF_WAR_DEFENDERS_END);
                if (!JoinWarVectorContains(attackersBegin, attackersEnd, entrant) &&
                    !JoinWarVectorContains(defendersBegin, defendersEnd, entrant))
                {
                    bool sideAttack = meta->hasSide && JoinWarMatchVector(meta->sideTrigger,
                        attackersBegin, attackersEnd, parentScope);
                    bool sideDefend = meta->hasSide && JoinWarMatchVector(meta->sideTrigger,
                        defendersBegin, defendersEnd, parentScope);
                    bool againstAttack = meta->hasAgainst && JoinWarMatchVector(meta->againstTrigger,
                        attackersBegin, attackersEnd, parentScope);
                    bool againstDefend = meta->hasAgainst && JoinWarMatchVector(meta->againstTrigger,
                        defendersBegin, defendersEnd, parentScope);
                    bool joinAttack = false;
                    bool joinDefend = false;
                    if (meta->hasSide && meta->hasAgainst)
                    {
                        joinAttack = sideAttack && againstDefend;
                        joinDefend = sideDefend && againstAttack;
                    }
                    else if (meta->hasSide)
                    {
                        joinAttack = sideAttack;
                        joinDefend = sideDefend;
                    }
                    else if (meta->hasAgainst)
                    {
                        joinAttack = againstDefend;
                        joinDefend = againstAttack;
                    }

                    // Match execution semantics: skip wars with no unique join side.
                    if (joinAttack != joinDefend)
                    {
                        void* joinedBegin = joinAttack ? attackersBegin : defendersBegin;
                        void* joinedEnd = joinAttack ? attackersEnd : defendersEnd;
                        void* opposingBegin = joinAttack ? defendersBegin : attackersBegin;
                        void* opposingEnd = joinAttack ? defendersEnd : attackersEnd;
                        if (meta->hasSide)
                            JoinWarCollectMatchingCountries(meta->sideTrigger, joinedBegin,
                                joinedEnd, parentScope, sideList, "JOIN_WAR_SIDE_LINE");
                        if (meta->hasAgainst)
                            JoinWarCollectMatchingCountries(meta->againstTrigger, opposingBegin,
                                opposingEnd, parentScope, againstList, "JOIN_WAR_AGAINST_LINE");
                    }
                }
            }
            node = next;
        }
        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

static bool JoinWarVectorContains(void* beginPtr, void* endPtr, const DWORD* pair)
{
    uintptr_t begin = (uintptr_t)beginPtr;
    uintptr_t end = (uintptr_t)endPtr;
    if (!begin || end < begin || ((end - begin) & 7) != 0)
        return false;
    unsigned count = (unsigned)((end - begin) / 8);
    if (count > MAX_PARTICIPANTS_PER_SIDE)
        return false;
    for (unsigned i = 0; i < count; ++i)
    {
        const DWORD* item = (const DWORD*)(begin + (uintptr_t)i * 8);
        if (item[0] == pair[0] && item[1] == pair[1])
            return true;
    }
    return false;
}

static bool JoinWarIsValidCountryPair(const DWORD* pair)
{
    if (!g_base || !pair)
        return false;
    void* world = *(void**)(g_base + RVA_WORLD_PTR);
    void* countryManager = *(void**)(g_base + RVA_COUNTRIES_VECTOR);
    if (!world || !countryManager)
        return false;
    void** worldVtable = *(void***)world;
    if (!worldVtable || !worldVtable[7])
        return false;
    tJoinWarCountryCount getCountryCount = (tJoinWarCountryCount)worldVtable[7];
    int count = getCountryCount(world);
    if (count <= 0 || count > (int)MAX_COUNTRIES)
        return false;
    void** countries = *(void***)((char*)countryManager + 4);
    if (!countries)
        return false;
    for (int i = 0; i < count; ++i)
    {
        void* country = countries[i];
        if (country && *(DWORD*)((char*)country + OFF_COUNTRY_PAIR) == pair[0] &&
            *(DWORD*)((char*)country + OFF_COUNTRY_PAIR + 4) == pair[1])
            return true;
    }
    return false;
}

static void JoinWarAddToSide(void* war, bool attackers, bool makeLeader, const DWORD* pair)
{
    tJoinWarSideAdd add = (tJoinWarSideAdd)(g_base + (attackers ? RVA_ADD_ATTACKER : RVA_ADD_DEFENDER));
    add(war, 1, makeLeader ? 1 : 0, pair[0], pair[1]);
}

static void JoinWarProcessWar(void* war, JoinWarEffectMeta* meta, const DWORD* entrant, void* parentScope)
{
    if (!war || !meta || !entrant || !parentScope)
        return;
    void* attackersBegin = *(void**)((char*)war + OFF_WAR_ATTACKERS_BEGIN);
    void* attackersEnd = *(void**)((char*)war + OFF_WAR_ATTACKERS_END);
    void* defendersBegin = *(void**)((char*)war + OFF_WAR_DEFENDERS_BEGIN);
    void* defendersEnd = *(void**)((char*)war + OFF_WAR_DEFENDERS_END);

    if (JoinWarVectorContains(attackersBegin, attackersEnd, entrant) ||
        JoinWarVectorContains(defendersBegin, defendersEnd, entrant))
        return;

    bool sideAttack = meta->hasSide && JoinWarMatchVector(meta->sideTrigger, attackersBegin, attackersEnd, parentScope);
    bool sideDefend = meta->hasSide && JoinWarMatchVector(meta->sideTrigger, defendersBegin, defendersEnd, parentScope);
    bool againstAttack = meta->hasAgainst && JoinWarMatchVector(meta->againstTrigger, attackersBegin, attackersEnd, parentScope);
    bool againstDefend = meta->hasAgainst && JoinWarMatchVector(meta->againstTrigger, defendersBegin, defendersEnd, parentScope);
    bool joinAttack = false;
    bool joinDefend = false;

    if (meta->hasSide && meta->hasAgainst)
    {
        joinAttack = sideAttack && againstDefend;
        joinDefend = sideDefend && againstAttack;
    }
    else if (meta->hasSide)
    {
        joinAttack = sideAttack;
        joinDefend = sideDefend;
    }
    else if (meta->hasAgainst)
    {
        joinAttack = againstDefend;
        joinDefend = againstAttack;
    }

    // If broad selectors match both orientations, do not guess which side the
    // author intended for this war.
    if (joinAttack == joinDefend)
        return;
    JoinWarAddToSide(war, joinAttack, meta->leader, entrant);
}

static void __fastcall JoinWarExecute(void* self, void* edx, void* context, int scale)
{
    (void)edx; (void)scale;
    JoinWarEffectMeta* meta = JoinWarFindMeta(self);
    if (!meta || !meta->parseValid || !context || !g_base)
        return;

    __try
    {
        const DWORD* entrant = (const DWORD*)((char*)context + OFF_CTX_COUNTRY_PAIR);
        if (!JoinWarIsValidCountryPair(entrant))
            return;
        void* world = *(void**)(g_base + RVA_WORLD_PTR);
        if (!world)
            return;
        void* node = *(void**)((char*)world + OFF_WORLD_WARS);
        unsigned warCount = 0;
        while (node && warCount++ < MAX_WAR_NODES)
        {
            void* war = *(void**)node;
            void* next = *(void**)((char*)node + 8);
            JoinWarProcessWar(war, meta, entrant, context);
            node = next;
        }
        if (InterlockedIncrement((volatile LONG*)&g_joinWarExecuteCount) <= 10 && V2_DebugLogEnabled())
            Log("JoinWar: processed script effect %p (%s%s), live wars traversed=%u",
                self, meta->hasSide ? "side" : "", meta->hasAgainst ? "+against" : "", warCount);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        Log("JoinWar: exception while executing effect %p", self);
    }
}

static void* __fastcall JoinWarTooltip(void* self, void* edx, void* outString,
    uintptr_t a1, uintptr_t a2, uintptr_t a3, uintptr_t a4, uintptr_t a5,
    uintptr_t a6, uintptr_t a7, uintptr_t a8, uintptr_t a9)
{
    (void)edx;
    JoinWarEffectMeta* meta = JoinWarFindMeta(self);
    if (!meta || !outString)
        return JoinWarNoopTooltip(self, edx, outString, a1, a2, a3, a4, a5,
            a6, a7, a8, a9);

    JoinWarTooltipCountryList sideList = {};
    JoinWarTooltipCountryList againstList = {};
    void* scope = CoreFindTooltipEventScope(a1, a2, a3, a4, a5,
        a6, a7, a8, a9, 0);
    const bool namesResolved = scope && JoinWarBuildTooltipCountryLists(meta,
        scope, &sideList, &againstList);

    char output[JOIN_WAR_TOOLTIP_OUTPUT_CAPACITY] = {};
    if (namesResolved && sideList.count)
        strncpy_s(output, sizeof(output), sideList.text, _TRUNCATE);
    if (namesResolved && againstList.count)
    {
        const size_t used = strlen(output);
        if (used && used + 1 < sizeof(output))
            strcat_s(output, sizeof(output), "\n");
        strcat_s(output, sizeof(output), againstList.text);
    }
    JoinWarSetTooltipString(outString, output);
    return outString;
}

static bool JoinWarIsKeyword(void* parserContext)
{
    if (!parserContext)
        return false;
    const char* key = (const char*)parserContext + OFF_PARSER_KEY_TEXT;
    return _stricmp(key, "join_war") == 0;
}

bool CaptureJoinWarScriptEffect(void* self, void* edx, void* parserContext, int keyId,
    tCoreEffectFactory originalFactory)
{
    (void)keyId;
    if (!g_joinWarEnabled || !JoinWarIsKeyword(parserContext))
        return false;
    if (!self || !parserContext || !originalFactory || !g_base)
        return true;

    // CAssimilateEffect is a known block-tolerant factory product: its vanilla
    // parser does not consume the opening-brace body. Its per-instance cloned
    // vtable is replaced below, so the assimilate behavior is never executed.
    originalFactory(self, edx, parserContext, KW_ASSIMILATE_EFFECT);

    __try
    {
        void* tail = *(void**)((char*)self + OFF_EFFECT_CHILD_TAIL);
        void* effect = tail ? *(void**)tail : 0;
        if (!effect)
        {
            Log("JoinWar: native placeholder factory returned no effect");
            return true;
        }

        void** nativeVtable = *(void***)effect;
        if (!nativeVtable)
            return true;
        JoinWarInitializeOverflowVtable(nativeVtable);
        JoinWarEffectMeta* meta = JoinWarAllocateMeta(effect);
        if (!meta)
        {
            *(void***)effect = &g_joinWarOverflowVtable[1];
            Log("JoinWar: effect metadata limit reached; effect disabled");
            int token = 0;
            while (JoinWarPeek(parserContext, &token) && token != TOKEN_CLOSE_BRACE && token != TOKEN_EOF)
            {
                tJoinWarReadProperty readProperty = (tJoinWarReadProperty)(g_base + RVA_PARSER_READ_PROPERTY);
                readProperty(parserContext);
                if (*(int*)((char*)parserContext + OFF_PARSER_VALUE_TOKEN) == TOKEN_OPEN_BRACE)
                    JoinWarSkipNestedBlock(parserContext);
            }
            int* lexer = *(int**)((char*)parserContext + OFF_PARSER_LEXER);
            if (lexer && lexer[3] == TOKEN_CLOSE_BRACE)
                ((tJoinWarLexNext)(*(void***)lexer)[1])(lexer, 0);
            return true;
        }

        meta->originalExecute = nativeVtable[EFFECT_EXECUTE_SLOT];
        meta->originalTooltip = nativeVtable[EFFECT_TOOLTIP_SLOT];
        meta->originalDestructor = nativeVtable[EFFECT_DESTRUCTOR_SLOT];
        meta->vtableWithRtti[0] = nativeVtable[-1];
        memcpy(&meta->vtableWithRtti[1], nativeVtable, sizeof(void*) * EFFECT_VTABLE_SLOTS);
        meta->vtableWithRtti[1 + EFFECT_EXECUTE_SLOT] = (void*)&JoinWarExecute;
        meta->vtableWithRtti[1 + EFFECT_TOOLTIP_SLOT] = (void*)&JoinWarTooltip;
        meta->vtableWithRtti[1 + EFFECT_DESTRUCTOR_SLOT] = (void*)&JoinWarEffectDestructor;
        *(void***)effect = &meta->vtableWithRtti[1];

        meta->parseValid = JoinWarParseBlock(parserContext, meta);
        if (!meta->parseValid)
            Log("JoinWar: malformed or empty selector block; effect %p disabled", effect);
        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        Log("JoinWar: exception while parsing effect block");
        return true;
    }
}

bool InstallJoinWarScriptEffect()
{
    g_joinWarEnabled = true;
    if (!InstallEffectFactoryHook(true))
    {
        g_joinWarEnabled = false;
        Log("JoinWar: shared effect factory hook unavailable; effect not registered");
        return false;
    }
    Log("JoinWar: script effect registered; native trigger parser and war-side helpers enabled");
    return true;
}
