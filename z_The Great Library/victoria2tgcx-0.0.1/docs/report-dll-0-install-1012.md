# DLL-0 installation — 2026-10-12

The user explicitly requested that the agent run the installer. Executed:

```powershell
python tools/install_dll.py E:\Victoria.II.v3.04.Inclu.ALL.DLC
```

Result: proxy installed, verified original retained as `lua51_real.dll`.
`Get-FileHash` confirmed:

- Active `lua51.dll` matches the built proxy:
  `a1388614d332d1fa9b5567835169956794259eca52c53eeaf49fa922f628b74f`.
- Preserved `lua51_real.dll` matches the verified original:
  `b2ba19343691f22d1af1417f9a7cbaeae74ba820a2a412f5a6cdea271cc1a7b0`.
- `tgcx_dll_install.json` records both hashes. A subsequent installer
  dry run recognized the identical installed proxy and retained the original.

The game was not launched. DLL-0 remains **done, not tested in game**.
U-4 now begins at the main-menu check in `docs/instructions-u-4.md` §2;
installation is already complete. The original implementation report is
unchanged; this report records the later authorized installation.
