// CCore_AssimilateBlock.cpp - assimilate block plus the shared effect-factory
// router; move_pop implementation lives in CCore_PopMergeIdentity.cpp.
#include <windows.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "CCore_Shared.h"

// Debug log goes through the main file's DEBUG_LOG setting.
#define LogDbg(...) do { if (V2_DebugLogEnabled()) Log(__VA_ARGS__); } while (0)

// Constants and typedefs shared with the goods_consumption / parser code in
// V2TechButton.cpp. They are file-local copies: keep them in sync with the
// definitions there if the RVAs ever change.
static const DWORD RVA_PARSER_READ_PROP  = 0x5A1440;  // FUN_009A1440(ctx), ret 4
static const int   OFF_PARSER_LEXER      = 0x1C;
static const int   OFF_PARSER_KEY_TEXT   = 0x24;
static const int   OFF_PARSER_VALUE_TEXT = 0x22C;
static const int   OFF_LEXER_PEEK_FLAG   = 0x110;
static const int   OFF_SESSION_PROVINCES = 0xACC;
static const DWORD RVA_COUNTRIES_VECTOR  = 0xE587E4;  // +4 = vector<CCountry*>.data()
static const DWORD RVA_WORLD_PTR         = 0xE588E8;
typedef int(__fastcall* tLexNext)(void* self, void* edx);
typedef void(__stdcall* tReadProperty)(void* ctx);

// ---------------------------------------------------------------
// Block form of the assimilate effect (ENABLE_ASSIMILATE_BLOCK)
//
// Vanilla knows only "assimilate = yes": every pop of the province takes
// the owner's primary culture. Added form:
//
//   assimilate = { culture = german religion = protestant amount = 0.25 }
//
//   culture  - culture name, THIS or FROM (primary culture of that country).
//              Default: primary culture of the province owner, or the pop's
//              own culture when only religion is given.
//   religion - religion name, THIS or FROM (state religion of that country).
//              Default: the pop keeps its religion.
//   amount   - share of each pop that converts, 0..1. Default 1.
//
// Pop scope (any_pop = { limit = { ... } assimilate = { ... } }) touches
// only that pop, province scope every pop of the province. The converted
// part joins a pop of the same type with the target culture and religion in the
// province (or a new one is created); money and bank move in proportion,
// as in the monthly assimilation (0x958C0A). amount = 1 with no such pop
// just changes the pop's culture, like vanilla. Jobs the source loses by
// shrinking are re-hired at once by the same RGO/factories (FUN_004EE780),
// so the converted people keep working.
//
// Vanilla never reads the block: CAssimilateEffect goes through the shared
// tail of the effect factory FUN_00876B30, which hands the value token to
// slot 7 without the "{" check other block effects have (0x877485), so the
// inner keys would end up in the parent effect. The factory is detoured:
// right after it creates a CAssimilateEffect for a "{" value the block is
// read here. Execute (slot 11) runs the block form for objects that have
// one, everything else goes to the original.
// ---------------------------------------------------------------

