# TPL-2 - Replace regiments lost to rebellion automatically

2026-10-17. **On hold** (user, same day): "The conform to template button
already does that". After rebels take regiments, Conform (TPL-1) rebuilds the
missing ones. Reopen only if the user asks for it to happen without a click.
Kept for reference: requested earlier the same day; not designed and not
researched. Read AGENTS R1-R10, D12, NEXT, the TPL-0 reports and
`symbols.md` before starting. Do not delegate, commit, push or control the
game unless the user asks.

## Request

The user's words: "a feature where units, where units rebel, get auto
replaced". In Victoria II, when the pops behind a regiment rise up, that
regiment leaves the country's army and joins the rebels. The army is left
one regiment short. The feature recruits a replacement automatically.

## Open questions [user] (R9: ask before designing)

1. **What counts.** Only regiments that defect to rebels? Or also
   regiments destroyed by rebels, or disbanded because their pop
   disappeared?
2. **Where the replacement comes from.** The same province from another
   eligible pop, or any province with free soldier pops, as TPL-0's
   recruit-what-fits does? What if none is available: retry later, or
   report and drop it?
3. **Fully automatic or confirmed.** Recruit silently, or post a message
   with an option to cancel? Is there a per-army or global on/off switch?
4. **Where it goes.** Stay in the province where it was built, or march
   and merge back into the army it replaced? The second depends on TPL-1's
   move/merge commands.
5. **Cost and limits.** Normal recruitment cost and time. Cap the number
   of replacements per month?

## Constraints known now

- R5: replacements only through `CConstructUnitCommand` (TPL-0's verified
  path). Moving and merging only through engine commands (TPL-1). No
  direct writes to units.
- R6: without the DLL nothing happens. A script fallback is possible only
  if a rebellion event or on_action can recruit, which needs checking in
  `docs/scripting-reference.md` and TGC's own rebel handling first.
- Player country only. D5: multiplayer later, but command-only keeps it
  compatible.

## First steps (when selected)

1. Ask the open questions above. Update the Templates mockup board if the
   answer adds interface (R10).
2. Read-only research: where a regiment's defection to rebels happens. The
   pop/regiment link and the country unit list at `CCountry+0x7B4/7B8/7BC`
   (C) are known. Find out whether there is a hook point, or whether the
   regiment's type and home province can be recorded before it leaves.
3. Reuse TPL-0's recruit planner for the replacement and TPL-1's
   march/merge planner where needed. Write fixtures, a report and a U-card.
