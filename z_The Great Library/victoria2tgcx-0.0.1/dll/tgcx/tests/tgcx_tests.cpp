// Isolated fixtures; never start or modify Victoria II.
#define TGCX_TEST
#include "../tgcx_dllmain.cpp"

static int tgcx_failures=0;
static void tgcx_RendererTests(const tgcx_Snapshot& sample);
static volatile uint32_t tgcx_seen_eax, tgcx_seen_ecx, tgcx_seen_edx, tgcx_seen_flags;
__declspec(align(16)) static unsigned char tgcx_before_fx[512], tgcx_seen_fx[512];

static void tgcx_Expect(bool value, const char* message) {
    if (!value) { printf("FAIL %s\n", message); ++tgcx_failures; }
}

__declspec(naked) static void tgcx_FakePump() {
    __asm {
        mov tgcx_seen_eax, eax
        mov tgcx_seen_ecx, ecx
        mov tgcx_seen_edx, edx
        pushfd
        pop tgcx_seen_flags
        fxsave tgcx_seen_fx
        ret
    }
}

static void tgcx_HashTests(const wchar_t* reference_exe) {
    const char* texts[]={"", "abc", "abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopq"};
    const char* hashes[]={"e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855",
        "ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad",
        "248d6a61d20638b8e5c026930c3e6039a33ce45964ff2167f6ecedd419db06c1"};
    for (unsigned int i=0; i<_countof(texts); ++i) {
        tgcx_SHA256 hash;
        for (unsigned int p=0; p<strlen(texts[i]); ++p)
            hash.update(reinterpret_cast<const unsigned char*>(texts[i]+p),1);
        char actual[65]; hash.finish(actual);
        tgcx_Expect(strcmp(actual, hashes[i])==0, "SHA256 known vector, bytewise streaming");
    }
    char actual[65];
    tgcx_Expect(tgcx_HashFile(reference_exe,actual) && strcmp(actual,tgcx_exe_sha256)==0,
                "SHA256 full reference executable matches Python gate");
}