static const DWORD RVA_EFFECT_FACTORY        = 0x476B30;  // FUN_00876B30(this, ctx, keyId), thiscall ret 8
static const DWORD RVA_CASSIMILATE_VTABLE    = 0xA2BAE8;  // VA 0xE2BAE8
static const int   ASSIM_EXECUTE_SLOT        = 11;
static const DWORD RVA_ASSIM_EXECUTE         = 0x494160;  // FUN_00894160(this, ctx, x), thiscall ret 8
static const int   KW_ASSIMILATE             = 0xA5B;
static const int   TOKEN_OPEN_BRACE          = 3;
static const int   TOKEN_CLOSE_BRACE         = 4;
static const int   TOKEN_EOF                 = 0x13;
static const int   OFF_PARSER_VALUE_TOKEN    = 0x228;
static const int   OFF_EFFECT_CHILD_TAIL     = 0xC;       // node {effect, prev, next}
static const int   OFF_ASSIM_YES             = 0x20;      // bool "= yes", also enables the ASSIMILATE_EFFECT tooltip
static const DWORD RVA_CULTURE_MAP           = 0xE587E8;  // DAT_012587e8
static const DWORD RVA_NAME_MAP_LOOKUP       = 0x0A2F70;  // FUN_004A2F70: EAX = map, push std::string*, ret 4
static const DWORD RVA_STD_STRING_ASSIGN     = 0x009350;  // FUN_00409350(this, s, n), thiscall
static const DWORD RVA_GAME_OPERATOR_DELETE  = 0x6AE91B;  // FUN_00AAE91B, cdecl
static const DWORD RVA_POPTYPE_DB            = 0xF1BB34;  // DAT_0131bb34; +0xC/+0x10 = vector of pop types
static const DWORD RVA_POP_CREATE            = 0x0B8D30;  // FUN_004B8D30(province, popType) -> CPop*, stdcall
static const DWORD RVA_POP_COPY_ATTRS        = 0x555A00;  // FUN_00955A00: ESI = new pop, EDI = source
static const DWORD RVA_POP_SET_SIZE          = 0x555FD0;  // FUN_00955FD0: EAX = size, ESI = pop
static const DWORD RVA_POP_REFRESH_ACCEPTED  = 0x557AF0;  // FUN_00957AF0: ESI = pop
static const DWORD RVA_EMPLOYER_HIRE         = 0x0EE780;  // FUN_004EE780(popType, count) -> hired, ESI = employer, stdcall
static const DWORD RVA_RGO_ARRAY             = 0xE58728;  // DAT_01258728; [0] = RGO array, 0xB0 per RGO, employer at +0x10
static const int   RGO_STRIDE                = 0xB0;
static const int   OFF_RGO_EMPLOYER          = 0x10;
static const int   OFF_PROVINCE_RGO_INDEX    = 0x58;
static const int   OFF_PROVINCE_STATE        = 0x188;
static const int   OFF_STATE_FACTORIES       = 0x60;      // linked list, next at factory+0x224
static const int   OFF_FACTORY_NEXT          = 0x224;
static const int   OFF_FACTORY_EMPLOYER      = 0xE0;
static const int   OFF_EMPLOYER_STAFF        = 0x10;      // vector of 16-byte {?, ?, pop, count}
static const int   OFF_POP_EMPLOYED          = 0x60;
static const int   OFF_POP_PREVIOUS_SIZE     = 0x5C;
static const int   OFF_POPTYPE_EMPLOYABLE    = 0x40;
static const int   ASSIM_MAX_EMPLOYERS       = 64;
static const int   OFF_CTX_PROVINCE          = 0x10;
static const int   OFF_CTX_POP               = 0x14;
static const int   OFF_CTX_THIS              = 0x24;      // parent context
static const int   OFF_CTX_FROM_COUNTRY      = 0x30;
static const int   OFF_CTX_FROM_PROVINCE     = 0x34;
static const int   OFF_CTX_COUNTRY           = 0x0C;
static const int   OFF_PROVINCE_OWNER        = 0x12C;
static const int   OFF_PROVINCE_POP_LISTS    = 0x194;     // {head, tail, count, ?} per pop type
static const int   OFF_COUNTRY_PRIMARY_CULTURE = 0xE64;
static const int   OFF_COUNTRY_RELIGION      = 0xE68;
static const DWORD RVA_RELIGION_MGR          = 0xE5EA24;  // DAT_0125ea24
static const DWORD RVA_RELIGION_LOOKUP       = 0x1677B0;  // FUN_005677B0: EAX = manager, push std::string*, ret 4
static const int   OFF_POP_CONVERT_COUNTER   = 0x16C;
static const int   OFF_POP_SIZE              = 0x58;
static const int   OFF_POP_PROVINCE          = 0x64;
static const int   OFF_POP_TYPE              = 0x68;
static const int   OFF_POP_CULTURE           = 0x6C;
static const int   OFF_POP_RELIGION          = 0x70;
static const int   OFF_POP_CON               = 0x118;     // int64
static const int   OFF_POP_MIL               = 0x120;     // int64
static const int   OFF_POP_ASSIM_COUNTER     = 0x168;
static const int   OFF_POP_MONEY             = 0x180;     // int64 FP15
static const int   OFF_POP_BANK              = 0x250;     // int64 FP15
static const int   OFF_POP_NEXT              = 0x27C;
static const int   OFF_POPTYPE_MAX_SIZE      = 0x30;      // -1 = no limit
static const int   OFF_POPTYPE_NO_ASSIM      = 0x3D9;
static const int   ASSIM_MAX_PROVINCE_POPS   = 512;

