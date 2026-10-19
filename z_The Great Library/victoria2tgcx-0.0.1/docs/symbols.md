# Our own symbols in `v2game.exe`

> **Reference.** Everything this project names or discovers in the
> executable, with its evidence (rule V6). What is already in
> `refs\Victoria2-Reverse-Engineering\Symbols\*.csv` is not repeated here:
> it is imported into the Ghidra project (`ghidra/ImportV2Symbols.java`).
>
> `conf`: **C** read in the code (bytes or decompiled), **I** inferred,
> **R** confirmed at run time. Every address used by our own code also has
> its signature in `tools/check_exe.py`.

## MOD-6 preliminary GUI construction evidence (2026-10-19)

Read-only investigation after reference check_exe passed. Derived pseudocode
remains in ignored `work/mod6-panel-constructors-1019.txt` and
`work/mod6-gui-factory-1019.txt`; these functions are **not newly invoked or
hooked** by the DLL. Call wrappers, ownership and runtime signatures still
need verification before implementation.

| Function | VA | RVA = VA - 0x400000 | Confidence / observation |
|---|---|---|---|
| FUN_00798A50 | 0x00798A50 | 0x398A50 | C static: CUnitView constructor asks for `unitpanel` through the object returned by its owner's slot 13, slot 11 on that object, then stores the resulting root at view+0x20. Concrete factory type at this call remains I. |
| FUN_009A38F0 | 0x009A38F0 | 0x5A38F0 | C static: CEU3Gui primary slot 11 (vtable RVA 0xA08A44); resolves the requested name through GUI+0x34 slot 1, calls FUN_009CDE70 with renderer at +0x30 and native screen dimensions, then Entity_RegisterSpatial. Candidate for named root construction; full ABI/ownership not runtime-confirmed. |
| FUN_009A3880 | 0x009A3880 | 0x5A3880 | C static: CEU3Gui slot 9, resolves a name and calls FUN_009F0760, then spatial registration. Result type still unknown. |
| FUN_009A34F0 | 0x009A34F0 | 0x5A34F0 | C static: CEU3Gui slot 13, resolves a name and calls FUN_00A584A0, then spatial registration. Result type still unknown. |

FUN_009E4A20 (already documented, RVA 0x5E4A20) only searches the direct
subwindow map at +0x424 and warns if absent. It does not construct a new
window. A universal package needs a creation/attachment route beyond it.

## Functions

| VA | name | conf | evidence | date |
|---|---|---|---|---|
| `0x008FD2A0` | `CUpperHouseTrigger::Evaluate` | C | slot 6 of vtable `0x00E32768` (`docs/rtti-classes.md`); bytes disassembled by hand, below | 2026-10-12 |
| `0x008FD780` | `CUpperHouseTrigger::ParseToken` | C | slot 4; token `0x4C6` → ideology at `+0x28` (`FUN_00973BD0` by name), token `0x344` → value at `+0x20/+0x24` | 2026-10-12 |
| `0x008FD300` | `CUpperHouseTrigger::Tooltip` | I | slot 10; shows `value × 0x320000 >> 15` (= ×100, a percentage) | 2026-10-12 |
| `0x005E64D0` | `CCountry::GetUpperHouse` | C | `push ebp; mov ebp,esp; push ecx; mov [ebp-4],ecx; mov eax,[ebp-4]; add eax,0x8B0; …; ret` | 2026-10-12 |
| `0x00685727` (CALL site, RVA `0x285727`) | call `FUN_009DF2B0` (VA `0x009DF2B0`, RVA `0x5DF2B0`) | C | V2DLL `V2TechButton.cpp`/`PATCHES.md` §5.9; `E8 84 9B 35 00`, in `check_exe.SIGNATURES`; DLL-0 retargets only this in-memory CALL | 2026-10-12 |

## Structures

| structure | offset | field | type | conf | evidence |
|---|---|---|---|---|---|
| `CCountry` | `+0x8B0` | `upperHouse` (embedded `CUpperHouse`) | object | R | `GetUpperHouse`; U-4 object `0x2962ECD0` = country `0x2962E420` + offset; runtime vtable RVA `0x9FD7DC` = preferred VA `0x00DFD7DC` |
| `CUpperHouse` | `+0x10` | pointer to `int64[]`, one entry per ideology | `int64*` | R (pointer/end/data, ten-entry vector) | `Evaluate`; U-4 array `0x2D409428`, matching chart |
| `CUpperHouse` | `[+0x10][i]` | ideology `i`'s share of the chamber, 2¹⁵ fixed point (1.0 = 32 768) | `int64` | R for observed entries | U-4 raw 27197/1638/3932 matches 83/5/12% with divisor 32768; sum 32767 |
| `CIdeology` | `+0x28` | the ideology's index | `int` | C/R | `Evaluate`: `mov ecx,[edi+0x28]` as the array index |
| (trigger scope) | `+0x0C` | the scope country's index | `int` | C | `Evaluate`: `mov eax,[eax+0xC]` → `countries[eax]` |

## How `CUpperHouseTrigger::Evaluate` was read

```
558BEC 83EC08        push ebp; mov ebp,esp; sub esp,8
8B4508               mov eax,[ebp+8]           ; scope
8B15 E4872501        mov edx,[0x012587E4]      ; g_countryManager
56 8BF1              push esi; mov esi,ecx     ; this = trigger
8B4808 8B400C        mov ecx,[eax+8]; mov eax,[eax+0xC]   ; country index
894DF8 8B4A04        mov [ebp-8],ecx; mov ecx,[edx+4]     ; CCountry*[]
8B0C81               mov ecx,[ecx+eax*4]       ; CCountry*
57 8B7E28            push edi; mov edi,[esi+0x28]         ; CIdeology*
E8 …                 call 0x005E64D0           ; eax = country + 0x8B0
8B4F28               mov ecx,[edi+0x28]        ; ideology index
8B4010               mov eax,[eax+0x10]        ; int64[]
8B54C804 3B5624      mov edx,[eax+ecx*8+4]; cmp edx,[esi+0x24]   ; high part
…                    (low part against [esi+0x20]) → true if share ≥ value
```

**GH-2 core runtime confirmation (2026-10-12, U-4):** player ENG, index 29,
human marker 1; executable loaded at `0x007D0000`. See
`docs/report-u-4-1012.md` and preserved log outside git at
`E:\v2re\logs\tgcx-u4-1012.log`.

| array index | ideology | confidence | evidence |
|---|---|---|---|
| 1 | `conservative` | R | raw 27197, 82.998657%, chart 83.0% |
| 2 | `reactionary` | R | raw 1638, 4.998779%, chart 5.0% |
| 6 | `liberal` | R | raw 3932, 11.999512%, chart 12.0% |

**Historical U-4 limitation (superseded by full live mapping below):**
U-4 did not identify allocation length or the other ideology mappings.
The nine sampled entries sum to 32767, consistent with per-entry rounding;
an exact sum of 32768 is not a necessary runtime invariant. File order is
**disproved** by the three observed indices; `candidate=` labels in DLL-0
are unconfirmed guesses, not a usable complete mapping. Zero entries do
not identify an ideology or rule out an additional/reserved slot.

The retained log has only one sample (January 2); repeated sampling while
paused or after reload is not established by that log. DLL-1 begins by
verifying frame-callback cadence. The user's stability report and game.log
confirm a successful January 6 reload, separately from sampler coverage.


## DLL-1 / HEMI-1 additions (2026-10-12)

**C, subsequently R (see runtime correction and U-5 below):** scoped Ghidra confirms the vector end, name lookup,
colours, Politics visibility and geometry. Exact evidence and VA↔RVA
conversions are in `report-dll-12-1012.md`; private pseudo-C remains
`E:\v2re\logs\dll12-*.txt`. The DLL resolves and checks live values;
the synthetic fixture map is not evidence of the game's full index order.

| object/site | field or RVA | meaning / evidence |
|---|---|---|
| `CUpperHouse` | `+0x14` | exclusive `int64*` vector end; FUN_009793C0 (RVA 0x5793C0); bounds before mapped reads |
| ideology-manager global | `0xE58A3C` | name-table pointer; parser operand RVA 0x4FD801 |
| name table | `+4/+8` | bucket count / bucket-array pointer; FUN_00973BD0 (RVA 0x573BD0), bounded linked `(object,next)` nodes |
| `CIdeology` | `+0xC/+0x1C/+0x20` | name string data/size/capacity; matching object vtable RVA 0xA36774 |
| `CIdeology` | `+0x34/+0x38/+0x3C` | normalized RGB floats; colour at +0x2C; FUN_00972260/FUN_00972B20/FUN_009B6EA0 |
| `CPoliticsView` | vtable RVA `0xA0E458` slots 1/2/4/10 | destructor/show/hide/tooltip; originals 0x2D2B00 / 0x2D2C10 / 0x2D2C40 / 0x2D2DD0 |
| `CPoliticsView` | `+0x4C` | native root object; show/hide calls verified in FUN_006D2C10/FUN_006D2C40 |
| native root | `+0x67` | visible byte; show/hide methods RVA 0x5E4450 / 0x5E4030 |
| native root | `+0x250/+0x90` | initialized absolute screen XY pair / renderer pointer; FUN_009E3BA0 (RVA 0x5E3BA0) |
| render device | `+0x6B9BC/+0x6B9C0` | screen width/height used by centred position setter |
| Direct3DCreate9 import | IAT RVA `0x88A39C` | hash-verified PE import; runtime original must equal D3D9 export |

P25: time-advance CALL RVA 0x285727 is conditional and is not used by
0.2.0. Present now supplies cadence, EndScene drawing. API COM slots:
factory CreateDevice 16; device Reset 16, Present 17, EndScene 42.
All new executable signatures are shared through check_exe/gen_signatures;
dynamic COM pointers use API-acquired originals, image-owner validation
and compare-and-swap instead of OS-version-specific byte assumptions.

## U-5 missing-chart follow-up (2026-10-12)

