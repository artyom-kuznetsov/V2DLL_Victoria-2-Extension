# Technical plan: how each mechanic is built

> **Reference.** Written on 2026-10-12, before opening Ghidra in depth:
> what says "RE pending" is what card GH-2 has to find. The current status
> and numbers are in `ROADMAP.md` §1; what is done now, in `NEXT.md`. The
> rules (R1-R10) are in `AGENTS.md` §2.

---

## 1. The shared part: the DLL and the bridge with the script

Everything script cannot reach (P11) goes through a DLL loaded as a proxy
of `lua51.dll`: the game loads `lua51.dll`, ours exports the same functions
forwarding to the original (`lua51_real.dll`) and, on load, installs its
patches. It is the V2DLL technique. **D6 (closed):** our own DLL, which may
use V2DLL code marked `// from V2DLL: <file>` (R8); first step in
`docs/instructions-dll-0.md`.

Pieces, in the order they are needed:

| # | Piece | What it does | RE | Mechanics |
|---|---|---|---|---|
| 1.1 | Proxy + log | forwards the Lua exports, opens `Logs\tgcx.log` | none | all |
| 1.2 | Installer with signatures | every patch carries its expected bytes; if they do not match, it is not installed (R6) | none | all |
| 1.3 | Per-frame tick | 0.2.4 uses guarded final engine Present for paused/menu sampling; DLL-0 conditional time-advance hook retained only in fixtures | runtime-confirmed (U-5); P25 | all |
| 1.4 | Custom drawing | 0.2.4 draws D3D9 primitives within the native ordered GUI pass, after the named upper-house overlay; final Present does not draw | runtime-confirmed hemicycle prototype; P28 | charts, hemicycle, rulers |
| 1.5 | Which window is open, and where? | Politics show/hide/destructor hooks, root visibility/absolute coordinates and named overlay identity | runtime-confirmed for Politics; other views need their own evidence | charts, hemicycle, rulers |
| 1.6 | Read script variables | `CCountry+0x1DC` `CVariables`, `vtable[1]` = `Find(std::string)` | done (V2DLL §4.7) | rulers, templates |
| 1.7 | The player's country | `g_world+0xAEC` vector of humans | done (repo, `World`) | all |
| 1.8 | Our own per-save file | store next to the save what the engine does not save (chart history) | **pending**: the save's name and the moment of saving/loading | charts |
| 1.9 | Send an engine command | LAW-2 invokes the native decision click path, which queues CExecuteDecisionCommand (R5) | static/fixture evidence; actual Bill Count pending U-7 | law GUI; other command types still pending |

**Script → DLL bridge:** the script writes country variables
(`set_variable = { which = tgcx_ruler value = 17 }`), which are stored in
the save and synchronised in MP; the DLL reads them (1.6) and only draws.
That way the logic (and the randomness) lives in the script and the DLL
does not change the game.

**DLL → script bridge:** the executable has `CSetVariableCommand`,
`CSetFlagCommand` and `CExecuteDecisionCommand` (RTTI, 2026-10-12): engine
commands, that is, synchronised in MP. If the DLL learns to create one
(1.9), a DLL button can write a variable or execute a hidden decision, and
the script makes the real change. This greatly reduces what the DLL needs
to know about the engine: almost everything that **changes** the game stays
in script, and the DLL needs only **one** well-understood command. V2DLL
already executes decisions from its buttons (`MakeDecision`, §5.1-5.2 of
its `PATCHES.md`): that is the starting point for GH-4.

---

## 2. Law negotiation — script (N0), no DLL

Primitives Vic2 script provides: `upper_house = { ideology = X value = Y }`
(moves the upper house), `political_reform = <option>` and
`social_reform = <option>` (pass a law without a vote), `treasury`,
`prestige`, `badboy`, militancy and consciousness by ideology, expiring
flags. TGC already uses `upper_house =` in 347 places.