// OWNER = province owner's primary culture / no religion change (KEEP).
enum { ASSIM_OWNER = 0, ASSIM_NAMED, ASSIM_THIS, ASSIM_FROM, ASSIM_KEEP };

struct AssimTarget
{
    int   mode;
    char  name[64];
    void* value;        // ASSIM_NAMED, looked up on first execute
    bool  resolved;
};

struct AssimBlock
{
    void*       effect;
    AssimTarget culture;    // default ASSIM_OWNER, or ASSIM_KEEP when only religion is given
    AssimTarget religion;   // default ASSIM_KEEP
    bool        cultureSet;
    int         amountFp;   // share, FP15 (0x8000 = all)
};

static AssimBlock g_assimBlocks[2048];
static int g_assimBlockCount = 0;
static LONG g_assimRuns = 0;

typedef void(__fastcall* tEffectFactory)(void* self, void* edx, void* ctx, int keyId);
typedef void(__fastcall* tAssimExecute)(void* self, void* edx, void* ctx, int arg);
typedef void*(__thiscall* tProvinceGetName)(void* province, void* outString);
typedef void*(__stdcall* tPopCreate)(void* province, void* popType);
typedef void*(__thiscall* tStdStringAssign)(void* self, const char* s, unsigned n);
typedef void(__cdecl* tGameDelete)(void* p);
typedef char(__thiscall* tPopIsReal)(void* pop);

__declspec(align(16)) static unsigned char g_trampEffectFactory[32];
static tEffectFactory g_origEffectFactory = 0;
static tAssimExecute g_origAssimExecute = 0;

static bool g_assimEnabled = false;
static bool g_factoryHookInstalled = false;
static bool g_assimHookInstalled = false;


static AssimBlock* AssimFind(void* effect)
{
    for (int i = 0; i < g_assimBlockCount; ++i)
        if (g_assimBlocks[i].effect == effect)
            return &g_assimBlocks[i];
    return 0;
}

static AssimBlock* AssimAlloc(void* effect)
{
    AssimBlock* b = AssimFind(effect);
    if (!b)
        b = AssimFind(0);
    if (!b)
    {
        if (g_assimBlockCount >= (int)(sizeof(g_assimBlocks) / sizeof(g_assimBlocks[0])))
            return 0;
        b = &g_assimBlocks[g_assimBlockCount++];
    }
    memset(b, 0, sizeof(*b));
    b->effect = effect;
    b->culture.mode = ASSIM_OWNER;
    b->religion.mode = ASSIM_KEEP;
    b->amountFp = 0x8000;
    return b;
}

// Game-side std::string (MSVC 2010 layout: buf[16]/ptr, size +0x10, capacity +0x14).
struct GameString
{
    union { char buf[16]; char* ptr; } u;
    unsigned size;
    unsigned cap;
};

// Both the culture and the religion tables use the same lookup shape.
static void* AssimLookupByName(DWORD rvaManager, DWORD rvaLookup, const char* name)
{
    void* map = *(void**)(g_base + rvaManager);
    if (!map || !name[0])
        return 0;

    GameString s;
    memset(&s, 0, sizeof(s));
    s.cap = 15;
    ((tStdStringAssign)(g_base + RVA_STD_STRING_ASSIGN))(&s, name, (unsigned)strlen(name));

    void* res = 0;
    GameString* ps = &s;
    DWORD fn = g_base + rvaLookup;
    __asm
    {
        push ps
        mov  eax, map
        call fn
        mov  res, eax
    }

    if (s.cap >= 16)
        ((tGameDelete)(g_base + RVA_GAME_OPERATOR_DELETE))(s.u.ptr);
    return res;
}

