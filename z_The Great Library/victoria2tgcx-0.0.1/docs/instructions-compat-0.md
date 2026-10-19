# COMPAT-0 — TGC version matrix

> Step-by-step instructions (written 2026-10-12). Card in `SUBAGENTS.md`
> §4. Design: `docs/tgc-compatibility.md` §5.

**Why:** D1 asks for compatibility with any version. Today two nearby
versions were measured (v2.3.4 and v2.5.2) and what the submod uses barely
differs. We still need to know how much what the submod uses moves in
distant versions and in what is coming (`master`), and to have a gate that
goes through all of them at once.

**Does not touch:** the user's `mod\TGC` or `mod\TGC_v2.5.2` (R1);
`submod\`.

---

## Step 1 — Reference clones, outside `mod\`

The measurement versions do not go into `mod\` (they are not for playing):

```bash
mkdir -p /e/v2re/tgc && cd /e/v2re/tgc
for v in master v2.0.0 v1.0.0; do
  git -c core.autocrlf=false clone --depth 1 --branch $v \
    https://github.com/The-Grand-Combination/The-Grand-Combo $v
done
```

Always `core.autocrlf=false` (P1). Check with `git ls-files --eol | head`.
If an old tag has no `TGC\` folder (the repo layout may have changed), note
where the mod is in that version.

## Step 2 — `tgc_scan.py --matrix`

Add the `--matrix <folder>...` mode: one row per version and one column per
thing the submod uses (number of ideologies, law groups, governments, the
hash of each `.gui` in `GUI_ANCHORS`, missing anchors, events in the
range). It prints the table in Markdown and exits with 1 if any version
fails. The current modes (`--diff`, a single folder) do not change.

When touching `tgc_scan.py`, check that `--diff` on v2.3.4/v2.5.2 still
gives exactly what `docs/tgc-compatibility.md` §6 says.

Remember P18: `--matrix`, like `--diff`, only sees the inventory. To know
whether two versions differ at all, use `diff -rq --strip-trailing-cr`.

## Step 3 — Measure

```powershell
python tools/tgc_scan.py --matrix E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod\TGC `
  E:\Victoria.II.v3.04.Inclu.ALL.DLC\mod\TGC_v2.5.2\TGC E:\v2re\tgc\master\TGC `
  E:\v2re\tgc\v2.0.0\TGC E:\v2re\tgc\v1.0.0\TGC
```

For the differences that show up between distant versions, run `--diff`
between neighbouring pairs to see what was renamed.

## Step 4 — Decide the official matrix (proposal to the user)

With the numbers: which versions go into the everyday gate (the user's, the
stable one, `master`) and which are only measured now and then. If the 1.x
versions change law names a lot, propose a floor ("compatible from
v2.0.0") and ask: D1 says "any version" and narrowing it is the user's
decision (R9).

---

## Gate (done when)

1. `--matrix` runs on the 5 folders and the table is in the report.
2. `--diff` v2.3.4/v2.5.2 the same as before.
3. `ROADMAP.md` §2 with the new rows (the coordinator does this).

## Delivery

Report `docs/report-compat-0-MMDD.md`: the table, what moves between
versions, the proposed matrix and floor.
