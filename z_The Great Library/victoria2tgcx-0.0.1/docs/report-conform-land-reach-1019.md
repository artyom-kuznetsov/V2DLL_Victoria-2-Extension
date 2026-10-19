# Conform - recruit only within land reach, 0.10.1

2026-10-19. User reports that 0.9.0 builds overseas units which cannot
reach the gathering army in vanilla/HPM/DoD. User explicitly has **not
tested Universal 0.10.0**. This is shared recruitment/tracking logic, not
evidence of universal GUI acceptance.

User choice: **Recruit only from provinces that can reach that army by
land; report any shortage.** No separate armies per landmass or naval
transport automation. Culture filters and Politics remain deferred.

## Cause and correction

The planner selected eligible soldier pops by capacity across the whole
country. Preview used the same unrestricted pool. Posting a Move command
was logged as marching, but did not prove the engine found a route. The
tracker counted all those builds as pending, making an incomplete target
appear fully supplied.

0.10.1 filters Conform's pop snapshot before preview and actual planning.
It queries the native VerySafe path predicate used by the existing Move,
from the recruitment province to the target army's current province, and
rejects sea origins, sea destinations and paths containing sea nodes.
This checks actual native adjacency/access, not continent-name equality;
native land connections and straits remain usable. Province results are
cached across pops within the snapshot. Free capacity of the real game
is never changed. Remaining missing regiments are reported as shortages.

The native query only builds a temporary path list. Its result is cleaned
with the game's own cleanup method on success and failure. It posts no
Move and changes no army position. Signatures/ABI evidence: symbols.md.
Construction, movement, detach and merge retain engine command routes.

Tracked builds retain their origin province. Preview excludes stranded
reinforcements from pending counts, and the daily driver stops tracking
finished units without a land route. Existing troops, constructions and
orders are retained. Already built overseas troops require manual transport;
they are not relocated, disbanded or cancelled. Standalone Templates Recruit
has no selected-army destination and retains its existing behavior; this
new destination scope applies to Conform.

Conform text now says "within land reach" and explains an unreachable/local
capacity shortage. Layout and sprites unchanged; files-only delivery.
This user-approved recruitment restriction changes preview meaning; current
reference notes record it. No remote mockup publication is claimed.

## Validation

- Reference executable hash and **169 signatures ALL OK**, including five
  new route/ABI/predicate/cleanup/sea-field guards.
- MSVC x86 build passed; native/reference-window/GPU suite **ALL OK**.
- **12 installer/Lua tests passed**; **13 Python tests passed** (universal
  layout 2, Conform GUI 6, catalogue 5). TGC 2.5.2 scan anchors/range OK.
- Native fixtures verify explicit source EAX, four stack arguments/RET 16,
  output cleanup on success/failure, sea-node rejection and same-province
  bypass. They mock the route algorithm, so actual engine reachability
  remains a runtime gate.
- Regression: larger overseas capacity excluded, local shortage returned;
  overseas-only custom type remains missing; duplicate province probes
  cached; Conform forwards target to recruitment; stranded pending builds
  stop counting without cancelling them; unreachable finished stacks get
  no new Move command.
- ZIP CRC/manifest checked. Compared to 0.10.0 mod payload, only tgcx.dll,
  its byte-identical v2dll_mod.dll alias and tgcx_package.txt changed.

Logs: work/conform-reach-build-0101.txt, conform-reach-tests-0101.txt and
conform-reach-tgc-scan-1019.txt. Initial sandbox GPU-device creation failed;
the same suite passed outside the sandbox, with no game launched.

## Artifacts and installation

ZIP: work/Army-Templates-Conform-Universal-0.10.1.zip, **1,040,653 bytes**.
SHA256: `5d1c370400e51870f8d9a51feb8dc7eaf04573d72dbc8d6bd8244a3936db183e`.
Logic SHA256: `2363ef5615b9f20b5f7dd55bb9f89729f9cf1e721aba7f93d43b50bebff847bf`.

After user confirmation "Yes, exited normally-update all three Universal
packages" (punctuation normalized), process and executable gates passed.
Updated only the Universal logic pair/version in vanilla/HPM/DoD test
copies. All **37 package/descriptor files per copy** verified identical.
Original 0.9.0 packages, loaders, game/base files and original Lua retained.
Backup: work/conform-land-reach-before-0101/<copy>/, full previous Universal
folder, descriptor, manifest, notes and pre-update log. Installation record:
work/universal-0101-installed.json. E: and TGC/V2DLL copy untouched.

Next: instructions-mod-6.md. Select Universal, not the retained 0.9.0 entry.
First validate shared GUI integration, then a colonial country's mainland
and overseas Conform cases, local shortage, straits and a moved target.
**Not tested in game.** No game launch, commit, push or subagents.
