"""Generic base profiles for MOD-2 (D15 S1).

A base is vanilla or any `.mod` file in the game's mod folder. Nothing here
names a specific base. Effective files = vanilla plus the base, where each
of the base's `replace_path` folders hides vanilla's files under it.

    python tools/tgcx_bases.py <game dir> <base .mod or "vanilla"> [gui ...]

prints the base and, for each `.gui` given, the sprites it uses that the base
does not define (the MOD-0 run 3 check, P49).
"""
import re
import sys
from pathlib import Path

LINE = re.compile(r'^\s*(name|path|user_dir|replace_path)\s*=\s*"([^"]*)"', re.M)
SPRITE_DEF = re.compile(r'\bname\s*=\s*"?(GFX_[A-Za-z0-9_]+)"?')
FONT_DEF = re.compile(r'bitmapfont\s*=\s*\{\s*name\s*=\s*"([^"]+)"')
FONT_USE = re.compile(r'\bfont\s*=\s*"([^"]+)"')
SPRITE_USE =re.compile(r'\b(?:spriteType|quadTextureSprite)\s*=\s*"?(GFX_[A-Za-z0-9_]+)"?')


def slug(stem):
    """Folder-name key for a base's .mod file name (S5)."""
    s = stem.lower().replace(" ", "_")
    return "tgc252" if s == "tgc_v2.5.2" else re.sub(r"[^a-z0-9_.-]", "", s)


class Base:
    def __init__(self, game, mod=None, fix_path=None):
        self.game = Path(game)
        self.name, self.root, self.user_dir, self.replace = "vanilla", None, None, []
        self.slug, self.fixed = "vanilla", False
        if mod and mod != "vanilla":
            self.slug = slug(Path(mod).stem)
            text = Path(mod).read_text(encoding="cp1252", errors="replace")
            for key, value in LINE.findall(text):
                if key == "replace_path":
                    self.replace.append(value.strip("/\\").replace("\\", "/"))
                elif key == "path" and self.root is None:
                    self.root = self.game / value
                elif key == "name" and self.name == "vanilla":
                    self.name = value
                elif key == "user_dir":
                    self.user_dir = value
            if fix_path and (self.root is None or not self.root.is_dir()):
                # S6: our own descriptor will point here; the base's .mod is untouched (R1)
                self.root, self.fixed = self.game / fix_path, True
            if self.root is None or not self.root.is_dir():
                raise ValueError(f"{mod}: path {self.root} does not exist (P4)")

    def _hidden(self, rel):
        return any(rel == r or rel.startswith(r + "/") for r in self.replace)

    @property
    def folder(self):
        """The base's own folder: the mod's, or the game's for vanilla."""
        return self.root or self.game

    def find(self, rel):
        """The file the game loads for `rel`: the base's, else vanilla's unless replaced."""
        rel = rel.replace("\\", "/")
        if self.root and (self.root / rel).is_file():
            return self.root / rel
        if not self._hidden(rel) and (self.game / rel).is_file():
            return self.game / rel
        return None

    def files(self, folder, pattern="*"):
        """Effective files under `folder`, keyed by path relative to it."""
        out = {}
        for p in (self.game / folder).rglob(pattern):
            rel = p.relative_to(self.game).as_posix()
            if p.is_file() and not self._hidden(rel):
                out[p.relative_to(self.game / folder).as_posix().lower()] = p
        if self.root:
            for p in (self.root / folder).rglob(pattern):
                if p.is_file():
                    out[p.relative_to(self.root / folder).as_posix().lower()] = p
        return out

    def sprites(self):
        names = set()
        for p in self.files("interface", "*.gfx").values():
            names.update(SPRITE_DEF.findall(p.read_text(encoding="cp1252", errors="replace")))
        return names

    def fonts(self):
        """Bitmap-font names from `.gfx` plus the `.fnt` files in gfx/fonts."""
        names = {p.rsplit("/", 1)[-1][:-4] for p in self.files("gfx/fonts", "*.fnt")}
        for p in self.files("interface", "*.gfx").values():
            names.update(FONT_DEF.findall(p.read_text(encoding="cp1252", errors="replace")))
        return {n.lower() for n in names}


def missing_sprites(base, gui_text, extra=()):
    """Sprites a `.gui` uses that neither the base nor `extra` defines."""
    known = base.sprites() | set(extra)
    return sorted(set(SPRITE_USE.findall(gui_text)) - known)


def missing_fonts(base, gui_text):
    """Fonts a `.gui` uses that the base does not define (case-insensitive)."""
    known = base.fonts()
    return sorted({f for f in FONT_USE.findall(gui_text) if f.lower() not in known})


if __name__ == "__main__":
    args = sys.argv[1:]
    fix = None
    if "--fix-path" in args:
        i = args.index("--fix-path")
        fix = args[i + 1]
        del args[i:i + 2]
    b = Base(args[0], args[1], fix_path=fix)
    print(f"base {b.name!r} slug={b.slug} root={b.root} fixed={b.fixed} "
          f"user_dir={b.user_dir} replace={b.replace}")
    print(f"sprites defined: {len(b.sprites())}, fonts: {len(b.fonts())}")
    for g in args[2:]:
        text = Path(g).read_text(encoding="cp1252", errors="replace")
        s, f = missing_sprites(b, text), missing_fonts(b, text)
        print(f"{g}: {len(s)} sprites missing {s[:6]}; {len(f)} fonts missing {f[:6]}")
