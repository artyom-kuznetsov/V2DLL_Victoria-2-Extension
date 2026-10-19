"""Army metadata from a base's effective unit files, never a fixed TGC list."""
from pathlib import Path
import re

from tgc_scan import parse, read
from tgcx_bases import Base, LINE

PREFERRED = "infantry guard irregular artillery engineer cuirassier dragoon hussar cavalry tank plane".split()
ABBREVIATIONS = dict(zip(PREFERRED, "Inf Gds Irr Art Eng Cui Dra Hus Cav Tnk Air".split()))


def profile_for(folder):
    folder = Path(folder).resolve()
    game = next((p for p in (folder, *folder.parents) if (p / "v2game.exe").is_file()), None)
    if game is None:
        raise ValueError(f"cannot find the game containing {folder}")
    base = Base(game)
    if folder != game:
        base.root = folder
        for descriptor in sorted((game / "mod").glob("*.mod")):
            fields = LINE.findall(read(descriptor))
            paths = [v for k, v in fields if k == "path"]
            if paths and (game / paths[0]).resolve() == folder:
                base.replace = [v.strip("/\\").replace("\\", "/") for k, v in fields if k == "replace_path"]
                break
    return base


def units(folder, profile=None):
    base = profile or profile_for(folder)
    found = {}
    for path in sorted(base.files("units", "*.txt").values()):
        for key, body in parse(read(path)):
            if not isinstance(body, list):
                continue
            data = dict(body)
            if data.get("type") != "land":
                continue
            if not re.fullmatch(r"[A-Za-z0-9_]{1,63}", key):
                raise ValueError(f"unsupported land-unit key: {key}")
            if key in found:
                raise ValueError(f"duplicate effective land-unit key: {key}")
            days, icon = int(data["build_time"]), int(data["icon"])
            if not 1 <= days <= 100000 or not 1 <= icon <= 1024:
                raise ValueError(f"invalid build time/icon for {key}")
            found[key] = days, icon
    if not 1 <= len(found) <= 256:
        raise ValueError(f"Army supports 1..256 land types, found {len(found)}")
    order = [k for k in PREFERRED if k in found] + sorted(set(found) - set(PREFERRED))
    # Keep the accepted board-5 English labels for existing units. Additional
    # unit keys get readable English names without relying on an engine index.
    return [(k, k.replace("_", " ").title(), ABBREVIATIONS.get(k, k[:3].title()), *found[k]) for k in order]


def metadata(rows):
    return "tgcx_units 1\n" + "".join(f"{key}|{label}|{abbr}|{days}\n" for key, label, abbr, days, _ in rows)
