// V2DLL_Shared.h - symbols that V2TechButton.cpp exposes to the other
// translation units of the DLL, and what those units export back.
#pragma once
#include <windows.h>

// --- defined in V2TechButton.cpp ---
extern DWORD g_base;                                  // game image base
void   Log(const char* fmt, ...);
bool   V2_DebugLogEnabled();                          // DEBUG_LOG setting
bool   PatchSlot(DWORD rvaVtable, int slotIndex, void* replacement, void** outOriginal);
bool   StealToTrampoline(DWORD rva, unsigned steal, unsigned char* tramp, int trampSize,
                         const unsigned char* expect, void* hook, void** orig, const char* tag);
double ConsParseNumber(const char* s);
const char* V2_OwnDir();                              // folder V2DLL\ (holds v2dll_core.dll), no trailing "\\"

// --- defined in V2DLL_AssimilateBlock.cpp ---
bool   InstallAssimilateBlock();
bool   InstallEffectFactoryHook();       // shared router of the block-form script effects

// --- defined in V2DLL_PopMergeIdentity.cpp ---
bool   InstallMovePopBlock();
bool   InstallPopMergeIdentity();
bool   MovePopBlockEnabled();
void   CaptureMovePopBlock(void* effect, void* ctx, int keyId, int token);

// --- defined in V2DLL_ModLoader.cpp ---
// Loads "<modFolder>\v2dll_mod.dll" if present (modFolder = running -mod= path).
void   LoadV2Mods(const char* modFolder);
// Loads every "<V2DLL folder>\dll_Submods\*.dll" (creates the folder if missing).
void   LoadV2Submods();
