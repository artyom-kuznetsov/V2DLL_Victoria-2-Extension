// CK2-style if / else_if / else blocks for Victoria II event and decision effects.
// The native any_country effect parser already understands a block containing
// limit plus child effects. The factory hook routes our three keywords through
// that parser, then replaces the scope-changing execute method with a
// same-scope conditional executor.
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include "CCore_Shared.h"

static const int TOKEN_OPEN_BRACE = 3;
static const int OFF_PARSER_KEY_TEXT = 0x24;
static const int OFF_PARSER_VALUE_TOKEN = 0x228;
static const int OFF_EFFECT_CHILD_HEAD = 0x08;
static const int OFF_EFFECT_CHILD_TAIL = 0x0C;
static const int OFF_ANY_COUNTRY_LIMIT = 0x20;
static const int EFFECT_TOOLTIP_SLOT = 8;
static const int EFFECT_PARSE_SLOT = 7;
static const int EFFECT_EXECUTE_SLOT = 11;
// Runtime VA 0x011AC904 from CEventScope instances; the executable was loaded
// at 0x00780000 in the tested process, so its RVA is 0xA2C904.
static const DWORD RVA_EVENT_SCOPE_VTABLE = 0xA2C904;
// FUN_00876B30's case 0x456 creates a 0x3C-byte CAnyCountryEffect. Its
// parser accepts exactly the limit/effects block needed here.
static const int KW_ANY_COUNTRY_EFFECT = 0x456;

enum IfElseOperatorKind
{
    IF_ELSE_OPERATOR_IF = 0,
    IF_ELSE_OPERATOR_ELSE_IF = 1,
    IF_ELSE_OPERATOR_ELSE = 2
};

struct IfElseOperatorMeta
{
    void* effect;
    void* parent;
    void* node;
    void* group;
    int kind;
    bool terminal;
    bool hasElse;
    // MSVC stores the Complete Object Locator immediately before the vtable
    // address held by the object. Keep it at clone[-1] so RTTI/dynamic-cast
    // and deleting-destructor paths continue to see the native class metadata.
    void* vtableWithRtti[17];
};

static const unsigned IF_ELSE_OPERATOR_META_CAPACITY = 8192;
static IfElseOperatorMeta g_meta[IF_ELSE_OPERATOR_META_CAPACITY];
static unsigned g_metaCount = 0;
static bool g_enabled = false;
static void* g_origAnyCountryExecute = 0;
static void* g_origAnyCountryTooltip = 0;

static const unsigned IF_ELSE_OPERATOR_STATE_CAPACITY = 1024;
struct IfElseOperatorState
{
    void* group;
    void* context;
    DWORD threadId;
    unsigned long age;
    bool taken;
};
static IfElseOperatorState g_states[IF_ELSE_OPERATOR_STATE_CAPACITY];
static unsigned long g_stateAge = 0;
static SRWLOCK g_stateLock = SRWLOCK_INIT;

typedef char(__fastcall* tTriggerEvaluate)(void* self, void* edx, void* context);
typedef void(__fastcall* tEffectExecute)(void* self, void* edx, void* context, int arg);
// Native CEffect tooltip epilogue is `ret 2Ch`: output string plus ten
// additional stack arguments. Preserve the complete ABI in the vtable hook.
typedef void*(__thiscall* tEffectTooltip)(void* self, void* out,
    uintptr_t a1, uintptr_t a2, uintptr_t a3, uintptr_t a4, uintptr_t a5,
    uintptr_t a6, uintptr_t a7, uintptr_t a8, uintptr_t a9, uintptr_t a10);

static unsigned MetaHash(void* effect)
{
    DWORD x = (DWORD)(DWORD_PTR)effect >> 4;
    x ^= x >> 16;
    x *= 0x7FEB352D;
    x ^= x >> 15;
    return x & (IF_ELSE_OPERATOR_META_CAPACITY - 1);
}

static IfElseOperatorMeta* MetaFind(void* effect)
{
    if (!effect)
        return 0;
    unsigned at = MetaHash(effect);
    for (unsigned i = 0; i < IF_ELSE_OPERATOR_META_CAPACITY; ++i)
    {
        IfElseOperatorMeta* meta = &g_meta[(at + i) & (IF_ELSE_OPERATOR_META_CAPACITY - 1)];
        if (!meta->effect)
            return 0;
        if (meta->effect == effect)
            return meta;
    }
    return 0;
}

