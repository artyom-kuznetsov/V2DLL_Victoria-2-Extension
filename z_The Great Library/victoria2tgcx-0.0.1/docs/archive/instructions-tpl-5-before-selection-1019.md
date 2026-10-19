# TPL-5: culture filter for Templates and Conform

2026-10-19: deferred while Army compatibility has priority (user). See NEXT.md.

2026-10-18. Request from the user after the MOD-2 game check. Shape decided by
the user: **two buttons**, for both Templates (recruit) and Conform (build the
missing regiments):

- **Primary + accepted:** regiments only from soldier pops of the primary or
  an accepted culture.
- **Primary only (strict):** regiments only from soldier pops of the primary
  culture.

With neither ticked, behaviour is as today. The choice is an interface
preference (D12): it goes in the templates file, not in the save.

## Steps

1. **RE first (Ghidra, read only).** How `CConstructUnitCommand`
   (`FUN_0057D1B0`, size 0x68, `docs/symbols.md`) and the UI recruit
   (`FUN_00732520`) pick the soldier pop. Find:
   - whether the command carries a pop pointer or id (the native Build Army
     list already shows pops by culture; which field holds the choice);
   - where the pop's culture is (`CPop` field) and how the country's primary
     and accepted cultures are stored (`CCountry` fields).
   Record every new offset in `docs/symbols.md` with its evidence and `conf`
   (V6). Add any new address to `tools/check_exe.py` signatures (V1).
2. **Decide the route** in the report: filter the pop list before our recruit
   loop picks one (preferred, no new command), or another route if the
   command picks the pop itself.
3. **Mockup board 5 (Templates) and the Conform window** change first (R10):
   two checkbox buttons, their text, their place. Republish the artifact,
   `python tools/mockups/export.py`.
4. **Code:** `tgcx_templates_gui.h` (buttons), `tgcx_templates_store.h`
   (store the choice per template), the recruit and Conform build paths.
   Short of pops of the right culture: recruit what fits and report the rest
   (D12). Localisation in `tgcx_templates.csv` (English column, D10).
5. Tests in `dll/tgcx/tests/` for the filter; the package installer still
   splits the files (`tools/test_tgcx_packages.py`).
6. Build, test, stage in `E:\v2re\logs\tgcx-tpl5-MMDD\`, install after a
   normal exit with a backup, game check, report
   `docs/report-tpl-5-MMDD.md`.
