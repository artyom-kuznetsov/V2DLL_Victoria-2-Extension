# LAW-1 native starting votes and complete base catalogue

2026-10-12. **Implemented and installed as a game-test candidate; not
tested in game.** Supersedes the unfinished implementation described in
`report-law-1-start-1012.md`. Those reports remain unchanged.

## 1. Authorization and preserved baseline

The user approved all proposed base affinity groups: "just add base
affinity groups and if i spot something odd i'll say it, otherwise go
ahead and just implement all you can". All **23 groups / 207 rows** are
approved as negotiation preferences; later corrections remain possible.
The earlier approval of TGC starting votes plus affinity bargaining holds.

The accepted DLL **0.2.8** was neither rebuilt nor replaced. Its source
and installed SHA-256 remain
`61824e4bc1b72fc5792533ede1cd14ea3f759c458c59d35407cef973db0ccdc5`.
It retains **27 runtime guards** and native tooltip slot 10.
The original LAW-0 repository output remains byte-identical in all four
generated files. The installed LAW-0 payload is retained in the complete
rollback source `E:\v2re\logs\tgcx-law1-before-native-1012`.
No game was started or terminated. No TGC/base-game file was edited.

## 2. Bounded native verification

Reference SHA/signatures passed before research. New sites are only in
`RESEARCH_SIGNATURES`: **18 research + 27 runtime = 45 file gates**.
`gen_signatures.py --check` confirms the runtime header remains unchanged.
Preferred base is `0x400000`; all RVAs below subtract that base.

| Function | VA | RVA | Evidence |
|---|---|---|---|
| `FUN_00972260` | `0x00972260` | `0x572260` | constructs the embedded additive support objects |
| `FUN_00972B20` | `0x00972B20` | `0x572B20` | parser maps add/remove political/social tokens to ideology offsets `+0x50/+0x80/+0xB0/+0xE0` |
| `FUN_008AF210` | `0x008AF210` | `0x4AF210` | base token `0x56A` writes `+0x1C`; group token `0x3E` retains ordered modifiers |
| `FUN_008AE290` | `0x008AE290` | `0x4AE290` | modifier factor token `0x3BE` goes through the numeric reader |
| `FUN_009A1CE0` / `FUN_0098FC80` | `0x009A1CE0` / `0x0098FC80` | `0x5A1CE0` / `0x58FC80` | numeric parsing; decimal reader retains three fractional digits as thousandths |
| `FUN_008AF810` | `0x008AF810` | `0x4AF810` | base plus matching direct modifiers; each group contributes its matching prefix, stopping on the first failure |
| `FUN_00525A20` / `FUN_00525BE0` | `0x00525A20` / `0x00525BE0` | `0x125A20` / `0x125BE0` | social/political eligibility aggregates the relevant direction, in country scope, over upper-house shares |
| `FUN_00526A30` / `FUN_005273A0` | `0x00526A30` / `0x005273A0` | `0x126A30` / `0x1273A0` | native reform tooltip paths corroborate the direction/upper-house inputs |
| `FUN_008E8AB0` / `FUN_008FB3E0` | `0x008E8AB0` / `0x008FB3E0` | `0x4E8AB0` / `0x4FB3E0` | country `militancy` and `average_militancy` use the same country-average helper |
| `FUN_008FE3C0` / `FUN_008FE6E0` | `0x008FE3C0` / `0x008FE6E0` | `0x4FE3C0` / `0x4FE6E0` | country-wide social/political movement fields, not a per-bill movement |

Token registration confirms `0x1F3..0x1F6` are add political, remove
political, add social, remove social. A registration-site signature gates
the evidence. The retained native evaluator and aggregation bodies have
**no support clamp** on this path. The installed political/social rules
produce values in `0..1000`; the importer rejects unsupported grammar or
algebraic outcomes outside this range instead of inventing clamp behavior.
Economic/military rules, including negative bases, remain excluded.

