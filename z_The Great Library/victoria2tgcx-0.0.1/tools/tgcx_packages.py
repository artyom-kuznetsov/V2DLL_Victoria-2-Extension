"""MOD-2 packages (D15): Army and Politics, installed per base.

    python tools/install_submod.py <mod folder> --base <base> --packages army,politics
        [--source <stage>] [--dll <tgcx.dll>] [--fix-path mod/HPM] [--backup <new dir>]
    python tools/install_submod.py <mod folder> --remove-packages
    python tools/install_submod.py <mod folder> --restore <backup>

<base> is "vanilla", a `.mod` file, its name in mod\\ (`TGC_v2.5.2.mod`) or its
folder key (`tgc252`). The source is a staged TGCX (TGCX\\, TGCX.mod and
tgcx_event_modifiers.txt), generated as before; each package takes its own
files from it. Everything is prepared and checked in a temporary folder
before mod\\ is touched (R1); every replaced folder and descriptor goes to the
backup, and a failed copy restores it. The old single `mod\\TGCX` is migrated
away in the same step (S8).
"""
import hashlib
import os
import re
import shutil
import tempfile
from pathlib import Path

from tgcx_bases import Base, SPRITE_DEF, missing_fonts, missing_sprites, slug

VERSION = "0.8.0"
MARKER = "tgcx_package.txt"
LOGIC = "tgcx.dll"
V2DLL_DEFINES = "common/defines_v2dll.txt"  # written by V2DLL into the first mod (P48)
J = os.path.join

ARMY_FILES = re.compile(r"tgcx_(tpl|cf)_|tgcx_(templates|conform)(\.gfx|\.csv|_layout\.txt)$")
PACKAGES = {
    "army": {"display": "Army Templates and Conform", "user_dir": None, "modules": "templates conform",
             "generated": {J("interface", "buildunit.gui"), J("interface", "unitpanel.gui")}, "bases": None},
    "politics": {"display": "TGCX Politics", "user_dir": "TGCX", "modules": "bill reforms hemicycle",
                 "generated": {J("common", "event_modifiers.txt"), J("interface", "country_politics.gui")},
                 "bases": {"tgc252"}},
}


def resolve_base(mod_dir, spec, fix_path=None):
    mod_dir = Path(mod_dir)
    game = mod_dir.parent
    if spec == "vanilla":
        return Base(game, "vanilla")
    for candidate in (Path(spec), mod_dir / spec, mod_dir / f"{spec}.mod"):
        if candidate.suffix.lower() == ".mod" and candidate.is_file():
            return Base(game, candidate, fix_path=fix_path)
    for candidate in sorted(mod_dir.glob("*.mod")):
        if slug(candidate.stem) == spec and not candidate.name.startswith("tgcx_"):
            return Base(game, candidate, fix_path=fix_path)
    raise ValueError(f"no base {spec!r} in {mod_dir}")


def folder_name(package, base):
    return f"tgcx_{package}_{base.slug}"


def base_descriptor(base):
    """S6: our own descriptor for a base whose .mod points to a missing folder."""
    lines = [f'name = "{base.name} (path fixed)"',
             f'path = "{base.root.relative_to(base.game).as_posix()}"']
    if base.user_dir:
        lines.append(f'user_dir = "{base.user_dir}"')
    lines += [f'replace_path = "{r}"' for r in base.replace]
    return f"tgcx_base_{base.slug}.mod", "\n".join(lines) + "\n"


def dependency_name(base):
    return f"{base.name} (path fixed)" if base.fixed else base.name


def descriptor(package, base):
    spec, folder = PACKAGES[package], folder_name(package, base)
    lines = [f'name = "{spec["display"]} ({"vanilla" if base.root is None else base.name})"',
             f'path = "mod/{folder}"']
    if spec["user_dir"]:
        lines.append(f'user_dir = "{spec["user_dir"]}"')
    if base.root is not None:
        lines.append(f'dependencies = {{ "{dependency_name(base)}" }}')
    return "\n".join(lines) + "\n"


def marker(package, base):
    return (f'package = {package}\nbase = {base.slug}\nbase_name = "{base.name}"\n'
            f'modules = "{PACKAGES[package]["modules"]}"\nversion = {VERSION}\n')


def belongs(package, rel, load_test=False):
    name = rel.replace("\\", "/").rsplit("/", 1)[-1].lower()
    if "loadtest" in name and not load_test:
        return False
    army = bool(ARMY_FILES.search(name))
    return army if package == "army" else not army


