#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <intrin.h>
#include <d3d9.h>
#include <math.h>
#include <ctype.h>
#include <algorithm>
#include "tgcx_signatures.h"
#include "tgcx_sha256.h"
#include "tgcx_packages.h"
// MOD-1: the Lua forwards live in the loader (loader/tgcx_loader.cpp), not here.

static_assert(sizeof(void*) == 4, "Victoria II requires Win32");
static uintptr_t tgcx_base = 0;
static uintptr_t tgcx_frame_pump_original = 0;
static HANDLE tgcx_log = INVALID_HANDLE_VALUE;
static DWORD tgcx_last_sample = 0;
static bool tgcx_sampled = false;
static bool tgcx_fault_reported = false;
static constexpr uint32_t tgcx_world_rva = 0xE588E8;
static constexpr uint32_t tgcx_country_manager_rva = 0xE587E4;
static constexpr uint32_t tgcx_frame_call_rva = 0x285727;
static constexpr uint32_t tgcx_frame_pump_rva = 0x5DF2B0;
static constexpr unsigned int tgcx_ideology_count = _countof(tgcx_ideology_candidates);

static void tgcx_Log(const char* format, ...) {
    if (tgcx_log == INVALID_HANDLE_VALUE) return;
    char line[1024];
    va_list args;
    va_start(args, format);
    int size = _vsnprintf_s(line, sizeof(line)-2, _TRUNCATE, format, args);
    va_end(args);
    if (size < 0) size = static_cast<int>(strlen(line));
    line[size++]='\r'; line[size++]='\n';
    DWORD written = 0;
    WriteFile(tgcx_log, line, static_cast<DWORD>(size), &written, nullptr);
}

static bool tgcx_HashFile(const wchar_t* path, char hex[65]) {
    HANDLE file = CreateFileW(path, GENERIC_READ, FILE_SHARE_READ, nullptr, OPEN_EXISTING, 0, nullptr);
    if (file == INVALID_HANDLE_VALUE) return false;
    tgcx_SHA256 hash;
    unsigned char bytes[8192];
    DWORD count = 0;
    bool ok = true;
    for (;;) {
        if (!ReadFile(file, bytes, sizeof(bytes), &count, nullptr)) { ok=false; break; }
        if (!count) break;
        hash.update(bytes, count);
    }
    CloseHandle(file);
    if (ok) hash.finish(hex);
    return ok;
}

static bool tgcx_CheckSignature(const tgcx_Signature& signature) {
    __try {
        unsigned char expected[32];
        memcpy(expected, signature.bytes, signature.length);
        for (unsigned int i=0; i<signature.reloc_count; ++i) {
            uint32_t value;
            memcpy(&value, expected+signature.reloc[i], 4);
            value += static_cast<uint32_t>(tgcx_base)-tgcx_preferred_base;
            memcpy(expected+signature.reloc[i], &value, 4);
        }
        return memcmp(reinterpret_cast<void*>(tgcx_base+signature.rva), expected, signature.length) == 0;
    } __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
}

// Sites V2DLL patches (report-v2dll-mod-slot-1018.md §3.2). TGCX writes none of them,
// so a mismatch there is logged and never blocks a module (MOD-1).
static const uint32_t tgcx_foreign_rvas[]={0x285727,0x35BB50,0x1D74BE,0x282EC0,0x233826,0x1D77A0,0xA0E480};
// Native ordered-draw and final-Present stages: every module ticks from them.
static const uint32_t tgcx_stage_rvas[]={0x59A520,0x599F22};
template<size_t N> static bool tgcx_Listed(uint32_t rva, const uint32_t (&list)[N]) {
    for (uint32_t entry : list) if (entry == rva) return true;
    return false;
}

// Logs every signature; true when all but the foreign ones match.
static bool tgcx_CheckSignatures() {
    bool ok = true;
    for (const auto& signature : tgcx_signatures) {
        bool match = tgcx_CheckSignature(signature);
        bool foreign = !match && tgcx_Listed(signature.rva, tgcx_foreign_rvas);
        tgcx_Log("%s RVA 0x%06X %s", match ? "OK" : foreign ? "FOREIGN" : "BAD", signature.rva, signature.name);
        ok = (match || foreign) && ok;
    }
    return ok;
}

