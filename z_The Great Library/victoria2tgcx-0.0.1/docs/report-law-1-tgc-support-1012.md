# LAW-1 - TGC reform support inspection

2026-10-12. Read-only inspection of the installed TGC v2.5.2 and base-game
scripts. LAW-1 remains in progress; no catalogue preview has been installed.

## 1. What the scripts actually specify

Primary sources, outside git:

- `E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod\TGC_v2.5.2\TGC\common\ideologies.txt`
- `E:\Victoria.II.v3.04.Inclu.ALL.DLC\common\ideologies.txt`
- TGC `common\issues.txt` and `history\countries\ENG - United Kingdom.txt`.

The ideology files define support separately for adding/removing political
and social reforms. They do not contain an ideal option for every law group.
TGC's issue definitions supply option order, effects and target `allow`
conditions. Country party definitions supply party policies, a different
system from upper-house reform support. The proposed TGCX affinity table is
our negotiation design, not an extraction of TGC's native support rules.

| TGC bloc | Adding political reforms | Adding social reforms | Removing reforms |
|---|---|---|---|
| Conservative | Base 0; pressure thresholds below | Base 0; pressure thresholds below | Base 0 for both categories |
| Reactionary | Base 0 | Base 0 | Base 1 for both categories |
| Tribalist | Base 0 | Base 0 | Base 1 for both categories |
| Fascist | Base 1, with a -1 modifier unless the ruling party is Fascist | Same | Same condition for both categories |
| Anarcho-Liberal | Base 1 | Base 1 | Base 1, with a -1 modifier unless the ruling party is Anarcho-Liberal |
| Liberal | Base 1 | Base 0; pressure thresholds below | Base 0 for both categories |
| Anarchist | Base 1 | Base 1 | Base 0 for both categories |
| Communist | Base 0; pressure thresholds below | Base 1, with a -1 modifier unless the ruling party is Communist | Political base 1; social base 0 |
| Socialist | Base 0; pressure thresholds below | Base 1 | Base 0 for both categories |

Each pressure clause is an OR: its militancy threshold **or** its relevant
movement-strength threshold can satisfy it. The numbers below are literal
script thresholds and factors, not a measured native percentage formula.

| Bloc/category | Militancy thresholds | Corresponding movement-strength thresholds | Factor per matching clause | TGC file lines |
|---|---|---|---|---|
| Conservative/political | 3, 5, 6, 7, 8, 9 | .3, .5, .6, .7, .8, .9 | .1 | 10-62 |
| Conservative/social | 2, 3, 4, 5, 6, 7 | .2, .3, .4, .5, .6, .7 | .1 | 67-114 |
| Liberal/social | 4, 5, 6, 7, 8, 9 | .4, .5, .6, .7, .8, .9 | .1 | 261-307 |
| Communist/political | 8, 9, 9.5 | .7, .8, .9 | .3 | 348-373 |
| Socialist/political | 1 through 9 | .1 through .9 | .1 | 395-462 |

The Conservative political 4/.4 clause is commented out in TGC. It must
not be restored accidentally by assuming a regular sequence.

## 2. Differences from the installed base game

Vanilla Conservative political/social and Liberal social support each
have pressure clauses starting at 1/.1, continuing through 9/.9. TGC
raises their starting thresholds and removes some upper thresholds.

Vanilla Anarcho-Liberal add-political and add-social bases are both 0;
TGC sets both to 1. Vanilla Communist political support is a constant 0
and social support a constant 1; TGC adds political pressure clauses and
the ruling-party condition on social support. TGC adds Anarchists and
Tribalists. These differences make importing a remembered vanilla table
unsuitable for this project.

## 3. Implications for LAW-1

The reviewed ideals remain valid as approved negotiation preferences.
However, interpreting them as every member's automatic vote would discard
TGC's pressure and ruling-party rules. The clearest conflict is the
approved Anarcho-Liberal preference for no welfare versus TGC's constant
add-social base of 1. Conservative status quo also cannot reproduce their
conditional willingness to reform.

Recommended change for user review, not yet adopted:

1. Derive each bloc's **starting yes share** from TGC's applicable
   add/remove political/social rule, evaluated for the current country and
   proposed reform. The remainder starts as no. Re-evaluate at count/vote.
2. Keep the reviewed per-law affinities for bargaining prices, strength of
   resistance and promised-law obligations. Affinity does not replace the
   starting support fraction.
3. Favours move available opposing seats to abstention or yes; promises
   secure the remaining bloc. Never charge for a seat already voting yes
   or count the same seat twice. Preserve the agreed quorum and Crown.
4. Import target `allow` conditions and recheck the starting law,
   government, chamber and target restrictions before enactment.

This changes D7's projected-vote formula in `law-design.md` sections 3-4,
so AGENTS.md R9 requires the user's choice. No mechanic/mockup change
has been made while that choice is pending. If adopted, update the Bill
mockup in the implementation session as required by R10.

## 4. Evidence limits and implementation gates

The scripts establish the conditional rules and their differences from
vanilla. This inspection did not establish the engine's exact arithmetic
for `group` modifiers, clamping, movement-strength scope or fixed-point
rounding. Confirm those with bounded native research or an in-game
comparison before claiming numerical parity. Do not invent a percentage
formula from the presence of `factor` alone.

The current catalogue preview still uses affinity-only votes. Its tests
verify that implementation, not parity with TGC's native support. It
must not be installed as the recommended dynamic model.

Independent five-seat rounding across nine blocs can also produce a
total other than 100. Resolve allocation and test chamber conservation
before release, together with fractional starting support if adopted.

No DLL, engine address, TGC file or installed submod was changed for this
inspection. No third-party source file was copied into the repository.
