// FIX_MEMORY_MISS_CRASHES: FROM-based triggers in delayed events (country_event / province_event with days = N).
//
// A script scope (CEventScope, vtable VA 0xE2C904) keeps a "canonical" pointer at +0x24: the active scope has
// +0x24 == itself, and the relation triggers (alliance_with / war_with / truce_with = FROM, ...) read the
// FROM country through it: FUN_008D9F20 does `idx = *(*(scope + 0x24) + 0x30)`, then country+0xBE8[idx].
// When an event is scheduled with `days = N`, FUN_00540A70 (country events, list at country+0x68) and
// FUN_004B1FC0 (province events, list at province+0x384) allocate a CDelayedEvent (0x58 bytes, vtable VA 0xE2C858)
// and copy the current scope into its embedded scope (at +0xC) with FUN_008A88D0 (EAX = destination, ECX =
// source, a field-by-field copy of +8..+0x3C that also copies +0x24). So the copy's canonical pointer is the
// ADDRESS OF THE SOURCE SCOPE, a stack object of the effect that scheduled the event. When the event fires N days
// later that stack slot holds garbage: every trigger that goes through the canonical pointer (FROM in
// alliance_with / war_with / truce_with, ...) reads a random index and the game crashes
// (ACCESS_VIOLATION at VA 0x8D9F77 / 0x8D9F7A, seen in the daily tick through CDelayedEvent -> CEvent ->
// CAIMTTHChance -> CMTTHModifier). Vanilla never uses such triggers in a delayed event, so nobody noticed.
//
// Fix: after the copy the delayed event's embedded scope becomes its own canonical scope ([dest+0x24] = dest). It
// holds a full copy of the data (the FROM index at +0x30 included) and lives as long as the delayed event.
// Both call sites of FUN_008A88D0 in the two scheduling functions are redirected to a thunk that does this.
#include <windows.h>
#include <string.h>
#include "CCore_Shared.h"

static const DWORD RVA_SCOPE_COPY      = 0x4A88D0;   // FUN_008A88D0 (EAX = dest, ECX = source)
static const DWORD RVA_SITES[2]        = { 0x140A9E, 0xB1FEE };   // in FUN_00540A70 and FUN_004B1FC0
static const DWORD RVA_EVENT_RUN       = 0x4A8120;   // FUN_008A8120: CEvent::run(this = event, mgr, scope), ret 8
static DWORD g_scopeCopyOrig = 0;
static bool  g_applyFix = true;
static void* g_realEventRun = 0;
__declspec(align(16)) static unsigned char g_trampEventRun[32];
static volatile LONG g_probeScheduled = 0;
static volatile LONG g_probeFired = 0;

static bool InLiveStack(const void* p)
{
    DWORD lo = 0, hi = 0;
    __asm {
        mov eax, fs:[8]
        mov lo, eax
        mov eax, fs:[4]
        mov hi, eax
    }
    // the part of the stack that is in use now: from the current stack pointer to the base
    DWORD here = (DWORD)(DWORD_PTR)&lo;
    return (DWORD)(DWORD_PTR)p >= here && (DWORD)(DWORD_PTR)p < hi && here >= lo;
}

// Called after FUN_008A88D0 filled `dest` (the embedded scope of a CDelayedEvent) from `src`.
static void __cdecl OnScopeCopy(void* dest, void* src)
{
    __try
    {
        void* canonical = *(void**)((char*)dest + 0x24);
        if (V2_DebugLogEnabled() && InterlockedIncrement(&g_probeScheduled) <= 40)
            Log("DelayedEventFrom: scheduled: delayed scope %p copied from %p, its canonical pointer (+0x24) = %p "
                "(source is %s, canonical %s live stack of this thread; fix %s)",
                dest, src, canonical, canonical == src ? "its own canonical scope" : "another scope",
                InLiveStack(canonical) ? "INSIDE the" : "outside the", g_applyFix ? "applied" : "off");
        if (g_applyFix)
            *(void**)((char*)dest + 0x24) = dest;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

__declspec(naked) static void ScopeCopyThunk()
{
    __asm {
        push ecx
        call dword ptr [g_scopeCopyOrig]
        pop ecx
        pushad
        push ecx
        push eax
        call OnScopeCopy
        add esp, 8
        popad
        ret
    }
}

// Diagnostics (DEBUG_LOG=1): every time an event runs with a scope whose canonical pointer is not the scope itself
// (delayed events), log where that pointer points and what is stored at +0x30 (the FROM data) right now.
static void __cdecl OnEventRun(void* scope)
{
    if (!V2_DebugLogEnabled() || !scope)
        return;
    __try
    {
        void* canonical = *(void**)((char*)scope + 0x24);
        if (canonical == scope)
            return;
        if (InterlockedIncrement(&g_probeFired) > 40)
            return;
        DWORD v30 = 0;
        bool readable = true;
        __try
        {
            v30 = *(DWORD*)((char*)canonical + 0x30);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            readable = false;
        }
        Log("DelayedEventFrom: event run with scope %p: canonical pointer = %p (%s live stack), "
            "[canonical+0x30] (FROM data) = %s%08X, vtable at canonical = %08X",
            scope, canonical, InLiveStack(canonical) ? "INSIDE the" : "outside the",
            readable ? "" : "UNREADABLE ", v30, readable ? *(DWORD*)canonical : 0u);
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
    }
}

__declspec(naked) static void EventRunProbeThunk()
{
    __asm {
        pushad
        push dword ptr [esp + 0x28]
        call OnEventRun
        add esp, 4
        popad
        jmp dword ptr [g_realEventRun]
    }
}

bool InstallDelayedEventFrom(bool applyFix)
{
    g_applyFix = applyFix;
    g_scopeCopyOrig = g_base + RVA_SCOPE_COPY;
    int done = 0;
    for (int i = 0; i < 2; ++i)
    {
        unsigned char* call = (unsigned char*)(g_base + RVA_SITES[i]);
        DWORD expectRel = g_scopeCopyOrig - ((DWORD)(DWORD_PTR)call + 5);
        if (call[0] != 0xE8 || *(DWORD*)(call + 1) != expectRel)
        {
            Log("DelayedEventFrom: call at rva %06X does not match (%02X %02X %02X %02X %02X)", RVA_SITES[i],
                call[0], call[1], call[2], call[3], call[4]);
            continue;
        }
        DWORD rel = (DWORD)(DWORD_PTR)&ScopeCopyThunk - ((DWORD)(DWORD_PTR)call + 5);
        DWORD old = 0;
        if (!VirtualProtect(call + 1, 4, PAGE_EXECUTE_READWRITE, &old))
            continue;
        *(DWORD*)(call + 1) = rel;
        VirtualProtect(call + 1, 4, old, &old);
        ++done;
    }

    bool probe = false;
    if (V2_DebugLogEnabled())
    {
        static const unsigned char EVENT_RUN_SIG[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };
        probe = StealToTrampoline(RVA_EVENT_RUN, sizeof(EVENT_RUN_SIG), g_trampEventRun, sizeof(g_trampEventRun),
            EVENT_RUN_SIG, (void*)&EventRunProbeThunk, &g_realEventRun, "DelayedEventFrom probe");
    }

    Log("DelayedEventFrom: %d of 2 scope copies in delayed events redirected, FROM fix %s%s", done,
        applyFix ? "ON (a delayed event's scope is its own canonical scope)" : "OFF (vanilla behaviour)",
        probe ? ", event-run diagnostics on" : "");
    return done == 2;
}
