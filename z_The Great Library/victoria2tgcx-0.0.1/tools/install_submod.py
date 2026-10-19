#!/usr/bin/env python3
"""Install or remove the submod in the game's mod\\ folder.

    python tools/install_submod.py <mod folder>            # install (or reinstall)
    python tools/install_submod.py <mod folder> --remove   # remove

Copies submod\\TGCX\\ and submod\\TGCX.mod into <mod folder> (a copy, not a
link: the launcher may not follow links). Touches nothing else in mod\\ (R1).

Fixed-name files the engine reads only once (common\\event_modifiers.txt)
cannot be ours alone: they are generated here from the installed TGC v2.5.2
(D1) plus our block, submod\\tgcx_event_modifiers.txt (written by
tools/gen_laws.py). They never enter git (R3, R8).

Before deleting an existing TGCX folder it checks that the folder is ours:
every file in it must start with the tgcx_ prefix (R4), except the generated
ones. If any does not, it refuses and deletes nothing.

The SUB-0 load-order probe (a decision, its events and a Denmark rename) is
left out unless --load-test is given (LAW-3, report-u-7-1018.md F3).
"""

import argparse
import os
import re
import shutil
import sys
import tempfile
from pathlib import Path

from install_dll import game_running

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC = os.path.join(ROOT, "submod")
NAME = "TGCX"
PREFIX = "tgcx_"
# generated file in TGCX -> (TGC's file it starts from, our block appended to it)
GENERATED = {
    os.path.join("common", "event_modifiers.txt"): (os.path.join("common", "event_modifiers.txt"),
                                                    os.path.join(SRC, "tgcx_event_modifiers.txt")),
    os.path.join("interface", "country_politics.gui"): (os.path.join("interface", "country_politics.gui"),
                                                        os.path.join(SRC, NAME, "tgcx_bill_layout.txt")),
    os.path.join("interface", "buildunit.gui"): (os.path.join("interface", "buildunit.gui"),
                                                os.path.join(SRC, NAME, "tgcx_templates_layout.txt")),
    os.path.join("interface", "unitpanel.gui"): (os.path.join("interface", "unitpanel.gui"),
                                                os.path.join(SRC, NAME, "tgcx_conform_layout.txt")),
}
# SUB-0 probe files, installed only with --load-test
LOAD_TEST = {"tgcx_loadtest.txt", "tgcx_loadtest.csv", "000_tgcx_loadtest_override.csv"}


def skip_load_test(_, names):
    return [n for n in names if n.lower() in LOAD_TEST]


def foreign_files(folder):
    """Files in the folder that do not carry the submod prefix. A leading sort
    prefix of digits and underscores is allowed (000_tgcx_*.csv sorts before
    TGC's 00_*.csv, which localisation needs to win: P20)."""
    bad = []
    for dirpath, _, files in os.walk(folder):
        for f in files:
            if os.path.relpath(os.path.join(dirpath, f), folder) in GENERATED:
                if f == "country_politics.gui" and b"# >>> tgcx_bill" not in Path(dirpath, f).read_bytes():
                    bad.append(os.path.relpath(os.path.join(dirpath, f), folder))
                if f == "buildunit.gui" and b"# >>> tgcx_templates" not in Path(dirpath, f).read_bytes():
                    bad.append(os.path.relpath(os.path.join(dirpath, f), folder))
                if f == "unitpanel.gui" and b"# >>> tgcx_conform" not in Path(dirpath, f).read_bytes():
                    bad.append(os.path.relpath(os.path.join(dirpath, f), folder))
                continue
            if not re.sub(r"^[0-9_]+(?=tgcx_)", "", f.lower()).startswith(PREFIX):
                bad.append(os.path.relpath(os.path.join(dirpath, f), folder))
    return bad


def is_our_mod_file(path):
    with open(path, "rb") as f:
        text = f.read().decode("cp1252", errors="replace")
    return f'path = "mod/{NAME}"' in text


def remove(mod_dir):
    mod_dir = Path(mod_dir).resolve()
    target, descriptor = mod_dir / NAME, mod_dir / (NAME + ".mod")
    if target.is_symlink() or descriptor.is_symlink() or target.resolve().parent != mod_dir:
        raise ValueError("refusing linked or escaped removal targets")
    folder = os.path.join(mod_dir, NAME)
    modfile = os.path.join(mod_dir, NAME + ".mod")
    if os.path.isdir(folder):
        bad = foreign_files(folder)
        if bad:
            sys.exit(f"install_submod: {folder} has files without {PREFIX}, leaving it alone: {bad[:5]}")
    if os.path.isfile(modfile) and not is_our_mod_file(modfile):
        sys.exit(f"install_submod: {modfile} does not point to mod/{NAME}, leaving it alone")
    if os.path.isdir(folder):
        shutil.rmtree(folder)
        print(f"removed   {folder}")
    if os.path.isfile(modfile):
        os.remove(modfile)
        print(f"removed   {modfile}")