static void tgcx_FixtureTests() {
    unsigned char* memory=static_cast<unsigned char*>(VirtualAlloc(nullptr,tgcx_image_size,MEM_RESERVE|MEM_COMMIT,PAGE_EXECUTE_READWRITE));
    if (!memory) { tgcx_Expect(false,"fixture allocation"); return; }
    tgcx_base=reinterpret_cast<uintptr_t>(memory);
    for (const auto& sig : tgcx_signatures) {
        memcpy(memory+sig.rva,sig.bytes,sig.length);
        for (unsigned int i=0; i<sig.reloc_count; ++i) {
            uint32_t value;
            memcpy(&value,memory+sig.rva+sig.reloc[i],4);
            value+=static_cast<uint32_t>(tgcx_base)-tgcx_preferred_base;
            memcpy(memory+sig.rva+sig.reloc[i],&value,4);
        }
    }
    tgcx_Expect(tgcx_CheckSignatures(), "all 27 signatures at relocated fixture base");
    tgcx_Expect(!tgcx_InstallRenderer(),"missing Direct3D import rejects installation without game patches");
    tgcx_InstallTemplatesGui();
    tgcx_Expect(tgcx_tpl_gui_enabled && *reinterpret_cast<uintptr_t*>(memory+0xA12A14)==reinterpret_cast<uintptr_t>(tgcx_TplDestroyThunk) &&
        *reinterpret_cast<uintptr_t*>(memory+0xA12A18)==reinterpret_cast<uintptr_t>(tgcx_TplUpdateThunk),"Templates guarded native view hooks installed at relocated base");
    tgcx_ReplacePointer(reinterpret_cast<uintptr_t*>(memory+0xA12A14),reinterpret_cast<uintptr_t>(tgcx_TplDestroyThunk),tgcx_tpl_destroy_original);
    tgcx_ReplacePointer(reinterpret_cast<uintptr_t*>(memory+0xA12A18),reinterpret_cast<uintptr_t>(tgcx_TplUpdateThunk),tgcx_tpl_update_original);
    tgcx_tpl_gui_enabled=tgcx_templates_installed=false;
    memory[0x334E24]^=1;tgcx_InstallTemplatesGui();
    tgcx_Expect(!tgcx_tpl_gui_enabled && *reinterpret_cast<uintptr_t*>(memory+0xA12A14)==tgcx_base+0x3340E0,
        "Templates bad layout guard leaves native view hooks untouched");memory[0x334E24]^=1;
    const tgcx_Signature* relocated=nullptr;
    for(const auto& sig:tgcx_signatures)if(sig.rva==0xA12A14 && sig.reloc_count)relocated=&sig;
    tgcx_Expect(relocated!=nullptr,"fixture selects a relocated pointer signature by RVA");
    if(relocated) {
        memory[relocated->rva+relocated->reloc[0]]^=1;
        tgcx_Expect(!tgcx_CheckSignatures(), "wrong relocated pointer rejected");
        memory[relocated->rva+relocated->reloc[0]]^=1;
    }
    // MOD-1: a drawing-only site (scalar hover CALL) gates drawing and laws.
    memory[0x2D52C6]^=1;
    tgcx_Expect(!tgcx_CheckSignatures() && !tgcx_DrawingSignatures(), "MOD-1: changed hover site gates drawing and laws");
    memory[0x2D52C6]^=1;
    // MOD-1: a site V2DLL owns is FOREIGN: it blocks nothing.
    memory[0x35BB50]^=1;
    tgcx_Expect(tgcx_CheckSignatures() && tgcx_DrawingSignatures(), "MOD-1: changed V2DLL-owned site logged FOREIGN, blocks nothing");
    memory[0x35BB50]^=1;
    // MOD-1: a Templates-only site blocks Templates, not drawing and laws.
    memory[0x17D1B0]^=1;
    tgcx_Expect(!tgcx_CheckSignatures() && tgcx_DrawingSignatures(), "MOD-1: Templates signature does not gate drawing and laws");
    memory[0x17D1B0]^=1;
    memory[tgcx_frame_call_rva+1]^=1;
    tgcx_Expect(!tgcx_PatchFramePumpCall(), "wrong CALL target not patched");
    memory[tgcx_frame_call_rva+1]^=1;

    tgcx_Snapshot sample={}; bool fault=false;
    tgcx_Expect(!tgcx_ReadSnapshot(&sample,&fault) && !fault, "null main-menu world is quiet");
    unsigned char world[0xBE0]={}, manager[8]={}, country[0xA00]={};
    char* countries[]={nullptr,reinterpret_cast<char*>(country)};
    uint32_t humans[]={0,123};
    uintptr_t provinces[]={42};
    *reinterpret_cast<unsigned char**>(memory+tgcx_world_rva)=world;
    *reinterpret_cast<unsigned char**>(memory+tgcx_country_manager_rva)=manager;
    *reinterpret_cast<uint32_t*>(manager)=2;
    *reinterpret_cast<char***>(manager+4)=countries;
    *reinterpret_cast<uint32_t*>(world+0xB60)=1;
    *reinterpret_cast<uint32_t*>(world+0xB0C)=(5000+1836)*8760;
    memcpy(world+0xB5C,"ENG",4); memcpy(country+0x1C,"ENG",4);
    *reinterpret_cast<uint32_t*>(country+0x20)=1;
    *reinterpret_cast<uintptr_t*>(country+0x9D8)=reinterpret_cast<uintptr_t>(provinces);
    *reinterpret_cast<uintptr_t*>(country+0x9DC)=reinterpret_cast<uintptr_t>(provinces+1);
    *reinterpret_cast<uint32_t**>(world+0xAEC)=humans;
    *reinterpret_cast<uint32_t**>(world+0xAF0)=humans+2;
    // Ten vector entries (null + nine ideologies) ending exactly at a guard page.
    unsigned char* guarded=static_cast<unsigned char*>(VirtualAlloc(nullptr,8192,MEM_RESERVE,PAGE_NOACCESS));
    if (!guarded || !VirtualAlloc(guarded,4096,MEM_COMMIT,PAGE_READWRITE)) {
        tgcx_Expect(false,"guarded allocation"); VirtualFree(memory,0,MEM_RELEASE); return;
    }
    int64_t* shares=reinterpret_cast<int64_t*>(guarded+4096-10*sizeof(int64_t));
    memset(shares,0,10*sizeof(int64_t)); shares[1]=27197; shares[2]=1638; shares[6]=3932;
    *reinterpret_cast<int64_t**>(country+0x8C0)=shares;
    *reinterpret_cast<uintptr_t*>(country+0x8B0)=tgcx_base+0x9FD7DC;
    *reinterpret_cast<int64_t**>(country+0x8C4)=shares+10;
    unsigned char ideology_manager[20]={},ideologies[9][0x50]={};
    char* ideology_vector[10]={};
    uintptr_t nodes[9][2]={};uintptr_t bucket=0;
    *reinterpret_cast<uint32_t*>(ideology_manager+4)=1;
    *reinterpret_cast<uintptr_t**>(ideology_manager+8)=&bucket;
    *reinterpret_cast<unsigned char**>(memory+0xE58A3C)=ideology_manager;
    *reinterpret_cast<char***>(ideology_manager+0xC)=ideology_vector;
    *reinterpret_cast<char***>(ideology_manager+0x10)=ideology_vector+10;
    const unsigned int slots[]={1,2,3,4,5,6,7,8,9};
    for(unsigned int i=0;i<9;++i) {
        *reinterpret_cast<uintptr_t*>(ideologies[i])=tgcx_base+0xA36774;
        const char* name=tgcx_ideology_candidates[i];size_t length=strlen(name);
        *reinterpret_cast<uint32_t*>(ideologies[i]+0x1C)=static_cast<uint32_t>(length);
        *reinterpret_cast<uint32_t*>(ideologies[i]+0x20)=length<16?15:31;
        if(length<16)memcpy(ideologies[i]+0xC,name,length+1);
        else *reinterpret_cast<const char**>(ideologies[i]+0xC)=name;
        *reinterpret_cast<uint32_t*>(ideologies[i]+0x28)=slots[i];
        ideology_vector[slots[i]]=reinterpret_cast<char*>(ideologies[i]);
        for(unsigned int component=0;component<3;++component)*reinterpret_cast<float*>(ideologies[i]+0x34+4*component)=component==0?1.0f:0.0f;
        nodes[i][0]=reinterpret_cast<uintptr_t>(ideologies[i]);nodes[i][1]=bucket;bucket=reinterpret_cast<uintptr_t>(nodes[i]);
    }
    tgcx_Expect(tgcx_ReadSnapshot(&sample,&fault) && !fault && sample.sum==32767 && sample.array_entries==10,
                "bounded vector and nine engine-name lookups retain quantized 32767 sum");
    tgcx_Expect(sample.index==1 && sample.human_marker==123 && strcmp(sample.country_tag,"ENG")==0,
                "player identity and humans cross-check");
    shares[1]=INT64_MAX;
    tgcx_Expect(tgcx_ReadSnapshot(&sample,&fault) && !sample.shares_in_range,
                "unexpected raw share retained for diagnosis without arithmetic overflow");
    shares[1]=27197;
    *reinterpret_cast<uint32_t*>(ideologies[1]+0x28)=1;
    tgcx_Expect(!tgcx_ReadSnapshot(&sample,&fault),"duplicate engine ideology index rejected");
    *reinterpret_cast<uint32_t*>(ideologies[1]+0x28)=2;
    *reinterpret_cast<int64_t**>(country+0x8C4)=shares+9;
    tgcx_Expect(!tgcx_ReadSnapshot(&sample,&fault),"short vector rejected before last element read");
    *reinterpret_cast<int64_t**>(country+0x8C4)=shares+10;
    *reinterpret_cast<uint32_t*>(world+0xB60)=2;
    tgcx_Expect(!tgcx_ReadSnapshot(&sample,&fault), "out-of-bounds country index rejected");
    *reinterpret_cast<uint32_t*>(world+0xB60)=1;
    country[0x1C]='X';
    tgcx_Expect(!tgcx_ReadSnapshot(&sample,&fault), "player/country tag mismatch rejected");
    country[0x1C]='E';
    *reinterpret_cast<int64_t**>(country+0x8C0)=reinterpret_cast<int64_t*>(guarded+4096);
    *reinterpret_cast<int64_t**>(country+0x8C4)=reinterpret_cast<int64_t*>(guarded+4096+80);
    fault=false;
    tgcx_Expect(!tgcx_ReadSnapshot(&sample,&fault) && fault, "bad state pointer caught by SEH");
    *reinterpret_cast<int64_t**>(country+0x8C0)=shares;
    *reinterpret_cast<int64_t**>(country+0x8C4)=shares+10;

    // Make the fixture original target jump to a register/state recorder.
    memory[tgcx_frame_pump_rva]=0xE9;
    uint32_t target=static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&tgcx_FakePump)
                    -(tgcx_base+tgcx_frame_pump_rva+5));
    memcpy(memory+tgcx_frame_pump_rva+1,&target,4);
    memory[tgcx_frame_call_rva+5]=0xC3;
    tgcx_Expect(tgcx_PatchFramePumpCall(), "valid CALL retargeted");
    uintptr_t entry=tgcx_base+tgcx_frame_call_rva;
    uint32_t expected_flags=0;
    SetLastError(123456);
    tgcx_sampled=false;
    __asm {
        fninit
        fld1
        pcmpeqd xmm0, xmm0
        fxsave tgcx_before_fx
        mov eax, 12345678h
        mov ecx, 23456789h
        mov edx, 3456789Ah
        cmp eax, eax
        stc
        pushfd
        pop expected_flags
        call dword ptr [entry]
    }
    tgcx_Expect(tgcx_seen_eax==0x12345678 && tgcx_seen_ecx==0x23456789 && tgcx_seen_edx==0x3456789A,
                "original pump receives unchanged registers");
    tgcx_Expect((tgcx_seen_flags & 0xCD5)==(expected_flags & 0xCD5), "original pump receives unchanged arithmetic flags");
    tgcx_Expect(memcmp(tgcx_before_fx,tgcx_seen_fx,32)==0 &&
                memcmp(tgcx_before_fx+32,tgcx_seen_fx+32,128+128)==0,
                "original pump receives unchanged x87 and SSE state");
    tgcx_Expect(GetLastError()==123456, "thread LastError preserved");
    tgcx_Expect(tgcx_sampled, "tick sampled and returned through original CALL");
    DWORD first_tick=tgcx_last_sample;
    tgcx_OnFramePump();
    tgcx_Expect(tgcx_last_sample==first_tick,"second immediate tick throttled");
    __asm { fninit }
    fault=false;
    tgcx_Expect(tgcx_ReadSnapshot(&sample,&fault),"live fixture ready for renderer callbacks");
    tgcx_RendererTests(sample);
    VirtualFree(guarded,0,MEM_RELEASE); VirtualFree(memory,0,MEM_RELEASE);
    printf("fixture base=%08X: relocated signatures, guarded reads and real hook execution checked\n",static_cast<uint32_t>(tgcx_base));
}

