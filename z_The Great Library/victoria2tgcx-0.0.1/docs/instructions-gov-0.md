# GOV-0 — The 1836 rulers and generals: the data

> Step-by-step instructions (written 2026-10-12). Decision D4: both
> (rulers and generals), starting with those who existed in 1836. Design of
> the mechanic: `docs/technical-plan.md` §5. This card is **data only**; the
> mechanic is GOV-1 (script) and GOV-2 (DLL). **Mockup (R10):** board
> **Ruler** (head of state portrait and traits; generals and admirals list)
> in <https://claude.ai/artifact/Wt2YTaaM6xV8JXsUwapRV4>: the portrait sizes
> and fields collected here are the ones it shows. TGC's political leader
> system to attach to: `docs/tgc-howto.md` §3.

**Why:** the mechanic is worthless without the real names and portraits.
Collecting them is data work, with no RE, and it can run in parallel with
everything else.

**Does not touch:** `submod\` (the data goes to `data\`, where the
generator will take it from), `dll\`, the game.

---

## What already exists (measured 2026-10-12, TGC v2.5.2)

- **297 historical generals and admirals** in `history\units\*_oob.txt`
  (dates up to 1836).
- Only **75** declare `picture`: **44** with their own portrait
  (`eng_gen_raglan`, `net_adm_rijk`…) and 31 with a generic one
  (`arab_general_4`). The other **222** get a random generic one by culture
  group.
- TGC has 223 portraits in `gfx\interface\leaders\` (45 of its own).
- **Rulers: they do not exist** in Vic2 or in TGC.

## Step 1 — 1836 rulers

Source: Wikipedia, *List of state leaders in the 19th century (1801–1850)*
(by continent; each country with "Name, Title (years)"), and for each
person their Wikidata item (date of birth, image `P18`).

1. Country list: the TGC tags that exist in 1836
   (`history\countries\*.txt` with `capital` and not commented out with
   `#`) and their name in TGC's `localisation\`.
2. For each country: head of state on **1836-01-01** (and head of
   government if the country had one: prime minister, grand vizier…).
   Store in `data\rulers_1836.csv`:
   `tag;office;name;born;start;end;wikidata;source`.
3. Successors up to, say, 1850 in a second pass (not in GOV-0).
4. Those not found: a row with an empty `name` and the reason. **Do not
   invent** (rule V6 applied to data).

## Step 2 — Generals without their own portrait

Of TGC's 297, list the 253 without their own portrait in
`data\generals_1836.csv`: `tag;name;type;current_picture;wikidata`. Look
each one up in Wikidata (name + "military officer" + country).

## Step 3 — Portraits

1. For each person with `P18`: the Wikimedia Commons file. A portrait of
   someone alive in 1836 is a 19th-century painting or engraving: **public
   domain** almost always; record the licence Commons states anyway
   (`licence` column).
2. Download to `E:\v2re\portraits\originals\` (outside git: it is many MB).
   Ask the user for permission before the bulk download, with the count
   and the estimated size.
3. Convert to the format of TGC's leader portraits: measure one first
   (`eng_gen_raglan.dds`: size, DXT format) and repeat that. Style: face
   crop, same framing as TGC's.

## Step 4 — Summary

How many countries with a ruler found, how many with a portrait, how many
generals with a new portrait. Whatever is missing stays listed.

---

## Gate (done when)

1. `data\rulers_1836.csv` covers at least the great powers and the
   secondary powers of 1836 (TGC's top 16 by prestige), with a source on
   every row.
2. `data\generals_1836.csv` with the 253 without their own portrait and
   their search done (found or not).
3. No data without a source.

## Delivery

Report `docs/report-gov-0-MMDD.md`: coverage, licences, what was not found,
and the proposed format of `common\tgcx_rulers.txt` for GOV-1.