static void AssimSetPopSize(void* popPtr, int newSize)
{
    DWORD fn = g_base + RVA_POP_SET_SIZE;
    __asm
    {
        push esi
        mov  esi, popPtr
        mov  eax, newSize
        call fn
        pop  esi
    }
}

static void AssimCopyPopAttrs(void* newPop, void* src)
{
    DWORD fn = g_base + RVA_POP_COPY_ATTRS;
    __asm
    {
        push esi
        push edi
        mov  esi, newPop
        mov  edi, src
        call fn
        pop  edi
        pop  esi
    }
}

static void AssimRefreshAccepted(void* popPtr)
{
    DWORD fn = g_base + RVA_POP_REFRESH_ACCEPTED;
    __asm
    {
        push esi
        mov  esi, popPtr
        call fn
        pop  esi
    }
}

static int AssimHire(char* employer, void* popType, int count)
{
    DWORD fn = g_base + RVA_EMPLOYER_HIRE;
    int hired = 0;
    __asm
    {
        push esi
        mov  esi, employer
        push count
        push popType
        call fn
        mov  hired, eax
        pop  esi
    }
    return hired;
}

static int AssimStaffAt(char* employer, char* popPtr)
{
    char* b = *(char**)(employer + OFF_EMPLOYER_STAFF);
    char* e = *(char**)(employer + OFF_EMPLOYER_STAFF + 4);
    if (!b || e <= b)
        return 0;
    for (char* p = b; p < e; p += 16)
        if (*(char**)(p + 8) == popPtr)
            return *(int*)(p + 0xC);
    return 0;
}

struct AssimJob { char* employer; int count; };

// The province RGO and every factory of the state: the employers that
// FUN_00955FD0 fires from when a pop shrinks below its employed count.
static int AssimSnapshotJobs(char* prov, char* popPtr, AssimJob* jobs)
{
    int n = 0;
    char** rgoHolder = *(char***)(g_base + RVA_RGO_ARRAY);
    if (rgoHolder && rgoHolder[0])
    {
        char* rgo = rgoHolder[0] + *(int*)(prov + OFF_PROVINCE_RGO_INDEX) * RGO_STRIDE + OFF_RGO_EMPLOYER;
        int c = AssimStaffAt(rgo, popPtr);
        if (c > 0)
        {
            jobs[n].employer = rgo;
            jobs[n].count = c;
            ++n;
        }
    }

    char* state = *(char**)(prov + OFF_PROVINCE_STATE);
    char* f = state ? *(char**)(state + OFF_STATE_FACTORIES) : 0;
    for (int guard = 0; f && guard < 1024 && n < ASSIM_MAX_EMPLOYERS; ++guard, f = *(char**)(f + OFF_FACTORY_NEXT))
    {
        char* emp = f + OFF_FACTORY_EMPLOYER;
        int c = AssimStaffAt(emp, popPtr);
        if (c > 0)
        {
            jobs[n].employer = emp;
            jobs[n].count = c;
            ++n;
        }
    }
    return n;
}

static bool AssimPopIsReal(void* pop)
{
    if (!pop)
        return false;
    tPopIsReal fn = (tPopIsReal)(*(void***)pop)[8];
    return fn(pop) != 0;
}

static char* AssimProvince(int id)
{
    char* session = *(char**)(g_base + RVA_WORLD_PTR);
    if (!session || id <= 0)
        return 0;
    char** b = *(char***)(session + OFF_SESSION_PROVINCES);
    char** e = *(char***)(session + OFF_SESSION_PROVINCES + 4);
    if (!b || id >= (int)(e - b))
        return 0;
    return b[id];
}