struct tgcx_Snapshot {
    uint32_t date_hours, index, country_index, human_entries, human_marker;
    uintptr_t world, country, upper_house, array, upper_house_vtable;
    char world_tag[5], country_tag[5];
    int64_t shares[tgcx_ideology_count], sum;
    bool shares_in_range;
    uint32_t indices[tgcx_ideology_count], colors[tgcx_ideology_count], array_entries;
};

// Read-only equivalent of FUN_00973BD0's bounded name lookup. No engine allocation.
static char* tgcx_FindIdeology(char* manager, const char* name) {
    uint32_t buckets=*reinterpret_cast<uint32_t*>(manager+4);
    uintptr_t* table=*reinterpret_cast<uintptr_t**>(manager+8);
    if (!buckets || buckets>65536 || !table) return nullptr;
    uint32_t hash=0;
    for (const unsigned char* p=reinterpret_cast<const unsigned char*>(name); *p; ++p) hash=(hash+*p)*61;
    uintptr_t* node=reinterpret_cast<uintptr_t*>(table[hash%buckets]);
    for (unsigned int n=0; node && n<64; ++n, node=reinterpret_cast<uintptr_t*>(node[1])) {
        char* object=reinterpret_cast<char*>(node[0]);
        if (!object) return nullptr;
        uint32_t size=*reinterpret_cast<uint32_t*>(object+0x1C);
        if (size!=strlen(name)) continue;
        const char* text=object+0xC;
        if (*reinterpret_cast<uint32_t*>(object+0x20)>15) text=*reinterpret_cast<char**>(object+0xC);
        if (text && memcmp(text,name,size)==0) return object;
    }
    return nullptr;
}

