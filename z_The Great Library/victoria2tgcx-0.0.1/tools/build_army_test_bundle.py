"""Package the Army-only setup with a portable Python/Pillow runtime."""
import argparse
import hashlib
from pathlib import Path
import shutil
import zipfile


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--runtime", required=True, type=Path)
    ap.add_argument("--dll", required=True, type=Path)
    ap.add_argument("--output", required=True, type=Path)
    args = ap.parse_args()
    root = Path(__file__).resolve().parents[1]
    output = args.output.resolve()
    archive = Path(str(output) + ".zip")
    if output.exists() or archive.exists():
        ap.error("output folder and ZIP must be new")
    output.mkdir(parents=True)
    tools = output / "tools"
    tools.mkdir()
    names = ("army_test_setup", "check_exe", "tgcx_pe", "tgcx_packages", "tgcx_bases", "install_submod",
             "install_dll", "gen_laws", "gen_law_catalog", "tgcx_law_support", "tgc_scan", "tgcx_bill_gui",
             "tgcx_templates_gui", "tgcx_conform_gui")
    for name in names:
        shutil.copy2(root / "tools" / (name + ".py"), tools)
    (output / "binaries").mkdir()
    shutil.copy2(args.dll, output / "binaries/v2dll_mod.dll")
    runtime = output / "runtime"
    runtime.mkdir()
    for p in args.runtime.iterdir():
        if p.is_file() and (p.suffix.lower() in (".exe", ".dll") or p.name == "LICENSE.txt"):
            shutil.copy2(p, runtime / p.name)
    ignore = shutil.ignore_patterns("site-packages", "__pycache__", "*.pyc")
    for name in ("Lib", "DLLs", "tcl"):
        shutil.copytree(args.runtime / name, runtime / name, ignore=ignore)
    site = runtime / "Lib/site-packages"
    site.mkdir()
    for p in (args.runtime / "Lib/site-packages").iterdir():
        if p.name == "PIL" or p.name.lower().startswith(("pillow-", "pillow.libs")):
            shutil.copytree(p, site / p.name, ignore=shutil.ignore_patterns("__pycache__", "*.pyc"))
    # -I ignores the recipient's PYTHONPATH, user site and registry overrides.
    (output / "Setup.cmd").write_bytes(
        b'@echo off\r\n"%~dp0runtime\\python.exe" -I "%~dp0tools\\army_test_setup.py"\r\nif errorlevel 1 pause\r\n')
    (output / "README.txt").write_text(
        "Army Templates and Conform 0.8.1 - private V2DLL test\n\n"
        "1. Extract the whole ZIP.\n2. Double-click Setup.cmd.\n"
        "3. Choose v2game.exe and your base mod, then click Install Army 0.8.1.\n"
        "4. Launch manually using tgcx_launch_army_<base>.cmd in the game folder.\n\n"
        "Python and Pillow are included; no downloads or pip commands are needed.\n"
        "Requires your existing V2DLL installation with LOAD_DLL_FROM_MOD_FOLDER=1.\n"
        "Close the game normally before setup. Setup never starts or stops it.\n"
        "Only the Army package and its launcher are installed. Existing replaced files\n"
        "are backed up under <game>/tgcx_backups/<timestamp>-army-081/. Base files and\n"
        "lua51.dll are left untouched. The generated launcher puts Army first so\n"
        "V2DLL finds v2dll_mod.dll. Use it for this test, rather than the mod launcher.\n\n"
        "This bundle contains only the 0.8.1 plugin. Politics is not packaged or enabled.\n"
        "The shared plugin binary contains dormant Politics code.\n"
        "The unit catalogue is still compiled for TGC v2.5.2. That is the tested base;\n"
        "other base selections generate files but are not confirmed compatible.\n"
        "0.8.1 is a test build awaiting its game check. V2DLL coexistence was confirmed\n"
        "on 0.7.0; this 0.8.1 combination still needs testing. Multiplayer untested.\n\n"
        "Check Logs/tgcx.log for loaded_by=V2DLL plugin API v1, OK sha256,\n"
        "Packages: army=1 politics=0, templates=1 and conform=1. Test recruitment,\n"
        "Ctrl-click (+5), Alt-click (+2), Conform and excess-unit detachment.\n"
        "Return the logs, V2DLL version and screenshots of any problems.\n\n"
        "To undo, run Setup.cmd, choose the game and click Restore backup... .\n"
        "Choose the relevant timestamped folder under <game>/tgcx_backups/.\n\n"
        "Restore/uninstall from the extracted bundle folder:\n"
        'runtime\\python.exe -I tools\\army_test_setup.py --game "D:\\Games\\Victoria II" '
        '--restore "D:\\Games\\Victoria II\\tgcx_backups\\<backup-folder>"\n'
        "Restoring the first-install backup removes the newly installed package.\n\n"
        "No base game/TGC files or art are included: setup generates them locally.\n"
        "Python licence: runtime/LICENSE.txt. Pillow and bundled-library licences:\n"
        "runtime/Lib/site-packages/pillow-*.dist-info/licenses/.\n"
        "Private test handoff; no public redistribution licence is asserted for TGCX.\n",
        encoding="utf-8")
    manifest = {p.relative_to(output).as_posix(): hashlib.sha256(p.read_bytes()).hexdigest()
                for p in sorted(output.rglob("*")) if p.is_file()}
    (output / "SHA256SUMS.txt").write_text("".join(f"{h}  {n}\n" for n, h in manifest.items()), encoding="utf-8")
    with zipfile.ZipFile(archive, "w", zipfile.ZIP_DEFLATED) as z:
        for p in sorted(output.rglob("*")):
            if p.is_file():
                z.write(p, Path(output.name) / p.relative_to(output))
    with zipfile.ZipFile(archive) as z:
        if z.testzip() is not None:
            raise ValueError("Archive integrity check failed")
    print(f"{archive}: {archive.stat().st_size:,} bytes; {len(manifest) + 1} files")
    print("SHA256:", hashlib.sha256(archive.read_bytes()).hexdigest())


if __name__ == "__main__":
    main()