static void* AssimCountryField(int idx, int offset)
{
    char* mgr = *(char**)(g_base + RVA_COUNTRIES_VECTOR);
    if (!mgr || idx <= 0)
        return 0;
    char** b = *(char***)(mgr + 4);
    char** e = *(char***)(mgr + 8);
    if (!b || idx >= (int)(e - b) || !b[idx])
        return 0;
    return *(void**)(b[idx] + offset);
}

// Culture (countryOffset = primary culture) or religion (= state religion)
// for one pop. ASSIM_KEEP returns the pop's own value; 0 = nothing to do.
static void* AssimResolve(AssimTarget* t, const char* what, DWORD rvaManager, DWORD rvaLookup,
    int countryOffset, int popOffset, char* ctx, char* prov, char* pop)
{
    switch (t->mode)
    {
    case ASSIM_KEEP:
        return *(void**)(pop + popOffset);

    case ASSIM_NAMED:
        if (!t->resolved)
        {
            t->value = AssimLookupByName(rvaManager, rvaLookup, t->name);
            t->resolved = true;
            if (!t->value)
                Log("AssimilateBlock: unknown %s '%s' - effect does nothing", what, t->name);
        }
        return t->value;

    case ASSIM_THIS:
    {
        char* parent = *(char**)(ctx + OFF_CTX_THIS);
        return parent ? AssimCountryField(*(int*)(parent + OFF_CTX_COUNTRY), countryOffset) : 0;
    }

    case ASSIM_FROM:
    {
        int idx = *(int*)(ctx + OFF_CTX_FROM_COUNTRY);
        if (idx <= 0)
        {
            char* fromProv = AssimProvince(*(int*)(ctx + OFF_CTX_FROM_PROVINCE));
            if (fromProv)
                idx = *(int*)(fromProv + OFF_PROVINCE_OWNER);
        }
        return AssimCountryField(idx, countryOffset);
    }

    default:
        return AssimCountryField(*(int*)(prov + OFF_PROVINCE_OWNER), countryOffset);
    }
}

static int AssimPopTypeCount()
{
    char* db = *(char**)(g_base + RVA_POPTYPE_DB);
    if (!db)
        return 0;
    return (*(int*)(db + 0x10) - *(int*)(db + 0xC)) >> 2;
}

// Pop of the same type with the target culture and religion that still has room.
static char* AssimFindMergeTarget(char* prov, char* src, void* culture, void* religion)
{
    char* type = *(char**)(src + OFF_POP_TYPE);
    int maxSize = *(int*)(type + OFF_POPTYPE_MAX_SIZE);
    char* lists = *(char**)(prov + OFF_PROVINCE_POP_LISTS);
    int n = AssimPopTypeCount();
    if (!lists)
        return 0;
    for (int t = 0; t < n; ++t)
    {
        for (char* q = *(char**)(lists + t * 16); q; q = *(char**)(q + OFF_POP_NEXT))
        {
            if (q == src || *(char**)(q + OFF_POP_TYPE) != type)
                continue;
            if (*(void**)(q + OFF_POP_CULTURE) != culture || *(void**)(q + OFF_POP_RELIGION) != religion)
                continue;
            if (maxSize != -1 && *(int*)(q + OFF_POP_SIZE) >= maxSize)
                continue;
            return q;
        }
    }
    return 0;
}