> **D7 closed (2026-10-12) and revised the same day:** design C (staged,
> like Better Politics Mod) was chosen first; the user disliked the
> stalling and switched to **political favours and ideological affinity**,
> deterministic, which takes buying from A and promises with punishment
> from B. The current design is in `docs/law-design.md`; the staged one, in
> `docs/archive/law-design-v1-stages.md`. The table below stays as the
> rationale.

Three designs shown to the user:

| | Design | How it plays | Cost |
|---|---|---|---|
| A | **Buy support** | a decision "negotiate with the liberals": moves the upper house towards that ideology for a while, in exchange for money or prestige; cooldown with a flag | 1 session |
| B | **Concessions** | to pass law X, party Y asks for something in return (another law, a party policy change); if accepted, the law passes with `political_reform`; if the promise is later broken, militancy | 2 sessions |
| C | **Staged negotiation** | an event chain with options (offer money, offer a social law, apply pressure); each option changes the probability and the price; in the end it passes or fails | 2-3 sessions; builds on A |

**Compatibility:** decisions are not written by hand per law. A generator
(in the submod, N0: our own files) produces them from the law inventory of
the installed TGC version (`tgc_scan.py`: 49 groups in v2.5.2, with TGC's
own such as `conscription`, `debt_law`, `centralization`). A law that does
not exist in that version simply has no decision.

**Engine variant (optional, later):** make the reform button in the
politics window respect the negotiation. RE pending: the function that
decides whether a reform can be voted (`CIsNextReformTrigger`, the
`CPoliticsView` click and the command it sends:
`CSetPoliticalReformCommand`, `CSetSocialReformCommand`,
`CSetEconomicReformCommand`, `CSetMilitaryReformCommand`).

---

## 3. More economy charts

**3A — outside the game (no RE).** Read the save files (text) and plot
series: approximate GDP, treasury, industrial score, prices, population by
type, employment. TGC already ships a save analyser in Python
(`Save_Game_Analyzer`, to CSV) that serves as a starting point for
understanding the format. Output: an HTML page with charts. Limitation:
there is data only for days with a save (the monthly autosaves are
enough).

