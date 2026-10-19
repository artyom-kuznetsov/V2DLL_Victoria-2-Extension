#!/usr/bin/env python3
"""Inventory of a TGC version: what the submod takes for granted.

The submod has to work with any TGC version (decision D1). This tool reads a
TGC folder (the one with common/, interface/, events/) and outputs as JSON
what the submod uses from it: ideologies, law groups and their options,
governments, occupied event id ranges, interface files with their hash, and
whether the GUI anchors the generator needs are present.

    python tools/tgc_scan.py <TGC folder> [--out file.json]
    python tools/tgc_scan.py --diff <TGC folder A> <TGC folder B>

With --diff it prints only what changes between two versions (in the
inventory, not in the whole tree: P18). Exits with 1 if an anchor is missing
in any of the folders.
"""

import argparse
import hashlib
import json
import os
import re
import sys

# Event id range reserved for the submod (docs/tgc-compatibility.md §4).
EVENT_RANGE = (420_000_000, 420_999_999)

# GUI elements the submod modifies or hooks next to
# (docs/tgc-compatibility.md §3). file -> names that must exist.
GUI_ANCHORS = {
    "country_politics.gui": ["chart_upper_house", "upper_house", "reforms_tab"],
}

TOKEN = re.compile(r'"[^"]*"|[{}=]|[^\s{}=#"]+')


def parse(text):
    """Paradox script -> list of (key, value); value is a str or a nested list."""
    text = re.sub(r"#[^\n]*", "", text)
    tokens = TOKEN.findall(text)
    pos = 0

    def block():
        nonlocal pos
        items = []
        while pos < len(tokens):
            t = tokens[pos]
            if t == "}":
                pos += 1
                return items
            if pos + 1 < len(tokens) and tokens[pos + 1] == "=":
                pos += 2
                if pos < len(tokens) and tokens[pos] == "{":
                    pos += 1
                    items.append((t.strip('"'), block()))
                else:
                    items.append((t.strip('"'), tokens[pos].strip('"') if pos < len(tokens) else ""))
                    pos += 1
            elif t == "{":
                pos += 1
                items.append(("", block()))
            else:
                items.append(("", t.strip('"')))
                pos += 1
        return items

    return block()


def read(path):
    with open(path, "rb") as f:
        return f.read().decode("cp1252", errors="replace")


def sha(path):
    with open(path, "rb") as f:
        # CRLF and LF mean the same to the game (P1): the hash ignores \r.
        return hashlib.sha256(f.read().replace(b"\r", b"")).hexdigest()[:16]


def scan(root):
    out = {"root": os.path.abspath(root)}
    common = os.path.join(root, "common")

    ideologies = {}
    for group, body in parse(read(os.path.join(common, "ideologies.txt"))):
        if isinstance(body, list):
            ideologies[group] = sorted(k for k, v in body if isinstance(v, list))
    out["ideologies"] = ideologies

    issues = {}
    for group, body in parse(read(os.path.join(common, "issues.txt"))):
        if not isinstance(body, list):
            continue
        for issue, opts in body:
            if isinstance(opts, list):
                names = [k for k, v in opts if isinstance(v, list)]
                issues[f"{group}.{issue}"] = names
    out["issues"] = issues

    out["governments"] = sorted(
        k for k, v in parse(read(os.path.join(common, "governments.txt"))) if isinstance(v, list))

    ids = []
    events = os.path.join(root, "events")
    for name in sorted(os.listdir(events)):
        if name.endswith(".txt"):
            ids += [int(m) for m in re.findall(r"^\s*id\s*=\s*(\d+)", read(os.path.join(events, name)), re.M)]
    clash = sorted(i for i in ids if EVENT_RANGE[0] <= i <= EVENT_RANGE[1])
    out["events"] = {"count": len(ids), "max": max(ids, default=0), "in_reserved_range": clash}

    gui = {}
    missing = []
    iface = os.path.join(root, "interface")
    for name in sorted(os.listdir(iface)):
        if name.endswith((".gui", ".gfx")):
            gui[name] = sha(os.path.join(iface, name))
    for name, anchors in GUI_ANCHORS.items():
        path = os.path.join(iface, name)
        text = read(path) if os.path.exists(path) else ""
        for a in anchors:
            if not re.search(r'name\s*=\s*"%s"' % re.escape(a), text):
                missing.append(f"{name}:{a}")
    out["interface"] = gui
    out["missing_anchors"] = missing
    return out


def diff(a, b):
    changes = []
    for key in ("ideologies", "issues", "interface"):
        da, db = a[key], b[key]
        for k in sorted(set(da) | set(db)):
            if da.get(k) != db.get(k):
                changes.append(f"{key}.{k}: {da.get(k)} -> {db.get(k)}")
    if a["governments"] != b["governments"]:
        changes.append(f"governments: {a['governments']} -> {b['governments']}")
    for side, s in (("A", a), ("B", b)):
        if s["events"]["in_reserved_range"]:
            changes.append(f"{side}: events in the reserved range {s['events']['in_reserved_range']}")
        if s["missing_anchors"]:
            changes.append(f"{side}: missing anchors {s['missing_anchors']}")
    return changes


def main():
    sys.stdout.reconfigure(encoding="utf-8")  # P3
    ap = argparse.ArgumentParser()
    ap.add_argument("roots", nargs="+")
    ap.add_argument("--diff", action="store_true")
    ap.add_argument("--out")
    args = ap.parse_args()

    scans = [scan(r) for r in args.roots]
    bad = any(s["missing_anchors"] or s["events"]["in_reserved_range"] for s in scans)

    if args.diff:
        if len(scans) != 2:
            ap.error("--diff needs two folders")
        changes = diff(*scans)
        print("\n".join(changes) if changes else "no differences in what the submod uses")
    else:
        text = json.dumps(scans[0] if len(scans) == 1 else scans, indent=1, ensure_ascii=False)
        if args.out:
            with open(args.out, "w", encoding="utf-8") as f:
                f.write(text)
        else:
            print(text)

    print("tgc_scan: anchors and range OK" if not bad else "tgc_scan: MISSING anchors or events in the reserved range")
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