static void AssimConvertPop(AssimBlock* blk, char* ctx, char* pop)
{
    char* prov = *(char**)(pop + OFF_POP_PROVINCE);
    if (!prov)
        return;
    int size = *(int*)(pop + OFF_POP_SIZE);
    if (size <= 0)
        return;
    char* type = *(char**)(pop + OFF_POP_TYPE);
    if (!type || *(unsigned char*)(type + OFF_POPTYPE_NO_ASSIM))
        return;

    void* culture = AssimResolve(&blk->culture, "culture", RVA_CULTURE_MAP, RVA_NAME_MAP_LOOKUP,
        OFF_COUNTRY_PRIMARY_CULTURE, OFF_POP_CULTURE, ctx, prov, pop);
    void* religion = AssimResolve(&blk->religion, "religion", RVA_RELIGION_MGR, RVA_RELIGION_LOOKUP,
        OFF_COUNTRY_RELIGION, OFF_POP_RELIGION, ctx, prov, pop);
    if (!culture || !religion)
        return;
    bool cultureChanges = *(void**)(pop + OFF_POP_CULTURE) != culture;
    bool religionChanges = *(void**)(pop + OFF_POP_RELIGION) != religion;
    if (!cultureChanges && !religionChanges)
        return;

    int n = (int)(((long long)size * blk->amountFp + 0x4000) >> 15);
    if (n <= 0)
        return;
    if (n > size)
        n = size;

    char* target = AssimFindMergeTarget(prov, pop, culture, religion);
    if (!target)
    {
        if (n == size)
        {
            *(void**)(pop + OFF_POP_CULTURE) = culture;
            *(void**)(pop + OFF_POP_RELIGION) = religion;
            AssimRefreshAccepted(pop);
            return;
        }
        target = (char*)((tPopCreate)(g_base + RVA_POP_CREATE))(prov, type);
        if (!target)
            return;
        AssimCopyPopAttrs(target, pop);
        *(void**)(target + OFF_POP_CULTURE) = culture;
        *(void**)(target + OFF_POP_RELIGION) = religion;
        *(long long*)(target + OFF_POP_CON) = *(long long*)(pop + OFF_POP_CON);
        *(long long*)(target + OFF_POP_MIL) = *(long long*)(pop + OFF_POP_MIL);
        AssimRefreshAccepted(target);
    }

    // The converted people take their share of the source's jobs. The setter
    // fires everything above the new size and RGOs/factories only re-hire
    // gradually, so the source is shrunk to the jobs it keeps (firing exactly
    // the converted share), the freed jobs are re-hired at once while the
    // source has no room to take them back, then its real size is restored.
    int keep = size - n;
    bool employable = *(unsigned char*)(type + OFF_POPTYPE_EMPLOYABLE) != 0;
    int employed = *(int*)(pop + OFF_POP_EMPLOYED);
    if (employable && employed > 0)
    {
        int share = (int)(((long long)employed * n + size / 2) / size);
        if (employed - share < keep)
            keep = employed - share;
    }

    AssimJob jobs[ASSIM_MAX_EMPLOYERS];
    int jobCount = 0;
    if (employable && employed > keep)
        jobCount = AssimSnapshotJobs(prov, pop, jobs);

    AssimSetPopSize(target, *(int*)(target + OFF_POP_SIZE) + n);
    AssimSetPopSize(pop, keep);
    if (cultureChanges)
    {
        *(int*)(pop + OFF_POP_ASSIM_COUNTER) -= n;
        *(int*)(target + OFF_POP_ASSIM_COUNTER) += n;
    }
    if (religionChanges)
    {
        *(int*)(pop + OFF_POP_CONVERT_COUNTER) -= n;
        *(int*)(target + OFF_POP_CONVERT_COUNTER) += n;
    }

    for (int j = 0; j < jobCount; ++j)
    {
        int lost = jobs[j].count - AssimStaffAt(jobs[j].employer, pop);
        if (lost > 0)
            AssimHire(jobs[j].employer, type, lost);
    }
    if (keep != size - n)
        *(int*)(pop + OFF_POP_SIZE) = size - n;

    long long frac = ((long long)n << 15) / size;
    if (frac > 0x8000)
        frac = 0x8000;

    long long& srcMoney = *(long long*)(pop + OFF_POP_MONEY);
    long long& dstMoney = *(long long*)(target + OFF_POP_MONEY);
    long long moneyMove = (srcMoney * frac) >> 15;
    srcMoney -= moneyMove;
    dstMoney += moneyMove;
    if (dstMoney < 0)
        dstMoney = 0;

    long long& srcBank = *(long long*)(pop + OFF_POP_BANK);
    long long& dstBank = *(long long*)(target + OFF_POP_BANK);
    long long bankMove = (srcBank * frac) >> 15;
    srcBank -= bankMove;
    if (srcBank < 0)
        srcBank = 0;
    dstBank += bankMove;
}