def is_ours(folder):
    """A package folder is ours when every file carries the prefix (R4), apart
    from our generated files, tgcx.dll and V2DLL's defines file (P48)."""
    folder = Path(folder)
    if not (folder / MARKER).is_file():
        return False
    for p in folder.rglob("*"):
        if not p.is_file():
            continue
        rel = p.relative_to(folder).as_posix()
        if rel in (LOGIC, V2DLL_DEFINES) or any(rel == g.replace("\\", "/") for s in PACKAGES.values() for g in s["generated"]):
            continue
        if not re.sub(r"^[0-9_]+(?=tgcx_)", "", p.name.lower()).startswith("tgcx_"):
            return False
    return True


def our_descriptor(path):
    text = Path(path).read_text(encoding="cp1252", errors="replace")
    m = re.search(r'^\s*path\s*=\s*"mod/(tgcx_[^"/]+)"', text, re.M)
    return m[1] if m else None


def build(mod_dir, base, packages, source, dll=None, load_test=False):
    """Prepare every package in a temporary folder and check it. Returns
    {name: (folder, descriptor text)} plus the temporary directory."""
    import install_submod
    source = Path(source)
    src = source / "TGCX"
    if not src.is_dir() or not (source / "TGCX.mod").is_file():
        raise ValueError(f"{source}: not a staged TGCX source (TGCX\\ and TGCX.mod)")
    if dll:
        from install_dll import logic
        logic(Path(dll))
    temp = Path(tempfile.mkdtemp(prefix="tgcx_packages_"))
    out = {}
    try:
        for package in packages:
            spec = PACKAGES[package]
            if spec["bases"] and base.slug not in spec["bases"]:
                raise ValueError(f"{package} is for {', '.join(sorted(spec['bases']))} only, not {base.name} (D1, D7)")
            folder = temp / folder_name(package, base)
            generated = {g for s in PACKAGES.values() for g in s["generated"]}
            for p in src.rglob("*"):
                rel = p.relative_to(src)
                if p.is_file() and str(rel) not in generated and belongs(package, str(rel), load_test):
                    (folder / rel).parent.mkdir(parents=True, exist_ok=True)
                    shutil.copy2(p, folder / rel)
            install_submod.generate(base.folder, folder, source, only=spec["generated"], profile=base)
            missing = [rel for rel in spec["generated"] if not (folder / rel).is_file()]
            if missing:
                raise ValueError(f"{package}: {source} has no fragment for {missing}")
            ours = set()
            for gfx in (folder / "interface").glob("*.gfx"):
                ours |= set(SPRITE_DEF.findall(gfx.read_text(encoding="cp1252", errors="replace")))
                ours |= set(re.findall(r'name\s*=\s*"(tgcx_[A-Za-z0-9_]+)"', gfx.read_text(encoding="cp1252", errors="replace")))
            for rel in spec["generated"]:
                if rel.endswith(".gui"):
                    text = (folder / rel).read_text(encoding="cp1252", errors="replace")
                    s, f = missing_sprites(base, text, ours), missing_fonts(base, text)
                    if s or f:
                        raise ValueError(f"{package}: {rel} uses what {base.name} lacks: {(s + f)[:6]} (P49)")
            package_marker = marker(package, base)
            if package == "army" and (folder / "tgcx_tpl_units.txt").is_file():
                package_marker = package_marker.replace(f"version = {VERSION}", "version = 0.9.0")
            (folder / MARKER).write_text(package_marker, encoding="cp1252", newline="\n")
            if dll:
                shutil.copy2(dll, folder / LOGIC)
            out[package] = (folder, descriptor(package, base))
    except BaseException:
        shutil.rmtree(temp, ignore_errors=True)
        raise
    return out, temp


