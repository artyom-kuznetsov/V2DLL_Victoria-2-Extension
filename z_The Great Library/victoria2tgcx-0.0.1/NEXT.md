# NEXT - what comes next

2026-10-19 (56). **ATCU0.0.1 release candidate prepared locally using the
accepted internal0.10.4 build. User license choice: undecided for candidate.**
Session55 archived in docs/archive/sessions.md. No release/tag/upload,
commit/push or game-copy changes during preparation.

## User decisions / boundaries

- Public name: **ATCU - Army Template and Conform Universal**. Internal
  tgcx paths remain for upgrade/library compatibility. No em dashes.
- License stays undecided for this candidate. Keep V2DLL attribution and
  owner's clarification that its code use is no problem; no invented license.
- Same files-only package; no recipient installer/PS1/BAT/Python needed.
- User alone launches/exits; installs require fresh normal-exit confirmation
  and process gate. Existing accepted game copies are unchanged.
- Primary+accepted / primary-only culture buttons remain next feature
  (TPL-5), then consider continent choice in builder (TPL-6). Neither is in
  this candidate. Politics/LAW-4 still wait. Conform D17 land reach retained.
- Preparation does not authorize publication, new push, tag or messages.

## Candidate and evidence

- **Superseded 2026-10-19 (user: too many docs in the ZIP):**
  work/releases/final/ATCU-0.0.1.zip, 1,041,444 bytes, 39 files: one
  README.txt (CRLF, ASCII), lua51.dll and mod/ only. SHA256
  9ee654e7b33fbe62444892a55388e24ecfc7246ace2fdef9bf1007585e4f799e,
  reproduced. SHA256/RELEASE/PROVENANCE JSON now sit beside the ZIP.
  Split docs archived in docs/archive/release-0.0.1-candidate-1019/;
  RELEASE_NOTES.md is the GitHub release body. Mod payload unchanged.
- Earlier candidate: ATCU-0.0.1-candidate.zip, 1,054,050 bytes, 49 files,
  SHA256 4e84a34b167b3fc97aef52fffd58dc2d75d2ae3305f0ca3d08d49aa491a28eaf.
- 36/37mod files identical to accepted payload; only descriptor display name
  changed. DLL build0.10.4/loader unchanged. Distribution version0.0.1
  explicitly separate; logs retain old internal build. No game integration
  claim for new branding beyond the previously accepted behavior.
- ZIP includes README/INSTALL/CHANGELOG/CREDITS/KNOWN_ISSUES/BUG_REPORT/
  RIGHTS_STATUS/RELEASE_NOTES plus RELEASE/PROVENANCE/SHA256 JSON. No game
  executable, original Lua, base mods, V2DLL distribution or recipient scripts.
- tools/prepare_atcu_release.py reproduces candidate from accepted ZIP.
  Five release tests pass, CRC/manifest/content pass, reproducible ZIP hash
  matches. Clean proxy and packaged plugin probes/file-layout/removal
  simulations pass; evidence work/releases/recipient-probes/verification.json.
  These are not second-PC or full-game tests. No game launched.
- report-release-0-candidate-1019.md records exact scope and provenance.
  28textures:9original drawn,19game/effective-base-derived. Public derived-art
  permission status/ancestry still to record; preserve accepted appearance.
- Accepted gameplay matrix remains vanilla/HPM/DoD/TGC2.5.2 + V2DLL5.82,
  report-universal-tgc-passed-1019.md. Other mods and MP not established.

## Next session in order

1. **RELEASE-0 candidate review**, docs/instructions-release-0.md: review
   docs/art provenance and check candidate branding/install with recipient.
   Record artwork publication status or propose user-approved alternatives.
   Do not repeat the V2DLL code-use question or select a license silently.
2. No public upload until exact final ZIP/hash/tag/destination authorized.
   Proposed release title ATCU0.0.1, tag v0.0.1, existing repository
   github.com/azha2005/victoria2tgcx. Keep prerelease status and precise scope.
3. **TPL-5 next feature**, docs/instructions-tpl-5.md: verify native culture
   fields, update visual references, implement shared preview/build filters
   with backwards compatible preferences. Stage/tests/normal-exit/game check.
4. **TPL-6 prospective**, docs/instructions-tpl-6.md: dynamic continent
   selector proposal in template builder after culture; distinct from land
   reach. Extended regression remains instructions-mod-6.md.
5. Report actual results; close under ROADMAP7 and preserve rollback.

## Cards

| Card | Status | Instructions / evidence |
|---|---|---|
| RELEASE-0 | local0.0.1 candidate ready for review; not published | instructions-release-0.md; report-release-0-candidate-1019.md |
| TPL-5 | next feature; not implemented | instructions-tpl-5.md |
| TPL-6 | prospective continent-builder design | instructions-tpl-6.md |
| MOD-6 / MOD-3 / MOD-4 / MOD-5 | four-base short accepted; extended pending | instructions-mod-6.md; report-universal-tgc-passed-1019.md |
| TPL-3 / TPL-4 / V2D-082 | accepted baselines | existing reports |
| LAW-4 / U-12 Bill | user-deferred | respective instructions |
| V2D-2 | separate author-side enhancement | report-v2dll-mod-slot-1018.md |
| MOD-1 / MOD-2 / LAW-3 / U-11 | accepted baselines; G1/G3 deferred | existing reports |
| TPL-0 / TPL-1 / U-8 | accepted | existing reports |
| TPL-2 | on hold; Conform covers it | instructions-tpl-2.md |
| GOV-0 / Economy / COMPAT-0 | not selected / deferred | technical-plan.md; instructions-compat-0.md |

Next pitfall P59. Art/binaries/local release outputs remain ignored work/.
