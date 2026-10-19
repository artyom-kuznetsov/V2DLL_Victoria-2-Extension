# RELEASE-0: ATCU 0.0.1 candidate

2026-10-19. User selects release preparation, chooses to leave the license
undecided, names the package **ATCU - Army Template and Conform Universal**,
and requests no em dashes. Preparation only: no tag, release, upload,
commit/push, external message or game-copy change in this session.

## Deliverable

- ZIP: `work/releases/final/ATCU-0.0.1-candidate.zip`
- Extracted review folder: `work/releases/final/ATCU-0.0.1-candidate/`
- SHA sidecar: `work/releases/final/ATCU-0.0.1-candidate.zip.sha256`
- Size: 1,054,050 bytes; 49 files, including 28 DDS and exactly 3 DLLs.
- ZIP SHA-256:
  `4e84a34b167b3fc97aef52fffd58dc2d75d2ae3305f0ca3d08d49aa491a28eaf`

Input is the immutable accepted Universal0.10.4 archive, checked against
its SHA-256. The gameplay DLL remains
`b53621609425f9c75135ba2fade947a6bf93197bcc14ec30182b105b9f7bba67`;
the root loader remains
`3172e716e0d5e1bb7a4baf91bbab9828a9f9f57d2389744b72cb14b03ca3a5ca`.
All36 mod files other than the descriptor are byte-identical to accepted
payload. The descriptor's display name is now ATCU; path and internal
identifiers stay compatible. Package metadata and DLL logs retain internal
build0.10.4; distribution version0.0.1 is explicit in RELEASE.json/docs.

The archive includes README, clean/V2DLL installation/update/removal guide,
controls, tested matrix, changelog, known issues, bug-report instructions,
credits, rights status, file-level provenance, release identity and SHA-256
manifest. Documentation sources live in docs/release-0.0.1/. Root README
introduces ATCU. RELEASE_NOTES.md is reviewable prerelease text with proposed
tag v0.0.1 and existing GitHub destination; neither was created.

No original Lua library, game executable, base-mod distribution, V2DLL
distribution, developer scripts, saves/logs or RE material is bundled.
The optional own-loader and V2DLL plugin routes share the same mod folder.

## Verification

- New maintainer builder tools/prepare_atcu_release.py checks exact input
  archive identity, manifest/inventory, accepted DLL/loader hashes, alias
  equality, allowed content, no base GUI overrides and new launcher name.
- Five release tests pass: digest/content tampering, unsafe/duplicate ZIP
  entries, art-origin categories, wrong source/existing output refusal and
  dotted version preservation. Packaging defects found during development
  were corrected; initial output is not the delivered candidate.
- ZIP CRC, every manifest hash, 28-art inventory and no em dashes in release
  text pass. Rebuilt under work/releases/repro/ with identical SHA-256.
- work/verify_atcu_candidate.py extracted the actual packaged mod files to
  isolated fixtures and exercised the clean proxy and packaged V2DLL alias
  using the native probe. Both pass. Clean original-Lua rename/restore,
  package removal and unrelated base sentinel preservation verified.
- Probe evidence: work/releases/recipient-probes/verification.json plus
  clean-probe.txt/plugin-probe.txt. These are loader/API and file-operation
  simulations, not a second-PC or full-game test. No game launched.
- Previous accepted four-base gameplay, native/GPU/172-signature evidence
  remains applicable to the unchanged binary. New launcher branding has not
  yet been user-tested in the normal launcher.

## Provenance and remaining decisions

PROVENANCE.json lists all28 textures with hashes and generator/native sprite
origins: 9 original drawn UI outputs and19 game/effective-base-derived
outputs. Exact historical effective-base ancestry is not fully recorded.
The accepted appearance is preserved. Redistribution permission for the
derived art has not been recorded; a public release needs that status or
an approved art alternative. Do not infer permission from generated names.

V2DLL use clarification is accepted as user-provided provenance, with23
source attribution markers inventoried. No request to replace that code
was introduced. No unverified upstream license identifier assigned.
The project's own license is deliberately undecided, as the user requested.

Before publication: record artwork publication status, perform an actual
recipient/normal-launcher candidate check, review final license/notices and
approve the exact ZIP/hash, tag and GitHub release destination. No automatic
permission request or external contact. Culture filters/TPL-5 remain the
next feature, continent selector/TPL-6 a prospective follow-up. They are not
implemented or required to review this existing-build candidate.
