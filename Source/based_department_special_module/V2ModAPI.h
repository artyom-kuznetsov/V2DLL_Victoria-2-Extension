// V2ModAPI.h - public plugin interface of CreatineCore.
//
// A plugin is a normal x86 DLL that exports ONE function:
//
//     extern "C" __declspec(dllexport) int __cdecl V2Mod_Init(const V2ModAPI* api);
//
// CreatineCore loads "v2dll_mod.dll" and "ccore_mod.dll" from the folder of the mod that is currently
// running ("<game>\mod\<Name>\v2dll_mod.dll", from -mod=) and calls
// V2Mod_Init once (inside Install(), after all built-in patches). The patch
// ships an empty v2dll_mod.dll in every mod; modders replace it with their own.
// Return 1 = loaded, 0 = failed.
//
// Keep this header identical between CreatineCore and the plugins. Only ever ADD
// fields at the END of the struct and bump V2MOD_API_VERSION; plugins check
// api->size before touching newer fields.
#pragma once
#include <stdint.h>

#define V2MOD_API_VERSION 1

struct V2ModAPI
{
    uint32_t size;          // sizeof(V2ModAPI) as seen by CreatineCore
    uint32_t apiVersion;    // V2MOD_API_VERSION of CreatineCore
    uint32_t gameBase;      // image base of victoria2.exe (add RVAs to this)
    const char* modFolder;  // folder of the running -mod=, "" if unknown

    // Writes a line to the CreatineCore log.
    void (__cdecl* Log)(const char* fmt, ...);

    // Replaces vtable slot `slotIndex` of the vtable at `rvaVtable`.
    // *outOriginal receives the original function pointer. 1 = ok.
    int  (__cdecl* PatchSlot)(uint32_t rvaVtable, int slotIndex,
                              void* replacement, void** outOriginal);

    // Steals `steal` bytes at `rva` into `tramp` and redirects to `hook`.
    // `expect` = expected original bytes (or NULL). 1 = ok.
    int  (__cdecl* StealToTrampoline)(uint32_t rva, unsigned steal,
                                      unsigned char* tramp, int trampSize,
                                      const unsigned char* expect,
                                      void* hook, void** orig, const char* tag);
};
