"""Portable Army Templates and Conform 0.8.1 private test installer.

Run without arguments for the folder/base picker. --prepare only generates
an output payload; it never installs or launches the game.
"""
import argparse
from datetime import datetime
import hashlib
import json
from pathlib import Path
import re
import shutil
import sys
import tempfile

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(Path(__file__).resolve().parent))
DLL_HASH = "62fa79339ee1a8acb26774a916f92ffbbd41cdff59ad7b25d65325c98a77127d"


def select_base(game, descriptor):
    from tgcx_bases import Base
    game = Path(game).resolve()
    path = Path(descriptor)
    if not path.is_absolute():
        path = game / "mod" / path
    path = path.resolve()
    if path.parent != game / "mod" or path.suffix.lower() != ".mod":
        raise ValueError("Choose a base .mod file directly inside the game's mod folder")
    base = Base(game, path)
    if not re.fullmatch(r"[a-z0-9_.-]+", base.slug):
        raise ValueError("Unsupported descriptor filename")
    return base, path


def check_game(game):
    from check_exe import SHA256
    if hashlib.sha256((Path(game) / "v2game.exe").read_bytes()).hexdigest() != SHA256:
        raise ValueError("Unsupported v2game.exe. This build requires the reference Victoria II 3.04 executable.")


def check_v2dll(game):
    data = (Path(game) / "lua51.dll").read_bytes()
    if b"V2DLL" not in data or b"LOAD_DLL_FROM_MOD_FOLDER" not in data:
        raise ValueError("Install V2DLL with mod-plugin support first. Setup leaves lua51.dll unchanged.")
    ini = Path(game) / "v2dll_settings.ini"
    if ini.exists():
        text = ini.read_text(encoding="cp1252", errors="replace")
        settings = re.findall(r"^\s*LOAD_DLL_FROM_MOD_FOLDER\s*=\s*(\d+)", text, re.M | re.I)
        local = re.findall(r"^\s*LOCAL_MOD_CONFIG\s*=\s*(\d+)", text, re.M | re.I)
        if settings and settings[-1] != "1":
            raise ValueError("Enable LOAD_DLL_FROM_MOD_FOLDER=1 in V2DLL's settings, then run Setup again.")
        if local and local[-1] == "1":
            # The package-local config must not turn off the global plugin setting.
            return True
    return False


def prepare(game, descriptor, output, dll=None):
    import tgcx_packages as pk
    from tgcx_templates_gui import generate as templates
    from tgcx_conform_gui import generate as conform
    from install_dll import logic
    game, output = Path(game).resolve(), Path(output).resolve()
    if output.exists():
        raise ValueError("Output must be a new directory")
    for protected in (game, ROOT):
        if output == protected or output.is_relative_to(protected) or protected.is_relative_to(output):
            raise ValueError("Preparation output must be outside the game and bundle folders")
    check_game(game)
    base, base_file = select_base(game, descriptor)
    dll = Path(dll) if dll else ROOT / "binaries/v2dll_mod.dll"
    if hashlib.sha256(dll.read_bytes()).hexdigest() != DLL_HASH:
        raise ValueError("The bundled 0.8.1 plugin failed its integrity check")
    logic(dll)
    with tempfile.TemporaryDirectory(prefix="tgcx_army_prepare_") as temp:
        source = Path(temp) / "source"
        (source / "TGCX").mkdir(parents=True)
        (source / "TGCX.mod").write_text('path = "mod/TGCX"\n', encoding="cp1252")
        for generate in (templates, conform):
            generate(source, base.folder)
        packages, staging = pk.build(game / "mod", base, ["army"], source)
        try:
            folder, descriptor_text = packages["army"]
            payload = Path(temp) / "payload"
            target = payload / "mod" / folder.name
            shutil.copytree(folder, target)
            shutil.copy2(dll, target / "v2dll_mod.dll")
            # This is our own per-package configuration, never the base's file.
            (target / "v2dll_settings.ini").write_text("LOAD_DLL_FROM_MOD_FOLDER=1\n", encoding="ascii")
            marker = target / pk.MARKER
            marker.write_text(pk.marker("army", base).replace("version = 0.8.0", "version = 0.8.1"), encoding="cp1252")
            (payload / "mod" / (folder.name + ".mod")).write_text(descriptor_text, encoding="cp1252", newline="\n")
            launch_name = "tgcx_launch_army_" + base.slug
            args = ["-mod=mod/" + folder.name + ".mod", "-mod=" + base_file.relative_to(game).as_posix()]
            quote = lambda s: "'" + s.replace("'", "''") + "'"
            script = ("# Army Templates and Conform 0.8.1 launcher; run manually.\n"
                      "$ErrorActionPreference = 'Stop'\nSet-Location -LiteralPath $PSScriptRoot\n"
                      "$exe = Join-Path $PSScriptRoot 'v2game.exe'\n"
                      "$gameArgs = @(" + ", ".join(map(quote, args)) + ")\n& $exe @gameArgs\n")
            # BOM lets Windows PowerShell read non-ASCII descriptor filenames.
            (payload / (launch_name + ".ps1")).write_text(script, encoding="utf-8-sig")
            (payload / (launch_name + ".cmd")).write_bytes(
                ('@echo off\r\npowershell.exe -NoProfile -ExecutionPolicy Bypass -File "%~dp0'
                 + launch_name + '.ps1"\r\nif errorlevel 1 pause\r\n').encode("ascii"))
            shutil.copytree(payload, output)
        finally:
            shutil.rmtree(staging)
    return folder.name, launch_name


