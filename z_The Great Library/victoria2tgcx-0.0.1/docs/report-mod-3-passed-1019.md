# Vanilla Army 0.9.0 short game check passed - 2026-10-19

User confirms Conform worked after the P53 opening-button correction. The
fresh vanilla/own-loader log confirms MOD-5 0.9.0, reference 3.04 executable,
11 land types, Army enabled and Politics off. Evidence snapshot:
`work/mod3-090-passed-1019/tgcx.log` and `evidence.json`.

Observed Conform operations on France:

- Stack 493: 7 detach transfers queued; **7/7 extras arrived**, zero left
  in the source; zero failed orders.
- Stack 460: 3 detach transfers and 4 builds; **3/3 extras arrived**, zero
  left in the source; four recruits queued, zero omitted/failed.
- All four new stacks (3254, 3257, 3260, 3263) marched safely to province
  438 and joined stack 460. This confirms the march/merge path as well.

The earlier Spanish test also confirmed template recruitment (two queued).
No guarded faults, disabled Conform panels, refusal messages or nonzero
failed-order totals appear in this snapshot. Save/reload and explicit
Navy/fleet-hiding checks are not independently evidenced here and remain
extended coverage; the short vanilla recruit/Conform check passed.

No installation, game launch/exit, code change, commit or push during this
acceptance review. HPM and DoD remain generated/checked but untested in game;
TGC 0.9.0 regression and older TGC remain pending. HFM is not installed.

## One package across bases

Current 0.9.0 already uses one identical logic DLL for every prepared base.
Its generated GUI overrides, native-art extracts, button anchors and catalogue
are still base-specific. The loader expects a selected Army package, and the
logic expects its metadata file and named GUI children.

A universal files-only package is a reasonable development target. A candidate
route is additive shared GUI definitions plus runtime attachment to native
views, using the active unit database and native sprites for rows/icons.
This avoids shipping a replacement copy of each base's buildunit/unitpanel.
The required engine GUI construction/attachment and dynamic sprite APIs are
not yet identified and validated in this project; feasibility is not proven.
See the proposed research card instructions-mod-6.md. User has asked about
this route; no universal implementation or replacement of the selected test
order is claimed from the question alone.

A literal standalone DLL also needs a loading route: the own lua51 proxy
currently loads a separate logic DLL, while V2DLL supplies its plugin loader.
Combining these is a separate packaging concern. One shared ZIP can contain
the fixed loader/plugin and additive assets while keeping identical content
across bases. Neither form supports arbitrary executable builds automatically.
