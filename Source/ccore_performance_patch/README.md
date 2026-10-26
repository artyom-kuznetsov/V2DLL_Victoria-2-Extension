# ccore_performance_patch

CreatineCore submod. Put `ccore_performance_patch.dll` into `z_CreatineCore\dll_Submods\`; on the first start it creates
`ccore_performance_patch.ini` next to itself.

It holds the performance / stability patches by av213238 that were built into `creatinecore.dll` before 6.25:
`PATCH_FPU_FORTRESS`, `PATCH_D3D_FPU_PRESERVE`, `PATCH_THREAD_FPU_PIN`, `PATCH_HEAP_LFH`, `ENGINE_WORKER_THREADS`,
`PATCH_POP_QUANTIZE` / `POP_QUANTIZE_KEEP_BITS`, `REMOVE_SLEEPERS`, `PATCH_D3D_NO_VSYNC`, `D3D_FPS_LIMIT`,
`FIX_SFX_MIXER_LAG`, `PATCH_HIGH_PRIORITY` and the always-on `timeBeginPeriod(1)` / `NtSetTimerResolution`.
plus `FIX_ARMY_WINDOW_LAG` (moved in 6.26 with the idle / army-window hooks it was built into). The performance patches by wyrm stay in creatinecore.dll.

Multiplayer: every player needs the DLL and the same values. creatinecore.dll hashes the effective settings
(`CCorePerf_ConfigLines`) into the config fingerprint; a missing DLL changes the hash too.

Source: `ccore_performance_patch.cpp` (the code was moved from `V2TechButton.cpp` unchanged except for the settings struct
and the removal of per-call statistics). Build: `ccore_performance_patch.vcxproj` (Win32, v145, static CRT, same as the other submods);
`V2ModAPI.h` is a copy of `Source\V2\V2\V2ModAPI.h`.