0.2.0 failed visual acceptance. `report-dll-12-fix-1012.md` records the
limits of that log. 0.2.1 was untested when the repair report was written. **C:** scoped
Ghidra shows FUN_0099A520 (RVA 0x59A520), ESI renderer, INC frame counter
+0x6BC8C (six overwritten bytes replicated), focus +0x6BCA0 and active
D3D9 device +0x64 used for Present. Continuation RVA 0x59A526. Primary
renderer vtable RVA 0xA38324 is confirmed by constructor FUN_009941E0
(RVA 0x5941E0). Both new sites have shared expected-byte guards.
The sampler/drawing entry is now final engine Present; COM callbacks
only forward/reset, and drawing uses a separate short scene. Native GUI
factory confirms the existing root field/method checks; live validation
still awaits U-5. The fixture tests an inherited smaller viewport and
restoration; it does not establish the failing game's actual viewport.

## Runtime correction and full mapping (2026-10-12)

**R:** `report-dll-12-live-fix-1012.md` supplies paused 0.2.1 log and live
read-only process evidence for all nine names/indices/RGB values and the
ten-entry upper-house allocation, null slot zero, sum 32767. CIdeology
indices are 1 conservative, 2 reactionary, 3 tribalist, 4 fascist,
5 anarcho_liberal, 6 liberal, 7 anarchist, 8 communist, 9 socialist.
Active renderer primary table is CEU3Graphics RVA **0xA19B8C**, confirmed
by live pointer 0x011E9B8C at executable base 0x007D0000 and existing RTTI.
A new signature covers it. The base renderer table is not the only family.
**Correction to the earlier root-position inference:** active root +0x250
already holds absolute screen coordinates (768,470) at 2560 x 1440. It
must not receive another half-screen offset. Root table/methods, visibility,
resolution and geometry match the live window. This initialized-window
measurement does not establish every future resize/reposition behavior.
Repeated unchanged-date samples confirm the final native presentation
cadence. 0.2.2 corrects those identities/coordinates; drawing acceptance
remains pending. Existing reports were preserved rather than rewritten.

## Tooltip return correction (2026-10-12)

**C / crash evidence:** engine tooltip result is a structure containing
multiple strings, not a single 24-byte string. FUN_004115D0 (RVA 0x115D0)
copies fields at 0/0x1C/0x38 and +0x54/+0x58. 0.2.2 crashed after the first
chart draw in this copy path; see `report-dll-12-tooltip-fix-1012.md` for
dump addresses and private evidence. The earlier synthetic tooltip ABI
test did not establish this layout. 0.2.3 removes all tooltip-return writes
and leaves CPoliticsView slot 10 unchanged. Do not restore suppression
without verifying the full return structure, constructors and ownership.


## Ordered GUI layering (2026-10-12)

0.2.3 was confirmed drawing and stable by the user's screenshot/description
and repeated live log frames. Its final-Present placement painted over
native tooltips. 0.2.4 moves drawing to the existing GUI scene; final
Present supplies only sampling/logging. User confirmed 0.2.4 works;
U-5 functional evidence below. Visual polish/extended coverage remain.

| site/field | evidence | confidence |
|---|---|---|
| FUN_00999D00, RVA `0x599D00` | ordered render list `renderer+0xF8/+0xFC`; virtual Draw slot `+0x28` | C |
| post-Draw RVA `0x599F22` (VA `0x00999F22`) | entity ESI, renderer EBX; seven-byte `CMP byte [ESI+0xF0],0`; original CMP replicated, resume RVA `0x599F29` | C |
| root vtable slot `+0x44`, RVA `0xA3C11C` | FUN_009E4D40 (`0x5E4D40`) calls name lookup FUN_009E6B30 (`0x5E6B30`) | C/R |
| root `+0x2AC/+0x2B0`, `+0x2BC/+0x2C0` | parallel icon-pointer and 28-byte name-record begin/end vectors; fourteen entries in each live vector | C/R |
| name record `+0x10/+0x14` | size/capacity; inline <=15, otherwise record+0 points to string | C/R |
| native icon vtable RVA `0xA3A930`, icon `+0x94` | chart initialization FUN_006D79F0, root name lookup, live icon/entity cross-check | C/R |
| overlay entity vtable RVA `0xA3FF08`, Draw slot RVA `0xA3FF30` | native function FUN_00A2F120 (`0x62F120`), live `chart_upper_house_overlay` entity pointer | C/R |

Private bounded exports: `E:\v2re\logs\dll12-layer-render.txt`,
`dll12-layer-loop-asm.txt`, `dll12-layer-chart.txt`, and live read-only
`dll12-layer-live-widgets.json`. The build adds four guards (23 total).
The common callback forwards every original virtual draw; it draws only
after the exact named overlay, without replacing its ABI or tooltip
objects. No engine-generated data enters git. No simulation writes.


## U-5 functional confirmation (2026-10-12)

`report-u-5-1012.md`: user confirms 0.2.4 works but looks clunky. Runtime
log identifies the installed version, 23 passing guards, first ordered
hemicycle draw at root (768,470) with ten entries, 2687 repeated draws,
three paused samples and native show/hide. Thus the ordered native render
callback is exercised in the game, not only in fixtures. Active error logs
are empty. Prototype is game-tested; appearance refinement and unconfirmed
view-switch/save-reload/Alt-Tab coverage remain explicit follow-up work.
No new addresses or source changes in this status update.

## HEMI-3 scalar hover path (2026-10-12)

**C (bounded Ghidra; later runtime evidence below):** native tooltip objects
need no replacement. Politics calls a scalar pie-selection helper and then
constructs its own complete result, including the normal empty result.
Private evidence: `E:\v2re\logs\hemi3-{tooltip,hit,route-asm,pie-bounds-asm,hit-tail}-1012.txt`.

| site/field | evidence / calling convention |
|---|---|
| VA `0x006D52C6`, RVA `0x2D52C6` | CALL within FUN_006D2DD0 to FUN_009E0C90; entity in EAX; four stack args: screen X/Y integers, slice-output pointer, weight-output pointer; AL boolean, RET 16 |
| VA `0x009E0C90`, RVA `0x5E0C90` | computes circle/angle; slice records at entity `+0x158/+0x15C`, stride 36; writes record `+0x20` slice ordinal and `+0` integer weight only on hit |
| VA `0x00E3BDA8`, RVA `0xA3BDA8` | pie entity vtable `0xE3BD58` (RVA `0xA3BD58`), slot +0x50; original FUN_009E0B70 |
| VA `0x009E0B70`, RVA `0x5E0B70` | ECX entity; first two stack args are screen-space floats (CVTTSS2SI); returns FLD1/FLDZ in ST0; **RET 32**, six further stack words unused by this implementation |
| ideology manager `+0xC/+0x10` | engine-indexed pointer-vector begin/end used by Politics; selected slice is the ordinal among **positive-share** entries in increasing engine index, not the engine index itself |

FUN_006D2DD0 at VA `0x006D52D5` (RVA `0x2D52D5`) obtains the ideology
vector; `0x006D5340..0x006D55F8` (RVAs `0x2D5340..0x2D55F8`) skips zero
shares, compares the compressed ordinal, and builds native ideology and
percentage text. Native chart entity/table identity also appears in the
prior live `dll12-layer-live-order.json` (base `0x007D0000`, entity table
`0x0120BD58`, RVA `0xA3BD58`). Root absolute screen coordinates and rendered
geometry remain the U-5 convention. Four new expected-byte signatures guard
the CALL, hit-test slot and original function entries. Slot 10 remains intact.

## HEMI-3 runtime hover confirmation (2026-10-12)

User confirms 0.2.6 works; accepted log preserved in
`E:\v2re\logs\tgcx-before-027-1012\tgcx.log`. All 27 guards pass,
5555 ordered draws, native scalar hover exercised for Conservative
index 1/slice 0, Liberal index 6/slice 2, Reactionary index 2/slice 1.
Thus these remapped scalar dispatch paths are exercised in game (R),
in addition to the prior disassembly/fixture evidence. Both active error
logs are empty. Extended U-5 interactions remain unconfirmed. Separate
0.2.7 header-bound clipping adds no addresses. See
`report-hemi-3-header-1012.md`.

## LAW-1 read-only support research (2026-10-12)

Reference SHA/check_exe passed before inspection. These are research
sites, not new DLL hooks; six separate `RESEARCH_SIGNATURES` gate their
file bytes without expanding the installed DLL's 27 runtime guards.
Preferred base `0x400000`; RVA = VA - base. Static body behavior is C;
end-to-end native vote parity and parser mapping remain unconfirmed.

| Ghidra function | VA | RVA | Observed behavior |
|---|---|---|---|
| `FUN_008AF810` | `0x008AF810` | `0x4AF810` | `CAdditiveForUpperHouseMTTH` evaluator via known vtable slot 6: initial value plus matching direct modifiers and matching ordered prefix of each group |
| `FUN_008AEC00` | `0x008AEC00` | `0x4AEC00` | general additive evaluator comparison; final scaling differs from upper-house evaluator |
| `FUN_008AF210` | `0x008AF210` | `0x4AF210` | additive parser body; full base/factor field mapping still to verify |
| `FUN_00972B20` | `0x00972B20` | `0x572B20` | CIdeology parser dispatch to embedded rule objects; token-to-rule mapping still to verify |
| `FUN_008FE3C0` | `0x008FE3C0` | `0x4FE3C0` | scoped-country social movement comparison reads `CCountry+0x15A8` |
| `FUN_008FE6E0` | `0x008FE6E0` | `0x4FE6E0` | scoped-country political movement comparison reads `CCountry+0x15A4` |

Private decompilation/ref outputs: `E:\v2re\logs\law1-support-*-1012.txt`.
No derived executable source enters git. Full findings, approved design
and remaining limits: `report-law-1-start-1012.md` sections 2/4/5.

### LAW-1 completed static support trace (2026-10-12)

This supersedes the earlier parser-mapping uncertainty. Runtime numerical
comparison still requires U-6. `report-law-1-native-1012.md` contains the
full evidence/quantization distinction. File gates: 18 read-only research
sites, separate from the retained 27 DLL runtime sites.

