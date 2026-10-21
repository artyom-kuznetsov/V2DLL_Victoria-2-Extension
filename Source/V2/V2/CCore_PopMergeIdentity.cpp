// Percentage move_pop block, localized tooltip and scripted-move identity guard.
#include <windows.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "CCore_Shared.h"

// Debug log goes through the main file's DEBUG_LOG setting.
#define LogDbg(...) do { if (V2_DebugLogEnabled()) Log(__VA_ARGS__); } while (0)

static const DWORD RVA_PARSER_READ_PROP = 0x5A1440;
static const DWORD RVA_WORLD_PTR = 0xE588E8;
static const int OFF_PARSER_LEXER = 0x1C;
static const int OFF_PARSER_KEY_TEXT = 0x24;
static const int OFF_PARSER_VALUE_TEXT = 0x22C;
static const int OFF_LEXER_PEEK_FLAG = 0x110;
static const int OFF_SESSION_PROVINCES = 0xACC;
static const int TOKEN_OPEN_BRACE = 3;
static const int TOKEN_CLOSE_BRACE = 4;
static const int TOKEN_EOF = 0x13;
static const int OFF_PARSER_VALUE_TOKEN = 0x228;
static const int OFF_CTX_POP = 0x14;
static const int OFF_POPTYPE_EMPLOYABLE = 0x40;
static const int OFF_EMPLOYER_STAFF = 0x10;
static const int OFF_PROVINCE_RGO_INDEX = 0x58;
static const int OFF_PROVINCE_STATE = 0x188;
static const int OFF_STATE_FACTORIES = 0x60;
static const int OFF_FACTORY_NEXT = 0x224;
static const int OFF_FACTORY_EMPLOYER = 0xE0;
static const int OFF_POP_EMPLOYED = 0x60;
static const int OFF_POP_PREVIOUS_SIZE = 0x5C;
static const int OFF_POP_SIZE = 0x58;
static const int OFF_POP_PROVINCE = 0x64;
static const int OFF_POP_CON = 0x118;
static const int OFF_POP_MIL = 0x120;
static const int OFF_POP_MONEY = 0x180;
static const int OFF_POP_BANK = 0x250;
static const int OFF_POP_NEXT = 0x27C;
static const int ASSIM_MAX_EMPLOYERS = 64;
static const int RGO_STRIDE = 0xB0;
static const int OFF_RGO_EMPLOYER = 0x10;
static const DWORD RVA_MOVE_EXECUTE = 0x497140;
static const DWORD RVA_MOVE_VTABLE = 0xA2BF44;
static const DWORD RVA_MOVE_TOOLTIP = 0x4971A0;
static const int MOVE_EXECUTE_SLOT = 11;
static const int MOVE_TOOLTIP_SLOT = 9;
static const DWORD RVA_FMT_FROM_KEY = 0x5A8EE0;
static const DWORD RVA_FMT_REPLACE = 0x5A9980;
static const DWORD RVA_FMT_FINISH = 0x5A9880;
static const DWORD RVA_FMT_FREE = 0x5A9740;
static const DWORD RVA_LOC_SINGLETON = 0x075500;
static const DWORD RVA_STD_STRING_ASSIGN = 0x009350;
static const DWORD RVA_GAME_OPERATOR_DELETE = 0x6AE91B;
static const DWORD RVA_POP_CREATE = 0x0B8D30;
static const DWORD RVA_POP_COPY_ATTRS = 0x555A00;
static const DWORD RVA_POP_SET_SIZE = 0x555FD0;
static const DWORD RVA_POP_REFRESH_ACCEPTED = 0x557AF0;
static const DWORD RVA_EMPLOYER_HIRE = 0x0EE780;
static const DWORD RVA_RGO_ARRAY = 0xE58728;

typedef int(__fastcall* tLexNext)(void* self, void* edx);
typedef void(__stdcall* tReadProperty)(void* ctx);
typedef void*(__stdcall* tPopCreate)(void* province, void* popType);
typedef void*(__thiscall* tProvinceGetName)(void* province, void* outString);
typedef void*(__thiscall* tStdStringAssign)(void* self, const char* text, unsigned length);
typedef void(__cdecl* tGameDelete)(void* p);
typedef void(__fastcall* tMoveExecute)(void* self, void* edx, void* ctx, int arg);
// The native tooltip epilogue is ret 28h, so all ten stack args are forwarded.
typedef void*(__thiscall* tMoveTooltip)(void* self, void* outString,
    uintptr_t a1, uintptr_t a2, uintptr_t a3, uintptr_t a4, uintptr_t a5,
    uintptr_t a6, uintptr_t a7, uintptr_t a8, uintptr_t a9);