static void tgcx_LoaderProbe(const wchar_t* proxy_path) {
    HMODULE module=LoadLibraryW(proxy_path);
    if (!module) { printf("LoadLibrary failed %lu\n",GetLastError()); tgcx_Expect(false,"proxy loads"); return; }
    const char* names[]={"luaL_newstate","luaL_openlibs","luaL_loadstring","lua_pcall","lua_tointeger","lua_close"};
    FARPROC functions[6]={};
    for (unsigned int i=0;i<6;++i) { functions[i]=GetProcAddress(module,names[i]); tgcx_Expect(functions[i]!=nullptr,"Lua export resolves"); }
    HMODULE real=GetModuleHandleW(L"lua51_real.dll");
    tgcx_Expect(real!=nullptr,"forwarded original loaded");
    for (unsigned int i=0;i<6;++i) {
        if (!functions[i]) return;
        tgcx_Expect(functions[i]==GetProcAddress(real,names[i]),"forwarded function is original's address");
    }
    for (unsigned int ordinal=1; ordinal<=128; ++ordinal)
        tgcx_Expect(GetProcAddress(module,MAKEINTRESOURCEA(ordinal))==GetProcAddress(real,MAKEINTRESOURCEA(ordinal)),
                    "all 128 ordinal forwards resolve to original");
    auto create=reinterpret_cast<void*(__cdecl*)()>(functions[0]);
    auto open=reinterpret_cast<void(__cdecl*)(void*)>(functions[1]);
    auto load=reinterpret_cast<int(__cdecl*)(void*,const char*)>(functions[2]);
    auto call=reinterpret_cast<int(__cdecl*)(void*,int,int,int)>(functions[3]);
    auto integer=reinterpret_cast<int(__cdecl*)(void*,int)>(functions[4]);
    auto close=reinterpret_cast<void(__cdecl*)(void*)>(functions[5]);
    void* state=create();
    tgcx_Expect(state!=nullptr,"real Lua state created");
    if (state) {
        open(state);
        tgcx_Expect(load(state,"return 6*7")==0 && call(state,0,1,0)==0 && integer(state,-1)==42,
                    "real Lua code executes through proxy");
        close(state);
    }
    FreeLibrary(module);
}

