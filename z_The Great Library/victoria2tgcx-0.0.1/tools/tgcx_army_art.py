"""Army art lookups against the base's effective file set (including replace_path)."""
from pathlib import Path

from PIL import Image
from tgc_scan import parse, read
from tgcx_army_catalog import profile_for


def sprite_specs(folder, profile=None):
    found = {}

    def walk(items):
        for _, value in items:
            if not isinstance(value, list):
                continue
            fields = {k: v for k, v in value if not isinstance(v, list)}
            name = fields.get("name", "").strip('"')
            if name and "texturefile" in fields:
                found.setdefault(name, fields)
            walk(value)

    base = profile or profile_for(folder)
    # Base declarations win when vanilla has the same sprite under a
    # different filename. An overridden file is already removed by files().
    files = sorted(base.files("interface", "*.gfx").values(),
                   key=lambda p: (not (base.root and p.is_relative_to(base.root)), str(p)))
    for path in files:
        walk(parse(read(path)))
    return found


def sprites(folder, profile=None):
    return {name: fields["texturefile"].strip('"').replace("\\", "/")
            for name, fields in sprite_specs(folder, profile).items()}


def texture(folder, path, profile=None):
    base = profile or profile_for(folder)
    rel = Path(path)
    for candidate in (rel, rel.with_suffix(".dds"), rel.with_suffix(".tga")):
        found = base.find(candidate.as_posix())
        if found:
            with Image.open(found) as image:
                return image.convert("RGBA")
    raise ValueError(f"installed texture not found in effective base: {path}")


def sprite(folder, table, name, frame=0, frames=1, profile=None):
    image = texture(folder, table[name], profile)
    if frames < 1 or image.width % frames or frame < 0 or frame >= frames:
        raise ValueError(f"invalid sprite frame metadata for {name}")
    width = image.width // frames
    return image.crop((width * frame, 0, width * (frame + 1), image.height))


def unit_frames(folder, profile=None):
    specs = sprite_specs(folder, profile)
    if "GFX_unit_strip" not in specs:
        raise ValueError("base does not define GFX_unit_strip")
    frames = int(specs["GFX_unit_strip"].get("noOfFrames", "1"))
    if not 1 <= frames <= 1024:
        raise ValueError("unsupported unit-strip frame count")
    return frames
