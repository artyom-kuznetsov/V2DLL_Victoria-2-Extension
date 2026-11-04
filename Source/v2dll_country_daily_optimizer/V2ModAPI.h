// Public plugin interface exported by CreatineCore/V2DLL.
#pragma once
#include <stdint.h>

#define V2MOD_API_VERSION 1

struct V2ModAPI {
    uint32_t size;
    uint32_t apiVersion;
    uint32_t gameBase;
    const char* modFolder;
    void (__cdecl* Log)(const char* fmt, ...);
    int (__cdecl* PatchSlot)(uint32_t rvaVtable, int slotIndex,
                             void* replacement, void** outOriginal);
    int (__cdecl* StealToTrampoline)(uint32_t rva, unsigned steal,
                                     unsigned char* trampoline, int trampolineSize,
                                     const unsigned char* expected,
                                     void* hook, void** original, const char* tag);
};
