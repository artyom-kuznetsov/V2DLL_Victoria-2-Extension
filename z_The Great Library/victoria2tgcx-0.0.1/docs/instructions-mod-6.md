# MOD-6 - Universal Army TGC / V2DLL game validation

2026-10-19. User confirms Universal0.10.4 works on vanilla, HPM, DoD
and TGC2.5.2 + V2DLL5.82. Four-base short matrix accepted. Do not repeat
these checks without a relevant change. Below is retained regression and
extended-case guidance; TPL-5 is next. report-universal-tgc-passed-1019.md.
Target: work/Victoria-II-clean-TGC252, canonical TGC2.5.2 plus V2DLL5.82.
Read NEXT.md and report-release-readiness-1019.md; culture is selected next; Politics waits.

1. Already installed after fresh normal-exit confirmation and process gate:
   37/37 identical files; protected loader/base/old-package hashes unchanged.
   Evidence work/universal-tgc-0104-prepared/{plan,installed}.json and
   report-universal-tgc-1019.md. Do not reinstall for this player test.
2. User opens victoria2.exe in work/Victoria-II-clean-TGC252. Select only
   **Army Templates and Conform (Universal)** and **TGC v2.5.2 (stable)**.
   Untick old Army(TGC) and Army(vanilla). Universal must be first for
   V2DLL lookup; the normal launcher sorts Army before TGC. No scripts.
   Never launch/exit the game on the user's behalf.
3. Startup: expect MOD-6 0.10.4 loaded_by=V2DLL plugin API v1, Army
   enabled,11 live land types and shared-root/entry activation. If controls
   absent, preserve Logs/tgcx.log and Logs/v2dll.log before another launch.
   Check actual active mod order/version before changing offsets.
4. Templates: editor, existing library, unit names/icons/pages, Ctrl/Alt,
   recruitment. Conform: open/preview, excess detach arrival, missing
   builds, march/merge and mainland versus disconnected overseas capacity.
   Confirm native TGC styling and no tab overlap.
5. Extended: local shortage, straits, target moves to another landmass,
   Navy/fleet hiding, host close/reopen, repeated selection, library reload.
   Tracking is session-only: after reload earlier builds finish on their
   own; new Conform builds missing units anew, never gathers idle stacks.
6. Preserve logs after normal exit. V2DLL may add common/defines_v2dll.txt
   inside Universal (P48); record generated output, not a base modification.
   Do not remove it during a run.
7. Rollback: untick Universal, retick retained Army(TGC)0.8.2. No loader or
   base replacement. Protected hashes are in preparation/install records.
8. New immutable report with exact base/version/loader/hash/outcomes.
   Universal0.10.4 V2DLL short acceptance is now recorded separately. OlderTGC2.3.4
   and HFM remain separate untested targets.
9. Public beta preparation follows instructions-release-0.md when selected.
   Provenance/license, recipient clean-install and documentation remain.
   No commit/push/publish/contact/subagents unless asked.