static IfElseOperatorMeta* MetaInsert(void* effect)
{
    if (!effect || g_metaCount >= IF_ELSE_OPERATOR_META_CAPACITY)
        return 0;
    unsigned at = MetaHash(effect);
    for (unsigned i = 0; i < IF_ELSE_OPERATOR_META_CAPACITY; ++i)
    {
        IfElseOperatorMeta* meta = &g_meta[(at + i) & (IF_ELSE_OPERATOR_META_CAPACITY - 1)];
        if (!meta->effect)
        {
            memset(meta, 0, sizeof(*meta));
            meta->effect = effect;
            ++g_metaCount;
            return meta;
        }
    }
    return 0;
}

static void MarkTerminal(IfElseOperatorMeta* meta)
{
    if (meta)
        meta->terminal = true;
}

void IfElseOperatorBeforeFactory(void* self)
{
    if (!g_enabled || !self)
        return;

    void* tail = *(void**)((char*)self + OFF_EFFECT_CHILD_TAIL);
    void* effect = tail ? *(void**)tail : 0;
    IfElseOperatorMeta* previous = MetaFind(effect);
    if (previous && previous->parent == self)
        MarkTerminal(previous);
}

static bool ParseIfElseOperatorKey(void* ctx, int* kind)
{
    if (!ctx || !kind || *(int*)((char*)ctx + OFF_PARSER_VALUE_TOKEN) != TOKEN_OPEN_BRACE)
        return false;

    const char* key = (const char*)ctx + OFF_PARSER_KEY_TEXT;
    if (_stricmp(key, "if") == 0)
        *kind = IF_ELSE_OPERATOR_IF;
    else if (_stricmp(key, "else_if") == 0)
        *kind = IF_ELSE_OPERATOR_ELSE_IF;
    else if (_stricmp(key, "else") == 0)
        *kind = IF_ELSE_OPERATOR_ELSE;
    else
        return false;
    return true;
}

static IfElseOperatorMeta* PreviousBranch(void* node, void* parent)
{
    void* previousNode = node ? *(void**)((char*)node + 4) : 0;
    void* previousEffect = previousNode ? *(void**)previousNode : 0;
    IfElseOperatorMeta* previous = MetaFind(previousEffect);
    return previous && previous->parent == parent ? previous : 0;
}

static IfElseOperatorState* StateFindLocked(void* group, void* context, DWORD threadId)
{
    for (unsigned i = 0; i < IF_ELSE_OPERATOR_STATE_CAPACITY; ++i)
    {
        IfElseOperatorState* state = &g_states[i];
        if (state->group == group && state->context == context && state->threadId == threadId)
            return state;
    }
    return 0;
}

static IfElseOperatorState* StateGetLocked(void* group, void* context, DWORD threadId)
{
    IfElseOperatorState* state = StateFindLocked(group, context, threadId);
    if (state)
    {
        state->age = ++g_stateAge;
        return state;
    }

    IfElseOperatorState* oldest = &g_states[0];
    for (unsigned i = 0; i < IF_ELSE_OPERATOR_STATE_CAPACITY; ++i)
    {
        if (!g_states[i].group)
        {
            oldest = &g_states[i];
            break;
        }
        if (g_states[i].age < oldest->age)
            oldest = &g_states[i];
    }
    oldest->group = group;
    oldest->context = context;
    oldest->threadId = threadId;
    oldest->age = ++g_stateAge;
    oldest->taken = false;
    return oldest;
}

static void StateBegin(void* group, void* context)
{
    AcquireSRWLockExclusive(&g_stateLock);
    IfElseOperatorState* state = StateGetLocked(group, context, GetCurrentThreadId());
    state->taken = false;
    ReleaseSRWLockExclusive(&g_stateLock);
}

static bool StateTaken(void* group, void* context)
{
    AcquireSRWLockExclusive(&g_stateLock);
    IfElseOperatorState* state = StateGetLocked(group, context, GetCurrentThreadId());
    bool taken = state->taken;
    ReleaseSRWLockExclusive(&g_stateLock);
    return taken;
}

static void StateSetTaken(void* group, void* context)
{
    AcquireSRWLockExclusive(&g_stateLock);
    IfElseOperatorState* state = StateGetLocked(group, context, GetCurrentThreadId());
    state->taken = true;
    ReleaseSRWLockExclusive(&g_stateLock);
}

