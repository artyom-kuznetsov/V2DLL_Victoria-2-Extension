"""Prepare a private V2DLL test payload from the recipient's installed TGC.

No game files are written. Copy the resulting mod folder manually after
closing the game. Requires Python 3.11+ and Pillow.
"""
import argparse
import hashlib
import shutil
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("game", type=Path)
    ap.add_argument("--base", default="TGC_v2.5.2.mod")
    ap.add_argument("--output", required=True, type=Path)
    ap.add_argument("--version", choices=("0.8.0", "0.8.1"), default="0.8.1")
    a = ap.parse_args()
    game, output = a.game.resolve(), a.output.resolve()
    if output.exists():
        ap.error("output must be a new directory")
    for protected in (game, ROOT):
        if output == protected or output.is_relative_to(protected) or protected.is_relative_to(output):
            ap.error("output must be outside the game and bundle folders")

    import check_exe
    import tgcx_packages as pk
    from tgcx_pe import PE
    exe = game / "v2game.exe"
    if hashlib.sha256(exe.read_bytes()).hexdigest() != check_exe.SHA256:
        ap.error("unsupported v2game.exe SHA-256")
    base = pk.resolve_base(game / "mod", a.base)
    base_file = Path(a.base)
    if not base_file.is_file():
        base_file = game / "mod" / a.base
    base_file = base_file.resolve()
    if not base_file.is_relative_to(game):
        ap.error("base descriptor must be inside the game folder")
    if base.slug != "tgc252":
        ap.error("this test bundle requires TGC v2.5.2")
    dll = ROOT / "binaries" / a.version / "v2dll_mod.dll"
    if "V2Mod_Init" not in PE(dll).exports():
        ap.error("DLL has no V2Mod_Init export")

    from gen_law_catalog import generate_catalog
    from tgcx_bill_gui import generate as bill
    from tgcx_templates_gui import generate as templates
    from tgcx_conform_gui import generate as conform
    with tempfile.TemporaryDirectory(prefix="tgcx_share_") as temp:
        source = Path(temp) / "source"
        source.mkdir()
        shutil.copy2(ROOT / "submod/TGCX.mod", source / "TGCX.mod")
        _, files, _ = generate_catalog(str(base.folder), release=True)
        for original, content in files.items():
            target = source / Path(original).relative_to(ROOT / "submod")
            target.parent.mkdir(parents=True, exist_ok=True)
            target.write_bytes(content.encode("cp1252"))
        for generate in (bill, templates, conform):
            generate(source, base.folder)
        packages, prepared = pk.build(game / "mod", base, ["army", "politics"], source)
        try:
            payload = Path(temp) / "payload"
            mod = payload / "mod"
            mod.mkdir(parents=True)
            for name, (folder, descriptor) in packages.items():
                shutil.copytree(folder, mod / folder.name)
                (mod / (folder.name + ".mod")).write_text(descriptor, encoding="cp1252")
            army = packages["army"][0].name
            politics = packages["politics"][0].name
            shutil.copy2(dll, mod / army / "v2dll_mod.dll")
            # V2DLL versions tested so far inspect only the first -mod=.
            # This command is run manually from the game folder by the tester.
            command = (f'v2game.exe -mod=mod/{army}.mod '
                       f'-mod=mod/{politics}.mod -mod="{base_file.relative_to(game).as_posix()}"')
            (payload / "LAUNCH.txt").write_text(
                "With V2DLL installed and LOAD_DLL_FROM_MOD_FOLDER=1, run from the game folder:\n\n"
                + command + "\n\nDo not also install the TGCX lua51.dll loader.\n", encoding="utf-8")
            shutil.copytree(payload, output)
        finally:
            shutil.rmtree(prepared)
    print(f"Prepared {a.version}: {output}; game files unchanged")


if __name__ == "__main__":
    main()