// MOD-1: tgcx.dll loaded the way V2DLL loads a plugin, with a fake V2ModAPI v1.
// The host is not v2game.exe, so initialisation stops at the SHA-256 gate.
static unsigned int tgcx_v2_logs=0;
static char tgcx_v2_last[256];
static void __cdecl tgcx_FakeV2Log(const char* format, ...) {
    va_list args;va_start(args,format);
    _vsnprintf_s(tgcx_v2_last,sizeof(tgcx_v2_last),_TRUNCATE,format,args);
    va_end(args);++tgcx_v2_logs;
}
static void tgcx_PluginProbe(const wchar_t* path) {
    HMODULE module=LoadLibraryW(path);
    if (!module) { printf("LoadLibrary failed %lu\n",GetLastError()); tgcx_Expect(false,"tgcx.dll loads"); return; }
    using V2ModInitFn=int (__cdecl*)(const V2ModAPI*);
    using InitFn=int (__cdecl*)(const char*);
    auto v2_init=reinterpret_cast<V2ModInitFn>(GetProcAddress(module,"V2Mod_Init"));
    auto init=reinterpret_cast<InitFn>(GetProcAddress(module,"tgcx_Init"));
    tgcx_Expect(v2_init && init,"plugin exports V2Mod_Init and tgcx_Init undecorated");
    if (!v2_init || !init) return;
    tgcx_Expect(GetFileAttributesW(L"Logs\\tgcx.log")==INVALID_FILE_ATTRIBUTES,"plugin DllMain installs nothing and writes no log");
    V2ModAPI api={};
    api.size=sizeof(api);api.apiVersion=1;api.gameBase=static_cast<uint32_t>(reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr)));
    api.modFolder="mod/TGCX";api.Log=&tgcx_FakeV2Log;
    tgcx_Expect(v2_init(nullptr)==0,"V2Mod_Init rejects a null API");
    V2ModAPI short_api=api;short_api.size=sizeof(api)-4;
    tgcx_Expect(v2_init(&short_api)==0,"V2Mod_Init rejects a short API struct");
    V2ModAPI later=api;later.apiVersion=2;
    tgcx_Expect(v2_init(&later)==0,"V2Mod_Init rejects another API version");
    tgcx_Expect(tgcx_v2_logs==0 && GetFileAttributesW(L"Logs\\tgcx.log")==INVALID_FILE_ATTRIBUTES,
                "rejected API calls neither initialise nor log");
    tgcx_Expect(v2_init(&api)==0,"V2Mod_Init on a host that is not v2game.exe initialises nothing");
    tgcx_Expect(tgcx_v2_logs==1 && strstr(tgcx_v2_last,"TGCX: not initialised"),"V2Mod_Init reports through V2DLL's Log");
    tgcx_Expect(init("second loader")==0,"a second loader is ignored");
    tgcx_Expect(v2_init(&api)==0 && tgcx_v2_logs==2,"a second V2Mod_Init is ignored and still reports");
    // The log is open until tgcx.dll unloads; FreeLibrary is safe because nothing was patched.
    FreeLibrary(module);
}