| Ghidra function/site | VA | RVA | Confirmed static behavior |
|---|---|---|---|
| `FUN_00972260` | `0x00972260` | `0x572260` | ideology constructor embeds additive support objects |
| `FUN_00972B20` | `0x00972B20` | `0x572B20` | tokens `0x1F3/1F4/1F5/1F6` dispatch add/remove political/social to `+0x50/+0x80/+0xB0/+0xE0` |
| token registration | `0x00C3D41C` | `0x83D41C` | add-political literal registration corroborates the token map |
| `FUN_008AE290` | `0x008AE290` | `0x4AE290` | modifier factor token `0x3BE`, numeric reader |
| `FUN_009A1CE0` | `0x009A1CE0` | `0x5A1CE0` | numeric field reader used by support base/factor parser |
| `FUN_009A0F40` | `0x009A0F40` | `0x5A0F40` | unexpected-token fallback, not modifier arithmetic |
| `FUN_0098FC80` | `0x0098FC80` | `0x58FC80` | signed decimal reader retains three fractional digits as thousandths |
| `FUN_00525A20` | `0x00525A20` | `0x125A20` | social eligibility selects add/remove object by current/target order; country scope; Q15 weighted aggregation |
| `FUN_00525BE0` | `0x00525BE0` | `0x125BE0` | political counterpart with the same arithmetic |
| `FUN_00526A30` | `0x00526A30` | `0x126A30` | social reform support tooltip path |
| `FUN_005273A0` | `0x005273A0` | `0x1273A0` | political counterpart |
| `FUN_008E8AB0` | `0x008E8AB0` | `0x4E8AB0` | `militancy` in country scope uses the country-average helper |
| `FUN_008FB3E0` | `0x008FB3E0` | `0x4FB3E0` | `average_militancy` uses the same country-average helper |

The previously gated `FUN_008AF210` writes base token `0x56A` to `+0x1C`;
`FUN_008AF810` starts from that field and adds modifiers/prefix groups.
Neither that evaluator nor the traced political/social aggregation clamps
support. Installed TGC's supported rule outcomes are nonnegative `0..1000`.
Native weighting: `q = floor(s * 32768 / 1000)`, then
`floor(h * q / 32768)` per ideology. Script packet rounding is separate.
Private evidence: `E:\v2re\logs\law1-support-*-1012.txt`.

## LAW-2 native Bill GUI/decision path (2026-10-13)

Reference SHA and expected bytes passed before inspection. All addresses
below use preferred base 0x400000, with RVA = VA - base. Body/layout/ABI
evidence is **C (static)**; actual Bill GUI/command execution is not yet R.
0.3.0 has 38 relocation-aware runtime guards and 32 separate research
gates (70 file checks). Existing hemicycle addresses remain unchanged.

| function/site | VA | RVA | Confirmed static behavior |
|---|---|---|---|
| `FUN_006DCE10` | `0x006DCE10` | `0x2DCE10` | native Politics decision click; input element string +0x14; removes 21-character POLITICSVIEW_DECISION prefix, builds player/date scope, dispatches decision; RET 4 |
| `FUN_00874F80` | `0x00874F80` | `0x474F80` | decision command dispatch, calls command construction/queue path |
| `FUN_00905B30` | `0x00905B30` | `0x505B30` | CExecuteDecisionCommand construction observed in that path |
| `FUN_009E4C80` | `0x009E4C80` | `0x5E4C80` | native named button lookup, root vtable slot 13, native std::string input |
| `FUN_009E4D00` | `0x009E4D00` | `0x5E4D00` | native named text lookup, root slot 15, vectors +0x2CC/+0x2DC |
| `FUN_009E4A20` | `0x009E4A20` | `0x5E4A20` | named child window lookup, slot 27, map +0x424; missing window prints a warning |
| `FUN_00641BA0` | `0x00641BA0` | `0x241BA0` | CVariables Find wrapper, native string input; converts inline/heap data, dispatches inner lookup; RET 4 |
| CVariables primary table | `0x00DFBB60` | `0x9FBB60` | guarded primary table at country +0x1DC, slot 1 points to Find wrapper |
| `FUN_00408ED0` | `0x00408ED0` | `0x8ED0` | native std::string assign; textbox stored string +0xDC |
| `FUN_00A5ECC0` | `0x00A5ECC0` | `0x65ECC0` | native graphical text setter; receiver ESI from textbox +0xA0; string pointer and flag on stack, RET 8 |
| `FUN_009E3BA0` | `0x009E3BA0` | `0x5E3BA0` | centered-position setter: packed signed x/y at +0x250, renderer dimensions +0x6B9BC/+0x6B9C0; updates inner +0x494 |
| `FUN_009E4450` / `FUN_009E4030` | `0x009E4450` / `0x009E4030` | `0x5E4450` / `0x5E4030` | show/hide flag +0x67 and inner visibility +0x124; slots 8/9 |
| Politics observer table | `0x00E0E48C` | `0xA0E48C` | construction region FUN_006D26D0 confirms 44-byte instances; owner +4, click callback +8, deletion callback +0x20 |
| `FUN_00737D00` | `0x00737D00` | `0x337D00` | observer click slot 2, tail-calls callback +8 |
| `FUN_006DFFA0` | `0x006DFFA0` | `0x2DFFA0` | observer deletion notification slot 1, callback +0x20; nil is safe |

Native borrowed std::string inputs are 24 bytes: inline 16-byte storage or
pointer, length +0x10, capacity +0x14; capacity below 16 selects inline.
Country variable values remain signed thousandths at returned node +0x1C,
corroborated by `FUN_008DA5C0` (VA 0x008DA5C0, RVA 0x4DA5C0).
Only native GUI fields are written by the DLL. Simulation writes use the
native decision handler. Native callback/string patterns taken from
V2DLL are marked in source.

**ABI exclusion:** InGameIdler observer table VA 0x00E0A58C (RVA 0xA0A58C)
uses slot 1 `FUN_00641C40` (VA 0x00641C40, RVA 0x241C40), which reads
callback +0x38/owner +0x3C. Its slot 2 `FUN_009CD610` (RVA 0x5CD610) uses
a different template layout. Neither is used for Bill binding. Do not
substitute it for the independently verified 44-byte Politics observer.

Private evidence: `tgcx-law2-decision-click-1013.txt`,
`tgcx-law2-gui-command-1013.txt`, `tgcx-law2-root-lookups-1013.txt`,
`tgcx-law2-position-visibility-1013.txt`, `tgcx-law2-abi-1013.txt`,
`tgcx-law2-message-observer-1013.txt`, `tgcx-law2-politics-glue-1013.txt`,
`tgcx-law2-politics-observer-abi-1013.txt` and
`tgcx-law2-politics-observer-fields-1013.txt`, all under E:\v2re\logs.
No decompiled bodies or binary material are retained in git.


## LAW-2 initial position model (2026-10-16, superseded by live correction below)

0.3.0 screenshot/logs confirm discovery, labels, three bindings, ordered
chart and Count callback entry, but visual placement/layering failed.
0.3.1 foreground correction was then tested by the user and was off-screen.
0.3.2 absolute-position/drag correction is checked, installed, not tested
in game. Do not infer acceptance from immediate placement fixtures.

| site/field | VA | RVA | evidence |
|---|---|---|---|
| FUN_009E3070 | 0x009E3070 | 0x5E3070 | window slot 44, ECX this, no arguments, RET; unlinks inner +0x494 and inserts before engine active scene sentinel |
| FUN_009E3D20 | 0x009E3D20 | 0x5E3D20 | window slot 38, ECX this, two integer x/y stack arguments, RET 8; writes packed absolute +0x250 and calls inner +0xCC with same x/y |
| FUN_009F8FD0 | 0x009F8FD0 | 0x5F8FD0 | inner +0x80 unlink: previous/next +0xD4/+0xD8, owner +0xE4; clears links |
| inner primary table | 0x00E38350 | 0xA38350 | constructor FUN_009E16C0 supplies the inner object, owning render translation and scene links |
| inner unlink slot | 0x00E383D0 | 0xA383D0 | pointer to FUN_009F8FD0, relocation-aware guard |
| inner position slot | 0x00E3841C | 0xA3841C | pointer to FUN_00A1FEB0, relocation-aware guard |
| FUN_00A1FEB0 | 0x00A1FEB0 | 0x61FEB0 | writes integer input x/y as floats at inner +0xFC/+0x100 and updates render transform |

The packed centred setter FUN_009E3BA0 stores the input unchanged but
adds screen centre only to immediate inner translation. For foreground
Bill placement use the absolute setter above; test persistent +0x250 as
well as immediate translation. At 2560x1440 both should be (864,380).
Native dragging changes actual translation; the chart reads it rather than
independently centring. Raise only on opening; hide with Politics. Logical
GUI/observer ownership and simulation remain unchanged.