Native arithmetic for nonnegative support `s` (thousandths) and a chamber
share `h` (Q15) is `q = floor(s * 32768 / 1000)`, then
`floor(h * q / 32768)`, summed per ideology. An independent reference
function tests those two truncations. No live numerical comparison has
been collected yet; static arithmetic evidence is not game acceptance.

Private outputs: `E:\v2re\logs\law1-support-{fields,object-refs,token-map,
parser-asm,numeric-asm,ideology-api,call-patterns,aggregation,factor-field}-1012.txt`.
The unsuccessful guessed base-token range is also retained. Only the
support subsystem was decompiled; the indirect-call search scans known
support-object call patterns. No derived executable code enters git.

## 3. Implemented catalogue and vote semantics

`tgcx_law_support.py` reads installed TGC's rules. No remembered vanilla
table or copied whole ideology file is used. Imported condition trees
retain their `militancy`, movement and ruling-party conditions; grouped
clauses compile as ordered prefixes. The Conservative political 4/.4
clause remains omitted. The four directions are selected when a bill is
introduced, and current support is evaluated on each full count/vote.

The catalogue has **14 political + 9 social groups, 95 options, 144
adjacent directed transitions, 46 bill decisions and nine blocs**.
Both directions preserve the target's imported `allow` tree. The vote
checks current source law, target restrictions, government and chamber.
Calling the vote after debate does a fresh count even if the cached count
was defeated. A failed fresh validation leaves the bill active.

Affinity determines prices and repayment preferences. Starting support
is independent: every seat not natively Aye starts Nay. Nonnegative
affinity with native Nay uses the existing friendly/undecided price of
**2 favours per five seats**; negative prices remain 2/5 for abstention,
5 for weak-opposition Aye, and a promise for strong-opposition Aye.
This fills the newly possible friendly-but-natively-opposed case.

Bought Aye and abstention lots consume only unbought opposing seats.
Native Aye is counted once. A promise secures all non-Aye seats, including
earlier purchased abstentions; it cannot incur debt for a wholly
supportive bloc. On a changed chamber/support, old purchases are clipped
to available opposition, with bought Aye before abstention. Their stored
totals and spent favours remain; they can apply again if opposition grows.
Quorum and margin remain derived from the actual counted seats.

Full counts occur at introduction, Count and Vote. Purchases/promises
validate cached chamber half-slice buckets and this bloc's current native
support inside the effect, plus their potential/allow conditions. A stale
count refuses spending/debt and requires Count. Changes within the same
quantization intervals cannot change allocation. This avoids embedding
the entire count in every purchase and keeps the existing manual recount
flow. It does not claim a continuously refreshed Bill UI or automatic tick.

## 4. Chamber conservation and deliberate quantization

The negotiation chamber remains **100 seats in five-seat packets**.
Independent nearest-five rounding is followed by a conservation repair:
when over 100, remove packets only from rounded-up blocs; when below 100,
add packets only to positive rounded-down blocs. Repair order is the
installed ideology order. Each valid bloc receives its floor or ceiling
packet count. Empty chambers fail the enactment gate.

This is balanced rounding, **not largest remainder**. It avoids a large
remainder-ranking program in the 32-bit engine. Native trigger Q15
precision can shift an interval boundary by one fixed-point unit.
Within a bloc, starting Aye packets round `allocated_packets * s / 1000`
to nearest, halves up. Nay is the remainder. Purchases and promises never
increase the allocated chamber size.

Consequently script votes intentionally differ from exact native
percentages. UK 83/12/5 becomes 85/10/5 packets. With low political
pressure it starts 10 Aye / 90 Nay. At maximum Conservative political
support (60%) it starts **60 Aye / 40 Nay**: 50 Conservative plus 10
Liberal seats. The corresponding native example with Q15 shares
27197/3932 has 20249 Q15 support (about 61.8%), before script quantization.
The Politics hemicycle's existing one-seat allocation is unchanged.

