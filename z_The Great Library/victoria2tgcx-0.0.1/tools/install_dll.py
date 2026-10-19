"""Reversibly install the TGCX DLLs. The game must be closed; originals are retained.

Since MOD-1 (D16) there are two files: lua51.dll, the Lua forwards plus a loader,
and tgcx.dll, the logic. A retained single-file build (0.6.5 and earlier) can
still be installed as a rollback; any tgcx.dll of ours is then set aside."""

import argparse
import ctypes
from ctypes import wintypes
import hashlib
import json
import os
from pathlib import Path
import shutil

import check_exe
from tgcx_pe import PE

ROOT = Path(__file__).resolve().parent.parent
SOURCE = ROOT / "dll/tgcx/Release/lua51.dll"
LOGIC = "tgcx.dll"
LOADER_MARKER = b"TGCX loader MOD-1 0.7.0"
# MOD-2: the loader finds tgcx.dll in a package folder through the -mod= list, so
# nothing is installed beside it; a tgcx.dll left in the game folder is set aside.
PACKAGE_LOADER_MARKER = b"TGCX loader MOD-2 0.8.0"
LOGIC_MARKER = b"TGCX MOD-1 0.7.0"
LOGIC_MARKERS = (LOGIC_MARKER, b"TGCX MOD-2 0.8.0", b"TGCX TPL-4 0.8.1", b"TGCX TPL-4 0.8.2", b"TGCX MOD-5 0.9.0", b"TGCX MOD-6 0.10.0", b"TGCX MOD-6 0.10.1", b"TGCX MOD-6 0.10.2", b"TGCX MOD-6 0.10.3", b"TGCX MOD-6 0.10.4")
ORIGINAL_SIZE = 11264
ORIGINAL_SHA256 = "b2ba19343691f22d1af1417f9a7cbaeae74ba820a2a412f5a6cdea271cc1a7b0"
STATE = "tgcx_dll_install.json"