Private bounded exports under `E:\v2re\logs\tgcx-law2-position-1016\checks\`:
`tables.txt`, `window.txt`, `attach.txt`, `foreground-tables.txt`, `scene.txt`,
`refresh.txt`, `absolute-abi.txt`. Reference functions are mapped as data
and copied into owned executable fixture memory; the position target is a
fixture callback. Integrated native drag/click/visual acceptance remains
pending U-7. Four new guards give 42 runtime / 74 total file gates.


## LAW-2 live coordinate and scene-order correction (2026-10-16)

**This supersedes the preceding absolute-setter recommendation.** Live
read-only 0.3.2 data: Politics +0x250=(768,470), inner +0xFC/+0x100=(2048,1190),
world matrix +0x84/+0x88=(768,-470). Bill stored/input=(864,380), matrix
=(-416,340), matching the off-screen screenshot. Raw inputs are centred
render coordinates; matrix X and negative matrix Y are screen pixels.

FUN_009E3070 (RVA 0x5E3070) inserts before active list head, drawing under
Politics. Use FUN_009E2FC0 (VA 0x009E2FC0, RVA 0x5E2FC0), window slot 11:
it unlinks then appends inner via +0x74 / FUN_009F9050 (RVA 0x5F9050).
Attach slot VA 0x00E383C4 / RVA 0xA383C4 is guarded. Native append is this
in ECX, no stack arguments, RET. Raise only on opening, leave later dialogs.

Packed FUN_009E3BA0 gets positive absolute pixel x/y, persists it and adds
screen centre to native render input. Chart reads actual matrix translation.
0.3.3 screenshot confirms centred (864,380) placement at 2560x1440, correct
chart and foreground order. Native fixture now uses actual container topology
and live projection convention. 42 runtime / 74 file gates. See
`report-law-2-live-1016.md` and `report-law-2-visual-1016.md`.

## LAW-2 timed modifiers and modifier table (2026-10-17)

Static evidence (C static), with the reference SHA and the guards passing.
The output is in `E:\v2re\logs\tgcx-law2-controls-1017\modifier-1.txt` and
`modifier-2.txt`. Six runtime guards were added (48 in total). The runtime
read is not yet confirmed in game.

| function/site | VA | RVA | Confirmed static behaviour |
|---|---|---|---|
| `FUN_008CD8C0` | `0x008CD8C0` | `0x4CD8C0` | `has_country_modifier` evaluate: walks the country's timed list at `+0x4D8` (node +0 item, +8 next; compares item +8 to the modifier), then the permanent list at `+0x4E8`; guard at RVA `0x4CD8E2` |
| `CTimedModifier` primary vtable | `0x00DF9978` | `0x9F9978` | type of the timed-list items; destructor `FUN_008321B0` |
| `FUN_0044E340` | `0x0044E340` | `0x4E340` | saves item +0xC through the date formatter `FUN_0043ACD0`: the modifier's date (expiry, in game hours) |
| `FUN_0044E240` | `0x0044E240` | `0x4E240` | loading sets item +8 from the name lookup |
| `FUN_005661B0` | `0x005661B0` | `0x1661B0` | modifier lookup by name: hash `(h + signed c) * 61` modulo buckets +4, table +8; node +0 object, +4 next; name std::string at object +0x30 (length +0x40, capacity +0x44) |
| `FUN_0044EC00` | `0x0044EC00` | `0x4EC00` | sets the modifier manager global at VA `0x0125A69C` (RVA `0xE5A69C`) |
| `FUN_008CD650` | `0x008CD650` | `0x4CD650` | `has_country_modifier` parse: the lookup above, with an "Unknown modifier" error |

## LAW-2 Reforms tab, Decisions list and decision message (2026-10-17)

Static evidence (C static), with the reference SHA. The output is in
`E:\v2re\logs\tgcx-law2-reforms-1017\` (`refs-*.txt`, `dec-*.txt`,
`dis-*.txt`). Fourteen runtime guards were added (62 in total). The hooks
are installed by DLL 0.3.5 but not yet confirmed in game.

| function/site | VA | RVA | Confirmed static behaviour |
|---|---|---|---|
| `FUN_006DC990` | `0x006DC990` | `0x2DC990` | reform click: prologue `55 8BEC 83E4F8`; element std::string at +0x14 is `POLITICSVIEW_POLITICAL_REFORM<key>` or `POLITICSVIEW_SOCIAL_REFORM<key>`; builds `CSetPolitical/SocialReformCommand` and posts it via `(g_world+0xB24)` slot `0x44` → `+0x38` → slot `0x18`; `RET 4` (guard also at `0x2DCCEE`) |
| `FUN_006DA930` | `0x006DA930` | `0x2DA930` | reform rows: frame -0x3C option, -0x1C group, -0x18 country, -0x11 enable byte; current law at country +0x860 (political) / +0x850 (social) indexed by group +0x50; row button vtable +0xB8 enable / +0xBC disable; hook site `0x2DB22D` `cmp byte [ebp-0x11],0; mov edx,[eax]` (guards `0x2DB00E`, `0x2DB02D`, `0x2DB0AE`) |
| `FUN_00975ED0` | `0x00975ED0` | `0x575ED0` | issue option name: std::string at option +0x34 (guard `0x575F15`) |
| `FUN_006DB2E0` | `0x006DB2E0` | `0x2DB2E0` | Decisions list: two loops test each decision (+0x18 enabled, `potential`, `allow`); sites `0x2DB52A` (`TEST AL,AL; JZ 0x6DB59D; MOV ECX,[EBP-0x80]`) and `0x2DB5E8` (`JZ 0x6DB649`) |
| `FUN_005C2AD0` | `0x005C2AD0` | `0x1C2AD0` | decision name: std::string at decision +8 (guard `0x1C2B15`) |
| `FUN_00906B40` | `0x00906B40` | `0x506B40` | `CExecuteDecisionCommand` slot 14 (validity): enabled flag, `potential`, `allow` (P39) |
| `FUN_00906F00` | `0x00906F00` | `0x506F00` | "decision taken" message poster: message by value, `RET 0x8C`; gate byte VA `0x00F07DA6` (RVA `0xB07DA6`) = 0 takes the early exit at `0x0090752D`, which still destroys the argument; called at `0x00906691` (RVA `0x506691`) in the player branch of decision execute `FUN_00905C00` (guards `0x506690`, `0x506F55`, `0x507542`) |
| GUI window vtable | `0x00E3C0D8` | `0xA3C0D8` | slot 6 position setter `0x5E3BA0`, 13 button lookup `0x5E4C80`, 15 text `0x5E4D00`, 17 icon `0x5E4D40`, 27 window `0x5E4A20` (RVAs) |

## TPL-0: building a brigade (2026-10-17)

Static evidence, read-only Ghidra (`DecompileAt.java`, `tgcx_Disasm.java`,
`tgcx_FindRefs.java`). The output is in
`E:\v2re\logs\tgcx-tpl-research-1017\` (`refs-1.txt`, `refs-2.txt`,
`dec-1.txt` to `dec-4.txt`, `dis-1.txt` to `dis-5.txt`). 25 runtime guards
(87 in total) and five research guards were added to `tools/check_exe.py`
(`check_exe.py` ALL OK, `gen_signatures.py --check` ALL OK). The DLL
module `dll/tgcx/tgcx_templates.h` calls the constructor, the queue and the
three read-only helpers below; it is fixture-tested but not yet wired into
the game: no runtime confirmation.

Data the scan reads (all guarded): player country `g_countryManager`
(`0x012587E4`, +0 count, +4 array) by `g_world+0xB60`; country tag +0x1C
(passed as the constructor's tag, I), index +0x20, owned province ids
+0x9D8..+0x9DC, unit types `+0xBCC → +0x310[index]`; provinces at
`g_world+0xACC` by id, province id +0x58; unit type DB `0x0125FDD8`
(+0xC..+0x10, index +0x24, name std::string +8); pop type DB `0x0131BB34`
(+0xC..+0x10, soldier flag +0x42).

### The command

| function/site | VA | RVA | Confirmed static behaviour |
|---|---|---|---|
| `CConstructUnitCommand` vtable | `0x00E00CF4` | `0xA00CF4` | 15 slots (`rtti-classes.md`); guarded whole (slots 0-7, 8-14) |
| `FUN_0057D1B0` | `0x0057D1B0` | `0x17D1B0` | constructor, `__stdcall (mem, unitType*, provinceId, pop*, countryTag, countryId)`, returns `this` in EAX, `RET 0x18` (six stack arguments, `mem` included). Object 0x68 bytes: +0x2C/+0x30 command id `0x5CA`, +0x3C tag, +0x40 country id, +0x44 province id, +0x48/+0x50/+0x58 three fresh object ids (`DAT_01258A90+0x1268`, counter `DAT_01258A9C`), +0x60 unit type, +0x64 pop (may be 0: the naval AI path passes 0) |
| `FUN_00AAE9AF` | `0x00AAE9AF` | `0x6AE9AF` | `operator new`, cdecl, caller pops (`push 0x68; call; add esp,4`) |
| command queue | — | `0x33261B` | `(g_world+0xB24)->vtbl[0x44/4]()` → result `+0x38` → `vtbl[0x18/4](cmd)`; the same queue the reform and decision commands use. The queue owns the command afterwards |
| slot 6 `FUN_0057D2F0` | `0x0057D2F0` | `0x17D2F0` | execute: builds a `CMilitaryConstruction` (`FUN_00491620`), copies ids, tag, country, unit type (+0x88) and the pop's id (+0x90/+0x94), adds it to the province; for the player refreshes the build view (`(g_world+0xB24)` slot `0x124`, `FUN_00740050`) |
| slot 7 `FUN_0057D5F0` | `0x0057D5F0` | `0x17D5F0` | returns `0x5CA` |
| slot 2 / 4 | `0x0057D600` / `0x0057D780` | — | write / read (save and network): province as `%d`, ids, pop id; read resolves the unit type by name into `country+0xBCC → +0x310[index]` |
| slot 13 `FUN_0057D970` | `0x0057D970` | `0x17D970` | clone (new 0x68 object via `FUN_0057D0F0`, copies every field) |
| **slot 14 `FUN_0057DA20`** | `0x0057DA20` | `0x17DA20` | **validity**: `FUN_005141D0` with ECX = unit type (+0x60), EAX = pop (+0x64), stack country (`g_countryManager` by +0x40) and province (`g_world+0xACC` by +0x44). The engine re-checks at execution, as `FUN_00906B40` does for decisions (P39) |
| `FUN_005141D0` | `0x005141D0` | `0x1141D0` | can-build predicate, `RET 8`: province controller (+0x134) is the country (+0x20); unit index (+0x24) ≥ 3; unlocked (`country+0xBCC → +0x2DC` byte by index); unit active (+0x42); land (+0x39): province +0x4C < +0x50, and with a pop, free regiments > 0 (below); naval (+0x3A): port/naval-base checks; province +0x10C slot 0x24 ≠ 1 |
| `FUN_00965870` | `0x00965870` | `0x565870` | regiments a pop supports, `__stdcall (pop, flag)`, `RET 8`: 0 below the minimum size; otherwise `size(+0x58) / per-regiment size + 1`, the per-regiment size scaled by the pop's province state (+0x64 → +0x190: 1, 2, other) from `g_economyDefines+0x20` (+0x10, +0x14, +0x30, +0x34, +0x38) |
| `FUN_00965930` | `0x00965930` | `0x565930` | regiments a pop already has, EAX = pop, one stack byte (0): its regiment vector (+0x3C..+0x40) plus constructions in its province (+0x64 → +0xD8) whose pop id (+0x90/+0x94) is the pop's (+8/+0xC) |

Free regiments of a pop = `FUN_00965870(pop,0) - FUN_00965930(pop,0)`. A
command queued beyond that is refused by slot 14 when it executes, so a
template recruit must spread its regiments over pops itself.

### The build view

| function/site | VA | RVA | Confirmed static behaviour |
|---|---|---|---|
| `CBuildUnitView` vtable | `0x00E12A14` | `0xA12A14` | 6 slots: 0 deleting destructor `FUN_007340E0`, 1 update `FUN_00734E00`, 3 `FUN_00737370`, 4 tooltip `FUN_007361F0` |
| `FUN_00733B80` | `0x00733B80` | `0x333B80` | constructor (callers `FUN_006AEED0`, `FUN_0073DA70`): +0x60 GUI window, +0x68 owner, +0x6C optional single province, +0x74 country id, +0x78 land (1) / naval (0), +0xC4 selected folder, +0xC8/+0xCC remembered folder (land/naval), +0xD8 folder headers (0x10 each), +0xE8 rows (0x18 each), +0xF8 queue (0x28 each); windows `cell_window_list`, `cell_window_queue`, scrollbars `external_scroll_slider_list/_queue`, button `cancel_all_units` |
| `FUN_00734120` | `0x00734120` | `0x334120` | destructor body (not a constructor, as the first findings said) |
| glue at view+4 → `FUN_00737260` | `0x00737260` | `0x337260` | close button (`windowclose_build_unit_entry` sound) |
| glue at view+0x30 → `FUN_00737390` | `0x00737390` | `0x337390` | folder tab click: the element name's number (`unit_folder_<n>`, `atoi` after 12 characters) becomes +0xC4; rows and queue rebuilt (+0x160 dirty) |
| glue at view+0x164 → `FUN_00734600` | `0x00734600` | `0x334600` | "cancel all" confirmation dialog (`FUN_0072FF00`) |
| `FUN_007353D0` | `0x007353D0` | `0x3353D0` | row list: for each owned province (`country+0x9D8`, or only +0x6C), land: `FUN_004B81D0` lists (pop, unit type) pairs and the row keeps free regiments `FUN_00965870 - FUN_00965930`; only unit types whose folder (+0x28) is the selected one; grouped under province-state headers (`province+0x16C`) |
| `FUN_004B81D0` | `0x004B81D0` | `0xB81D0` | which pops qualify: the owner (`province+0x12C`) has `+0xBB8` = 0; every pop type with +0x42 set (the soldier type); every pop of that type in the province (`province+0x194`, 0x10 per type, next pop at +0x27C); every land unit type (index ≥ 3) passing `FUN_00514030(country, province, out)` |
| `FUN_00735ED0` | `0x00735ED0` | `0x335ED0` | queue: constructions in each owned province (`+0xD8`), land or naval by unit type +0x39/+0x3A |
| `CUnitBuildItem` entry `FUN_007304F0` | `0x007304F0` | `0x3304F0` | list entry (`build_unit_entry[_wide]`); `build_button`/`build_button_group` both call `FUN_007319B0`; its 0x14-byte items at +0x28..+0x2C; country tag/id at +0x38/+0x3C |
| `FUN_007319B0` | `0x007319B0` | `0x3319B0` | build click: for each item, EDI = item, push entry, `call FUN_00732520` |
| `FUN_00732520` | `0x00732520` | `0x332520` | UI recruit, custom ABI: EDI = item (+0 pop key 8 bytes, registry split at `0x1269`; +8 unit type; +0xC province; +0x10 must be 0), one stack argument (the entry), `RET 4`. Builds 1 command, or, for a land unit with a pop when the input check `(g_world+0xB24)+0x1C` slot `0x28` is true (inferred: a modifier key), as many as the pop has free regiments |
| AI recruit | `0x0081EC90`, `0x0081EDB0` | `0x41EC90`, `0x41EDB0` | the same constructor: naval with pop 0; land picks a soldier pop with free regiments that passes `FUN_005141D0`, one command per call |
| `CCreateUnitCommand` vtable | `0x00E00D34` | `0xA00D34` | constructor `FUN_0057DB30` (not studied) |

Inferred, not confirmed: `country+0xBCC → +0x310[index]` is the country's
unit stats (the tooltip prints +0xA0 and +0xA4, likely build time and a
second figure); `+0xBB8` on the country blocks every row.


### TPL-0 native panel hooks (2026-10-17, C static)

Scoped read-only Ghidra evidence is retained privately under
`E:/v2re/logs/tgcx-tpl-panel-1017/` (`tgcx_tpl_panel_dec.txt`,
`tgcx_tpl_panel_dis.txt`). Base is `0x400000`; every RVA below is VA minus
that base. No new simulation function is invoked beyond the recruit path
already documented above.

| Guard / function | VA | RVA | Evidence and use |
|---|---|---|---|
| CBuildUnitView six-slot table | `0x00E12A14` | `0xA12A14` | 24 guarded bytes; slot 0 deleting destructor FUN_007340E0, slot 1 update FUN_00734E00. Replaced in memory only, with both originals retained; failed second replacement restores the first. |
| Update reads root/visibility | `0x00734E24` | `0x334E24` | EDI=ECX, root at view+0x60, root visible at +0x67; update thunk captures the live view and tail-jumps to the original. |
| Constructor close/root/scope | `0x00733C0C` | `0x333C0C` | Writes close byte +0x5C, root +0x60, optional province +0x6C. Panel hides when closed; only the generated large root has our button/window. |
| Native folder handler land flag | `0x007374D3` | `0x3374D3` | Tests view+0x78 (land), sets native dirty byte +0x160. Our code reads land, never changes selected folder or dirtiness. |
| Native destructor | `0x007340E0` | `0x3340E0` | ECX=view; calls body FUN_00734120; optional delete flag on stack; returns this, RET 4. Tail-jump thunk preserves original stack/ABI. |

GUI lookup, string/text setters, foreground append, packed setter, show/hide
and render-matrix offsets reuse the confirmed Bill path. The Templates
anchor is root matrix (+0x84, -0x88) + (5,69), with a 652x528 child and an
inherited right queue. Reference-engine fixtures confirm this placement;
actual build-view runtime capture and input remain U-8 work.

Button glue reuses the guarded Politics observer table. At VA 0x006DFFA0
(RVA 0x2DFFA0), deletion notification tests glue+0x20 and returns RET 4 when
zero. The handler at VA 0x00737D00 (RVA 0x337D00) reads callback +8 and owner
+4; our owner is a stable panel context, not a fake game view. All other
callback slots remain zero. Observer storage is kept intact through native
GUI destruction. These are static ABI observations, not live acceptance.


2026-10-17 runtime update: U-8 confirms native build-view capture, template
input and nine-regiment command recruitment for ENG; save/reload retains
the queue and composition. `report-tpl-0-runtime-1017.md` scopes acceptance.
The screenshots disprove correct panel placement: the root translation used
above is not sufficient for the nested Military view. Determine the full
screen conversion and add a translated-parent fixture before claiming it
correct. No new address or transform interpretation is promoted here.

## External research cross-check (2026-10-17)

Source: Discord Cheat Engine notes/tables (`v2moddingsv/`, not in git) and
smedley_kernel (LGPL-3.0, `models/v2/classes/CCountry.toml`). Full account:
`report-research-discord-1017.md`. All 59 smedley `CCountry` RVAs land on
function starts in our build. **C** below means our own Ghidra decompile
(`DecompileAt.java`, 2026-10-17) shows the access; **I (ext.)** is a
third-party Cheat Engine reading not yet traced by us. No signature is in
`tools/check_exe.py` yet: nothing here is used by our code.

### Functions (`CCountry` methods, smedley names)

| VA | RVA | name | conf | evidence |
|---|---|---|---|---|
| `0x005366F0` | `0x1366F0` | `CCountry::SetResearchPoints` | C | writes `+0xE3C`; clamp from `0x538150` |
| `0x00538150` | `0x138150` | `CCountry::daily_research_points` | I | smedley; called by the above |
| `0x00539380` | `0x139380` | `CCountry::SetLeadership` | C | writes int64 `+0x7D0/+0x7D4`. smedley's `SetPrimaryCulture` at the same RVA is wrong |
| `0x005341A0` | `0x1341A0` | `CCountry::AddPrestige` | C | `+0xEA0 += delta`, positive scaled by `(1000+[[+0xBCC]+0x288])/1000`, floor 0 |
| `0x0050E760` | `0x10E760` | `CCountry::AddLeader` | C | prepends node to `+0xBD4` list; optional history entry |
| `0x00513C80` | `0x113C80` | `CCountry::AddUnit` | C | appends node to `+0x7B4` list |
| `0x00508330` | `0x108330` | `CCountry::RefreshSubUnits` | C | iterates `+0x7B4` |
| `0x005238D0` | `0x1238D0` | `CCountry::PayBackLoan` | C | thiscall; walks `+0xE8C/+0xE90`, subtracts from `+0xE78/+0xE7C` |
| `0x00527D10` | `0x127D10` | `CCountry::RearrangeUpperHouse` | C | rewrites the int64 vector `+0x8C0/+0x8C4` (`CUpperHouse+0x10/+0x14`) |
| `0x00542370` | `0x142370` | `CCountry::Westernize` | C | sets `+0x12D0`=1, fires `on_civilize`. smedley's `WithdrawFromTreasury` at the same RVA is wrong |
| `0x005114D0` | `0x1114D0` | `CCountry::AddTimedModifier` | I/C | smedley; reads today `g_world+0xB0C` for the expiry; `+0x4D8` link not re-traced |
| `0x00508590` / `0x0050C2A0` | `0x108590` / `0x10C2A0` | `CCountry::DailyUpdate` / `MonthlyUpdate` | I | smedley; function starts only |
| `0x00522910` / `0x00522820` | `0x122910` / `0x122820` | `CCountry::TakeLoan` / `TakeLoanFrom` | I | smedley; function starts only |

The other smedley `CCountry` RVAs are in its TOML; add them here
when a card reads one.

### Structures

| structure | offset | field | type | conf | evidence |
|---|---|---|---|---|---|
| `CCountry` | `+0x198` | industrial score | int64, 2¹⁵ | C | V2DLL §4.7; CT agrees |
| `CCountry` | `+0x1A0` | military score | int64, 2¹⁵ | I (ext.) | CT |
| `CCountry` | `+0x1A8` / `+0x1AC` | plurality / revanchism | int32 thousandths | I (ext.) | CT |
| `CCountry` | `+0x7B4/+0x7B8/+0x7BC` | unit list head / tail / count; 16-byte node `+0` unit, `+4` prev, `+8` next | list | C | `AddUnit`, `RefreshSubUnits` |
| `CCountry` | `+0x7D0` | leadership points | int64, 2¹⁵ | C | `SetLeadership`; CT |
| `CCountry` | `+0xBD4/+0xBD8/+0xBDC` | leader list head / tail / count; 16-byte node `+0` leader, `+4` prev, `+8` next | list | C | `AddLeader` (upgrades the earlier I) |
| `CCountry` | `+0xE3C` | research points | int32 thousandths | C | `SetResearchPoints`; CT |
| `CCountry` | `+0xE8C/+0xE90` | loans: `CLoan*` vector begin / end | vector | C | `PayBackLoan`; CT |
| `CCountry` | `+0xEA0` | prestige | int32 thousandths | C | `AddPrestige`; Discord "prestige int32/10³" |
| `CCountry` | `+0x15A0` | suppression points | int32 thousandths | I (ext.) | CT |
| loan | `+0x10` / `+0x18` | interest rate / amount | int64, 2¹⁵ | I (ext.) | CT |
| pop | `+0x58` / `+0x5C` / `+0x60` | size / start-of-month size / employed | int32 | I (ext.) | CT |
| pop | `+0x118` / `+0x120` / `+0x128` | consciousness / militancy / literacy | int64, 2¹⁵ | I (ext.) | CT |
| pop | `+0x278` / `+0x27C` | previous / next pop | pointer | C (`+0x27C`), I (ext.) (`+0x278`) | our `FUN_004B81D0`; CT |
| army | `+0x40` / `+0xDC` / `+0x114` | regiment count / province / name (MSVC string, inline under 16 chars) | int32 / ptr / string | I (ext.) | CT |
| regiment | `+0x30` / `+0x34` / `+0x38` / `+0x3C` / `+0x40` | pop / experience (thousandths) / type / strength / organisation (thousandths) | mixed | I (ext.) | CT |
| regiment type | `+0x28` | icon index | int32 | I (ext.) | CT |
| good | `+0x30` | base price | int64, 2¹⁵ | I (ext.) | CT |
| static | RVA `0xA45C28` / `0xA45C30` | max / min relative price: doubles 163840.5 / 6554.1 (5.0 / 0.2 in 2¹⁵ units) | double | C (value read from the file) | CT names; PE read 2026-10-17 |
| static | RVA `0xE587F4` | good count | int32 | I (ext.) | CT; `.data`, next to `g_countryManager` |
| static | RVA `0xE5B9E0` / `0xE5D758` | price delta / owner income share upper limit | int64 | I (ext.) | CT |

RGO, factory, artisan, province and ship field lists are in the report's
source files and not copied here until a chart card needs them.

## GUI inner tree and screen conversion (2026-10-17, TPL-0 0.4.1)

Decompiled with `DecompileAt.java` (private
`E:\v2re\logs\tgcx-tpl-place-1017.txt`). Supersedes the 0.4.0 Templates
anchor above (P40).

| site/field | VA | RVA | conf | evidence |
|---|---|---|---|---|
| inner `+0xE4` | — | — | C | owner; written by `FUN_009F9050`, cleared by `FUN_009F8FD0` |
| inner `+0xDC/+0xE0` | — | — | C | first/last child; same functions |
| inner `+0xD4/+0xD8` | — | — | C | previous/next sibling |
| inner `+0x54` (16 dwords), translation `+0x84/+0x88` | — | — | C | rebuilt by `FUN_00A1FEB0` from `+0xFC/+0x100`, **in the owner's frame** |
| `FUN_009F9050` | `0x009F9050` | `0x5F9050` | C | thiscall(child, owner): unlink child, append to the owner's list |
| scene | renderer `+0x6B9E0` | — | C/R | promotion target of `FUN_009E2FC0`; its children's translations are screen pixels (Bill 0.3.3 accepted) |
| `build_unit_view_large` root | view `+0x60` | — | R | owner chain of 2 levels through the Military window; 0.4.1 log at 2560x1440: root local (336,20), screen (1104,490) |

Screen position of any inner = Σ (`+0x84`, `-0x88`) over the chain up to
the scene. 0.4.1 logs the live values (`Templates anchor:`) when it opens
the panel; the 2026-10-17 log confirms it (`report-tpl-0-visual-1017.md`).

## TPL-1: stack commands for Conform (2026-10-17, static)

Read-only Ghidra on the reference build (`check_exe.py` ALL OK). Sources
and decompiles in `E:\v2re\logs\tgcx-tpl1-1017\` (private, R8). RVA = VA
- 0x400000. Nothing here is guarded or called yet: each row needs a
relocation-aware signature before code uses it (R2, P24).

### Identity

| what | where | conf | evidence |
|---|---|---|---|
| object identity subobject | `object+8`: `+0` name string, `+8` id type, `+0xC` id | C | registry lookups return `object+8` and every caller subtracts 8; `FUN_0072D4E0` copies from it |
| registry split | type `< 0x1269` → `g_registryLow`, else `g_registryHigh`; hash `(type*0x10000+id) % buckets` | C | `FUN_00794AA0` inlines the lookup; `ObjectRegistry_HashLookup` / `ObjectRegistry_FindByTypeAndId` |
| command unit reference | 0x24 bytes: `+0` pointer, `+4` type, `+8` id, `+0xC` name string; built by `FUN_0079DE40` (from a unit: ids `+0x10/+0x14`, name `+8`) or `FUN_0072D4E0` (from an identity subobject) | C | both helpers decompiled |
| stack (`CUnit`) fields | `+0xC0` province id, `+0xC4` owner country index, `+0xDC` → `+0x58` (passed through to commands), `+0xEC` province unit list (`node +0 item, +8 next`), `+0x40` regiment count | I | Create/Split callers; AI merge `FUN_004716F0` |
| new stack id (native UI) | type `word [0x01258A90] + 0x1268`, id `++[0x01258A9C]` (client counter, written just before posting) | C | `FUN_0079DB10` / `FUN_0079DC70` disassembly |

### Commands (all posted to the queue at `0x33261B`; slot 6 execute, slot 14 validity)

| command | id | size | ctor (VA / RVA) | slot 6 / slot 14 | conf |
|---|---|---|---|---|---|
| `CMoveCommand` | `0x2F8` | 0x90 | `FUN_005DE7D0` / `0x1DE7D0`: `(mem, unit*, destination, 4 byte flags)`; pushes destination onto a vector at `+0x64`; unit ref at `+0x3C` | `FUN_005DEAE0` (each destination through `FUN_005DED20`) / `FUN_005DF4B0` (unit resolves; each step `FUN_005D0EB0`) | C (destination type I) |
| `CMergeCommand` | `0x410` | 0x48 | `FUN_005E13B0` / `0x1E13B0`: `(mem, list*)`, list of stacks (`node +0 item, +8 next`), the first one stays | `FUN_005E1590` (merges each later stack into the first; sound `subunit_merge`) / `FUN_005E1BE0` (all resolve, at least two, `FUN_00513D50`) | C |
| `CTransferSubUnitCommand` | `0x412` | 0x6C | `FUN_005E1EE0` / `0x1E1EE0`: `(mem, regimentType, regimentId, targetIdentity*)`; regiment id at `+0x64/+0x68`, target ref at `+0x3C` | `FUN_005E1F90` (`FUN_00513F30` can-transfer, remove `FUN_005CB230`, add `FUN_005CB1D0`, player log) / `FUN_00908FD0` (target resolves only) | C |
| `CCreateUnitCommand` | `0x41A` | 0x60 | `FUN_0057DB30` / `0x17DB30`, stack args in order: province, country, new id (8 bytes), new id again (8 bytes), `stack+0xDC→+0x58`, kind, split flag (byte) → `+0x3C, +0x40, +0x48, +0x50, +0x44, +0x58, +0x5D` | `FUN_0057DBF0` (creates an empty stack with that id: kind 1 army `0x1C0`, 0 `0x1B8`, 2 `CAir`; split flag with a different source id moves about half by category) / `FUN_00A31490` | C (kind names I) |
| `CDetachUnitCommand` | `0x525` | 0x64 | `FUN_005E55A0` / `0x1E55A0`: `(mem, unit*)` from a unit-panel button (`FUN_0078F900`) | `FUN_005E5640` / `FUN_005E5760` | C (meaning not established; not needed: extras use Create + Transfer) |
| `CSplitAndLoadArmyCommand` | — | — | execute `FUN_005E3B50`: Create with a pre-chosen id, run inline, find the stack by id, Transfer each regiment, then load | — | C (reference pattern) |

### Unit panel

| what | where | conf |
|---|---|---|
| `CUnitView` vtables | `0x00E16850` (13) / `0x00E1688C` (23); ctor `FUN_00798A50` | C |
| native "new stack" handlers | `FUN_0079DB10` / `FUN_0079DC70` (registered by the ctor; differ only in byte `view+0x2C0`); pending id `view+0x2B8/+0x2BC`, source stack `view+0x28` | C |
| reorganize drop | `FUN_00794350`: one Transfer per regiment into an existing stack | C |
| GUI | TGC v2.5.2 overrides `interface/unitpanel.gui`; window `unitpanel` with `splitinhalf` (254,32) and `newunitbutton` (279,32) | C (file) |

### TPL-1 second pass (2026-10-17, static)

| what | where | conf | evidence |
|---|---|---|---|
| `CConstructUnitCommand` ids | the ctor `FUN_0057D1B0` allocates three ids from the client counter (`[0x01258A90]+0x1268`, `++[0x01258A9C]`) into `cmd+0x48`, `+0x50`, `+0x58` | C | ctor decompile (`tgcx-tpl-research-1017/dec-*.txt`) |
| id hand-over | execute `FUN_0057D2F0` copies `cmd+0x50/+0x54` → construction `+0x58/+0x5C` and `cmd+0x58/+0x5C` → construction `+0x60/+0x64`; `cmd+0x48` presumably the construction's own identity (vfunc `+0x18`) | C (`+0x48` I) | execute decompile |
| `CMilitaryConstruction` vtables | `0x00DFC034` (15) / `0x00DFC074` (8) | C | `rtti-classes.md` |
| construction completion | slot 9 `FUN_00491E80` (RVA `0x91E80`): creates a **new stack** (army `0x1B8` / navy `0x1C0` / `CAir`) with id construction `+0x58` and its **regiment** (`CRegiment` / `CShip` / `CWing`) with id `+0x60`, in province `+0x48`; for a rally point (`+0x98` ≥ 0, country `+0x1570` list) posts `Move(stack, rally+8, 1, 1)` | C | decompile |
| **future stack id of a recruit** | = `CConstructUnitCommand +0x50/+0x54`, readable right after the TPL-0 ctor call, before posting | C (chain above) | — |
| `CMoveCommand` ctor args | `(mem, unit*, provinceId, replace, safePath, verySafePath, setAttach)` → `+0x88`, `+0x89`, `+0x8A`, `+0x8B` | C | `FUN_005DED20` |
| Move destination | a **province id**: `g_world+0xACC` table index; the engine pathfinds (`CPathFind`, `CSafePathFind` with `+0x89`, `CVerySafePathFind` with `+0x8A`); `+0x88` replaces current orders, later steps append; `+0x8B` writes the last destination to `unit+0x74` | C | `FUN_005DED20`, `FUN_005DEAE0` |
| `CUnitView` object | ctor `FUN_00798A50` loads window `unitpanel`, binds `disbandbutton`, `disbandtoosmallbutton`, `newunitbutton`, `splitinhalf`, `unitname`, `leader_button`, ...; primary vtable `0x00E16850`, secondary at object `+0x1C` (`0x00E1688C`) | C | ctor decompile |
| `CUnitView` slots | primary slot 0 `FUN_00799290` deleting destructor (body `FUN_0079D490`); slot 8 `FUN_0079B800` refresh; secondary slot 9 `FUN_007993B0` per-frame: when window `+4`→`+0x67` is visible, calls primary slot 8 | C | decompile |
| shown stack | `view+0x28` (`CUnit*`); `+0x40` regiment count; vfunc `+0x38` land test (I); regiment list `+0x38` (`node +0 item, +8 next`), regiment `+0x38` → unit type, type `+0x34` category | C (`+0x38` meanings I) | refresh and `FUN_0057DBF0` |

### TPL-1 guards (2026-10-17)

Every row in the two TPL-1 tables that code will call or read is now a
`check_exe.SIGNATURES` entry ("TPL-1 ..."): 38 entries, including the
command vtables and the `CUnitView` slots, all ALL OK. The pure planner that
uses them is `dll/tgcx/tgcx_conform.h` (report-tpl-1-research §9).

### TPL-1 native wrappers (2026-10-17, static; guarded)

Read-only Ghidra again (`E:\v2re\logs\tgcx-tpl1-1017
at*.txt`); ten more
`check_exe.SIGNATURES` entries ("TPL-1 native ..."), 139 in all, ALL OK.
**Two corrections** to the tables above (they are not rewritten):

- **`CTransferSubUnitCommand` arguments are the other way round.**
  `FUN_005E1EE0(mem, targetStackType, targetStackId, regiment)` RET 0x10.
  The target stack's id goes to `+0x64/+0x68` (the execute resolves it
  first, `entry-8`). The regiment reference goes to `+0x3C`, built by
  `FUN_0072D4E0` from the regiment, whose type/id are at `+8/+0xC`. Native
  caller: the reorganize drop `FUN_00794350`, call at `0x007944FF`.
- **The rally-point Move sets three flags**:
  `Move(stack, province, 1, 1, 1, 0)`, so replace, safe path and very safe
  path, with attach off (`0x00492342`). Conform uses the same.

| what | where | conf | evidence |
|---|---|---|---|
| registry lookup | `FUN_009C1D40` (EAX key `{type,id}`, ECX table) returns the node's entry unchanged; entry `+8` type, `+0xC` id | C | disassembly |
| stack ↔ entry | stack object = entry − 8 (ids at stack `+0x10/+0x14`); a regiment is its entry, the pointer kept in a stack's list `+0x38` | C | Transfer execute, reorganize |
| regiment unit type | regiment `+0x38`, matched against the country's unit types | I (U-9 probe) | reorganize compares `+0x38`→`+0x48` |
| new id lock | `FUN_009C12D0`: EAX → spinlock byte `0x0131CA68` (RVA `0xF1CA68`), returns the byte to store back; the new-stack button stores AL after `++[0x01258A9C]` | C | disassembly |
| Create kind | stack vfunc `+0x3C` true → 1, `+0x40` true → 2, else 0 (land; completion makes class `0x1B8` for it) | C | `0x0079DB84` |
| Create pushes | `(mem, +0xC0, +0xC4, id, id, +0xDC→+0x58, kind, 0)` | C | `0x0079DBD7` |
| Merge list | `{head, tail, count}`, node `{stack, prev, next, byte}` (0x10); the ctor copies references | C | ctor `0x005E1450`, AI merge caller |
| `CUnitView` slot 9 → 8 | secondary slot 9 sets ECX = view − 0x1C (the primary) and jumps to primary slot 8 | C | `0x007993B9` |

### TPL-1 U-9 correction (2026-10-17, runtime)

Stack `+0xC0` is the **owner's tag** (U-9 logged `0x415246`, "FRA"), not a
province. The province is `+0xDC` → `+0x58` (C: Move ctor `0x1DE8B2`, AI
merge `FUN_004716F0`). The "province" in the TPL-1 tables above and in
the Create ctor arguments means the tag. Regiment `+0x38` is the country's
unit type (R: every land regiment mapped). New stack ids `0x1269/n` were
seen live (P43).

### TPL-1 Conform window guards (2026-10-17, static)

| What | VA | RVA | conf | Evidence |
|---|---|---|---|---|
| `CUnitView` ctor stores the loaded `unitpanel` window at `+0x20` | `0x00798AE8` | `0x398AE8` | C | `FUN_00798A50`: vcall `+0x2C` (window factory) then `mov [edi+0x20],eax` |
| Secondary slot 9 tests that window's `+0x67` before refreshing | `0x007993B0` | `0x3993B0` | C | `mov eax,[ecx+4]` (view `+0x20`), `cmp byte [eax+0x67],0`, then jumps to primary slot 8 |

The Conform window (`tgcx_conform_gui.h`) uses `*(view+0x20)` as its root and
`+0x67` as the panel's visible byte. It assumes that root has TPL-0's build
root class (`+0x494` inner, vtable `0xA38350`; `+0x90` renderer); the
placement refuses otherwise (unverified in game, U-10).

## LAW-3: Reforms refresh, reform delay and the decisions alert (2026-10-18, static)

Ghidra listings in `E:\v2re\logs\tgcx-law3-1018\` (outside git). RVA = VA - 0x400000.

| What | VA | RVA | conf | Evidence |
|---|---|---|---|---|
| `CPoliticsView` slot 11, refresh: rebuilds the reform rows (`FUN_006D96F0` -> `FUN_006DA930`) and the decisions list (`FUN_006DB2E0`) | `0x006D7180` | `0x2D7180` | C | vtable `0xE0E458` + 0x2C; call at `0x6D71AE`; slot 2 (`FUN_006D2C10`) tail-calls it at `0x6D2C2B` |
| Row builder re-evaluates every row on each call; enables with vcall `+0xB8`, disables with `+0xBC`, from the byte at `[ebp-0x11]` | `0x006DB22D` | `0x2DB22D` | C | the existing LAW-2 row hook site |
| `FUN_005268F0` reform delay: EAX = country, AL = 1 when open, plain `RET`. Compares the last reform date at `CCountry+0x9C` plus the define months (economy defines `+0x40` -> `+0xAC` / 1000) with the world date at `+0xB0C` | `0x005268F0` | `0x1268F0` | C | `SETLE AL` / `RET` at `0x52693C` |
| `FUN_00525BE0` (political) / `FUN_00525A20` (social) reform permission: the delay gate first, then upper-house support for add/remove (weighted by ideology) against a threshold, then the option's `allow` (`+0x58`) | `0x00525BE0` / `0x00525A20` | `0x125BE0` / `0x125A20` | C | both call `FUN_005268F0` first |
| `CCountry+0x9C` date of the last reform | — | — | C | read by `FUN_005268F0` |
| `FUN_0053A6A0` decision ignored by the player: EAX = country, EDI = decision, AL = 1 ignored | `0x0053A6A0` | `0x13A6A0` | C | entry `push esi; mov esi,[eax+0x188]`; also called from `CPoliticsView` slot 10 |
| `FUN_0053A6D0` top-bar alert "We can enact the following decisions" (key `COUNTRYALERT_CanDoDecisions`, VA `0xDFF5C4`); skips decisions `FUN_0053A6A0` calls ignored | `0x0053A6D0` | `0x13A6D0` | C | key at `0x53C100`, call at `0x53C2A1` |
| `FUN_0040B360` gates the alert icon itself | `0x0040B360` | `0x00B360` | I | not studied (LAW-3 limit) |

### TPL-4 command batch and verification (2026-10-19, static/live)

`FUN_0072D4E0` (RVA `0x32D4E0`) builds the regiment reference from entry
+8/+C. `FUN_00908FD0` (RVA `0x508FD0`) resolves this reference at Transfer
+3C using its key +40/+44, without resolving the destination. The destination
key is at +64/+68 and is resolved by execute `FUN_005E1F90` (RVA `0x1E1F90`).
Thus Create followed by Transfer can be submitted before the new stack exists;
regiments already exist. Existing calls/guards unchanged. Read-only exports:
`work/tpl4-detach-extra.txt`, `work/tpl4-detach-disasm.txt` (not git).

The live 0.8.1 log passes the logged source/destination field checks but
loses empty destinations before next-day verification. 0.8.2 batches the
commands immediately and reports vanished destinations. Empty cleanup timing
is an inference; in-game success remains unconfirmed. See report-tpl-4-1019.md.


## MOD-6 shared GUI / unit catalogue implementation (2026-10-19)

Supersedes the preliminary construction section above. Confidence **C**
for static evidence; wrappers/selected native bytes exercised in fixtures,
**not yet R** for integrated shared-window construction or turnover.
All RVAs use VA minus 0x400000; new signature gate totals 164.
Read-only decompilations remain ignored work/mod6-*-1019.txt and logs.

| Function / site | VA | RVA | Evidence and ABI |
|---|---|---|---|
| CEU3Gui named-root factory | 0x009A38F0 | 0x5A38F0 | Primary slot 11; thiscall, name pointer and parent stack args, RET 8; registry at +0x34, renderer +0x30; calls 0x009CDE70 then registers root+0x18 in GUI+0x5C |
| Factory slot pointer | 0x00E08A70 | 0xA08A70 | Relocated pointer to 0x009A38F0; primary table begins RVA 0xA08A44 |
| CGui subobject construction fields | 0x009A6A6D | 0x5A6A6D | CGui context +0x30, definition +0x34; subobject is root+0x1C, hence root context +0x4C |
| CFixedWindow scalar deleting destructor | 0x009E2F90 | 0x5E2F90 | C static only; not called by Universal (P54) |
| CUnitView owned-root teardown | 0x0079D490 | 0x39D490 | Hides root via secondary slot 14, then primary slot 20; evidence work/mod6-unregister-1019.txt |
| CFixedWindow deferred release | 0x009E3D60 | 0x5E3D60 | Primary slot 20, no stack args, marks +0x52 and propagates to children; Universal release path |
| CEU3Button position getter | 0x009EFE20 | 0x5EFE20 | Slot 15, caller output uint32 pointer, RET 4, copies packed position +0x98 |
| CIcon position getter | 0x00646620 | 0x246620 | Slot 15, output uint32 pointer, copies packed position +0xBC |
| CIcon frame forwarding | 0x009C4410 | 0x5C4410 | Slot 18, forwards stack frame argument to inner icon +0x94 slot 24; exercised native bytes in fixture |
| build_time token registration | 0x00C453FC | 0x8453FC | Token 0x4DB, build_time string; work/mod6-token-1019.txt |
| Build time parser store | 0x005BAB1C | 0x1BAB1C | Integer thousandths written at definition+0xC0; parser 0x0098FB60 multiplies by 1000; round up for catalogue days |
| Icon parser store | 0x005BA89E | 0x1BA89E | Parsed integer written at base unit definition+0x28 |

Runtime helpers validate context/table methods and creation definitions;
they borrow engine strings without storing them and refuse mismatches.
Lifetime evidence: work/mod6-native-owner-1019.txt,
mod6-unregister-1019.txt and mod6-release-1019.txt. Dynamic field evidence:
mod6-unit-fields-1019.txt and mod6-fixedpoint-cleanup-1019.txt. Engine-state
changes remain in the previously verified command path.


## Conform land-route scope (2026-10-19, 0.10.1)

Confidence C static; ABI/logic exercised through mocks, integrated query
not yet runtime-confirmed. Reference hash and 169 guards pass. Read-only
exports in work/conform-reach-{move,path,policy,abi,cleanup,vtables}-1019.txt.

| Site | VA | RVA = VA - 0x400000 | Contract |
|---|---|---|---|
| Native route query FUN_005B8500 | 0x005B8500 | 0x1B8500 | EAX explicit source CProvince*, stack (predicate*, army*, destination CProvince*, output list*), RET 0x10, AL success |
| Query return ABI | 0x005B8830 | 0x1B8830 | MOV ESP,EBP; POP EBP; RET 0x10 |
| CVerySafePathFind vtable | 0x00E03794 | 0xA03794 | Five slots; native Move's local predicate contains only this pointer; matches existing replace/safe/very-safe command flags |
| Path cleanup FUN_00849E90 | 0x00849E90 | 0x449E90 | ECX output list, no stack args; native allocator frees nodes, clears head/tail/count; Move calls at 0x005DF093 |
| Map-province sea flag read | 0x005B984F | 0x1B984F | FUN_005B9810 reads province+0x5C map pointer, map+0x2A sea flag |

Native call at 0x005DEF0D (RVA 0x1DEF0D) loads EAX from army+0xDC,
pushes army and predicate after destination/output. Our query instead
supplies the candidate recruitment province explicitly, keeping the real
army unchanged. World+0xACC supplies province pointers by id, as before.
Output list has head/tail/count at +0/+4/+8, flag +0xC and extra word +0x10;
nodes hold province id +0, next +8. Query builds path via FUN_005B8450
(VA 0x005B8450, RVA 0x1B8450), removes the start node on success. We do not
call that helper directly. Same-province land cases need no query.

VerySafe checks native land adjacency, diplomatic access and safety. The
additional result scan refuses sea nodes even if embarked movement were
ever accepted. No route/order is stored and no Move is posted by a query.
Cleanup runs on failed and successful queries. A read/query/cleanup fault
refuses recruitment capacity rather than falling back to unrestricted pops.


## Universal independent entry scene order (2026-10-19, 0.10.2)

DoD0.10.1 live log confirms shared-root creation and live catalogue, not
visible controls (user reports missing). Static native show 0x009E4450
(RVA 0x5E4450) sets root+0x67 and inner+0x124; position 0x009E3BA0
(RVA 0x5E3BA0) changes packed position/render translation. Neither reorders
scene siblings. Foreground 0x009E2FC0 (RVA 0x5E2FC0) unlinks inner then
appends to renderer+0x6B9E0. 0.10.2 calls it for hidden entry first show/
reopen, preserving order when already visible. Existing guards suffice.
Native reference fixture now exercises independent entry behind host,
later-dialog preservation and reopen. Live visibility confirmation pending.
Read-only exports work/universal-missing-controls-1019.txt and
work/universal-scene-link-1019.txt. Host hide needs explicit independent
entry hide; this was implicit for the old nested GUI fragments.


## Universal subtree activation (2026-10-19, 0.10.3)

Confidence C static and actual-native fixture execution, not live acceptance.
172 signatures pass. Prior DoD0.10.2 live log confirms entry placement but
user reports failure. Preserved full log in work/universal-dod-0102-failed-1019.

| Site | VA | RVA = VA - 0x400000 | Contract |
|---|---|---|---|
| CGui subtree Show | 0x009E4490 | 0x5E4490 | ECX window+0x18, no stack args; activates control collections and subwindows; sets primary root+0x67 and inner+0x124 |
| CFixedWindow secondary Show/Hide slots | 0x00E3C1DC | 0xA3C1DC | Slots13/14 of table at RVA0xA3C1A8, point to 0x009E4490 / 0x009E4070 |
| CEU3Button Show | 0x009EFEF0 | 0x5EFEF0 | ECX control, sets +0x4F and calls renderer+0xA0 slot13 unless +0x6C suppresses it |

Primary root-only Show (existing RVA0x5E4450) does not activate the above
collections. Native button renderer Show 0x009F9200 (RVA0x5F9200) sets
renderer+0x29; executed in fixture, not directly called in DLL. Reference
fixture maps actual subtree/control/renderer functions and tests hidden
button versus root flags, visible polling, and reopening. Read-only exports:
work/universal-0103-show-tree.txt, show-abi.txt, secondary-vt.txt (the latter
was exported as work/universal-0102-secondary-vt.txt) and button-show.txt.
Runtime wrapper checks the secondary method before calling it. New Show
logic applies only to Universal and on hidden-to-visible transitions.


## Land-flag polarity correction (2026-10-19, 0.10.4)

Supersedes earlier sections calling map+0x2A a sea flag. **It is IS LAND,
nonzero**; zero denotes water. Native FUN_005B9810 (VA0x005B9810,
RVA0x1B9810) handles naval edges: two nonzero endpoints reject, two zero
endpoints proceed, mixed endpoints require the nonzero/land province's
map+0xDC port to match water province id. Branch VA0x005B9864,
RVA0x1B9864; existing guard0x1B984F description corrected, bytes unchanged.

Native function is stack-only five args (army,route_destination,current,
next,edge), RET0x14. Actual reference bytes exercised in isolated fixture,
with blockade and final access virtual predicate mocked permissive:
water-water pass, land-land reject for naval kind, unlinked port reject,
linked ports pass both ways. This independently proves polarity; the old
route wrapper test mirrored the wrong assumption. No new native call
added to runtime. Endpoint and returned-node filters now require nonzero.
Read-only work/conform-land-native-policy-abi-1019.txt and existing
conform-reach-policy-1019.txt; full native suite/172 guards pass.
DoD log proves old rejection18/18, user identifies sources as reachable.
0.10.4 integrated query/recruitment still requires runtime acceptance.