struct MovePopBlock { void* effect; int destination; int amountFp; };
struct GameString { union { char buf[16]; char* ptr; } u; unsigned size, cap; };
struct MoveJob { char* employer; int count; };
static MovePopBlock g_moveBlocks[2048];
static int g_moveBlockCount = 0;
static bool g_moveEnabled = false;
static bool g_moveHookInstalled = false;
static bool g_moveTooltipHookInstalled = false;
static tMoveExecute g_origMoveExecute = 0;
static tMoveTooltip g_origMoveTooltip = 0;
// Keep scripted POP moves on the engine's normal "create a destination POP"
// path when the candidate merge target has a different identity.
static const DWORD RVA_MOVE_MERGE_GATE = 0xB8ED2; // inside FUN_004B8E80
static const unsigned char MOVE_MERGE_GATE_SIG[8] =
    { 0x84, 0xC0, 0x0F, 0x84, 0x9B, 0x00, 0x00, 0x00 };
static const DWORD RVA_MOVE_MERGE_CONTINUE = 0xB8EDA;
static const DWORD RVA_MOVE_MERGE_FALLBACK = 0xB8F75; // exact jz target, start of mov eax,[ebx+64]
static const int OFF_POP_TYPE = 0x68;
static const int OFF_POP_CULTURE = 0x6C;
static const int OFF_POP_RELIGION = 0x70;
static const int POP_IS_REAL_SLOT = 8; // vtable byte offset 0x20

static void* g_moveMergeOriginal = 0;
static void* g_moveMergeContinue = 0;
static void* g_moveMergeFallback = 0;
__declspec(align(16)) static unsigned char g_moveMergeTrampoline[32];
static volatile LONG g_moveMergeFallbacks = 0;

typedef char(__thiscall* tPopIsReal)(void* pop);

static bool MovePopIsReal(void* pop)
{
    if (!pop)
        return false;
    tPopIsReal fn = (tPopIsReal)(*(void***)pop)[POP_IS_REAL_SLOT];
    return fn(pop) != 0;
}

static char* MoveProvince(int id)
{
    char* session = *(char**)(g_base + RVA_WORLD_PTR);
    if (!session || id <= 0)
        return 0;
    char** begin = *(char***)(session + OFF_SESSION_PROVINCES);
    char** end = *(char***)(session + OFF_SESSION_PROVINCES + 4);
    if (!begin || id >= (int)(end - begin))
        return 0;
    return begin[id];
}

static void MoveSkipNestedBlock(int* lexer, tLexNext next)
{
    int depth = 1;
    for (int guard = 0; guard < 100000 && depth > 0; ++guard)
    {
        if (next(lexer, 0) == 0)
            return;
        int type = lexer[3];
        if (type == TOKEN_OPEN_BRACE) ++depth;
        else if (type == TOKEN_CLOSE_BRACE) --depth;
        else if (type == TOKEN_EOF) return;
    }
}
static void MoveSetPopSize(void* p, int n)
{
    DWORD f = g_base + RVA_POP_SET_SIZE;
    __asm
    {
        push esi
        mov esi, p
        mov eax, n
        call f
        pop esi
    }
}
static void MoveCopyPopAttrs(void* d, void* p)
{
    DWORD f = g_base + RVA_POP_COPY_ATTRS;
    __asm
    {
        push esi
        push edi
        mov esi, d
        mov edi, p
        call f
        pop edi
        pop esi
    }
}
static void MoveRefreshAccepted(void* p)
{
    DWORD f = g_base + RVA_POP_REFRESH_ACCEPTED;
    __asm
    {
        push esi
        mov esi, p
        call f
        pop esi
    }
}
static int MoveHire(char* e, void* t, int n)
{
    DWORD f = g_base + RVA_EMPLOYER_HIRE;
    int hired = 0;
    __asm
    {
        push esi
        mov esi, e
        push n
        push t
        call f
        mov hired, eax
        pop esi
    }
    return hired;
}
static int MoveStaffAt(char* employer, char* pop)
{
    char* begin = *(char**)(employer + OFF_EMPLOYER_STAFF);
    char* end = *(char**)(employer + OFF_EMPLOYER_STAFF + 4);
    if (!begin || end <= begin)
        return 0;
    for (char* entry = begin; entry < end; entry += 16)
        if (*(char**)(entry + 8) == pop)
            return *(int*)(entry + 12);
    return 0;
}

