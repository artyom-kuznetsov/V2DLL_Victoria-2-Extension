"""Installer transaction checks without touching or launching a real game."""
from pathlib import Path
import shutil
import tempfile
import unittest
from unittest.mock import patch

import army_test_setup as setup


class InstallTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name)
        self.game = self.root / "game"
        (self.game / "mod").mkdir(parents=True)
        self.folder = "tgcx_army_test"
        self.launcher = "tgcx_launch_army_test"
        self.addCleanup(patch.stopall)
        patch("install_dll.game_running", return_value=False).start()
        patch.object(setup, "check_v2dll").start()
        patch.object(setup, "prepare", side_effect=self.fake_prepare).start()

    def fake_prepare(self, game, descriptor, payload, dll=None):
        folder = payload / "mod" / self.folder
        folder.mkdir(parents=True)
        (folder / "tgcx_package.txt").write_text("package = army\nversion = 0.8.1\n")
        (folder / "tgcx_content.txt").write_text("new content")
        (folder.parent / (self.folder + ".mod")).write_text(f'path = "mod/{self.folder}"\n')
        (payload / (self.launcher + ".ps1")).write_text("# Army Templates and Conform 0.8.1 launcher\n")
        (payload / (self.launcher + ".cmd")).write_text(self.launcher)
        return self.folder, self.launcher

    def test_install_repeat_restore_and_uninstall(self):
        launcher, first = setup.install(self.game, "test.mod")
        self.assertTrue(launcher.is_file())
        content = self.game / "mod" / self.folder / "tgcx_content.txt"
        content.write_text("old content")
        _, second = setup.install(self.game, "test.mod")
        self.assertEqual(content.read_text(), "new content")
        setup.restore(self.game, second)
        self.assertEqual(content.read_text(), "old content")
        setup.restore(self.game, first)
        self.assertFalse(content.parent.exists())
        self.assertFalse(launcher.exists())

    def test_running_game_is_refused(self):
        with patch("install_dll.game_running", return_value=True):
            with self.assertRaisesRegex(ValueError, "Close Victoria"):
                setup.install(self.game, "test.mod")
        self.assertFalse((self.game / "tgcx_backups").exists())

    def test_foreign_content_is_preserved(self):
        folder = self.game / "mod" / self.folder
        folder.mkdir()
        (folder / "foreign.txt").write_text("keep")
        with self.assertRaisesRegex(ValueError, "Unrecognized"):
            setup.install(self.game, "test.mod")
        self.assertEqual((folder / "foreign.txt").read_text(), "keep")

    def test_failed_copy_rolls_back_partial_install(self):
        setup.install(self.game, "test.mod")
        content = self.game / "mod" / self.folder / "tgcx_content.txt"
        content.write_text("old content")
        original = shutil.copytree
        fired = False
        def failing_copy(source, destination, *args, **kwargs):
            nonlocal fired
            if Path(destination) == content.parent and not fired:
                fired = True
                Path(destination).mkdir()
                (Path(destination) / "partial.txt").write_text("partial copy")
                raise OSError("simulated disk failure")
            return original(source, destination, *args, **kwargs)
        with patch.object(setup.shutil, "copytree", side_effect=failing_copy):
            with self.assertRaisesRegex(OSError, "disk failure"):
                setup.install(self.game, "test.mod")
        self.assertTrue(fired)
        self.assertEqual(content.read_text(), "old content")
        self.assertFalse((content.parent / "partial.txt").exists())

    def test_v2dll_disabled_is_reported(self):
        # Run the real loader check independently of the installation mock.
        patch.stopall()
        (self.game / "lua51.dll").write_bytes(b"V2DLL LOAD_DLL_FROM_MOD_FOLDER")
        (self.game / "v2dll_settings.ini").write_text("LOAD_DLL_FROM_MOD_FOLDER=0\n")
        with self.assertRaisesRegex(ValueError, "Enable LOAD_DLL"):
            setup.check_v2dll(self.game)


if __name__ == "__main__":
    unittest.main()