// MOD-2: the -mod= list and .mod lines, as the launcher writes them (MOD-0).
static void tgcx_PackageTests() {
    char files[4][MAX_PATH];
    tgcx_Expect(tgcx_ParseModArgs("v2game.exe -mod=mod/TGCOrganizedStacks.mod -mod=mod/TGC_v2.5.2.mod -mod=mod/tgcx_army_tgc252.mod",files,4)==3 &&
                strcmp(files[0],"mod/TGCOrganizedStacks.mod")==0 && strcmp(files[2],"mod/tgcx_army_tgc252.mod")==0,"three -mod= in order");
    tgcx_Expect(tgcx_ParseModArgs("\"v2game.exe\" -mod=mod/Divergences of Darkness Fan Fork.mod \"-mod=mod/A b.MOD\"",files,4)==2 &&
                strcmp(files[0],"mod/Divergences of Darkness Fan Fork.mod")==0 && strcmp(files[1],"mod/A b.MOD")==0,"spaces, quotes and case");
    tgcx_Expect(tgcx_ParseModArgs("v2game.exe",files,4)==0 && tgcx_ParseModArgs("v2game.exe -mod=broken",files,4)==0,"no or unterminated -mod=");
    tgcx_Expect(tgcx_ParseModArgs("x -mod=a.mod -mod=b.mod -mod=c.mod",files,2)==2,"list capped");
    const char* mod="name = \"TGC v2.5.2 (stable)\"\r\nreplace_path = \"common\"\r\npath = \"mod/TGC_v2.5.2/TGC\"\r\n  user_dir=TGC252\r\n";
    char value[MAX_PATH];
    tgcx_Expect(tgcx_ModValue(mod,"path",value,sizeof(value)) && strcmp(value,"mod/TGC_v2.5.2/TGC")==0,"path skips replace_path");
    tgcx_Expect(tgcx_ModValue(mod,"user_dir",value,sizeof(value)) && strcmp(value,"TGC252")==0,"unquoted value");
    tgcx_Expect(!tgcx_ModValue(mod,"dependencies",value,sizeof(value)),"missing key");
    tgcx_Expect(!tgcx_ModValue(mod,"path",value,4),"value too long refused");
    tgcx_ModList list={};
    list.count=3;
    strcpy_s(list.item[0].user_dir,"TGC252");strcpy_s(list.item[1].package,"army");
    strcpy_s(list.item[2].user_dir,"TGCX");strcpy_s(list.item[2].package,"politics");
    char settings[MAX_PATH];
    tgcx_SettingsFolder(list,settings,sizeof(settings));
    tgcx_Expect(strcmp(settings,"TGC252_TGCX")==0 && tgcx_Ticked(list,"army") && tgcx_Ticked(list,"politics"),"settings folder joins user_dirs");
    list.count=2;list.item[1].package[0]=0;
    tgcx_SettingsFolder(list,settings,sizeof(settings));
    tgcx_Expect(strcmp(settings,"TGC252")==0 && !tgcx_Ticked(list,"army"),"Army has no user_dir (S4)");
    // Files on disk: a fake game folder with one package.
    wchar_t game[MAX_PATH];GetTempPathW(MAX_PATH,game);wcscat_s(game,L"tgcx_pkg_test");
    wchar_t path[MAX_PATH];
    swprintf_s(path,L"%s\\mod\\tgcx_army_x",game);SHCreateDirectoryExW(nullptr,path,nullptr);
    auto put=[&](const wchar_t* rel,const char* text){wchar_t p[MAX_PATH];swprintf_s(p,L"%s\\%s",game,rel);
        HANDLE h=CreateFileW(p,GENERIC_WRITE,0,nullptr,CREATE_ALWAYS,0,nullptr);DWORD w;WriteFile(h,text,static_cast<DWORD>(strlen(text)),&w,nullptr);CloseHandle(h);};
    put(L"mod\\tgcx_army_x.mod","name = \"Army\"\npath = \"mod/tgcx_army_x\"\n");
    put(L"mod\\tgcx_army_x\\tgcx_package.txt","package = army\nbase = x\n");
    put(L"mod\\base.mod","name = \"B\"\npath = \"mod/base\"\nuser_dir = \"BB\"\n");
    tgcx_ReadMods(game,"v2game.exe -mod=mod/base.mod -mod=mod/tgcx_army_x.mod -mod=mod/missing.mod",&list);
    tgcx_Expect(list.count==3 && strcmp(list.item[1].package,"army")==0 && !list.item[0].package[0] &&
                strcmp(list.item[0].user_dir,"BB")==0 && !list.item[2].path[0],"package marker read from the mod's folder");
    tgcx_Expect(tgcx_GamePath(game,"mod/tgcx_army_x","tgcx.dll",path,MAX_PATH) && wcsstr(path,L"\\mod\\tgcx_army_x\\tgcx.dll"),"package DLL path");
}