def install(mod_dir, base, packages, source, dll=None, backup=None, load_test=False, dry_run=False):
    from install_dll import game_running
    mod_dir = Path(mod_dir).resolve()
    if game_running():
        raise ValueError("close v2game.exe before installing")
    prepared, temp = build(mod_dir, base, packages, source, dll, load_test)
    try:
        # Everything that will be replaced, checked before anything moves.
        targets = []
        for package, (folder, _) in prepared.items():
            live, desc = mod_dir / folder.name, mod_dir / f"{folder.name}.mod"
            if live.exists() and not is_ours(live):
                raise ValueError(f"{live} is not ours; leaving it alone")
            if desc.exists() and our_descriptor(desc) != folder.name:
                raise ValueError(f"{desc} is not ours; leaving it alone")
            targets += [live, desc]
        legacy = [mod_dir / "TGCX", mod_dir / "TGCX.mod"]
        if legacy[0].exists():
            import install_submod
            if install_submod.foreign_files(legacy[0]) or not install_submod.is_our_mod_file(legacy[1]):
                raise ValueError("mod\\TGCX is not ours; leaving it alone")
            targets += legacy
        fixed = base_descriptor(base) if base.fixed else None
        if fixed:
            target = mod_dir / fixed[0]
            if target.exists() and our_descriptor(target) is None and "(path fixed)" not in target.read_text(encoding="cp1252", errors="replace"):
                raise ValueError(f"{target} is not ours")
            targets.append(target)
        if dry_run:
            print(f"dry-run: {', '.join(prepared)} for {base.name} prepared and checked; no live files changed")
            return None
        retained = Path(backup).resolve() if backup else Path(tempfile.mkdtemp(prefix="tgcx_packages_backup_"))
        if retained == mod_dir or retained.is_relative_to(mod_dir):
            raise ValueError("backup must be outside the mod folder")
        retained.mkdir(parents=True, exist_ok=bool(not backup))
        kept = {}
        for target in targets:
            if target.exists():
                dest = retained / target.name
                (shutil.copytree if target.is_dir() else shutil.copy2)(target, dest)
                if target.is_dir() and (target / V2DLL_DEFINES).is_file():
                    kept[target.name] = (target / V2DLL_DEFINES).read_bytes()
        (retained / "tgcx_packages_restore.txt").write_text(
            "\n".join(t.name for t in targets) + "\n", encoding="utf-8")
        try:
            for target in targets:
                if target.is_dir():
                    shutil.rmtree(target)
                elif target.exists():
                    target.unlink()
            for package, (folder, text) in prepared.items():
                shutil.copytree(folder, mod_dir / folder.name)
                if folder.name in kept:  # V2DLL's file stays where V2DLL put it (P48)
                    (mod_dir / folder.name / V2DLL_DEFINES).parent.mkdir(parents=True, exist_ok=True)
                    (mod_dir / folder.name / V2DLL_DEFINES).write_bytes(kept[folder.name])
                (mod_dir / f"{folder.name}.mod").write_text(text, encoding="cp1252", newline="\n")
            if fixed:
                (mod_dir / fixed[0]).write_text(fixed[1], encoding="cp1252", newline="\n")
        except BaseException:
            restore(mod_dir, retained)
            raise
        for package, (folder, _) in prepared.items():
            print(f"installed {folder.name} + {folder.name}.mod ({package}, {base.name})")
        print(f"rollback source: {retained} (install_submod.py <mod> --restore <it>)")
        return retained
    finally:
        shutil.rmtree(temp, ignore_errors=True)


def restore(mod_dir, backup):
    """Put back exactly what an install replaced: the names it recorded."""
    mod_dir, backup = Path(mod_dir).resolve(), Path(backup).resolve()
    names = (backup / "tgcx_packages_restore.txt").read_text(encoding="utf-8").split()
    for name in names:
        live = mod_dir / name
        if live.is_dir():
            if not (is_ours(live) or name == "TGCX"):
                raise ValueError(f"{live} is not ours; leaving it alone")
        elif live.exists() and not (name.startswith("tgcx_") or name == "TGCX.mod"):
            raise ValueError(f"{live} is not ours; leaving it alone")
    for name in names:
        live, saved = mod_dir / name, backup / name
        if live.is_dir():
            shutil.rmtree(live)
        elif live.exists():
            live.unlink()
        if saved.is_dir():
            shutil.copytree(saved, live)
        elif saved.exists():
            shutil.copy2(saved, live)
    print(f"restored {len(names)} entries from {backup}")


def remove(mod_dir):
    """Remove every package and descriptor of ours, refusing anything else."""
    mod_dir = Path(mod_dir).resolve()
    folders = [p for p in mod_dir.glob("tgcx_*") if p.is_dir()]
    bad = [p for p in folders if not is_ours(p)]
    if bad:
        raise ValueError(f"not ours, leaving everything alone: {[p.name for p in bad]}")
    descs = [p for p in mod_dir.glob("tgcx_*.mod") if p.is_file()]
    for p in descs:
        text = p.read_text(encoding="cp1252", errors="replace")
        if our_descriptor(p) is None and "(path fixed)" not in text:
            raise ValueError(f"{p.name} is not ours; leaving everything alone")
    for p in folders:
        shutil.rmtree(p)
        print(f"removed   {p}")
    for p in descs:
        p.unlink()
        print(f"removed   {p}")


def digest(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()