static int MoveSnapshotJobs(char* province, char* pop, MoveJob* jobs)
{
    int count = 0;
    char** rgoHolder = *(char***)(g_base + RVA_RGO_ARRAY);
    if (rgoHolder && rgoHolder[0])
    {
        char* rgo = rgoHolder[0] + *(int*)(province + OFF_PROVINCE_RGO_INDEX) * RGO_STRIDE + OFF_RGO_EMPLOYER;
        int staff = MoveStaffAt(rgo, pop);
        if (staff > 0)
        {
            jobs[count].employer = rgo;
            jobs[count++].count = staff;
        }
    }

    char* state = *(char**)(province + OFF_PROVINCE_STATE);
    char* factory = state ? *(char**)(state + OFF_STATE_FACTORIES) : 0;
    for (int guard = 0; factory && guard < 1024 && count < ASSIM_MAX_EMPLOYERS;
        ++guard, factory = *(char**)(factory + OFF_FACTORY_NEXT))
    {
        char* employer = factory + OFF_FACTORY_EMPLOYER;
        int staff = MoveStaffAt(employer, pop);
        if (staff > 0)
        {
            jobs[count].employer = employer;
            jobs[count++].count = staff;
        }
    }
    return count;
}
static MovePopBlock* MoveFind(void* effect)
{
    for (int i = 0; i < g_moveBlockCount; ++i)
        if (g_moveBlocks[i].effect == effect)
            return &g_moveBlocks[i];
    return 0;
}

static MovePopBlock* MoveAlloc(void* effect)
{
    MovePopBlock* b = MoveFind(effect);
    if (!b)
    {
        for (int i = 0; i < g_moveBlockCount; ++i)
            if (!g_moveBlocks[i].effect) { b = &g_moveBlocks[i]; break; }
    }
    if (!b)
    {
        if (g_moveBlockCount >= (int)(sizeof(g_moveBlocks) / sizeof(g_moveBlocks[0])))
            return 0;
        b = &g_moveBlocks[g_moveBlockCount++];
    }
    b->effect = effect;
    b->destination = 0;
    b->amountFp = 0x8000;
    return b;
}

// Build/finalize formatter strings with the game's allocator. In particular,
// never pass a CRT/Windows-heap string to the game's std::string destructor.
static void MoveGameStringSet(GameString* s, const char* text)
{
    memset(s, 0, sizeof(*s));
    s->cap = 15;
    ((tStdStringAssign)(g_base + RVA_STD_STRING_ASSIGN))(s, text, (unsigned)strlen(text));
}

static void MoveGameStringFree(GameString* s)
{
    if (s->cap >= 16 && s->u.ptr)
        ((tGameDelete)(g_base + RVA_GAME_OPERATOR_DELETE))(s->u.ptr);
    memset(s, 0, sizeof(*s));
}

static void MoveFmtReplace(void* formatter, const char* name, const char* value)
{
    GameString nameString, valueString;
    MoveGameStringSet(&nameString, name);
    MoveGameStringSet(&valueString, value);
    GameString* namePtr = &nameString;
    GameString* valuePtr = &valueString;
    DWORD fn = g_base + RVA_FMT_REPLACE;
    __asm
    {
        push valuePtr
        mov ecx, formatter
        mov esi, namePtr
        call fn
    }
    MoveGameStringFree(&nameString);
    MoveGameStringFree(&valueString);
}

