# Drop-in Army test files - 2026-10-18

The user explicitly requested files to copy manually, without an installer.
Current handoff: `work/Army-Templates-Conform-0.8.1-drop-in.zip`.
Supersedes the portable setup ZIP for this handoff; previous artifacts retained.

ZIP contains the previously verified generated Army folder and descriptor,
unchanged staged 0.8.1 as v2dll_mod.dll, the manual .cmd/.ps1 launch pair,
and a short placement README. Extract into the game folder beside v2game.exe.
V2DLL and TGC v2.5.2 remain prerequisites. The launcher expects
mod/TGC_v2.5.2.mod; the README explains how to adjust that path if needed.

No installer, Python runtime, .py, .exe or Politics package is included.
Generated interface/art files are included for this private TGC v2.5.2 test,
only in ignored work/, never git. Plugin SHA-256 matches stage 0.8.1.
Archive CRC passes; exactly one DLL; no Politics filenames. Existing Army
content was byte-verified against the installed package in the previous step.

Nothing was installed, launched, sent externally, committed or pushed.
U-12 and 0.8.1 + V2DLL game testing remain pending. Existing next-card
instructions remain current.