static void StateClear(void* group, void* context)
{
    AcquireSRWLockExclusive(&g_stateLock);
    IfElseOperatorState* state = StateFindLocked(group, context, GetCurrentThreadId());
    if (state)
        memset(state, 0, sizeof(*state));
    ReleaseSRWLockExclusive(&g_stateLock);
}

static bool EvaluateLimit(void* effect, void* context)
{
    void* trigger = (char*)effect + OFF_ANY_COUNTRY_LIMIT;
    void** vtable = *(void***)trigger;
    if (!vtable || !vtable[6])
        return true;
    return ((tTriggerEvaluate)vtable[6])(trigger, 0, context) != 0;
}

static void ClearTooltipString(void* out)
{
    if (!out)
        return;
    unsigned char* str = (unsigned char*)out;
    unsigned capacity = *(unsigned*)(str + 0x14);
    char* data = capacity > 15 ? *(char**)str : (char*)str;
    if (data)
        data[0] = 0;
    *(unsigned*)(str + 0x10) = 0;
}

// CAnyCountryEffect's native tooltip adds an "All countries" wrapper to
// conditional branches. Remove it when the branch is applicable to this scope.
static bool FlattenIfElseOperatorTooltip(void* out)
{
    if (!out)
        return false;
    unsigned char* str = (unsigned char*)out;
    unsigned length = *(unsigned*)(str + 0x10);
    unsigned capacity = *(unsigned*)(str + 0x14);
    if (length == 0 || length > 1024 * 1024 || capacity < length)
        return false;
    char* data = capacity > 15 ? *(char**)str : (char*)str;
    if (!data)
        return false;

    unsigned start = length;
    for (unsigned i = 0; i + 4 <= length; ++i)
    {
        if (_strnicmp(data + i, "will", 4) == 0 &&
            (i == 0 || data[i - 1] == ' ' || data[i - 1] == '\n' || data[i - 1] == '\t') &&
            (i + 4 == length || data[i + 4] == ' ' || data[i + 4] == '\n' || data[i + 4] == '\t'))
        {
            start = i + 4;
            while (start < length && (data[start] == ' ' || data[start] == '\n' || data[start] == '\t'))
                ++start;
            break;
        }
    }
    if (start == length)
    {
        // An unconditional any_country block is rendered as "All countries
        // gain ..." without the word "will" used by limited blocks.
        static const char prefix[] = "All countries ";
        const unsigned prefixLength = sizeof(prefix) - 1;
        if (length <= prefixLength || _strnicmp(data, prefix, prefixLength) != 0)
            return false;
        start = prefixLength;
    }

    unsigned kept = length - start;
    memmove(data, data + start, kept);
    data[kept] = 0;
    *(unsigned*)(str + 0x10) = kept;
    if (data[0] >= 'a' && data[0] <= 'z')
        data[0] = (char)(data[0] - ('a' - 'A'));
    return true;
}