static bool MoveTooltipFormatCpp(void* outString, MovePopBlock* blk, char* province)
{
    GameString key, where;
    memset(&key, 0, sizeof(key));
    memset(&where, 0, sizeof(where));
    where.cap = 15;
    where.u.buf[0] = 0;
    unsigned char formatter[0x60];
    memset(formatter, 0, sizeof(formatter));
    bool formatterStarted = false;
    const char* stage = "string setup";

    try
    {
        MoveGameStringSet(&key, "MOVE_POP_AMOUNT_EFFECT");
        ((tProvinceGetName)(*(void***)province)[7])(province, &where);

        char amount[32];
        double pct = (double)blk->amountFp * 100.0 / 32768.0;
        if (pct == (double)(int)(pct + 0.5))
            _snprintf_s(amount, sizeof(amount), _TRUNCATE, "%d%%", (int)(pct + 0.5));
        else
            _snprintf_s(amount, sizeof(amount), _TRUNCATE, "%.1f%%", pct);

        GameString* keyPtr = &key;
        void* formatterPtr = formatter;
        DWORD fromKey = g_base + RVA_FMT_FROM_KEY;
        stage = "FMT_FROM_KEY";
        __asm
        {
            // Match the known-good thunk: ECX=key, EDX=formatter, both also
            // pushed because the game routine cleans its stack arguments.
            push keyPtr
            push formatterPtr
            mov ecx, keyPtr
            mov edx, formatterPtr
            call fromKey
        }
        formatterStarted = true;

        stage = "FMT_REPLACE WHERE";
        MoveFmtReplace(formatter, "WHERE", (where.cap >= 16) ? where.u.ptr : where.u.buf);
        stage = "FMT_REPLACE AMOUNT";
        MoveFmtReplace(formatter, "AMOUNT", amount);

        stage = "localization manager";
        void* locale = ((void*(__cdecl*)(void))(g_base + RVA_LOC_SINGLETON))();
        if (!locale)
            throw 1;

        void* outputPtr = outString;
        DWORD finish = g_base + RVA_FMT_FINISH;
        stage = "FMT_FINISH";
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

        stage = "FMT_FREE";
        DWORD freeFmt = g_base + RVA_FMT_FREE;
        __asm
        {
            push formatterPtr
            call freeFmt
            add esp, 4
        }
        formatterStarted = false;
        MoveGameStringFree(&key);
        MoveGameStringFree(&where);
        return true;
    }
    catch (...)
    {
        Log("MovePopAmount: C++ exception at tooltip stage '%s' (formatter=%s); vanilla fallback",
            stage, formatterStarted ? "allocated" : "not allocated");
        // Do not free the formatter after an exception: the game may have
        // thrown while it was only partially initialized.
        MoveGameStringFree(&key);
        MoveGameStringFree(&where);
        return false;
    }
}

static void* __fastcall MoveTooltipHook(void* self, void* edx, void* outString,
    uintptr_t a1, uintptr_t a2, uintptr_t a3, uintptr_t a4, uintptr_t a5,
    uintptr_t a6, uintptr_t a7, uintptr_t a8, uintptr_t a9)
{
    MovePopBlock* blk = MoveFind(self);
    if (!blk || !outString || blk->destination <= 0 || !g_base || !g_origMoveTooltip)
        return g_origMoveTooltip ? g_origMoveTooltip(self, outString, a1, a2, a3, a4, a5, a6, a7, a8, a9) : outString;

    char* province = MoveProvince(blk->destination);
    if (!province || !*(void***)province)
        return g_origMoveTooltip(self, outString, a1, a2, a3, a4, a5, a6, a7, a8, a9);

    bool formatted = false;
    __try
    {
        formatted = MoveTooltipFormatCpp(outString, blk, province);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        Log("MovePopAmount: access violation in tooltip hook; vanilla fallback");
    }
    return formatted ? outString : g_origMoveTooltip(self, outString, a1, a2, a3, a4, a5, a6, a7, a8, a9);
}