**3B — inside the game.** The DLL samples once per day (the `CountryDaily`
that V2DLL already hooks at RVA `0x109F74`): treasury (`+0xE78`),
industrial score (`+0x198`), population (`+0x12E8`), market prices
(documented in the repo's `Economy\`). It stores them in the save's own
file (1.8) and draws them with 1.4 when the budget or trade window is open
(1.5).

RE pending: 1.5 (position), 1.8 (save/load). The economy itself is the
best documented part of the repo.

**Recommendation:** 3A first (useful now, zero risk), 3B once 1.4 and 1.5
exist.

---

## 4. Hemicycle

The current chart is `chart_upper_house` (the engine's pie type) in
`country_politics.gui`; it cannot be turned into a hemicycle through the
GUI (P11).

1. **Data** — **found in the code on 2026-10-12** by following
   `CUpperHouseTrigger`'s `Evaluate`: `CCountry+0x8B0` is the upper house
   and at its `+0x10` there is an `int64[]` with each ideology's share
   (index `CIdeology+0x28`, 2¹⁵ fixed point). `docs/symbols.md`. It still
   was core-confirmed in U-4 (83/5/12%, quantized sum 32767). Vector end
   `+0x14`, name lookup and colour fields were confirmed in code during
   DLL-1/HEMI-1; complete live mapping/bounds/colours were confirmed in the 0.2.1 live inspection.
2. **Seats:** N seats (configurable, e.g. 100) apportioned by largest
   remainder. Build 0.2.0 implements the mockup's fixed 100; indices and
   normalized RGB are read from the loaded engine ideology objects, using
   names generated from installed TGC v2.5.2 (never file-order indices).
3. **Drawing:** route A, read-only primitives, placed within the native
   ordered UI pass immediately after `chart_upper_house_overlay`. The
   original pie/overlay draw normally, then are covered only after guarded
   replacement succeeds. Later windows/tooltips can occlude the chart.
4. **Tooltip:** retain the engine's ideology tooltip and native legend.
   The separate seat-count tooltip was removed in 0.2.4 to eliminate
   duplicate boxes; HEMI-3 0.2.6 maps seats through verified native scalar bounds and slice
   helpers; the native caller retains tooltip construction/ownership and
   structured slot 10 (P27). User confirms 0.2.6 hover works in game.

**2026-10-12 implementation:** 0.2.3 was confirmed displaying by the user,
with a layering defect. 0.2.4 now works in game (U-5 functional checkpoint);
user notes clunky appearance. HEMI-2 0.2.5 adds a feathered cover, softer
seat edges and political left-to-right wedges. Built/installed with automatic
gates passed; user confirms it works in game. Chart tooltips still follow
old pie regions (P30) in that accepted build. HEMI-3 0.2.6 implements native
scalar seat hover, accepted by the user with all three UK mappings in the
runtime log. 0.2.8 clips the cover/feather to the actual native header
border (first background row y=101, P32), with scissor state restored;
accepted in game (`report-law-1-start-1012.md` section 1). Extended
integration coverage remains outstanding. See `report-hemi-2-build-1012.md`. Final Present supplies paused sampling only; draw
at the native chart stage inside the existing scene, preserving state.
No `.gui` override is required. `docs/report-dll-12-layering-fix-1012.md`
records the native evidence and mockup differences;
`docs/report-u-5-1012.md` records user acceptance and current limitations.

It does not change the game: it is read-only (R5 holds by itself).

---

## 5. Rulers with portraits

**D4 closed (2026-10-12): both**, starting with those who existed in 1836:
**heads of state/government** (new) and **generals and admirals** (they
already exist: TGC ships 223 portraits by culture group, `picture = …` in
`history\units`, and the engine generates random ones). The data is GOV-0
(`docs/instructions-gov-0.md`): 297 historical leaders in TGC v2.5.2, 44
with their own portrait.

**5A — script (N0).** Model in country variables and flags: `tgcx_ruler`
(ruler id), `tgcx_ruler_age`; traits as event modifiers
(`event_modifiers.txt` generated, N1); succession by events with
`mean_time_to_happen` depending on age; historical rulers as events by
country and date, with the event picture as the portrait (P11: the picture
is only seen in the event). Randomness comes from the script, which is
synchronised in MP.

Script limit: there is no dynamic text, so a **random** ruler cannot have
a visible name of their own without the DLL (only one from a fixed list,
with one event per name).

**5B — DLL.** Reads `tgcx_ruler` (1.6), looks it up in a submod file of our
own (`common\tgcx_rulers.txt`: id → name key, portrait, traits) and draws
portrait and name in the politics window (1.4 + 1.5). Random rulers: the
script picks the id with its randomness; the DLL generates name and
portrait deterministically from the id and the culture (same input → same
result on every client).

Art: ruler portraits do not exist; either generals' portraits are reused
as placeholders, or art has to be found or made (the user's decision when
we get there).

---

## 6. Army templates (the most expensive)

Tooling candidate suggested by the user on 2026-10-12:
`docs/rea-for-templates.md` records REA's possible use for GH-4. Verify
Windows **x86** support for the exact release before adoption; it is not
installed and does not replace command-system evidence or the R5 gate.

There is no clean script effect to recruit the player's brigades: it is all
DLL.

1. **RE** (GH-2/GH-4): `CBuildUnitView` (the recruitment window), the
   format of `CConstructUnitCommand` (province, pop, unit type) and **how a
   command is sent** (1.9) so that MP receives it identically (R5). Rules
   for which pop can provide a brigade (size, culture, pop type per unit).
2. **Storing the templates**: as country variables (`tgcx_tpl1_<unit> =
   3`), which are stored in the save and synchronised; edited with
   decisions or, better, with a DLL window.
3. **Recruiting**: a button in the recruitment window (or the state window)
   that expands the template into N `CConstructUnitCommand` commands,
   choosing valid pops.

Estimate: several weeks of RE before the first brigade. It goes last.

---

## 7. Overall order

| # | Stage | Depends on | Sessions (estimate) |
|---|---|---|---|
| 0 | Infrastructure: downloads, Ghidra, gates, docs | — | done (2026-10-12) |
| 1 | Submod skeleton + loading + version matrix (SUB-0, COMPAT-0) | 0 | 1 |
| 2 | Law negotiation by script (LAW-*) | 1 | 1-3 |
| 3 | Charts outside the game (ECO-A) | — | 1 |
| 4 | Ghidra: RTTI, symbols and the pending subsystems (GH-*) | 0 | ongoing |
| 5 | DLL base: 1.1-1.5 (DLL-*) | — | 2 |
| 6 | Hemicycle | 4 (data), 5 | 1-2 |
| 7 | Charts in game (ECO-B) | 5, 1.8 | 2 |
| 8 | Rulers and generals: data (GOV-0), script, DLL | GOV-0: —; the rest: 1, 5 | 2-3 |
| 9 | Army templates | 4 (commands), 5 | many |

---

## 8. What NOT to do

- Decompile everything before starting: each subsystem with its card.
- Write game fields from the DLL (R5): to change something, script or an
  engine command.
- Draw the new GUI by copying a TGC `.gui` (R3).
- Call a mechanic done without testing it in game (`AGENTS.md` §11).

---

## 9. Feasibility of the mockups and the interface route (D9)

> Added on 2026-10-12, after the mockups (the user's private artifact,
> outside the repo: `docs/README.md`, "Outside the repository"). The five
> screens: Politics with hemicycle, Negotiation, Ruler, Economy and
> Templates.

**Conclusion:** no mockup hits a known engine limit. Almost all of the cost
is in the **interface**: the logic is written in script (except templates),
but the Vic2 GUI cannot show variable numbers or names (P11), so everything
seen in the mockups goes through the DLL.

### 9.1 Two routes for the interface

| Route | How | For | Against |
|---|---|---|---|
| **A. Draw on top** (1.4) | hook on D3D9 `Present`; drawn with the game's sprites and BMFont fonts, as the mockups do | proven by V2DLL; what is in the mockups carries over almost as is (atlas + game fonts) | sits on top of everything, including the game's tooltips and events; the mouse has to be captured (`WndProc` hook) and we must know where each window is |
| **B. Real game elements** (N1 + N2) | a generated `.gui` (R3) adds frames, buttons and text boxes inside existing windows; the DLL hooks the clicks and changes texts and frames | full integration: the engine handles layers, tooltips and clicks | buttons are proven (`CButtonObserverGlue`, V2DLL §5.1); **changing text and frame on the fly (N2) has not been studied** (`AGENTS.md` §4) |

Window position is not a big unknown for A: the country views are fixed
relative to the screen centre and the `.gui` gives the offset (e.g.
`country_budget` at `(-512, -250)` from the centre, 1024×632). It still
has to be confirmed with the game at several resolutions (1.5).

**D9 closed (user, 2026-10-12): hybrid, case by case.** There is no global
rule: each element of each screen chooses A or B, and the card that
implements it writes down the choice and the reason in its instructions. If
an element's B version turns out expensive, that element moves to A without
dragging the others.

Criteria, in this order:

1. **What the engine cannot draw goes in A**: line charts, hemicycle, pies
   with more than `chart_*` gives, portraits that change with state. It is
   drawn inside a gap left by the generated `.gui`, so the frame is still
   the game's.
2. **Static things go in B, without the DLL**: frames, backgrounds, titles
   and fixed labels come from the generated `.gui` and localisation (N1).
3. **Buttons: B** (`CButtonObserverGlue`, already proven). In A only if the
   button lives inside an area drawn in A (e.g. a point on the chart).
4. **Changing text** (numbers, names): B if N2 is already solved for text
   boxes; otherwise A. This is the case that depends most on the first
   test (9.3).
5. **Anything that has to appear above or below the game's tooltips,
   events or other windows** weighs in favour of B, because A is always on
   top.

Initial choice per screen (each card confirms or changes it):

| Screen | B (game element) | A (drawn by the DLL) |
|---|---|---|
| Politics + hemicycle | "negotiate" quills (buttons) | hemicycle and its tooltip |
| Negotiation | child window, frames, buy and promise buttons | projected seats; numbers per criterion 4 |
| Ruler | frame, labels | portrait, name, traits (per criterion 4) |
| Economy | budget background, tabs, buttons, papers | charts, pies, flags and numbers per criterion 4 |
| Templates | recruitment window buttons | template list, if N2 falls short |

New windows (Negotiation, Economy): the engine only creates the windows it
knows. For B, the new window goes as a child `windowType` inside the
generated `.gui` of an existing view (politics, budget) and the DLL shows
or hides it; we must confirm that the engine creates those children and
where `CGuiObject`'s visibility flag is (RE, GH-2).

### 9.2 Mockup by mockup

| Mockup | Logic | Interface | RE missing | Feasibility |
|---|---|---|---|---|
| Politics + hemicycle | none (read-only) | hemicycle drawn (§4); the "negotiate" quills are buttons in the generated `country_politics.gui` | confirm `CCountry+0x8B0` at run time (§4) | **high**; it is the cheapest test of the visual route |
| Negotiation | script: favours in variables, stance by affinity, purchases through decisions, the law passes with `political_reform`/`social_reform`, debts as flags with a deadline (`docs/law-design.md`) | new panel; every click changes the game, so it goes through an engine command (R5, 1.9); V2DLL already executes decisions from buttons | 1.9; N2 or everything in A | **medium-high**; without the DLL it still plays with decisions and events, without numbers on screen |
| Ruler | script (§5A) | portrait, name and traits drawn by the DLL (§5B) | nothing new; the art is GOV-0 (44 portraits exist) | **medium-high** |
| Economy | read-only | budget background and texts; charts drawn; opened from the top-bar chart (our own button) | factory, RGO and artisan income and spending in memory (in the save: `last_income`/`last_spending`) for GDP; 1.8 for the history. Treasury, industrial score, population and the country list are already there | **medium**; shortcut without RE: GDP outside the game from the autosaves (§3A) |
| Templates | all DLL (§6) | recruitment window with buttons | `CConstructUnitCommand`, 1.9, rules for which pop provides each brigade | **medium-low**; weeks of RE |

The mockup's GDP is the one from the analyser TGC ships
(`Save_Game_Analyzer`, `Country.py`): factories `(last_income -
last_spending) × 365`, RGO `last_income × 365`, artisans
`production_income - last_spending` **without** `× 365`. That difference
looks like a bug in the analyser; the user is asked before copying it.

### 9.3 Order and bottleneck

1. SUB-0 and LAW-* by script: playable without the DLL.
2. DLL-0 and the **hemicycle**: validates drawing, locating the window and
   reading data in one go; N2 is also attempted with a text in the politics
   window, which decides D9's criterion 4 for every screen.
3. Economy, which is almost read-only.
4. Rulers.
5. The full negotiation window (needs 1.9).
6. Templates.

Estimate: the same as §7 (12-18 sessions without templates). The
bottleneck is not technical: the agent cannot run the game, so every step
that touches memory or the interface waits for the user's test
(`AGENTS.md` §11). The risk to the user's game is low: every patch checks
its bytes (R6) and the script works without the DLL.

LAW-2 checkpoint (2026-10-13): generated native Bill child, labels and buttons use route B; projected seats use route A after their named native marker. Final Present updates GUI data only. 0.3.0 installed, not tested in game; full controls and automatic favours remain unfinished. See `report-law-2-bill-1013.md` and `instructions-law-2.md`.