static const char* tgcx_snapshot_stage="not read";
static unsigned int tgcx_snapshot_ideology=0;
static bool tgcx_ReadSnapshot(tgcx_Snapshot* sample, bool* fault) {
    __try {
        tgcx_snapshot_stage="world/country selection";
        char* world = *reinterpret_cast<char**>(tgcx_base+tgcx_world_rva);
        char* manager = *reinterpret_cast<char**>(tgcx_base+tgcx_country_manager_rva);
        if (!world || !manager) return false;
        uint32_t count = *reinterpret_cast<uint32_t*>(manager);
        uint32_t index = *reinterpret_cast<uint32_t*>(world+0xB60);
        if (!count || count > 65536 || index >= count) return false;
        char** countries = *reinterpret_cast<char***>(manager+4);
        if (!countries || !countries[index]) return false;
        char* country = countries[index];
        uint32_t country_index = *reinterpret_cast<uint32_t*>(country+0x20);
        if (country_index != index || memcmp(world+0xB5C, country+0x1C, 3)) return false;
        // A selected tag with no provinces is not a playable country.
        uintptr_t provinces_begin = *reinterpret_cast<uintptr_t*>(country+0x9D8);
        uintptr_t provinces_end = *reinterpret_cast<uintptr_t*>(country+0x9DC);
        if (!provinces_begin || provinces_end <= provinces_begin) return false;
        tgcx_snapshot_stage="upper-house vector bounds";
        int64_t* array = *reinterpret_cast<int64_t**>(country+0x8B0+0x10);
        uintptr_t end_array=*reinterpret_cast<uintptr_t*>(country+0x8B0+0x14);
        uintptr_t begin_array=reinterpret_cast<uintptr_t>(array);
        if (!array || end_array<begin_array || (end_array-begin_array)%8) return false;
        if (*reinterpret_cast<uintptr_t*>(country+0x8B0)!=tgcx_base+0x9FD7DC) return false;
        // Nine named ideologies plus the null ideology. Never infer the allocation from a file order.
        sample->array_entries=static_cast<uint32_t>((end_array-begin_array)/8);
        if (sample->array_entries!=tgcx_ideology_count+1) return false;
        tgcx_snapshot_stage="ideology manager";
        char* ideology_manager=*reinterpret_cast<char**>(tgcx_base+0xE58A3C);
        if (!ideology_manager) return false;
        uint32_t used=0;
        sample->sum=0; sample->shares_in_range=true;
        for (unsigned int i=0; i<tgcx_ideology_count; ++i) {
            tgcx_snapshot_stage="ideology name/vtable";tgcx_snapshot_ideology=i;
            char* ideology=tgcx_FindIdeology(ideology_manager,tgcx_ideology_candidates[i]);
            if (!ideology || *reinterpret_cast<uintptr_t*>(ideology)!=tgcx_base+0xA36774) return false;
            tgcx_snapshot_stage="ideology index";
            uint32_t slot=*reinterpret_cast<uint32_t*>(ideology+0x28);
            if (!slot || slot>=sample->array_entries || (used & (1u<<slot))) return false;
            used|=1u<<slot; sample->indices[i]=slot;
            tgcx_snapshot_stage="ideology colour";
            uint32_t color=0xFF000000;
            for (unsigned int component=0; component<3; ++component) {
                float value=*reinterpret_cast<float*>(ideology+0x34+component*4);
                if (!(value>=0.0f && value<=1.0f)) return false;
                color|=static_cast<uint32_t>(value*255.0f+0.5f)<<(16-component*8);
            }
            sample->colors[i]=color;
            int64_t value = array[slot];
            sample->shares[i]=value;
            if (value < 0 || value > 32768) sample->shares_in_range=false;
            else sample->sum+=value;
        }
        tgcx_snapshot_stage="null slot/zero total";
        if (array[0]!=0 || (sample->shares_in_range && !sample->sum)) return false;
        sample->world=reinterpret_cast<uintptr_t>(world);
        sample->country=reinterpret_cast<uintptr_t>(country);
        sample->upper_house=reinterpret_cast<uintptr_t>(country+0x8B0);
        sample->upper_house_vtable=*reinterpret_cast<uintptr_t*>(country+0x8B0);
        sample->array=reinterpret_cast<uintptr_t>(array);
        sample->index=index; sample->country_index=country_index;
        sample->date_hours=*reinterpret_cast<uint32_t*>(world+0xB0C);
        memcpy(sample->world_tag, world+0xB5C, 4); sample->world_tag[4]=0;
        memcpy(sample->country_tag, country+0x1C, 4); sample->country_tag[4]=0;
        uintptr_t begin=*reinterpret_cast<uintptr_t*>(world+0xAEC);
        uintptr_t end=*reinterpret_cast<uintptr_t*>(world+0xAF0);
        sample->human_entries=0; sample->human_marker=0;
        if (begin && end >= begin && (end-begin)%4 == 0 && (end-begin)/4 <= count) {
            sample->human_entries=static_cast<uint32_t>((end-begin)/4);
            if (index < sample->human_entries)
                sample->human_marker=reinterpret_cast<uint32_t*>(begin)[index];
        }
        return true;
    } __except (EXCEPTION_EXECUTE_HANDLER) { *fault=true; return false; }
}