static void MoveRun(MovePopBlock* blk, char* ctx, void* self, void* edx, int arg)
{
    char* pop = *(char**)(ctx + OFF_CTX_POP);
    if (!pop || !MovePopIsReal(pop) || blk->destination <= 0)
        return;
    char* dstProv = MoveProvince(blk->destination);
    char* srcProv = *(char**)(pop + OFF_POP_PROVINCE);
    int size = *(int*)(pop + OFF_POP_SIZE);
    if (!dstProv || !srcProv || dstProv == srcProv || size <= 0)
        return;
    int amount = blk->amountFp;
    if (amount <= 0)
        return;
    if (amount >= 0x8000)
    {
        g_origMoveExecute(self, edx, ctx, arg);
        return;
    }

    int n = (int)(((long long)size * amount + 0x4000) >> 15);
    if (n <= 0)
        return;
    if (n >= size)
    {
        g_origMoveExecute(self, edx, ctx, arg);
        return;
    }

    char* type = *(char**)(pop + OFF_POP_TYPE);
    if (!type)
        return;
    char* moving = (char*)((tPopCreate)(g_base + RVA_POP_CREATE))(srcProv, type);
    if (!moving)
        return;
    MoveCopyPopAttrs(moving, pop);
    *(long long*)(moving + OFF_POP_CON) = *(long long*)(pop + OFF_POP_CON);
    *(long long*)(moving + OFF_POP_MIL) = *(long long*)(pop + OFF_POP_MIL);
    MoveRefreshAccepted(moving);

    // Mirror assimilate's worker-safe split: make room for the migrating
    // share, refill jobs released from this POP while it is still too small
    // to take them back, then restore its remaining population.
    int keep = size - n;
    bool employable = *(unsigned char*)(type + OFF_POPTYPE_EMPLOYABLE) != 0;
    int employed = *(int*)(pop + OFF_POP_EMPLOYED);
    if (employable && employed > 0)
    {
        int share = (int)(((long long)employed * n + size / 2) / size);
        if (employed - share < keep)
            keep = employed - share;
    }
    MoveJob jobs[ASSIM_MAX_EMPLOYERS];
    int jobCount = 0;
    if (employable && employed > keep)
        jobCount = MoveSnapshotJobs(srcProv, pop, jobs);

    MoveSetPopSize(moving, n);
    MoveSetPopSize(pop, keep);
    for (int j = 0; j < jobCount; ++j)
    {
        int lost = jobs[j].count - MoveStaffAt(jobs[j].employer, pop);
        if (lost > 0)
            MoveHire(jobs[j].employer, type, lost);
    }
    if (keep != size - n)
        *(int*)(pop + OFF_POP_SIZE) = size - n;

    long long frac = ((long long)n << 15) / size;
    if (frac > 0x8000)
        frac = 0x8000;
    long long& srcMoney = *(long long*)(pop + OFF_POP_MONEY);
    long long& dstMoney = *(long long*)(moving + OFF_POP_MONEY);
    long long moneyMove = (srcMoney * frac) >> 15;
    srcMoney -= moneyMove;
    dstMoney += moneyMove;
    if (dstMoney < 0)
        dstMoney = 0;
    long long& srcBank = *(long long*)(pop + OFF_POP_BANK);
    long long& dstBank = *(long long*)(moving + OFF_POP_BANK);
    long long bankMove = (srcBank * frac) >> 15;
    srcBank -= bankMove;
    if (srcBank < 0)
        srcBank = 0;
    dstBank += bankMove;

    // CMovePopEffect reads destination id * 1000 at +0x20 and the POP from
    // context +0x14. Reuse the native move path and restore the caller scope.
    void* oldPop = *(void**)(ctx + OFF_CTX_POP);
    *(void**)(ctx + OFF_CTX_POP) = moving;
    g_origMoveExecute(self, edx, ctx, arg);
    *(void**)(ctx + OFF_CTX_POP) = oldPop;

    // The native move path may refresh/reconcile province POP lists after it
    // transfers the temporary POP. Re-apply the source remainder afterwards
    // so that this reconciliation cannot restore the pre-split size.
    int finalKeep = size - n;
    int sourceAfterMove = *(int*)(pop + OFF_POP_SIZE);
    MoveSetPopSize(pop, finalKeep);
    // SetPopSize preserves the pre-change size at +0x5C. The daily POP update
    // normally reconciles that snapshot; a scripted move is already complete,
    // so align the snapshot now to make the source-side count immediate.
    *(int*)(pop + OFF_POP_PREVIOUS_SIZE) = finalKeep;
    int sourceFinal = *(int*)(pop + OFF_POP_SIZE);
    LogDbg("MovePopAmount: split source=%p province=%p original=%d moved=%d keep=%d after_native=%d final=%d previous=%d destination=%d",
        pop, srcProv, size, n, finalKeep, sourceAfterMove, sourceFinal,
        *(int*)(pop + OFF_POP_PREVIOUS_SIZE), blk->destination);
}

static void __fastcall MoveExecuteHook(void* self, void* edx, void* ctx, int arg)
{
    MovePopBlock* blk = MoveFind(self);
    if (!blk)
    {
        // A block that wasn't captured must not fall through to the vanilla
        // executor with its constructor-default destination (province 0).
        if (*(int*)((char*)self + 0x20) <= 0)
        {
            Log("MovePopAmount: ignored uncaptured effect %p with destination %d",
                self, *(int*)((char*)self + 0x20));
            return;
        }
        g_origMoveExecute(self, edx, ctx, arg);
        return;
    }
    __try
    {
        MoveRun(blk, (char*)ctx, self, edx, arg);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        Log("MovePopAmount: exception while executing block effect %p", self);
    }
}