def owned_folder(folder):
    """Recognize only our army package, including its validated V2DLL plugin."""
    import tgcx_packages as pk
    from install_dll import logic
    folder = Path(folder)
    if folder.is_symlink() or not (folder / pk.MARKER).is_file():
        return False
    if not re.search(r"^package\s*=\s*army\s*$", (folder / pk.MARKER).read_text(), re.M):
        return False
    allowed = {"interface/buildunit.gui", "interface/unitpanel.gui", "tgcx.dll", "v2dll_mod.dll",
               "v2dll_settings.ini", "common/defines_v2dll.txt"}
    for p in folder.rglob("*"):
        if p.is_symlink():
            return False
        if p.is_file():
            if p.name in ("tgcx.dll", "v2dll_mod.dll"):
                try:
                    logic(p)
                except (ValueError, OSError):
                    return False
            if p.relative_to(folder).as_posix() not in allowed and not p.name.startswith("tgcx_"):
                return False
    return True


def restore(game, backup, *, _rollback=False):
    from install_dll import game_running
    game, backup = Path(game).resolve(), Path(backup).resolve()
    if game_running():
        raise ValueError("Close Victoria II normally before restoring")
    record = json.loads((backup / "restore.json").read_text())
    if record["game"] != str(game):
        raise ValueError("This backup belongs to a different game folder")
    for item in record["entries"]:
        rel = Path(item["path"])
        expected = re.fullmatch(r"mod[\\/]tgcx_army_[a-z0-9_.-]+(?:\.mod)?|tgcx_launch_army_[a-z0-9_.-]+\.(?:cmd|ps1)", str(rel))
        target = game / rel
        if not expected or target.is_symlink() or not target.resolve().is_relative_to(game):
            raise ValueError("Invalid backup target")
        saved = backup / rel
        if item["existed"] and (not saved.exists() or saved.is_symlink() or not saved.resolve().is_relative_to(backup)):
            raise ValueError("Backup is incomplete or contains linked entries")
        if target.is_dir() and not _rollback and not owned_folder(target):
            raise ValueError(f"Unrecognized package: {target}")
    for item in record["entries"]:
        target, saved = game / item["path"], backup / item["path"]
        if target.is_dir():
            shutil.rmtree(target)
        elif target.exists():
            target.unlink()
        if item["existed"]:
            target.parent.mkdir(parents=True, exist_ok=True)
            (shutil.copytree if saved.is_dir() else shutil.copy2)(saved, target)


def install(game, descriptor, dll=None):
    from install_dll import game_running
    import tgcx_packages as pk
    game = Path(game).resolve()
    if game_running():
        raise ValueError("Close Victoria II normally before installing")
    check_v2dll(game)
    with tempfile.TemporaryDirectory(prefix="tgcx_army_install_") as temp:
        payload = Path(temp) / "ready"
        folder, launcher = prepare(game, descriptor, payload, dll)
        entries = [f"mod/{folder}", f"mod/{folder}.mod", launcher + ".ps1", launcher + ".cmd"]
        for rel in entries:
            target = game / rel
            if target.is_symlink() or not target.resolve().is_relative_to(game):
                raise ValueError(f"Linked installation target refused: {target}")
            if target.is_dir() and not owned_folder(target):
                raise ValueError(f"Unrecognized existing package: {target}")
            if target.is_file():
                if rel.endswith(".mod"):
                    if pk.our_descriptor(target) != folder:
                        raise ValueError(f"Unrecognized descriptor: {target}")
                elif b"tgcx_launch_army_" not in target.read_bytes() and b"Army Templates and Conform 0.8.1 launcher" not in target.read_bytes():
                    raise ValueError(f"Unrecognized launcher: {target}")
        if game_running():
            raise ValueError("Close Victoria II normally before installing")
        backup = game / "tgcx_backups" / (datetime.now().strftime("%Y%m%d-%H%M%S-%f") + "-army-081")
        if not backup.resolve().is_relative_to(game) or (game / "tgcx_backups").is_symlink():
            raise ValueError("Linked backup folder refused")
        backup.mkdir(parents=True, exist_ok=False)
        record = {"game": str(game), "entries": []}
        for rel in entries:
            target, saved = game / rel, backup / rel
            record["entries"].append({"path": rel, "existed": target.exists()})
            if target.exists():
                saved.parent.mkdir(parents=True, exist_ok=True)
                (shutil.copytree if target.is_dir() else shutil.copy2)(target, saved)
        (backup / "restore.json").write_text(json.dumps(record, indent=2), encoding="utf-8")
        # V2DLL may have written this file during an earlier run (P48).
        defines = game / "mod" / folder / "common/defines_v2dll.txt"
        if defines.is_file():
            kept = payload / "mod" / folder / "common/defines_v2dll.txt"
            kept.parent.mkdir(parents=True, exist_ok=True)
            shutil.copy2(defines, kept)
        try:
            for rel in entries:
                target, source = game / rel, payload / rel
                if target.is_dir():
                    shutil.rmtree(target)
                elif target.exists():
                    target.unlink()
                target.parent.mkdir(parents=True, exist_ok=True)
                (shutil.copytree if source.is_dir() else shutil.copy2)(source, target)
        except BaseException:
            restore(game, backup, _rollback=True)
            raise
    return game / (launcher + ".cmd"), backup


