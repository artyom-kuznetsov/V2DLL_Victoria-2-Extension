# Portable Army 0.8.1 test bundle - 2026-10-18

Supersedes the mixed-version/mixed-package handoff in report-maxioten-test-1018.md
for the user's current request. Only 0.8.1 Army Templates and Conform is packaged.

Artifact: work/Army-Templates-Conform-0.8.1-portable.zip (24,959,037 bytes).
SHA-256: 0b3f343c8f921f30ad5b6b3524c998cb38adc5ac77a966ef33747aaf78f5ccf9.
The previous ZIP remains as a superseded local artifact; send the portable ZIP.

## User workflow

Extract, double-click Setup.cmd, browse to v2game.exe, choose the installed base
mod and click Install Army 0.8.1. Python 3.12 and Pillow 12.3 are bundled with their
licences; no Python installation, network download or pip step is required.
V2DLL with mod-plugin loading remains a prerequisite; setup checks its loader
marker/key and refuses disabled plugin loading. It does not replace lua51.dll.

Setup generates interface/art from the recipient's installed base. It installs
only tgcx_army_<base> and its descriptor, plus a manual .cmd/.ps1 launcher that
puts Army first. No base descriptor rename is necessary. It retains backups
under <game>/tgcx_backups/<timestamp>-army-081 and restores on a copy failure.
Restore backup in Setup provides rollback/uninstall. Existing Politics and base
files are not changed. The local package config enables V2DLL plugin loading if
LOCAL_MOD_CONFIG is in use. The P48 defines file is preserved on reinstall.

The sole plugin is an unchanged staged 0.8.1 binary renamed v2dll_mod.dll,
SHA-256 62fa79339ee1a8acb26774a916f92ffbbd41cdff59ad7b25d65325c98a77127d.
The shared binary still contains dormant Politics code, but the generated launch
selects only the Army package. No Politics scripts/art or 0.8.0 binary is bundled.
The generators' shared source modules contain unused law helpers; no law content
is generated. TGC v2.5.2 remains the tested base and compiled unit catalogue.
Other base selection is available, but does not establish runtime compatibility.

## Verification

- Five installer tests pass: install/reinstall/restore/uninstall; running-game
  refusal; preservation of foreign content; simulated partial-copy rollback;
  disabled V2DLL plugin setting refusal. These use temporary fixture games only.
- Ran the final packaged Python with isolated mode against E:'s installed base,
  writing only work/army-081-final-check. All 35 generated Army content files
  match the installed Army package byte for byte; new marker records 0.8.1.
- Portable runtime prefix and Pillow path both resolve inside the bundle.
  Created/updated/closed a hidden Tk root successfully. No game was launched.
- Archive CRC, every SHA-256 manifest entry and plugin identity pass. Exactly
  one plugin exists; no generated base .gui or .dds files are in the archive.
- Generated PowerShell launcher parses without errors. It was not executed.

Python 3.12's restrictive temporary-directory ACLs block the sandbox token;
portable generation/hidden-Tk verification passed outside that sandbox, with
explicit read-only-game/workspace-output scope. No installation on E:, launch,
external send, commit or push was performed.

0.8.1's in-game U-12 is still pending. Previous V2DLL coexistence evidence is
for 0.7.0; this bundle does not claim 0.8.1 + V2DLL runtime validation.
U-12 and existing LAW-4/TPL-5/MOD-3 instruction files remain current.