static bool EvaluateLimitSeh(void* effect, void* scope, bool* result)
{
    if (!effect || !scope || !result)
        return false;
    __try
    {
        *result = EvaluateLimit(effect, scope);
        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

static bool TryEvaluateLimit(void* effect, void* scope, bool* result)
{
    try
    {
        return EvaluateLimitSeh(effect, scope, result);
    }
    catch (...)
    {
        return false;
    }
}

static void* FindActiveEventScope()
{
    DWORD base = (DWORD)(DWORD_PTR)GetModuleHandleA(0);
    if (!base)
        return 0;

    unsigned char marker = 0;
    uintptr_t current = ((uintptr_t)&marker + 3) & ~(uintptr_t)3;
    DWORD stackBase = 0;
    __asm {
        mov eax, fs:[4]
        mov stackBase, eax
    }
    uintptr_t end = stackBase ? (uintptr_t)stackBase : current + 0x20000;
    if (end > current + 0x40000)
        end = current + 0x40000;

    DWORD wantedVtable = base + RVA_EVENT_SCOPE_VTABLE;
    uintptr_t p = current;
    while (p + 0x44 <= end)
    {
        MEMORY_BASIC_INFORMATION mbi;
        if (!VirtualQuery((void*)p, &mbi, sizeof(mbi)))
            break;
        uintptr_t regionEnd = (uintptr_t)mbi.BaseAddress + mbi.RegionSize;
        if (regionEnd <= p)
            break;
        uintptr_t scanEnd = regionEnd < end ? regionEnd : end;
        DWORD protect = mbi.Protect & 0xFF;
        bool readable = protect == PAGE_READONLY || protect == PAGE_READWRITE ||
            protect == PAGE_WRITECOPY || protect == PAGE_EXECUTE_READ ||
            protect == PAGE_EXECUTE_READWRITE || protect == PAGE_EXECUTE_WRITECOPY;
        if (mbi.State == MEM_COMMIT && readable &&
            !(mbi.Protect & (PAGE_NOACCESS | PAGE_GUARD)))
        {
            uintptr_t q = (p + 3) & ~(uintptr_t)3;
            for (; q + 0x28 <= scanEnd; q += sizeof(void*))
            {
                if (*(DWORD*)q == wantedVtable)
                {
                    void* canonical = *(void**)(q + 0x24);
                    if (!canonical)
                        continue;
                    MEMORY_BASIC_INFORMATION scopeMbi;
                    if (!VirtualQuery(canonical, &scopeMbi, sizeof(scopeMbi)) ||
                        scopeMbi.State != MEM_COMMIT ||
                        (scopeMbi.Protect & (PAGE_NOACCESS | PAGE_GUARD)) != 0 ||
                        (uintptr_t)canonical + 0x28 > (uintptr_t)scopeMbi.BaseAddress + scopeMbi.RegionSize)
                        continue;
                    if (*(DWORD*)canonical == wantedVtable &&
                        *(void**)((char*)canonical + 0x24) == canonical)
                        return canonical;
                }
            }
        }
        p = scanEnd;
    }
    return 0;
}

static void* FindScopeInTooltipArgument(uintptr_t value)
{
    DWORD base = (DWORD)(DWORD_PTR)GetModuleHandleA(0);
    if (!base || value < 0x10000)
        return 0;
    DWORD wantedVtable = base + RVA_EVENT_SCOPE_VTABLE;
    __try
    {
        MEMORY_BASIC_INFORMATION mbi;
        if (!VirtualQuery((void*)value, &mbi, sizeof(mbi)) || mbi.State != MEM_COMMIT ||
            (mbi.Protect & (PAGE_NOACCESS | PAGE_GUARD)) != 0)
            return 0;
        uintptr_t regionEnd = (uintptr_t)mbi.BaseAddress + mbi.RegionSize;
        // Tooltip calls pass the active CEventScope directly as their first
        // context argument. Check it before scanning nearby wrapper objects.
        if (value + 0x28 <= regionEnd && *(DWORD*)value == wantedVtable &&
            *(void**)(value + 0x24) == (void*)value)
            return (void*)value;
        uintptr_t scanEnd = value + 0x100 < regionEnd ? value + 0x100 : regionEnd;
        for (uintptr_t p = value & ~(uintptr_t)3; p + 0x28 <= scanEnd; p += sizeof(void*))
        {
            if (*(DWORD*)p == wantedVtable)
            {
                void* canonical = *(void**)(p + 0x24);
                if (canonical && *(DWORD*)canonical == wantedVtable &&
                    *(void**)((char*)canonical + 0x24) == canonical)
                    return canonical;
            }
            uintptr_t pointed = *(uintptr_t*)p;
            if (pointed < 0x10000)
                continue;
            MEMORY_BASIC_INFORMATION pointedMbi;
            if (!VirtualQuery((void*)pointed, &pointedMbi, sizeof(pointedMbi)) ||
                pointedMbi.State != MEM_COMMIT ||
                (pointedMbi.Protect & (PAGE_NOACCESS | PAGE_GUARD)) != 0 ||
                pointed + 0x28 > (uintptr_t)pointedMbi.BaseAddress + pointedMbi.RegionSize)
                continue;
            if (*(DWORD*)pointed == wantedVtable &&
                *(void**)(pointed + 0x24) == (void*)pointed)
                return (void*)pointed;
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return 0;
    }
    return 0;
}

static void* FindTooltipEventScope(uintptr_t a1, uintptr_t a2, uintptr_t a3,
    uintptr_t a4, uintptr_t a5, uintptr_t a6, uintptr_t a7, uintptr_t a8,
    uintptr_t a9, uintptr_t a10)
{
    uintptr_t args[] = { a1, a2, a3, a4, a5, a6, a7, a8, a9, a10 };
    for (unsigned i = 0; i < sizeof(args) / sizeof(args[0]); ++i)
    {
        void* scope = FindScopeInTooltipArgument(args[i]);
        if (scope)
            return scope;
    }
    return FindActiveEventScope();
}

// Return false when a trigger could not be evaluated safely. The caller then
// preserves the vanilla tooltip instead of hiding a branch on uncertain data.
static bool EarlierBranchPassed(IfElseOperatorMeta* meta, void* scope, bool* passed)
{
    if (!passed)
        return false;
    *passed = false;
    void* node = meta && meta->node ? *(void**)((char*)meta->node + 4) : 0;
    for (unsigned guard = 0; node && guard < 100000; ++guard)
    {
        IfElseOperatorMeta* previous = MetaFind(*(void**)node);
        if (previous && previous->group == meta->group && previous->kind != IF_ELSE_OPERATOR_ELSE)
        {
            bool result = false;
            if (!TryEvaluateLimit(previous->effect, scope, &result))
                return false;
            if (result)
            {
                *passed = true;
                return true;
            }
        }
        node = *(void**)((char*)node + 4);
    }
    return true;
}

static void* __fastcall IfElseOperatorTooltipHook(void* self, void* edx,
    void* out, uintptr_t a1, uintptr_t a2, uintptr_t a3, uintptr_t a4,
    uintptr_t a5, uintptr_t a6, uintptr_t a7, uintptr_t a8, uintptr_t a9,
    uintptr_t a10)
{
    IfElseOperatorMeta* meta = MetaFind(self);
    bool flatten = false;
    void* scope = 0;
    bool hide = false;
    bool known = false;
    if (meta && g_origAnyCountryTooltip)
    {
        scope = FindTooltipEventScope(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
        if (scope)
        {
            known = true;
            if (meta->kind == IF_ELSE_OPERATOR_IF)
            {
                bool result = false;
                known = TryEvaluateLimit(self, scope, &result);
                hide = known && !result;
                flatten = known && result;
            }
            else
            {
                bool earlier = false;
                known = EarlierBranchPassed(meta, scope, &earlier);
                hide = known && earlier;
                if (known && !hide && meta->kind == IF_ELSE_OPERATOR_ELSE_IF)
                {
                    bool result = false;
                    known = TryEvaluateLimit(self, scope, &result);
                    hide = known && !result;
                    flatten = known && result;
                }
                else if (known && !hide && meta->kind == IF_ELSE_OPERATOR_ELSE)
                    flatten = true;
            }

            if (known && hide)
            {
                // Let the native tooltip initialize its output string before
                // clearing it. The caller may pass an uninitialized buffer.
                void* result = ((tEffectTooltip)g_origAnyCountryTooltip)(self, out,
                    a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
                ClearTooltipString(out);
                return result;
            }
        }
    }

    void* result = g_origAnyCountryTooltip
        ? ((tEffectTooltip)g_origAnyCountryTooltip)(self, out,
            a1, a2, a3, a4, a5, a6, a7, a8, a9, a10)
        : out;
    if (meta && meta->kind == IF_ELSE_OPERATOR_ELSE)
    {
        if (flatten)
            FlattenIfElseOperatorTooltip(out);
    }
    else if (flatten)
        FlattenIfElseOperatorTooltip(out);
    return result;
}

static void ExecuteChildren(void* effect, void* edx, void* context, int arg)
{
    void* node = *(void**)((char*)effect + OFF_EFFECT_CHILD_HEAD);
    for (unsigned guard = 0; node && guard < 100000; ++guard)
    {
        void* child = *(void**)node;
        if (child)
        {
            void** vtable = *(void***)child;
            if (vtable && vtable[EFFECT_EXECUTE_SLOT])
                ((tEffectExecute)vtable[EFFECT_EXECUTE_SLOT])(child, edx, context, arg);
        }
        node = *(void**)((char*)node + 8);
    }
}

static void __fastcall IfElseOperatorExecuteHook(void* self, void* edx, void* context, int arg)
{
    IfElseOperatorMeta* meta = MetaFind(self);
    if (!meta)
    {
        if (g_origAnyCountryExecute)
            ((tEffectExecute)g_origAnyCountryExecute)(self, edx, context, arg);
        return;
    }

    bool run = false;
    if (meta->kind == IF_ELSE_OPERATOR_IF)
    {
        StateBegin(meta->group, context);
        run = EvaluateLimit(self, context);
        if (run)
            StateSetTaken(meta->group, context);
    }
    else if (meta->kind == IF_ELSE_OPERATOR_ELSE_IF)
    {
        if (!StateTaken(meta->group, context))
        {
            run = EvaluateLimit(self, context);
            if (run)
                StateSetTaken(meta->group, context);
        }
    }
    else
    {
        run = !StateTaken(meta->group, context);
        if (run)
            StateSetTaken(meta->group, context);
    }

    if (run)
        ExecuteChildren(self, edx, context, arg);

    if (meta->terminal || meta->kind == IF_ELSE_OPERATOR_ELSE)
        StateClear(meta->group, context);
}

bool CaptureIfElseOperator(void* self, void* edx, void* ctx, int keyId,
    tCoreEffectFactory originalFactory)
{
    if (!g_enabled || !self || !originalFactory)
        return false;

    int kind = 0;
    if (!ParseIfElseOperatorKey(ctx, &kind))
        return false;

    // A new `if` starts a fresh chain. else_if/else are joined after parsing
    // if their previous sibling is another conditional branch.
    if (kind == IF_ELSE_OPERATOR_IF)
        IfElseOperatorBeforeFactory(self);

    if (g_metaCount >= IF_ELSE_OPERATOR_META_CAPACITY)
    {
        return false;
    }

    originalFactory(self, edx, ctx, KW_ANY_COUNTRY_EFFECT);

    void* node = *(void**)((char*)self + OFF_EFFECT_CHILD_TAIL);
    void* effect = node ? *(void**)node : 0;
    if (!node || !effect)
    {
        return true; // The native parser already consumed the block.
    }

    IfElseOperatorMeta* previous = PreviousBranch(node, self);
    IfElseOperatorMeta* meta = MetaInsert(effect);
    if (!meta)
    {
        return true;
    }

    meta->parent = self;
    meta->node = node;
    meta->kind = kind;
    bool joinsPrevious = previous && !previous->hasElse &&
        (kind == IF_ELSE_OPERATOR_ELSE_IF || kind == IF_ELSE_OPERATOR_ELSE);
    if (joinsPrevious)
    {
        meta->group = previous->group;
        previous->terminal = false;
        IfElseOperatorMeta* first = MetaFind(meta->group);
        if (first && kind == IF_ELSE_OPERATOR_ELSE)
            first->hasElse = true;
    }
    else
    {
        if (previous && (kind == IF_ELSE_OPERATOR_ELSE_IF || kind == IF_ELSE_OPERATOR_ELSE))
            MarkTerminal(previous);
        if (kind == IF_ELSE_OPERATOR_ELSE_IF)
        {
            meta->kind = IF_ELSE_OPERATOR_IF;
        }
        meta->group = effect;
    }

    void** nativeVtable = *(void***)effect;
    if (!nativeVtable)
    {
        return true;
    }
    meta->vtableWithRtti[0] = nativeVtable[-1];
    memcpy(&meta->vtableWithRtti[1], nativeVtable, sizeof(meta->vtableWithRtti) - sizeof(void*));
    if (!g_origAnyCountryExecute)
        g_origAnyCountryExecute = nativeVtable[EFFECT_EXECUTE_SLOT];
    if (!g_origAnyCountryTooltip)
        g_origAnyCountryTooltip = nativeVtable[EFFECT_TOOLTIP_SLOT];
    meta->vtableWithRtti[1 + EFFECT_TOOLTIP_SLOT] = (void*)&IfElseOperatorTooltipHook;
    meta->vtableWithRtti[1 + EFFECT_EXECUTE_SLOT] = (void*)&IfElseOperatorExecuteHook;
    *(void***)effect = &meta->vtableWithRtti[1];

    if (node == *(void**)((char*)self + OFF_EFFECT_CHILD_TAIL) || meta->kind == IF_ELSE_OPERATOR_ELSE)
        meta->terminal = true;

    return true;
}

bool InstallIfElseOperators()
{
    Log("IfElseOperators: initialization called");
    g_enabled = true;
    if (!InstallEffectFactoryHook())
    {
        g_enabled = false;
        return false;
    }
    return true;
}