#include "tgcx_renderer_tests.h"
#include "tgcx_bill_tests.h"
#include "tgcx_reforms_tests.h"
#include "tgcx_templates_tests.h"
#include "tgcx_templates_gui_tests.h"
#include "tgcx_conform_tests.h"
#include "tgcx_conform_native_tests.h"
#include "tgcx_conform_routes_tests.h"
#include "tgcx_conform_gui_tests.h"
#include "tgcx_templates_metadata_tests.h"
#include "tgcx_universal_tests.h"

int wmain(int argc, wchar_t** argv) {
    setvbuf(stdout,nullptr,_IONBF,0);
    if (argc>=3 && wcscmp(argv[1],L"probe")==0) tgcx_LoaderProbe(argv[2]);
    else if (argc==3 && wcscmp(argv[1],L"plugin")==0) tgcx_PluginProbe(argv[2]);
    else if (argc==2) {
        tgcx_log=CreateFileW(L"tgcx_fixture.log",GENERIC_WRITE,FILE_SHARE_READ,nullptr,CREATE_ALWAYS,0,nullptr);
        tgcx_HashTests(argv[1]); tgcx_PackageTests(); tgcx_BillTests();tgcx_ReformTests();tgcx_TemplateTests();tgcx_TplGuiTests();tgcx_ConformTests();tgcx_ConformNativeTests();tgcx_ConformRouteTests();tgcx_ConformGuiTests();tgcx_TplMetadataTests();tgcx_UniversalTests();tgcx_BillWindowTests(argv[1]);tgcx_FixtureTests();
        if (tgcx_log!=INVALID_HANDLE_VALUE) CloseHandle(tgcx_log);
    } else { printf("usage: tgcx_tests <reference exe> | probe <proxy> | plugin <tgcx.dll>\n"); return 2; }
    printf("tgcx_tests: %s\n", tgcx_failures ? "FAIL" : "ALL OK");
    return tgcx_failures ? 1 : 0;
}