def generate(tgc, dest, source=SRC, only=None, profile=None):
    """TGC's file, byte for byte, then our block: the same bytes every time.
    MOD-2: `only` limits it to one package's files, and `profile` (a
    tgcx_bases.Base) picks the file the game loads for that base."""
    for rel, (tgc_rel, block) in GENERATED.items():
        if only is not None and rel not in only:
            continue
        block = os.path.join(source, os.path.relpath(block, SRC))
        bill_gui = rel == os.path.join("interface", "country_politics.gui")
        templates_gui = rel == os.path.join("interface", "buildunit.gui")
        conform_gui = rel == os.path.join("interface", "unitpanel.gui")
        if (bill_gui or templates_gui or conform_gui) and not os.path.isfile(block):
            continue  # The script-only/default LAW-0 source has no GUI fragment.
        if profile is not None:
            found = profile.find(tgc_rel)
            if found is None:
                raise ValueError(f"{profile.name} has no {tgc_rel}")
            base = str(found)
        else:
            base = os.path.join(tgc, tgc_rel)
        if (templates_gui or conform_gui) and not os.path.isfile(base):
            from tgcx_bill_gui import game_root
            base = str(game_root(tgc) / tgc_rel)
        if not os.path.isfile(base):
            sys.exit(f"install_submod: {base} not found: is --tgc the TGC v2.5.2 folder?")
        if not os.path.isfile(block):
            sys.exit(f"install_submod: {block} not found: run tools/gen_laws.py first")
        with open(base, "rb") as f:
            data = f.read()
        with open(block, "rb") as f:
            ours = f.read()
        nl = b"\r\n" if b"\r\n" in data[:4096] else b"\n"
        out = os.path.join(dest, rel)
        os.makedirs(os.path.dirname(out), exist_ok=True)
        with open(out, "wb") as f:
            if bill_gui or templates_gui or conform_gui:
                if conform_gui:
                    from tgcx_conform_gui import inject
                elif templates_gui:
                    from tgcx_templates_gui import inject
                else:
                    from tgcx_bill_gui import inject
                f.write(inject(data.decode("cp1252"), ours.decode("cp1252")).encode("cp1252"))
            else:
                f.write(data.rstrip() + nl + nl + ours.replace(b"\r\n", b"\n").replace(b"\n", nl))
        print(f"generated {rel} = TGC's ({len(data)} bytes) + ours ({len(ours)} bytes)")