def gui():
    import tkinter as tk
    from tkinter import ttk, filedialog, messagebox
    root = tk.Tk()
    root.title("Army Templates and Conform 0.8.1 Setup")
    root.resizable(False, False)
    frame = ttk.Frame(root, padding=20)
    frame.grid()
    game = tk.StringVar()
    chosen = tk.StringVar()
    status = tk.StringVar(value="Uses your installed V2DLL. Close Victoria II before installing.")
    ttk.Label(frame, text="Army Templates and Conform 0.8.1", font=("Segoe UI", 14)).grid(columnspan=2, sticky="w", pady=(0, 12))
    ttk.Label(frame, text="Victoria II folder").grid(row=1, columnspan=2, sticky="w")
    ttk.Entry(frame, textvariable=game, width=60, state="readonly").grid(row=2, column=0)
    combo = ttk.Combobox(frame, textvariable=chosen, width=57, state="readonly")
    def browse():
        path = filedialog.askopenfilename(title="Select v2game.exe", filetypes=[("Victoria II", "v2game.exe")])
        if path:
            game.set(str(Path(path).parent))
            choices = [p.name for p in sorted((Path(game.get()) / "mod").glob("*.mod")) if not p.name.lower().startswith("tgcx_")]
            combo["values"] = choices
            chosen.set(next((n for n in choices if n.lower() == "tgc_v2.5.2.mod"), choices[0] if choices else ""))
    ttk.Button(frame, text="Browse...", command=browse).grid(row=2, column=1, padx=(8, 0))
    ttk.Label(frame, text="Base mod (tested with TGC v2.5.2)").grid(row=3, columnspan=2, sticky="w", pady=(12, 0))
    combo.grid(row=4, column=0)
    ttk.Label(frame, textvariable=status, wraplength=500).grid(row=5, columnspan=2, sticky="w", pady=16)
    def run():
        if not game.get() or not chosen.get():
            messagebox.showerror("Setup", "Choose the game and base mod first.")
            return
        button["state"] = "disabled"
        status.set("Preparing interface files and installing. Please wait...")
        root.update()
        try:
            launcher, backup = install(game.get(), chosen.get())
            messagebox.showinfo("Installed", f"Army 0.8.1 installed.\n\nLaunch manually with:\n{launcher}\n\nBackup:\n{backup}")
            status.set("Installed. Use the generated launcher in the game folder.")
        except Exception as error:
            messagebox.showerror("Setup could not complete", str(error))
            status.set("Setup stopped. See the error above.")
        finally:
            button["state"] = "normal"
    button = ttk.Button(frame, text="Install Army 0.8.1", command=run)
    button.grid(row=6, column=0, sticky="w")
    def undo():
        if not game.get():
            messagebox.showerror("Restore", "Choose the game folder first.")
            return
        backup = filedialog.askdirectory(title="Choose the backup folder", initialdir=str(Path(game.get()) / "tgcx_backups"))
        if backup:
            try:
                restore(game.get(), backup)
                messagebox.showinfo("Restored", "Backup restored. A first-install backup removes the added Army package.")
                status.set("Backup restored.")
            except Exception as error:
                messagebox.showerror("Restore could not complete", str(error))
    ttk.Button(frame, text="Restore backup...", command=undo).grid(row=6, column=1)
    root.mainloop()


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--game", type=Path)
    ap.add_argument("--base", default="TGC_v2.5.2.mod")
    ap.add_argument("--prepare", type=Path)
    ap.add_argument("--restore", type=Path)
    args = ap.parse_args()
    if not args.game:
        gui()
    elif args.restore:
        restore(args.game, args.restore)
        print("Backup restored")
    elif args.prepare:
        print(prepare(args.game, args.base, args.prepare))
    else:
        launcher, backup = install(args.game, args.base)
        print(f"Installed. Launch manually: {launcher}\nBackup: {backup}")


if __name__ == "__main__":
    main()