def digest(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def game_running():
    if os.name != "nt":
        return False
    class Entry(ctypes.Structure):
        _fields_ = [("dwSize", wintypes.DWORD), ("cntUsage", wintypes.DWORD),
                    ("th32ProcessID", wintypes.DWORD), ("th32DefaultHeapID", ctypes.c_size_t),
                    ("th32ModuleID", wintypes.DWORD), ("cntThreads", wintypes.DWORD),
                    ("th32ParentProcessID", wintypes.DWORD), ("pcPriClassBase", wintypes.LONG),
                    ("dwFlags", wintypes.DWORD), ("szExeFile", wintypes.WCHAR * 260)]
    kernel = ctypes.WinDLL("kernel32", use_last_error=True)
    kernel.CreateToolhelp32Snapshot.argtypes = [wintypes.DWORD, wintypes.DWORD]
    kernel.CreateToolhelp32Snapshot.restype = wintypes.HANDLE
    kernel.Process32FirstW.argtypes = [wintypes.HANDLE, ctypes.POINTER(Entry)]
    kernel.Process32NextW.argtypes = [wintypes.HANDLE, ctypes.POINTER(Entry)]
    kernel.CloseHandle.argtypes = [wintypes.HANDLE]
    snapshot = kernel.CreateToolhelp32Snapshot(2, 0)
    if snapshot == ctypes.c_void_p(-1).value:
        raise OSError("cannot check whether the game is running")
    try:
        entry = Entry()
        entry.dwSize = ctypes.sizeof(entry)
        more = kernel.Process32FirstW(snapshot, ctypes.byref(entry))
        while more:
            if entry.szExeFile.lower() == "v2game.exe":
                return True
            more = kernel.Process32NextW(snapshot, ctypes.byref(entry))
        if ctypes.get_last_error() != 18:  # ERROR_NO_MORE_FILES
            raise OSError("process enumeration failed")
        return False
    finally:
        kernel.CloseHandle(snapshot)


def original(path):
    if not path.is_file() or path.stat().st_size != ORIGINAL_SIZE or digest(path) != ORIGINAL_SHA256:
        raise ValueError(f"{path}: not the verified original 11,264-byte Lua DLL; leaving it alone")


def proxy(path, reference):
    image = PE(path)
    if image.machine != 0x14C or not any(marker in image.data for marker in
                (b"TGCX DLL-0 0.1.0", b"TGCX DLL-1+HEMI-1 0.2.0", b"TGCX DLL-1+HEMI-1 0.2.1", b"TGCX DLL-1+HEMI-1 0.2.2", b"TGCX DLL-1+HEMI-1 0.2.3", b"TGCX DLL-1+HEMI-1 0.2.4", b"TGCX DLL-1+HEMI-2 0.2.5", b"TGCX DLL-1+HEMI-3 0.2.6", b"TGCX DLL-1+HEMI-3 0.2.7", b"TGCX DLL-1+HEMI-3 0.2.8", b"TGCX LAW-2 0.3.0", b"TGCX LAW-2 0.3.1", b"TGCX LAW-2 0.3.2", b"TGCX LAW-2 0.3.3", b"TGCX LAW-2 0.3.4", b"TGCX LAW-2 0.3.5", b"TGCX TPL-0 0.4.0", b"TGCX TPL-0 0.4.1", b"TGCX TPL-0 0.4.2", b"TGCX TPL-0 0.4.3", b"TGCX TPL-0 0.4.4", b"TGCX TPL-1 0.5.0", b"TGCX TPL-1 0.5.1", b"TGCX TPL-1 0.6.0", b"TGCX TPL-1 0.6.1", b"TGCX TPL-1 0.6.2", b"TGCX TPL-1 0.6.3", b"TGCX LAW-3 0.6.4")):
        if image.machine != 0x14C or not any(marker in image.data for marker in (b"TGCX TPL-1 0.6.5", LOADER_MARKER, PACKAGE_LOADER_MARKER)):
            raise ValueError(f"{path}: not a recognized TGCX Win32 build")
    expected = {name: (ordinal, f"lua51_real.{name}")
                for name, (ordinal, _) in PE(reference).exports().items()}
    if len(expected) != 128 or image.exports() != expected:
        raise ValueError("Lua exports do not match the original's 128 names and ordinals")


def loader(path):
    """True for a MOD-1 loader, which needs tgcx.dll beside it."""
    return LOADER_MARKER in PE(path).data


def logic(path):
    image = PE(path)
    if image.machine != 0x14C or not any(m in image.data for m in LOGIC_MARKERS):
        raise ValueError(f"{path}: not a recognized TGCX logic DLL")
    if not {"tgcx_Init", "V2Mod_Init"} <= set(image.exports()):
        raise ValueError(f"{path}: tgcx_Init or V2Mod_Init export missing")


def card(path):
    data = PE(path).data
    for marker, name in ((PACKAGE_LOADER_MARKER, "MOD-2"), (LOADER_MARKER, "MOD-1"), (b"TGCX TPL-1", "TPL-1"), (b"TGCX LAW-3", "LAW-3"),
                         (b"TGCX TPL-0", "TPL-0"), (b"TGCX LAW-2", "LAW-2"), (b"TGCX DLL-1+HEMI-3", "DLL-1+HEMI-3"),
                         (b"TGCX DLL-1+HEMI-2", "DLL-1+HEMI-2"), (b"TGCX DLL-1+HEMI-1", "DLL-1+HEMI-1")):
        if marker in data:
            return name
    return "DLL-0"


def unique_off(folder, name):
    candidate = folder / name
    index = 1
    while candidate.exists():
        candidate = folder / f"{name}.{index}"
        index += 1
    return candidate


def write_state(path, data):
    temporary = path.with_name(path.name + ".pending")
    if temporary.exists():
        raise ValueError(f"{temporary} exists; refusing to overwrite it")
    with temporary.open("x", encoding="utf-8", newline="\n") as stream:
        json.dump(data, stream, indent=2)
        stream.write("\n")
    os.replace(temporary, path)


def operate(folder, remove=False, dry_run=False, source=SOURCE):
    folder = Path(folder).resolve(strict=True)
    source = Path(source).resolve()
    if game_running():
        raise ValueError("close v2game.exe before installing or removing the DLL")
    if digest(folder / "v2game.exe") != check_exe.SHA256:
        raise ValueError("v2game.exe is not the reference build; leaving the folder alone")
    active, real, state = folder / "lua51.dll", folder / "lua51_real.dll", folder / STATE
    installed_logic = folder / LOGIC
    if not (folder / "lua5.1.dll").is_file():
        raise ValueError("lua5.1.dll is missing (the original shim requires it)")
    if any(p.is_symlink() for p in (active, real, state, installed_logic)):
        raise ValueError("refusing linked DLL or state paths")
    old_state = None
    if real.exists():
        original(real)
        if not state.is_file():
            raise ValueError("lua51_real.dll already exists without our installation record; refusing to overwrite")
        old_state = json.loads(state.read_text(encoding="utf-8"))
        if old_state.get("original_sha256") != ORIGINAL_SHA256:
            raise ValueError("unexpected original hash in installation record")
        if active.exists():
            proxy(active, real)
            if digest(active) != old_state.get("proxy_sha256"):
                raise ValueError("active DLL differs from our installation record; leaving it alone")
    else:
        original(active)
        if state.exists():
            raise ValueError("installation record exists without the original backup; inspect it first")
    # A tgcx.dll is ours only when our record names its hash.
    if installed_logic.exists() and (not old_state or digest(installed_logic) != old_state.get("logic_sha256")):
        raise ValueError("tgcx.dll differs from our installation record; leaving it alone")
    if remove:
        if not old_state:
            print("install_dll: original already active; nothing to remove")
            return
        off = unique_off(folder, "lua51_tgcx.dll.off")
        logic_off = unique_off(folder, "tgcx.dll.off")
        state_off = unique_off(folder, "tgcx_dll_install.json.off")
        if dry_run:
            print(f"dry-run: retain proxy as {off.name}"
                  f"{f' and tgcx.dll as {logic_off.name}' if installed_logic.exists() else ''}; restore lua51_real.dll -> lua51.dll")
            return
        logic_moved = installed_logic.exists()
        if logic_moved:
            installed_logic.rename(logic_off)
        try:
            if active.exists():
                active.rename(off)
            try:
                real.rename(active)
            except OSError:
                if off.exists():
                    off.rename(active)
                raise
        except OSError:
            if logic_moved:
                logic_off.rename(installed_logic)
            raise
        state.rename(state_off)
        print(f"install_dll: original restored; proxy retained as {off.name}"
              f"{f', tgcx.dll as {logic_off.name}' if logic_moved else ''}")
        return
    if not source.is_file():
        raise ValueError("build the DLL first: powershell -File tools/build_dll.ps1")
    proxy(source, real if real.exists() else active)
    logic_source = source.parent / LOGIC if loader(source) else None
    if logic_source:
        if not logic_source.is_file():
            raise ValueError(f"{logic_source}: the loader needs tgcx.dll beside it")
        logic(logic_source)
    source_hash = digest(source)
    logic_hash = digest(logic_source) if logic_source else None
    current_logic = digest(installed_logic) if installed_logic.exists() else None
    if old_state and active.exists() and source_hash == digest(active) and logic_hash == current_logic:
        print("install_dll: identical proxy already installed; original retained")
        return
    if dry_run:
        print("dry-run: DLL, exports, original, executable and process gates OK; no files changed")
        return
    staged, staged_logic = folder / "tgcx_dll_pending.dll", folder / "tgcx_logic_pending.dll"
    for path in (staged, staged_logic):
        if path.exists():
            raise ValueError(f"{path} exists; refusing to overwrite")
    # Exclusive staging, checked before the original is renamed.
    try:
        for src_path, dst_path, expected in ((source, staged, source_hash), (logic_source, staged_logic, logic_hash)):
            if not src_path:
                continue
            with src_path.open("rb") as src, dst_path.open("xb") as dst:
                shutil.copyfileobj(src, dst)
            if digest(dst_path) != expected:
                raise ValueError("staged DLL hash mismatch; original untouched")
    except (OSError, ValueError):
        for path in (staged, staged_logic):
            if path.exists():
                path.unlink()
        raise
    saved = real if not old_state else unique_off(folder, "lua51_tgcx.dll.off")
    logic_saved = unique_off(folder, "tgcx.dll.off") if current_logic else None
    moved = active.exists()
    logic_moved = logic_placed = False
    if moved:
        active.rename(saved)
    try:
        if logic_saved:
            installed_logic.rename(logic_saved)
            logic_moved = True
        if logic_source:
            staged_logic.rename(installed_logic)
            logic_placed = True
        staged.rename(active)
        write_state(state, {"original_sha256": ORIGINAL_SHA256, "proxy_sha256": source_hash,
                            "source": str(source), "logic_sha256": logic_hash,
                            "logic_source": str(logic_source) if logic_source else None, "card": card(source)})
    except (OSError, ValueError):
        if active.exists():
            active.rename(unique_off(folder, "lua51_tgcx.dll.off"))
        if logic_placed:
            installed_logic.rename(unique_off(folder, "tgcx.dll.off"))
        if logic_moved:
            logic_saved.rename(installed_logic)
        if moved:
            saved.rename(active)
        for path in (staged, staged_logic):
            if path.exists():
                path.unlink()
        raise
    print("install_dll: proxy installed" + (" with tgcx.dll" if logic_source else "") +
          (f"; previous tgcx.dll retained as {logic_saved.name}" if logic_saved else "") +
          "; verified original retained as lua51_real.dll")


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("game_dir", type=Path)
    ap.add_argument("--remove", action="store_true")
    ap.add_argument("--dry-run", action="store_true")
    ap.add_argument("--source", type=Path, default=SOURCE, help="built loader (tgcx.dll beside it) or retained single-file rollback DLL")
    args = ap.parse_args()
    try:
        operate(args.game_dir, args.remove, args.dry_run, args.source)
    except (OSError, ValueError, KeyError) as error:
        raise SystemExit(f"install_dll: {error}") from error


if __name__ == "__main__":
    main()
