"""Installer and real Lua forwarding tests in temporary folders, outside git."""

import contextlib
import io
import json
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile
import unittest
from unittest.mock import patch

import install_dll as installer

GAME = Path(r"E:\Victoria.II.v3.04.Inclu.ALL.DLC")
PROBE = installer.ROOT / "dll/tgcx/Release/tests/tgcx_tests.exe"
# The retained single-file build, the rollback from MOD-1 (0.6.5).
MONOLITHIC = Path("E:/v2re/logs/tgcx-law3-1018/lua51-0.6.5.dll")
# The retained MOD-1 loader, with tgcx.dll beside it (0.7.0): the rollback from MOD-2.
MOD1 = Path("E:/v2re/logs/tgcx-mod1-1018/stage-070/lua51.dll")


class InstallerTests(unittest.TestCase):
    def setUp(self):
        # These installations are isolated temporary fixtures, never the active game folder.
        fixture_process = patch.object(installer, "game_running", return_value=False)
        fixture_process.start()
        self.addCleanup(fixture_process.stop)
        self.temp = tempfile.TemporaryDirectory(prefix="tgcx_dll_test_")
        self.addCleanup(self.temp.cleanup)
        self.folder = Path(self.temp.name)
        for name in ("v2game.exe", "lua5.1.dll"):
            shutil.copy2(GAME / name, self.folder / name)
        original = GAME / "lua51_real.dll" if (GAME / "lua51_real.dll").exists() else GAME / "lua51.dll"
        installer.original(original)
        shutil.copy2(original, self.folder / "lua51.dll")
        self.stdout = contextlib.redirect_stdout(io.StringIO())
        self.stdout.__enter__()
        self.addCleanup(self.stdout.__exit__, None, None, None)

    def snapshot(self):
        return {p.name: installer.digest(p) for p in self.folder.iterdir() if p.is_file()}

    def test_round_trip_and_idempotence(self):
        before = self.snapshot()
        installer.operate(self.folder, dry_run=True)
        self.assertEqual(before, self.snapshot())
        installer.operate(self.folder)
        self.assertEqual(installer.digest(self.folder / "lua51_real.dll"), before["lua51.dll"])
        record = json.loads((self.folder / installer.STATE).read_text(encoding="utf-8"))
        self.assertEqual(record["card"], "MOD-2")
        # MOD-2: tgcx.dll lives in the package folders, not beside the loader.
        self.assertIsNone(record["logic_sha256"])
        self.assertFalse((self.folder / "tgcx.dll").exists())
        installed = self.snapshot()
        installer.operate(self.folder)
        self.assertEqual(installed, self.snapshot())
        installer.operate(self.folder, remove=True)
        self.assertEqual(installer.digest(self.folder / "lua51.dll"), before["lua51.dll"])
        self.assertFalse((self.folder / "lua51_real.dll").exists())
        self.assertTrue((self.folder / "lua51_tgcx.dll.off").exists())
        self.assertFalse((self.folder / "tgcx.dll").exists())
        retained = self.snapshot()
        installer.operate(self.folder, remove=True)
        self.assertEqual(retained, self.snapshot())
        installer.operate(self.folder)
        installer.operate(self.folder, remove=True)
        self.assertTrue((self.folder / "lua51_tgcx.dll.off.1").exists())
        for name, value in before.items():
            self.assertEqual(installer.digest(self.folder / name), value)

    def test_unknown_existing_proxy_is_untouched(self):
        (self.folder / "lua51.dll").write_bytes(b"foreign proxy")
        before = self.snapshot()
        with self.assertRaises(ValueError):
            installer.operate(self.folder)
        self.assertEqual(before, self.snapshot())

    def test_existing_original_backup_without_record_is_untouched(self):
        shutil.copy2(self.folder / "lua51.dll", self.folder / "lua51_real.dll")
        before = self.snapshot()
        with self.assertRaises(ValueError):
            installer.operate(self.folder)
        self.assertEqual(before, self.snapshot())

    def test_changed_executable_is_untouched(self):
        with (self.folder / "v2game.exe").open("ab") as stream:
            stream.write(b"changed")
        before = self.snapshot()
        with self.assertRaises(ValueError):
            installer.operate(self.folder)
        self.assertEqual(before, self.snapshot())

    def test_active_game_blocks_mutation(self):
        before = self.snapshot()
        with patch.object(installer, "game_running", return_value=True):
            with self.assertRaises(ValueError):
                installer.operate(self.folder)
        self.assertEqual(before, self.snapshot())

    def test_tampered_installed_proxy_is_untouched(self):
        installer.operate(self.folder)
        with (self.folder / "lua51.dll").open("ab") as stream:
            stream.write(b"changed")
        before = self.snapshot()
        with self.assertRaises(ValueError):
            installer.operate(self.folder, remove=True)
        self.assertEqual(before, self.snapshot())

    def test_failed_install_restores_original(self):
        before = self.snapshot()
        with patch.object(installer, "write_state", side_effect=OSError("injected write failure")):
            with self.assertRaises(OSError):
                installer.operate(self.folder)
        self.assertFalse((self.folder / "lua51_real.dll").exists())
        self.assertFalse((self.folder / "tgcx.dll").exists())
        for name, value in before.items():
            self.assertEqual(installer.digest(self.folder / name), value)

    def test_unknown_logic_dll_is_untouched(self):
        (self.folder / "tgcx.dll").write_bytes(b"someone else's tgcx.dll")
        before = self.snapshot()
        with self.assertRaises(ValueError):
            installer.operate(self.folder)
        self.assertEqual(before, self.snapshot())

    def test_mod1_loader_without_logic_is_refused(self):
        if not MOD1.is_file():
            self.skipTest(f"{MOD1} not retained")
        source = self.folder / "build"
        source.mkdir()
        shutil.copy2(MOD1, source / "lua51.dll")
        before = self.snapshot()
        with self.assertRaises(ValueError):
            installer.operate(self.folder, source=source / "lua51.dll")
        self.assertEqual(before, self.snapshot())

    def test_mod2_sets_game_folder_logic_aside_and_rolls_back(self):
        if not MOD1.is_file() or not MONOLITHIC.is_file():
            self.skipTest("retained 0.7.0 or 0.6.5 build missing")
        installer.operate(self.folder, source=MOD1)
        logic = installer.digest(self.folder / "tgcx.dll")
        installer.operate(self.folder)
        self.assertFalse((self.folder / "tgcx.dll").exists())
        self.assertEqual(installer.digest(self.folder / "tgcx.dll.off"), logic)
        record = json.loads((self.folder / installer.STATE).read_text(encoding="utf-8"))
        self.assertEqual((record["card"], record["logic_sha256"]), ("MOD-2", None))
        installer.operate(self.folder, source=MONOLITHIC)
        record = json.loads((self.folder / installer.STATE).read_text(encoding="utf-8"))
        self.assertEqual((record["card"], record["logic_sha256"]), ("TPL-1", None))
        installer.operate(self.folder, source=MOD1)
        self.assertEqual(installer.digest(self.folder / "tgcx.dll"), logic)
        installer.operate(self.folder, remove=True)

    def test_v2dll_plugin_entry(self):
        # MOD-1: tgcx.dll loaded the way V2DLL loads a plugin, with a fake V2ModAPI v1.
        probe = self.folder / "tgcx_probe.exe"
        shutil.copy2(PROBE, probe)
        shutil.copy2(installer.SOURCE.parent / installer.LOGIC, self.folder / installer.LOGIC)
        result = subprocess.run([str(probe), "plugin", str(self.folder / installer.LOGIC)],
                                cwd=self.folder, capture_output=True, text=True, timeout=30)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        self.assertIn("tgcx_tests: ALL OK", result.stdout)
        log = (self.folder / "Logs/tgcx.log").read_text(encoding="ascii")
        self.assertEqual(log.count("TGCX MOD-6 0.10.4 tgcx.dll loaded_by=V2DLL plugin API v1"), 1)
        self.assertIn("BAD sha256", log)
        self.assertIn("no game addresses read, no hooks installed", log)
        self.assertIn("Initialisation from second loader ignored: already initialised", log)
        self.assertIn("Initialisation from V2DLL plugin API v1 ignored: already initialised", log)

    def test_real_forwarding_and_unsupported_executable(self):
        installer.operate(self.folder)
        probe = self.folder / "tgcx_probe.exe"
        shutil.copy2(PROBE, probe)
        # MOD-2: a ticked package folder holds tgcx.dll; the probe gets its -mod=.
        package = self.folder / "mod/tgcx_army_fixture"
        package.mkdir(parents=True)
        (self.folder / "mod/tgcx_army_fixture.mod").write_text('name = "Army"\npath = "mod/tgcx_army_fixture"\n')
        (package / "tgcx_package.txt").write_text("package = army\n")
        shutil.copy2(installer.SOURCE.parent / installer.LOGIC, package / installer.LOGIC)
        args = [str(probe), "probe", str(self.folder / "lua51.dll"), "-mod=mod/tgcx_army_fixture.mod"]
        result = subprocess.run(args, cwd=self.folder, capture_output=True, text=True, timeout=30)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        self.assertIn("tgcx_tests: ALL OK", result.stdout)
        log = (self.folder / "Logs/tgcx.log").read_text(encoding="ascii")
        self.assertIn("TGCX MOD-6 0.10.4 tgcx.dll loaded_by=TGCX loader MOD-2 0.8.0", log)
        self.assertIn("BAD sha256", log)
        self.assertIn("no game addresses read, no hooks installed", log)
        self.assertNotIn("Tick hook installed", log)
        self.assertNotIn("upper_house", log)
        # With no package ticked the loader is a plain Lua proxy and says so.
        result = subprocess.run(args[:3], cwd=self.folder, capture_output=True, text=True, timeout=30)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        log = (self.folder / "Logs/tgcx.log").read_text(encoding="ascii")
        self.assertIn("TGCX loader MOD-2 0.8.0: no ticked TGCX package", log)
        self.assertIn("tgcx.dll not loaded", log)
        self.assertIn("Lua forwarding only", log)
        installer.operate(self.folder, remove=True)


if __name__ == "__main__":
    # Successful unittest progress must not trigger PowerShell's redirected-stderr error handling.
    unittest.main(testRunner=unittest.TextTestRunner(stream=sys.stdout, verbosity=2))
