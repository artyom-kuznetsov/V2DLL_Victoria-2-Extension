"""Generate a files-only Army package for an installed Victoria II 3.04 base.

Reads the base, generates our GUI/art/metadata, and writes a new output folder.
Never installs, edits the base, starts the game, or downloads anything.
"""
import argparse
from pathlib import Path
import shutil
import tempfile

import tgcx_packages as pk
from tgcx_templates_gui import generate as templates
from tgcx_conform_gui import generate as conform


def prepare(game, spec, output, dll, fix_path=None, loader="v2dll"):
    from install_dll import logic
    from check_exe import SHA256
    import hashlib
    game, output, dll = Path(game).resolve(), Path(output).resolve(), Path(dll).resolve()
    if output.exists():
        raise ValueError("output must be a new folder")
    if output.is_relative_to(game) or game.is_relative_to(output):
        raise ValueError("output must be outside the game folder")
    if hashlib.sha256((game / "v2game.exe").read_bytes()).hexdigest() != SHA256:
        raise ValueError("unsupported executable; Army requires the reference Victoria II 3.04")
    logic(dll)
    if b"TGCX MOD-5 0.9.0 tgcx.dll" not in dll.read_bytes():
        raise ValueError("generated catalogues require the Army 0.9.0 DLL")
    base = pk.resolve_base(game / "mod", spec, fix_path)
    with tempfile.TemporaryDirectory(prefix="tgcx_army_base_") as temp:
        source = Path(temp) / "source"
        (source / "TGCX").mkdir(parents=True)
        (source / "TGCX.mod").write_text('path = "mod/TGCX"\n', encoding="cp1252")
        templates(source, base.folder, base)
        conform(source, base.folder, base)
        packages, staged = pk.build(game / "mod", base, ["army"], source)
        try:
            folder, descriptor = packages["army"]
            payload = Path(temp) / "payload"
            target = payload / "mod" / folder.name
            shutil.copytree(folder, target)
            shutil.copy2(dll, target / ("v2dll_mod.dll" if loader == "v2dll" else "tgcx.dll"))
            if loader == "v2dll":
                (target / "v2dll_settings.ini").write_text("LOAD_DLL_FROM_MOD_FOLDER=1\n", encoding="ascii")
            (payload / "mod" / (folder.name + ".mod")).write_text(descriptor, encoding="cp1252", newline="\n")
            if base.fixed:
                name, text = pk.base_descriptor(base)
                (payload / "mod" / name).write_text(text, encoding="cp1252", newline="\n")
            (payload / "README.txt").write_text(
                f"Army Templates and Conform 0.9.0 - {base.name}\n\n"
                "Extract into the matching game folder. Select only this Army package\n"
                "and its base (if any) in the normal launcher. Do not select two Army\n"
                "packages together. Back up existing package files before replacing.\n\n"
                + (f"Select '{pk.dependency_name(base)}' as the base. The included\n"
                   "path-fixed descriptor leaves your original HPM descriptor untouched.\n\n" if base.fixed else "")
                + ("Requires V2DLL with LOAD_DLL_FROM_MOD_FOLDER=1. V2DLL must find this\n"
                   "Army folder as the first selected mod; ordinary launcher ordering\n"
                   "places Army before vanilla/HPM/TGC. Other names/orders need checking.\n" if loader == "v2dll" else
                   "Requires our lua51.dll loader in the game folder. It finds tgcx.dll\n"
                   "in the selected Army package. Do not mix it with the V2DLL loader.\n")
                + "\nOne DLL supports generated catalogues from different bases. This package\n"
                "contains only its base's effective land-unit metadata and GUI/art.\n"
                "Regeneration is needed after base updates or unit/GUI submod changes.\n"
                "Reference executable 3.04 only. Other builds are signature-gated.\n"
                "This 0.9.0 compatibility candidate still needs its base-specific game\n"
                "check. Existing 0.8.2 TGC acceptance does not prove other bases.\n",
                encoding="utf-8")
            shutil.copytree(payload, output)
        finally:
            shutil.rmtree(staged)
    return output


if __name__ == "__main__":
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("game", type=Path)
    ap.add_argument("--base", default="vanilla")
    ap.add_argument("--fix-path")
    ap.add_argument("--output", required=True, type=Path)
    ap.add_argument("--dll", type=Path, default=Path(__file__).resolve().parents[1] / "dll/tgcx/Release/tgcx.dll")
    ap.add_argument("--loader", choices=("v2dll", "tgcx"), default="v2dll")
    args = ap.parse_args()
    print(prepare(args.game, args.base, args.output, args.dll, args.fix_path, args.loader))