static void ParseMovePopBlock(void* effect, void* ctx)
{
    char* c = (char*)ctx;
    int* lexer = *(int**)(c + OFF_PARSER_LEXER);
    tLexNext next = (tLexNext)(*(void***)lexer)[1];
    tReadProperty readProp = (tReadProperty)(g_base + RVA_PARSER_READ_PROP);
    MovePopBlock* blk = MoveAlloc(effect);
    for (int guard = 0; guard < 256; ++guard)
    {
        if (*((char*)lexer + OFF_LEXER_PEEK_FLAG) == 0)
        {
            int r = next(lexer, 0);
            lexer[2] = r;
            if (r == 0)
                lexer[3] = TOKEN_EOF;
            *((char*)lexer + OFF_LEXER_PEEK_FLAG) = 1;
        }
        int token = lexer[3];
        if (token == TOKEN_CLOSE_BRACE || token == TOKEN_EOF)
            break;
        readProp(ctx);
        const char* key = c + OFF_PARSER_KEY_TEXT;
        const char* value = c + OFF_PARSER_VALUE_TEXT;
        if (*(int*)(c + OFF_PARSER_VALUE_TOKEN) == TOKEN_OPEN_BRACE)
        {
            Log("MovePopAmount: nested block '%s' is not supported - skipped", key);
            MoveSkipNestedBlock(lexer, next);
            continue;
        }
        if (!blk)
            continue;
        if (_stricmp(key, "where") == 0)
        {
            blk->destination = atoi(value);
            if (blk->destination < 0)
                blk->destination = 0;
        }
        else if (_stricmp(key, "amount") == 0)
        {
            double v = ConsParseNumber(value);
            if (v < 0.0) v = 0.0;
            if (v > 1.0) v = 1.0;
            blk->amountFp = (int)(v * 32768.0 + 0.5);
        }
        else
            Log("MovePopAmount: unknown key '%s' in move_pop block - ignored", key);
    }
    next(lexer, 0); // eat closing brace
    if (blk && blk->destination > 0)
        *(int*)((char*)effect + 0x20) = blk->destination * 1000;
    else
        Log("MovePopAmount: missing or invalid where in move_pop block; effect does nothing");
}

bool InstallMovePopBlock()
{
    g_moveEnabled = true;
    if (!g_moveHookInstalled)
    {
        void** slot = (void**)(g_base + RVA_MOVE_VTABLE) + MOVE_EXECUTE_SLOT;
        if (*slot != (void*)(g_base + RVA_MOVE_EXECUTE))
        {
            Log("MovePopAmount: CMovePopEffect slot %d points to %p, expected %p - not installed",
                MOVE_EXECUTE_SLOT, *slot, (void*)(g_base + RVA_MOVE_EXECUTE));
            return false;
        }
        void* orig = 0;
        if (!PatchSlot(RVA_MOVE_VTABLE, MOVE_EXECUTE_SLOT, (void*)&MoveExecuteHook, &orig))
        {
            Log("MovePopAmount: PatchSlot failed");
            return false;
        }
        g_origMoveExecute = (tMoveExecute)orig;
        g_moveHookInstalled = true;
    }
    if (!InstallEffectFactoryHook())
        return false;
    if (!g_moveTooltipHookInstalled)
    {
        void** slot = (void**)(g_base + RVA_MOVE_VTABLE) + MOVE_TOOLTIP_SLOT;
        if (*slot != (void*)(g_base + RVA_MOVE_TOOLTIP))
        {
            Log("MovePopAmount: tooltip slot %d points to %p, expected %p - custom localization tooltip not installed",
                MOVE_TOOLTIP_SLOT, *slot, (void*)(g_base + RVA_MOVE_TOOLTIP));
        }
        else
        {
            void* tooltip = 0;
            if (PatchSlot(RVA_MOVE_VTABLE, MOVE_TOOLTIP_SLOT, (void*)&MoveTooltipHook, &tooltip))
            {
                g_origMoveTooltip = (tMoveTooltip)tooltip;
                g_moveTooltipHookInstalled = true;
                Log("MovePopAmount: localized block tooltip installed (game std::string allocation)");
            }
            else
                Log("MovePopAmount: tooltip PatchSlot failed; vanilla tooltip remains");
        }
    }
    Log("MovePopBlock: installed (block parser, localized tooltip, identity guard)");
    return InstallPopMergeIdentity();
}
// Preserve the engine's original virtual-method result for special objects.
// Only reject the fast merge path when both arguments are real POPs and at
// least one identity field differs.
extern "C" __declspec(noinline) int __cdecl PopMoveMergeCompatible(
    void* keep, void* add, int originalResult)
{
    if (!keep || !add || !originalResult)
        return originalResult;

    __try
    {
        void** keepVtable = *(void***)keep;
        void** addVtable = *(void***)add;
        if (!keepVtable || !addVtable)
            return originalResult;

        tPopIsReal keepIsReal = (tPopIsReal)keepVtable[POP_IS_REAL_SLOT];
        tPopIsReal addIsReal = (tPopIsReal)addVtable[POP_IS_REAL_SLOT];
        if (!keepIsReal || !addIsReal || !keepIsReal(keep) || !addIsReal(add))
            return originalResult;

        const bool sameIdentity =
            *(void**)((char*)keep + OFF_POP_TYPE) == *(void**)((char*)add + OFF_POP_TYPE) &&
            *(void**)((char*)keep + OFF_POP_CULTURE) == *(void**)((char*)add + OFF_POP_CULTURE) &&
            *(void**)((char*)keep + OFF_POP_RELIGION) == *(void**)((char*)add + OFF_POP_RELIGION);

        if (!sameIdentity)
        {
            LONG count = InterlockedIncrement(&g_moveMergeFallbacks);
            if (count == 1 || (count % 100) == 0)
                LogDbg("PopMergeIdentity: move used separate-POP fallback (count=%ld)", count);
            return 0;
        }
        return originalResult;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return originalResult;
    }
}

