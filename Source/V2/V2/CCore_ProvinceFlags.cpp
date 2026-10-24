// FIX_PROVINCE_FLAGS: has_province_flag trigger for Victoria II.
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
static const DWORD RVA_EFFECT_VT[2]       = { 0xA2ACF8, 0xA2AD30 };   // set_province_flag, clr_province_flag
static const DWORD RVA_EFFECT_EXECUTE[2]  = { 0x482A90, 0x482B00 };   // their slot 11
static const int   EFFECT_EXECUTE_SLOT    = 11;
static const int   TOKEN_HAS_PROVINCE     = 0x43B;
static const int   TOKEN_HAS_COUNTRY      = 0x40A;
static const int   OFF_PROVINCE_FLAGS     = 0x328;
static const int   OFF_CTX_PROVINCE       = 0x10;

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
static void* g_vtableBuf[17];          // [0] = RTTI pointer of the source class, [1..16] = slots
static void** g_vtable = 0;
static volatile LONG g_created = 0;
static volatile LONG g_evalLogs = 0;
static volatile LONG g_execLogs = 0;

static void* ProvinceByIndex(unsigned idx)
{
    char* world = *(char**)(g_base + RVA_WORLD_PTR);
    char** provinces = world ? *(char***)(world + OFF_WORLD_PROVINCES) : 0;
    if (!provinces || idx >= 20000)
        return 0;
    return provinces[idx];
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

static volatile LONG g_seenTarget = 0;

static void __fastcall HookTriggerFactory(void* self, void* edx, void* ctx, int token)
{
    if (token != TOKEN_HAS_PROVINCE)
    {
        g_realFactory(self, edx, ctx, token);
        return;
    }
    if (InterlockedIncrement(&g_seenTarget) <= 5)
        LogDbgPf("ProvinceFlags: trigger factory called for has_province_flag (parent %p, children before: %d)", self,
            (int)((*(char**)((char*)self + 0xC) - *(char**)((char*)self + 8)) / 4));
    g_realFactory(self, edx, ctx, TOKEN_HAS_COUNTRY);
    __try
    {
        void** begin = *(void***)((char*)self + 8);
        void** end = *(void***)((char*)self + 0xC);
        if (begin && end > begin)
        {
            void* obj = end[-1];
            if (obj && *(DWORD*)obj == g_base + RVA_FLAG_TRIGGER_VT)
            {
                *(void**)obj = (void*)g_vtable;
                if (InterlockedIncrement(&g_created) <= 5)
                    LogDbgPf("ProvinceFlags: has_province_flag trigger created %p (total %d)", obj, (int)g_created);
            }
            else
                Log("ProvinceFlags: object after parsing has_province_flag has an unexpected class (%p), left as a country flag", obj);
        }
        else
            Log("ProvinceFlags: has_province_flag: the parent trigger list is empty after parsing (begin=%p end=%p)", begin, end);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        Log("ProvinceFlags: exception while replacing the trigger class");
    }
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

bool InstallProvinceFlags()
{
    static const unsigned char SIG[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };

    void** srcVt = (void**)(g_base + RVA_FLAG_TRIGGER_VT);
    if ((DWORD)(DWORD_PTR)srcVt[6] != g_base + RVA_FLAG_EVALUATE || (DWORD)(DWORD_PTR)srcVt[10] != g_base + RVA_FLAG_TOOLTIP)
    {
        Log("ProvinceFlags: has_country_flag trigger vtable does not match (slot6=%p slot10=%p) - not installed", srcVt[6], srcVt[10]);
        return false;
    }

    // copy of the vtable with the RTTI pointer kept at [-1]
    g_vtableBuf[0] = srcVt[-1];
    for (int i = 0; i < 16; ++i)
        g_vtableBuf[1 + i] = srcVt[i];
    g_vtable = &g_vtableBuf[1];
    g_vtable[6] = (void*)&EvaluateProvinceFlag;
    g_vtable[10] = (void*)&ProvinceFlagTooltip;

    bool hooked = StealToTrampoline(RVA_TRIGGER_FACTORY, sizeof(SIG), g_trampFactory, sizeof(g_trampFactory), SIG,
        (void*)&HookTriggerFactory, (void**)&g_realFactory, "ProvinceFlags(trigger factory)");

    int wrapped = 0;
    void* thunks[2] = { (void*)&ExecuteSet, (void*)&ExecuteClr };
    for (int i = 0; i < 2; ++i)
    {
        void** vt = (void**)(g_base + RVA_EFFECT_VT[i]);
        if ((DWORD)(DWORD_PTR)vt[EFFECT_EXECUTE_SLOT] != g_base + RVA_EFFECT_EXECUTE[i])
        {
            Log("ProvinceFlags: slot %d of effect %d does not match (%p) - diagnostics not installed", EFFECT_EXECUTE_SLOT, i,
                vt[EFFECT_EXECUTE_SLOT]);
            continue;
        }
        if (PatchSlot(RVA_EFFECT_VT[i], EFFECT_EXECUTE_SLOT, thunks[i], (void**)&g_realExecute[i]))
            ++wrapped;
    }

    Log("ProvinceFlags: trigger factory %s, effect Execute wrappers %d of 2 (has_province_flag trigger)",
        hooked ? "hooked" : "NOT hooked", wrapped);
    return hooked;
}