static void AssimRun(AssimBlock* blk, char* ctx)
{
    char* pop = *(char**)(ctx + OFF_CTX_POP);
    if (pop && AssimPopIsReal(pop))
    {
        AssimConvertPop(blk, ctx, pop);
        return;
    }

    char* prov = AssimProvince(*(int*)(ctx + OFF_CTX_PROVINCE));
    if (!prov)
        return;
    char* lists = *(char**)(prov + OFF_PROVINCE_POP_LISTS);
    if (!lists)
        return;

    // Snapshot first: conversion appends new pops to the lists.
    char* pops[ASSIM_MAX_PROVINCE_POPS];
    int count = 0;
    int types = AssimPopTypeCount();
    for (int t = 0; t < types && count < ASSIM_MAX_PROVINCE_POPS; ++t)
        for (char* q = *(char**)(lists + t * 16); q && count < ASSIM_MAX_PROVINCE_POPS; q = *(char**)(q + OFF_POP_NEXT))
            pops[count++] = q;

    for (int i = 0; i < count; ++i)
        AssimConvertPop(blk, ctx, pops[i]);
}

static void __fastcall AssimExecuteHook(void* self, void* edx, void* ctx, int arg)
{
    AssimBlock* blk = AssimFind(self);
    if (!blk)
    {
        g_origAssimExecute(self, edx, ctx, arg);
        return;
    }

    __try
    {
        AssimRun(blk, (char*)ctx);
        if (InterlockedIncrement(&g_assimRuns) <= 5)
            LogDbg("AssimilateBlock: executed effect %p (culture mode %d '%s', religion mode %d '%s', amount %d/32768)",
                self, blk->culture.mode, blk->culture.name, blk->religion.mode, blk->religion.name, blk->amountFp);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        Log("AssimilateBlock: exception while executing effect %p", self);
    }
}

static void AssimSkipNestedBlock(int* lexer, tLexNext next)
{
    int depth = 1;
    for (int guard = 0; guard < 100000 && depth > 0; ++guard)
    {
        if (next(lexer, 0) == 0)
            return;
        int type = lexer[3];
        if (type == TOKEN_OPEN_BRACE)
            ++depth;
        else if (type == TOKEN_CLOSE_BRACE)
            --depth;
        else if (type == TOKEN_EOF)
            return;
    }
}

static void ParseAssimilateBlock(void* effect, void* ctx)
{
    char* c = (char*)ctx;
    int* lexer = *(int**)(c + OFF_PARSER_LEXER);
    tLexNext next = (tLexNext)(*(void***)lexer)[1];
    tReadProperty readProp = (tReadProperty)(g_base + RVA_PARSER_READ_PROP);

    AssimBlock* blk = AssimAlloc(effect);
    if (!blk)
        Log("AssimilateBlock: table full - block ignored");

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

        int type = lexer[3];
        if (type == TOKEN_CLOSE_BRACE || type == TOKEN_EOF)
            break;

        readProp(ctx);

        const char* key = c + OFF_PARSER_KEY_TEXT;
        const char* value = c + OFF_PARSER_VALUE_TEXT;
        if (*(int*)(c + OFF_PARSER_VALUE_TOKEN) == TOKEN_OPEN_BRACE)
        {
            Log("AssimilateBlock: '%s = { ... }' is not supported inside assimilate - skipped", key);
            AssimSkipNestedBlock(lexer, next);
            continue;
        }
        if (!blk)
            continue;

        if (_stricmp(key, "culture") == 0 || _stricmp(key, "religion") == 0)
        {
            bool isCulture = (key[0] == 'c' || key[0] == 'C');
            AssimTarget* t = isCulture ? &blk->culture : &blk->religion;
            if (isCulture)
                blk->cultureSet = true;
            if (_stricmp(value, "THIS") == 0)
                t->mode = ASSIM_THIS;
            else if (_stricmp(value, "FROM") == 0)
                t->mode = ASSIM_FROM;
            else
            {
                t->mode = ASSIM_NAMED;
                strncpy_s(t->name, sizeof(t->name), value, _TRUNCATE);
                t->resolved = false;
            }
        }
        else if (_stricmp(key, "amount") == 0)
        {
            double v = ConsParseNumber(value);
            if (v < 0.0)
                v = 0.0;
            if (v > 1.0)
                v = 1.0;
            blk->amountFp = (int)(v * 32768.0 + 0.5);
        }
        else
        {
            Log("AssimilateBlock: unknown key '%s' in assimilate block - ignored", key);
        }
    }

    next(lexer, 0);   // eat the closing "}"

    if (!blk)
        return;

    // A block that only names a religion converts religion and keeps culture.
    if (!blk->cultureSet && blk->religion.mode != ASSIM_KEEP)
        blk->culture.mode = ASSIM_KEEP;

    // Same meaning as "assimilate = yes": keep the vanilla tooltip line.
    if (blk->culture.mode == ASSIM_OWNER && blk->religion.mode == ASSIM_KEEP && blk->amountFp >= 0x8000)
        *((char*)effect + OFF_ASSIM_YES) = 1;
}

