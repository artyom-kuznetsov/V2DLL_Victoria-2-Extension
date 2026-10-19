# TPL-6 - Consider continent selection in the template builder

2026-10-19. User suggests "perhaps specifying which continent" to recruit
in from the template builder. Prospective follow-up after TPL-5; design
and implementation are not yet settled. Do not block culture buttons on it.

1. Read NEXT.md and inspect accepted Universal builder, culture filtering
   and live recruitment snapshot. Preserve the same package across mods.
2. Research the running game's continent identity/membership and labels;
   mods can change them. Verify native fields/signatures before use, record
   evidence, and use existing cached engine data where possible. No fixed
   vanilla continent list and no per-click parsing of all mod TXT files.
3. Prepare a concrete native selector proposal in the template builder:
   default unrestricted geography, named continent choices drawn from the
   active game, clear eligibility/shortage summary. Decide whether preference
   belongs per template or per recruitment action; present that choice if
   it materially affects behavior. Keep culture and unit page controls clear.
4. Geographic continent membership is not land connectivity. Preserve
   D17 Conform land reach. Explain any proposed Conform interaction before
   extending a builder-only selector to it; never route armies across sea
   automatically or silently override the selected recruitment restriction.
5. If selected for implementation, update visual references, filter shared
   preview/action eligibility and add dynamic-mod/empty-continent/shortage/
   persistence/culture-intersection cases. Use engine commands only.
6. Build/check/stage, preserve rollback, install only after fresh confirmed
   normal exit and process gate, then user runtime acceptance and report.
   No release, game launch/exit or external contact on user's behalf.
