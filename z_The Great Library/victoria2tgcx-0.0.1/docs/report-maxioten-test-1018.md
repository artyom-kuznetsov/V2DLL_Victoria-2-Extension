# Private maxioten test handoff - 2026-10-18

Prepared `work/TGCX-maxioten-private-test-2026-10-18.zip` in response to the
user's screenshot request. No external message/upload, game installation,
launch, commit or push was performed.

Includes staged 0.8.1 and fallback 0.8.0 as v2dll_mod.dll, a SHA-256 manifest,
README and the minimal Python generator dependencies/data. Excludes TGC,
base art, executable and V2DLL distribution. Generated overrides/art come
from the recipient's own installation. The user can send this private test
bundle; it does not establish a public redistribution licence.

`tools/prepare_maxioten_test.py` validates the executable hash and plugin
export, prepares both packages in temporary storage, writes a new output
folder and records the explicit launch command with Army first. It does
not install or launch. Requirements: Python 3.11+, Pillow, installed TGC
v2.5.2 descriptor TGC_v2.5.2.mod, and V2DLL with plugin loading enabled.

Validation: check_exe ALL OK. Ran the bundled preparer successfully against
E:'s base, output only in workspace work/maxioten-prepared-check. All 47
package content files match the current installed packages byte for byte;
the two .mod descriptors differ only in newline encoding. Plugin binaries
are unchanged copies of their stages and export V2Mod_Init. ZIP CRC check
passes and archive contains no .gui, .dds or .exe files.

Limit: no new game test. 0.8.0 passed with our loader, 0.8.1 awaits U-12;
V2DLL coexistence was confirmed on 0.7.0 only. LAW-4 remains open. U-12,
LAW-4, TPL-5 and MOD-3 instructions are already current and unchanged.
