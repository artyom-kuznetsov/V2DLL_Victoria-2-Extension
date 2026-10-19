# RELEASE-0 - Review ATCU0.0.1 candidate

2026-10-19. Release preparation selected and completed locally. Name:
ATCU - Army Template and Conform Universal. User requests no em dashes.
Own license deliberately undecided for this candidate. No release/tag,
upload, commit/push or external contact authorized by preparation alone.

1. Read NEXT.md and report-release-0-candidate-1019.md. Review the actual
   work/releases/final/ATCU-0.0.1-candidate.zip and extracted folder. SHA256
   4e84a34b167b3fc97aef52fffd58dc2d75d2ae3305f0ca3d08d49aa491a28eaf.
   Keep accepted0.10.4 binaries unchanged unless a new defect justifies code.
2. Candidate documents are in docs/release-0.0.1/. License is undecided by
   choice; do not choose one automatically or repeatedly ask during review.
   V2DLL clarification/attribution is recorded. PROVENANCE.json identifies
   9 original and19 game/effective-base-derived textures; exact historical
   ancestry and public redistribution status of derived art are incomplete.
   Prepare concrete permission evidence or visual alternatives for user
   review before public upload. No unsolicited author contacts/redesign.
3. Actual recipient check: user copies mod from ZIP into an isolated supported
   game, uses clean Lua-rename or existing V2DLL route from INSTALL.txt,
   selects ATCU plus base only, checks Templates/Conform and library reload.
   Check new launcher branding. Existing probes validate loading/file layout,
   not actual second-PC gameplay. Never launch/close game on user's behalf;
   any agent installation needs fresh normal-exit confirmation/process gate.
4. Preserve feedback/logs after normal exit. Record update/removal behavior
   and unchanged original/base files. Maintain exact executable/tested-base
   scope; extended cases/MP remain separate, no repeated short checks without
   relevant changes. Culture buttons are next feature, not in this candidate.
5. To rebuild, run tools/prepare_atcu_release.py with --source pointing at
   the accepted work/Army-Templates-Conform-Universal-0.10.4.zip and --output
   a NEW ignored folder ending ATCU-0.0.1-candidate. Builder refuses altered
   inputs/existing output. Run tools/test_atcu_release.py and verify output
   SHA/CRC/manifest. Native or Python gameplay suites need not repeat for
   packaging-only changes; test changed boundaries and keep previous proof.
6. Once candidate is approved, present exact final ZIP/hash, release text,
   proposed v0.0.1 tag, source revision and GitHub destination. Obtain explicit
   authorization for publication/tag/assets, and exact push payload if source
   changes are to be pushed. Do not reuse prior1482eee push authorization.
7. Publish only within that authorization; verify exact assets/tag/URLs and
   record result. No repository visibility change or external messages.
8. Archive NEXT/update statuses and current step instructions at close.