static void __cdecl tgcx_OnFramePump() {
    DWORD now=GetTickCount();
    if (tgcx_sampled && now-tgcx_last_sample < 10000) return;
    tgcx_sampled=true; tgcx_last_sample=now;
    tgcx_Snapshot sample={};
    bool fault=false;
    if (!tgcx_ReadSnapshot(&sample, &fault)) {
        if (fault && !tgcx_fault_reported) {
            tgcx_Log("Read skipped: guarded game-state access fault (loading or unsupported layout)");
            tgcx_fault_reported=true;
        }
        return;
    }
    tgcx_fault_reported=false;
    tgcx_Log("upper_house hours=%u year=%d day_of_year=%u world=%08X country=%08X tag=%.4s world_tag=%.4s index=%u country_index=%u humans=%u human_marker=%08X",
        sample.date_hours, static_cast<int>(sample.date_hours/8760)-5000,
        sample.date_hours/24%365+1, sample.world, sample.country,
        sample.country_tag, sample.world_tag, sample.index, sample.country_index,
        sample.human_entries, sample.human_marker);
    tgcx_Log("upper_house object=%08X vtable=%08X array=%08X vector_entries=%u mapping=engine_names",
        sample.upper_house, sample.upper_house_vtable, sample.array, sample.array_entries);
    for (unsigned int i=0; i<tgcx_ideology_count; ++i) {
        int64_t share=sample.shares[i];
        if (share < 0 || share > 32768) {
            tgcx_Log("  index=%u candidate=%s raw=%lld hex=%016llX INVALID: expected share in [0,32768]",
                sample.indices[i], tgcx_ideology_candidates[i], share, static_cast<uint64_t>(share));
            continue;
        }
        int64_t millionths=share*1000000/32768;
        int64_t basis_points=share*10000/32768;
        tgcx_Log("  index=%u candidate=%s raw=%lld hex=%016llX fraction=%lld.%06lld percent=%lld.%02lld",
            sample.indices[i], tgcx_ideology_candidates[i], share, static_cast<uint64_t>(share),
            millionths/1000000, millionths%1000000, basis_points/100, basis_points%100);
    }
    int64_t sum=sample.sum*1000000/32768;
    tgcx_Log("  sum_raw=%lld sum_fraction=%lld.%06lld expected_raw=32768 all_entries_in_range=%u",
        sample.sum, sum/1000000, sum%1000000, sample.shares_in_range);
}

static void __cdecl tgcx_SamplePreservingLastError() {
    DWORD error=GetLastError();
    tgcx_OnFramePump();
    SetLastError(error);
}

// from V2DLL: V2TechButton.cpp, FramePumpThunk; extended to preserve flags and x87/SSE state.
__declspec(naked) static void tgcx_FramePumpThunk() {
    __asm {
        pushfd
        pushad
        mov ebx, esp
        sub esp, 528
        and esp, -16
        fxsave [esp]
        cld
        call tgcx_SamplePreservingLastError
        fxrstor [esp]
        mov esp, ebx
        popad
        popfd
        jmp dword ptr [tgcx_frame_pump_original]
    }
}

// from V2DLL: V2TechButton.cpp, PatchFramePumpCall; guarded CALL rel32 retarget, not a detour.
static bool tgcx_PatchFramePumpCall() {
    unsigned char* call=reinterpret_cast<unsigned char*>(tgcx_base+tgcx_frame_call_rva);
    const tgcx_Signature* signature=nullptr;
    for (const auto& entry : tgcx_signatures) if (entry.rva==tgcx_frame_call_rva) signature=&entry;
    if (!signature || !tgcx_CheckSignature(*signature)) return false;
    uint32_t displacement;
    memcpy(&displacement, call+1, 4);
    tgcx_frame_pump_original=tgcx_base+tgcx_frame_call_rva+5+displacement;
    if (tgcx_frame_pump_original != tgcx_base+tgcx_frame_pump_rva) return false;
    DWORD old_protect=0;
    if (!VirtualProtect(call+1, 4, PAGE_EXECUTE_READWRITE, &old_protect)) return false;
    uint32_t replacement=static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&tgcx_FramePumpThunk)
                         -(tgcx_base+tgcx_frame_call_rva+5));
    memcpy(call+1, &replacement, 4);
    DWORD ignored=0;
    bool restored=VirtualProtect(call+1, 4, old_protect, &ignored) != 0;
    bool flushed=FlushInstructionCache(GetCurrentProcess(), call, 5) != 0;
    // A successfully retargeted call must keep this DLL resident even if these housekeeping calls fail.
    tgcx_Log("Tick hook installed RVA 0x%06X original_RVA=0x%06X protection_restored=%u cache_flushed=%u",
        tgcx_frame_call_rva, tgcx_frame_pump_rva, restored, flushed);
    return true;
}

#include "tgcx_renderer.h"
#include "tgcx_bill.h"
#include "tgcx_reforms.h"
#include "tgcx_templates_gui.h"
#include "tgcx_conform_native.h"
#include "tgcx_conform_gui.h"