// This site follows the original is-real virtual call in FUN_004B8E80:
//   test al,al; jz 004B8F77
// The mismatch result follows that existing fallback, which copies the POP
// into a new object and inserts it into the destination province's POP list.
__declspec(naked) static void PopMoveMergeGateThunk()
{
    __asm {
        pushfd
        pushad
        push eax                  // original virtual-call result
        push ebx                  // moving POP
        push edi                  // candidate merge target
        call PopMoveMergeCompatible
        add esp, 12
        mov dword ptr [esp + 28], eax // replace saved EAX only
        popad
        popfd
        test al, al
        jz separate_pop
        jmp dword ptr [g_moveMergeContinue]
    separate_pop:
        jmp dword ptr [g_moveMergeFallback]
    }
}

bool InstallPopMergeIdentity()
{
    if (g_moveMergeOriginal)
        return true;

    g_moveMergeContinue = (void*)(g_base + RVA_MOVE_MERGE_CONTINUE);
    g_moveMergeFallback = (void*)(g_base + RVA_MOVE_MERGE_FALLBACK);
    if (!StealToTrampoline(RVA_MOVE_MERGE_GATE, sizeof(MOVE_MERGE_GATE_SIG),
        g_moveMergeTrampoline, sizeof(g_moveMergeTrampoline), MOVE_MERGE_GATE_SIG,
        (void*)&PopMoveMergeGateThunk, &g_moveMergeOriginal, "PopMergeIdentity"))
    {
        Log("PopMergeIdentity: signature mismatch or hook install failed; patch skipped");
        return false;
    }

    Log("PopMergeIdentity: installed move-specific identity gate at RVA %06X",
        RVA_MOVE_MERGE_GATE);
    return true;
}

bool MovePopBlockEnabled()
{
    return g_moveEnabled;
}

// Called by the shared effect-factory hook (CCore_AssimilateBlock.cpp) after every effect
// is created; only a CMovePopEffect with a "{" value is read here.
void CaptureMovePopBlock(void* effect, void* ctx, int keyId, int token)
{
    if (!g_moveEnabled || token != TOKEN_OPEN_BRACE || !effect ||
        *(DWORD*)effect != g_base + RVA_MOVE_VTABLE)
        return;

    MovePopBlock* old = MoveFind(effect);
    if (old)
        old->effect = 0;
    ParseMovePopBlock(effect, ctx);
    MovePopBlock* b = MoveFind(effect);
    LogDbg("MovePopBlock: captured effect=%p key=%X token=%d destination=%d amount=%d",
        effect, keyId, token, b ? b->destination : 0, b ? b->amountFp : 0);
}