def install(mod_dir, tgc, source=SRC, dry_run=False, backup=None, load_test=False):
    mod_dir, tgc, source = (Path(p).resolve() for p in (mod_dir, tgc, source))
    if game_running():
        raise ValueError("close v2game.exe before installing the submod")
    src = os.path.join(source, NAME)
    descriptor = source / (NAME + ".mod")
    if not os.path.isdir(src) or not descriptor.is_file() or not is_our_mod_file(descriptor):
        raise ValueError("source must contain TGCX/ and a descriptor pointing to mod/TGCX")
    bad = foreign_files(src)
    if bad:
        sys.exit(f"install_submod: the submod has files without {PREFIX} (R4): {bad}")
    target, modfile = mod_dir / NAME, mod_dir / (NAME + ".mod")
    if target.is_symlink() or modfile.is_symlink() or target.resolve().parent != mod_dir:
        raise ValueError("refusing linked or escaped installation targets")
    if target.exists() and foreign_files(target):
        raise ValueError("installed TGCX contains foreign files; leaving it alone")
    if modfile.exists() and not is_our_mod_file(modfile):
        raise ValueError("installed descriptor is not ours; leaving it alone")
    if source == mod_dir or source.is_relative_to(target) or target.is_relative_to(source):
        raise ValueError("source must be outside the live submod")
    # Fully prepare generated files before any live deletion or replacement.
    with tempfile.TemporaryDirectory(prefix="tgcx_submod_") as prepared:
        payload = Path(prepared) / NAME
        shutil.copytree(src, payload, ignore=None if load_test else skip_load_test)
        generate(tgc, payload, source)
        if dry_run:
            print("dry-run: source, ownership, generated modifiers and running-game gates OK; no live files changed")
            return
        retained = Path(backup).resolve() if backup else Path(tempfile.mkdtemp(prefix="tgcx_submod_backup_"))
        if backup:
            for protected in (mod_dir, source, tgc):
                if retained == protected or retained.is_relative_to(protected) or protected.is_relative_to(retained):
                    raise ValueError("backup must be outside the source, TGC and live mod folder")
            retained.mkdir(parents=True, exist_ok=False)
        if target.exists():
            shutil.copytree(target, retained / NAME)
            # Retain our appended block, so --source <backup> is a complete rollback.
            base = (tgc / "common/event_modifiers.txt").read_bytes()
            nl = b"\r\n" if b"\r\n" in base[:4096] else b"\n"
            prefix = base.rstrip() + nl + nl
            old = (target / "common/event_modifiers.txt").read_bytes()
            if not old.startswith(prefix):
                raise ValueError("installed generated modifiers do not match this TGC; backup retained, no live files changed")
            (retained / "tgcx_event_modifiers.txt").write_bytes(old[len(prefix):])
        if modfile.exists():
            shutil.copy2(modfile, retained / modfile.name)
        remove(mod_dir)  # verified targets are ours, with a retained copy
        try:
            shutil.copytree(payload, target)
            shutil.copy2(descriptor, modfile)
        except Exception:
            remove(mod_dir)
            if (retained / NAME).exists():
                shutil.copytree(retained / NAME, target)
            if (retained / modfile.name).exists():
                shutil.copy2(retained / modfile.name, modfile)
            raise
        print(f"rollback source: {retained}")
    n = sum(1 for p in target.rglob("*") if p.is_file()) - sum((target / rel).is_file() for rel in GENERATED)
    generated = sum((target / rel).is_file() for rel in GENERATED)
    print(f"installed {NAME} ({n} files + {generated} generated) + {NAME}.mod in {mod_dir}")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("mod_dir", help=r"the game's mod\ folder")
    ap.add_argument("--remove", action="store_true")
    ap.add_argument("--tgc", help=r"TGC folder the generated files start from (default: <mod>\TGC_v2.5.2\TGC)")
    ap.add_argument("--source", default=SRC, help="complete staged submod root (default: repository submod)")
    ap.add_argument("--dry-run", action="store_true", help="prepare and validate without changing the live mod")
    ap.add_argument("--backup", help="new directory for a complete rollback source")
    ap.add_argument("--load-test", action="store_true", help="also install the SUB-0 load-order probe")
    # MOD-2 packages (tools/tgcx_packages.py)
    ap.add_argument("--base", help='MOD-2: "vanilla", a base .mod or its folder key (tgc252)')
    ap.add_argument("--packages", default="army,politics", help="MOD-2: army, politics or both")
    ap.add_argument("--dll", help="MOD-2: tgcx.dll copied into every package")
    ap.add_argument("--fix-path", help="MOD-2: the real folder of a base whose .mod points wrong (P4)")
    ap.add_argument("--remove-packages", action="store_true", help="MOD-2: remove our packages and descriptors")
    ap.add_argument("--restore", help="MOD-2: put back what a package install replaced")
    a = ap.parse_args()
    if not os.path.isdir(a.mod_dir) or not any(f.lower().endswith(".mod") for f in os.listdir(a.mod_dir)):
        sys.exit(f"install_submod: {a.mod_dir} does not look like a mod\\ folder (no .mod files)")
    if a.base or a.remove_packages or a.restore:
        import tgcx_packages as pk
        try:
            if game_running():
                raise ValueError("close v2game.exe first")
            if a.restore:
                pk.restore(a.mod_dir, a.restore)
            elif a.remove_packages:
                pk.remove(a.mod_dir)
            else:
                names = [n.strip() for n in a.packages.split(",") if n.strip()]
                unknown = [n for n in names if n not in pk.PACKAGES]
                if unknown or not names:
                    raise ValueError(f"unknown packages {unknown}; use {', '.join(pk.PACKAGES)}")
                base = pk.resolve_base(a.mod_dir, a.base, a.fix_path)
                pk.install(a.mod_dir, base, names, a.source, a.dll, a.backup, a.load_test, a.dry_run)
        except (OSError, ValueError) as error:
            sys.exit(f"install_submod: {error}")
        return
    if a.remove:
        if game_running():
            sys.exit("close v2game.exe before removing the submod")
        if a.dry_run:
            sys.exit("use --dry-run for installation validation; removal was not performed")
        remove(a.mod_dir)
    else:
        install(a.mod_dir, a.tgc or os.path.join(a.mod_dir, "TGC_v2.5.2", "TGC"), a.source, a.dry_run, a.backup, a.load_test)


if __name__ == "__main__":
    main()