// MOD-1: drawing and laws (hemicycle, hover, Bill, Reforms) need every signature
// that neither V2DLL, the stages nor Templates/Conform own; those gate themselves.
static bool tgcx_DrawingSignatures() {
    for (const auto& signature : tgcx_signatures) {
        uint32_t rva=signature.rva;
        if (tgcx_Listed(rva, tgcx_foreign_rvas) || tgcx_Listed(rva, tgcx_stage_rvas) || tgcx_Listed(rva, tgcx_tpl_rvas) ||
            tgcx_Listed(rva, tgcx_tpl_gui_rvas) || tgcx_Listed(rva, tgcx_cf_rvas)) continue;
        if (!tgcx_CheckSignature(signature)) return false;
    }
    return true;
}

// from V2DLL: V2ModAPI.h (upstream 9821c27), plugin API v1 layout; personal use, D6/R8.
struct V2ModAPI {
    uint32_t size; uint32_t apiVersion; uint32_t gameBase; const char* modFolder;
    void (__cdecl* Log)(const char* fmt, ...);
    int (__cdecl* PatchSlot)(uint32_t rvaVtable, int slotIndex, void* replacement, void** outOriginal);
    int (__cdecl* StealToTrampoline)(uint32_t rva, unsigned steal, unsigned char* tramp, int trampSize,
                                     const unsigned char* expect, void* hook, void** orig, const char* tag);
};

#ifndef TGCX_TEST
static volatile LONG tgcx_initialized=0;