## 5. Program size, reports and tests

The first fully repeated generated program was measured at 293,992,410
decision bytes; it was never installed. The final decisions file is
**15,715,951 bytes**, events **444,228 bytes**. The four catalogue outputs
remain below the tested **16 MiB** limit; complete staged payload plus
review/descriptor totals 16,318,624 bytes before its manifest.
This size cap is a regression guard, not a measured game memory budget.

Introduction and Count already open one news window in LAW-0. The
catalogue shares a report event, **420000194**, whose `immediate` count
runs before its single visible result option. Options state margin or
quorum. Existing LAW-0 result/debt/report IDs are retained, including
Reactionary debt 420000105. There are no hidden-event assumptions or
extra purchase popups. A Bill GUI is still a later DLL card.

Automatic gates, private `tgcx-law1-native-*-1012.txt` logs:

- **23 catalogue tests**, 12.839 seconds, pass: all routes/target allows,
  native thresholds and party conditions, ordered prefixes, movement and
  pressure recounts, friendly purchases, partial/full-abstention promises,
  clipped old purchases, 200 deterministic chamber fixtures, explicit
  over/under rounding, floor-boundary freshness, empty chambers, legacy
  active bill, debt behavior, cleanup, size and repeat generation.
- LAW-0 interpreter: **ALL OK**, default four-file byte identity retained.
- **7 staged installer tests** pass: dry-run, complete rollback, running
  game refusal, missing input, foreign files/backup overlap, base mismatch,
  and failed-copy restoration. Its staged-source option and backup work
  without replacing production generator output.
- TGC scan: anchors/reserved range OK. Executable: reference hash and
  **45 file signatures** OK. Runtime signature header: **27**, unchanged.
- Release staging and real installer dry-run pass. Final installed files
  match the staged source; descriptor and accepted DLL hashes verified.

New P33: compound generated conditions must be wrapped in `AND` before
negating with Vic2's `NOT` (none-of-children semantics). The target-change
test caught a missing failure report after adding a multi-clause chamber
gate; wrapping that gate fixed the failure. This is interpreter evidence,
not a new claimed live test.

## 6. Mockup and installation evidence

Opened Main/Bill PNGs before implementation. Private Bill board now
shows native support separately, friendly/neutral pricing and correct
unbought-seat purchase behavior. Added a high-pressure preview using
`?pressure=9`; its 60/40 count and 50/35 Conservative baseline match the
script. Re-exported all boards, then visually inspected low and high
pressure. Fixed a pressure caption intersecting the frame border by using
the existing caption line. Original board retained as
`E:\v2re\mockups\project\Bill.before-law1-native-1012.dc.html`.

Deviations: script-only decisions/news replace the Bill window, the
single result is now shown on the report's acknowledgement option,
balanced five-seat rounding uses fixed repair order, and stale purchases
require manual Count. These are explicit engine/size accommodations.
Local exports match the conceptual native-vote mechanic. Published
artifact remains stale: computer-use inventory again returned
`apps: [], browsers: []`. Full filesystem access does not supply a browser
session. Republish remains outstanding; do not call R10 fully accepted.

Release candidate: `E:\v2re\logs\tgcx-law1-native-stage-1012`.
Installed on E: with game closed through `install_submod.py --source`.
The generated modifier file uses installed TGC's 120,495-byte base plus
our staged 956-byte block, including all nine ideology debts.
Evidence: `tgcx-law1-native-install{-record,-dryrun}-1012` files.
Rollback source: `E:\v2re\logs\tgcx-law1-before-native-1012`.
`docs/instructions-u-6.md` contains test and rollback commands.

LAW-1 remains **implemented, not tested in game**. Loading/performance,
event-option presentation, live native comparisons, save/load and visual
acceptance remain for U-6. Multiplayer remains deferred (D5). No commit
or subagent was used; pre-existing uncommitted work was preserved.