static void __fastcall EffectFactoryHook(void* self, void* edx, void* ctx, int keyId)
{
    g_origEffectFactory(self, edx, ctx, keyId);
    if (!g_assimEnabled && !MovePopBlockEnabled())
        return;

    __try
    {
        char* node = *(char**)((char*)self + OFF_EFFECT_CHILD_TAIL);
        void* effect = node ? *(void**)node : 0;
        if (!effect)
            return;
        int token = *(int*)((char*)ctx + OFF_PARSER_VALUE_TOKEN);
        if (g_assimEnabled && keyId == KW_ASSIMILATE &&
            *(DWORD*)effect == g_base + RVA_CASSIMILATE_VTABLE && token == TOKEN_OPEN_BRACE)
        {
            AssimBlock* stale = AssimFind(effect);
            if (stale) stale->effect = 0;
            ParseAssimilateBlock(effect, ctx);
        }
        else if (MovePopBlockEnabled())
        {
            CaptureMovePopBlock(effect, ctx, keyId, token);
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        Log("AssimilateBlock: exception while reading assimilate block");
    }
}

bool InstallEffectFactoryHook()
{
    if (g_factoryHookInstalled)
        return true;
    static const unsigned char FACTORY_SIG[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };
    void* origFactory = 0;
    if (!StealToTrampoline(RVA_EFFECT_FACTORY, 6, g_trampEffectFactory, sizeof(g_trampEffectFactory),
            FACTORY_SIG, (void*)&EffectFactoryHook, &origFactory, "EffectBlockExtensions"))
    {
        Log("EffectBlockExtensions: effect factory detour failed");
        return false;
    }
    g_origEffectFactory = (tEffectFactory)origFactory;
    g_factoryHookInstalled = true;
    return true;
}

bool InstallAssimilateBlock()
{
    g_assimEnabled = true;
    if (!g_assimHookInstalled)
    {
        void** slot = (void**)(g_base + RVA_CASSIMILATE_VTABLE) + ASSIM_EXECUTE_SLOT;
        if (*slot != (void*)(g_base + RVA_ASSIM_EXECUTE))
        {
            Log("AssimilateBlock: CAssimilateEffect slot %d points to %p, expected %p - not installed",
                ASSIM_EXECUTE_SLOT, *slot, (void*)(g_base + RVA_ASSIM_EXECUTE));
            return false;
        }
        void* orig = 0;
        if (!PatchSlot(RVA_CASSIMILATE_VTABLE, ASSIM_EXECUTE_SLOT, (void*)&AssimExecuteHook, &orig))
        {
            Log("AssimilateBlock: PatchSlot failed");
            return false;
        }
        g_origAssimExecute = (tAssimExecute)orig;
        g_assimHookInstalled = true;
    }
    if (!InstallEffectFactoryHook())
    {
        return false;
    }
    Log("AssimilateBlock: installed (assimilate = { culture = ... amount = ... })");
    return true;
}