// Runs once, whichever loader calls first (our lua51.dll or V2DLL's plugin API). D16.
static bool tgcx_Initialize(const char* origin) {
    if (InterlockedCompareExchange(&tgcx_initialized, 1, 0) != 0) {
        tgcx_Log("Initialisation from %s ignored: already initialised", origin);
        return false;
    }
    wchar_t exe[MAX_PATH], directory[MAX_PATH], log_path[MAX_PATH];
    DWORD count=GetModuleFileNameW(nullptr, exe, _countof(exe));
    if (!count || count >= _countof(exe)) return false;
    wcscpy_s(directory, exe);
    wchar_t* slash=wcsrchr(directory, L'\\');
    if (!slash) return false;
    *slash=0;
    if (swprintf_s(log_path, L"%s\\Logs", directory) < 0) return false;
    CreateDirectoryW(log_path, nullptr);
    if (swprintf_s(log_path, L"%s\\Logs\\tgcx.log", directory) < 0) return false;
    tgcx_log=CreateFileW(log_path, GENERIC_WRITE, FILE_SHARE_READ, nullptr, CREATE_ALWAYS, 0, nullptr);
    if (tgcx_log == INVALID_HANDLE_VALUE) return false;
    tgcx_base=reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
    tgcx_Log("TGCX MOD-6 0.10.4 tgcx.dll loaded_by=%s base=%08X preferred=%08X simulation_writes=engine_commands_only", origin, tgcx_base, tgcx_preferred_base);
    char digest[65]={};
    bool hash_ok=tgcx_HashFile(exe, digest) && strcmp(digest,tgcx_exe_sha256)==0;
    tgcx_Log("%s sha256 %s", hash_ok ? "OK" : "BAD", digest[0] ? digest : "unavailable");
    if (!hash_ok) {
        tgcx_Log("Unsupported executable: no game addresses read, no hooks installed; Lua forwarding remains active");
        return false;
    }
    if (!tgcx_CheckSignatures()) tgcx_Log("Signature mismatch: each module checks its own signatures below");
    if (!IsProcessorFeaturePresent(PF_XMMI_INSTRUCTIONS_AVAILABLE)) {
        tgcx_Log("FXSAVE unavailable: no hooks installed");
        return false;
    }
    // Prevent a late FreeLibrary from leaving patched code pointing into an unloaded DLL.
    HMODULE pinned=nullptr;
    if (!GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_PIN,
                          reinterpret_cast<LPCWSTR>(&tgcx_Initialize), &pinned)) {
        tgcx_Log("Cannot pin tgcx.dll: no hooks installed");
        return false;
    }
    // MOD-2: modules follow the packages ticked in the launcher (D15).
    static tgcx_ModList mods;
    tgcx_ReadMods(directory, GetCommandLineA(), &mods);
    for (unsigned i=0; i<mods.count; ++i)
        tgcx_Log("Mod %s: path=%s user_dir=%s package=%s", mods.item[i].file, mods.item[i].path[0] ? mods.item[i].path : "?",
                 mods.item[i].user_dir[0] ? mods.item[i].user_dir : "-", mods.item[i].package[0] ? mods.item[i].package : "-");
    bool army=tgcx_Ticked(mods,"army"), politics=tgcx_Ticked(mods,"politics");
    tgcx_SettingsFolder(mods, tgcx_tpl_settings, sizeof(tgcx_tpl_settings));
    tgcx_Log("Packages: army=%u politics=%u settings=%s", army, politics, tgcx_tpl_settings[0] ? tgcx_tpl_settings : "(root)");
    if (!army && !politics) {
        tgcx_Log("No TGCX package in the -mod= list: no hooks installed");
        return false;
    }
    if (!tgcx_InstallNativeStages()) {
        tgcx_Log("Module gate stages: BAD (ordered draw/final Present); no module installed");
        return false;
    }
    if (politics) {
        bool drawing=tgcx_DrawingSignatures();
        tgcx_Log("Module gate drawing+laws: signatures %s", drawing ? "OK" : "BAD");
        if (drawing && tgcx_InstallRenderer()) {
            tgcx_bill_enabled=true;tgcx_bill_decision_fn=tgcx_base+0x2DCE10;tgcx_InstallReforms();
        } else tgcx_Log("Drawing and laws disabled: original pie, no Bill or Reforms tab");
    } else tgcx_Log("Politics not ticked: drawing+laws off, original pie");
    if (army && tgcx_TplPackageMetadata(directory,mods)) {
        const uint32_t universal_rvas[]={0x5A38F0,0x5C4410,0x5E3D60,0x5EFE20,0x246620,0x5A6A6D,0xA08A70,0x8453FC,0x1BAB1C,0x1BA89E,
            0x5E4490,0xA3C1DC};
        if(!tgcx_army_universal || tgcx_RequireSignatures(universal_rvas,_countof(universal_rvas))) {
            tgcx_InstallTemplatesGui();
            tgcx_InstallConform();
        } else tgcx_Log("Universal Army disabled: native GUI/metadata signature gate failed");
    } else tgcx_Log("Army unavailable or not ticked: Templates and Conform off");
    tgcx_Log("Modules: drawing+laws=%u templates=%u conform=%u", tgcx_drawing_enabled, tgcx_tpl_gui_enabled, tgcx_cf_enabled);
    return true;
}

// Our loader (lua51.dll) calls this right after LoadLibrary.
extern "C" __declspec(dllexport) int __cdecl tgcx_Init(const char* loader) {
    return tgcx_Initialize(loader && *loader ? loader : "unknown loader") ? 1 : 0;
}

// V2DLL's plugin entry. TGCX uses only size, version and Log: its own hooks are guarded as above.
extern "C" __declspec(dllexport) int __cdecl V2Mod_Init(const V2ModAPI* api) {
    if (!api || api->size < sizeof(V2ModAPI) || api->apiVersion != 1) return 0;
    bool ok=tgcx_Initialize("V2DLL plugin API v1");
    if (api->Log) api->Log("TGCX: %s; see Logs\\tgcx.log", ok ? "initialised" : "not initialised");
    return ok ? 1 : 0;
}

BOOL WINAPI DllMain(HINSTANCE, DWORD reason, LPVOID) {
    // /MT needs thread notifications; do not call DisableThreadLibraryCalls.
    // Nothing is installed here: a loader calls tgcx_Init or V2Mod_Init.
    if (reason == DLL_PROCESS_DETACH && tgcx_log != INVALID_HANDLE_VALUE) {
        CloseHandle(tgcx_log); tgcx_log=INVALID_HANDLE_VALUE;
    }
    return TRUE;
}
#endif
