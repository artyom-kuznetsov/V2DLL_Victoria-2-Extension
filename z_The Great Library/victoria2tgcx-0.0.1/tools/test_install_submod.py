"""Verify staged script installation, retained rollback and failure safety."""
from pathlib import Path
import shutil
import sys
import tempfile
import unittest
from unittest.mock import patch

import install_submod as installer


def snapshot(path):
    return {str(p.relative_to(path)): p.read_bytes() for p in path.rglob("*") if p.is_file()}


class InstallTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory(prefix="tgcx_install_test_")
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name)
        self.mod, self.tgc, self.old, self.new = [self.root / x for x in ("mod", "tgc", "old", "new")]
        self.mod.mkdir()
        (self.tgc / "common").mkdir(parents=True)
        (self.tgc / "common/event_modifiers.txt").write_bytes(b"fixture_base = {}\r\n")
        for source, label in ((self.old, "old"), (self.new, "new")):
            (source / "TGCX/events").mkdir(parents=True)
            (source / "TGCX/events/tgcx_fixture.txt").write_text(label)
            (source / "TGCX.mod").write_text('name = "TGCX"\npath = "mod/TGCX"\n')
            (source / "tgcx_event_modifiers.txt").write_text(f"tgcx_{label} = {{}}\n")
        shutil.copytree(self.old / "TGCX", self.mod / "TGCX")
        shutil.copy2(self.old / "TGCX.mod", self.mod / "TGCX.mod")
        installer.generate(self.tgc, self.mod / "TGCX", self.old)
        self.before = snapshot(self.mod)
        self.running = patch.object(installer, "game_running", return_value=False)
        self.running.start()
        self.addCleanup(self.running.stop)

    def test_dry_run_does_not_mutate_live_or_create_backup(self):
        backup = self.root / "backup"
        installer.install(self.mod, self.tgc, self.new, dry_run=True, backup=backup)
        self.assertEqual(snapshot(self.mod), self.before)
        self.assertFalse(backup.exists())

    def test_install_and_complete_backup_source_round_trip(self):
        backup = self.root / "backup"
        installer.install(self.mod, self.tgc, self.new, backup=backup)
        self.assertEqual((self.mod / "TGCX/events/tgcx_fixture.txt").read_text(), "new")
        self.assertIn(b"tgcx_new", (self.mod / "TGCX/common/event_modifiers.txt").read_bytes())
        installer.install(self.mod, self.tgc, backup, backup=self.root / "backup_after")
        self.assertEqual(snapshot(self.mod), self.before)

    def test_running_game_refuses_before_mutation(self):
        with patch.object(installer, "game_running", return_value=True):
            with self.assertRaisesRegex(ValueError, "close v2game"):
                installer.install(self.mod, self.tgc, self.new)
        self.assertEqual(snapshot(self.mod), self.before)

    def test_missing_generation_input_preserves_installed_mod(self):
        (self.new / "tgcx_event_modifiers.txt").unlink()
        with self.assertRaises(SystemExit):
            installer.install(self.mod, self.tgc, self.new)
        self.assertEqual(snapshot(self.mod), self.before)

    def test_foreign_live_file_and_overlapping_backup_are_rejected(self):
        (self.mod / "TGCX/foreign.txt").write_text("retain me")
        before = snapshot(self.mod)
        with self.assertRaisesRegex(ValueError, "foreign"):
            installer.install(self.mod, self.tgc, self.new)
        self.assertEqual(snapshot(self.mod), before)
        (self.mod / "TGCX/foreign.txt").unlink()
        with self.assertRaisesRegex(ValueError, "backup must"):
            installer.install(self.mod, self.tgc, self.new, backup=self.mod / "backup")
        self.assertEqual(snapshot(self.mod), self.before)

    def test_generation_base_mismatch_refuses_before_live_deletion(self):
        (self.mod / "TGCX/common/event_modifiers.txt").write_text("unexpected base")
        before = snapshot(self.mod)
        with self.assertRaisesRegex(ValueError, "do not match"):
            installer.install(self.mod, self.tgc, self.new, backup=self.root / "backup")
        self.assertEqual(snapshot(self.mod), before)

    def test_failed_live_copy_restores_original_bytes(self):
        original = shutil.copytree
        def fail_live_once(src, dest, *args, **kw):
            if Path(src).name == "TGCX" and Path(src).parent.name.startswith("tgcx_submod_") and Path(dest) == self.mod / "TGCX":
                raise OSError("fixture live copy failure")
            return original(src, dest, *args, **kw)
        with patch.object(installer.shutil, "copytree", side_effect=fail_live_once):
            with self.assertRaisesRegex(OSError, "fixture"):
                installer.install(self.mod, self.tgc, self.new, backup=self.root / "backup")
        self.assertEqual(snapshot(self.mod), self.before)

    def test_load_test_probe_only_with_flag(self):
        probe = ["TGCX/decisions/tgcx_loadtest.txt", "TGCX/events/tgcx_loadtest.txt",
                 "TGCX/localisation/tgcx_loadtest.csv", "TGCX/localisation/000_tgcx_loadtest_override.csv"]
        for rel in probe:
            (self.new / rel).parent.mkdir(parents=True, exist_ok=True)
            (self.new / rel).write_text("probe")
        installer.install(self.mod, self.tgc, self.new, backup=self.root / "b1")
        self.assertFalse([rel for rel in probe if (self.mod / rel).exists()])
        self.assertTrue((self.mod / "TGCX/events/tgcx_fixture.txt").exists())
        installer.install(self.mod, self.tgc, self.new, backup=self.root / "b2", load_test=True)
        self.assertEqual([rel for rel in probe if not (self.mod / rel).exists()], [])
        installer.remove(self.mod)
        self.assertEqual(list(self.mod.iterdir()), [])

    def bill_source(self):
        from tgcx_bill_gui import layout
        (self.tgc / "interface").mkdir()
        base = b'guiTypes = { windowType = { name="country_politics" size={x=800 y=700} } }\r\n'
        (self.tgc / "interface/country_politics.gui").write_bytes(base)
        (self.new / "TGCX/tgcx_bill_layout.txt").write_bytes(layout()[0].encode("cp1252"))
        return base

    def test_bill_install_and_backup_regeneration_round_trip(self):
        base = self.bill_source()
        installer.install(self.mod, self.tgc, self.new, backup=self.root / "baseline")
        bill = snapshot(self.mod)
        self.assertIn(b"tgcx_bill_window", bill[str(Path("TGCX/interface/country_politics.gui"))])
        self.assertEqual((self.tgc / "interface/country_politics.gui").read_bytes(), base)
        installer.install(self.mod, self.tgc, self.old, backup=self.root / "bill_backup")
        self.assertEqual(snapshot(self.mod), self.before)
        installer.install(self.mod, self.tgc, self.root / "bill_backup", backup=self.root / "old_again")
        self.assertEqual(snapshot(self.mod), bill)

    def test_bill_anchor_failure_preserves_live_files(self):
        self.bill_source()
        gui = self.tgc / "interface/country_politics.gui"
        for bad in ('guiTypes={}', 'windowType={name="country_politics"} windowType={name="country_politics"}'):
            gui.write_text(bad)
            with self.assertRaises(ValueError):
                installer.install(self.mod, self.tgc, self.new, backup=self.root / "backup")
            self.assertEqual(snapshot(self.mod), self.before)
            self.assertFalse((self.root / "backup").exists())

    def test_unmarked_live_gui_is_foreign(self):
        (self.mod / "TGCX/interface").mkdir()
        (self.mod / "TGCX/interface/country_politics.gui").write_text("unowned GUI")
        before = snapshot(self.mod)
        with self.assertRaisesRegex(ValueError, "foreign"):
            installer.install(self.mod, self.tgc, self.new)
        self.assertEqual(snapshot(self.mod), before)


if __name__ == "__main__":
    unittest.main(testRunner=unittest.TextTestRunner(stream=sys.stdout, verbosity=2))
