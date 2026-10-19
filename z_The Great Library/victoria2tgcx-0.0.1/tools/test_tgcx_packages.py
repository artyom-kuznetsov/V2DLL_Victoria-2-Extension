"""MOD-2 package installer tests: synthetic game folders, plus one live
byte-identity check against the installed 0.7.0 TGCX when E: is present."""
import contextlib
import io
import shutil
import sys
import tempfile
import unittest
from pathlib import Path
from unittest.mock import patch

import install_submod
import tgcx_packages as pk

GAME = Path(r"E:\Victoria.II.v3.04.Inclu.ALL.DLC")
STAGE = Path(r"E:\v2re\logs\tgcx-law3-1018\stage-064")
# The 0.7.0 TGCX as installed, kept by the 0.8.0 migration (S8).
LIVE = next((p for p in (GAME / "mod/TGCX", Path(r"E:\v2re\logs\tgcx-mod2-1018\before-080-submod\TGCX")) if p.is_dir()), None)


def put(path, text):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(text, encoding="cp1252")


def snapshot(path):
    return {p.relative_to(path).as_posix(): p.read_bytes() for p in path.rglob("*") if p.is_file()}


def fake_generate(tgc, dest, source, only=None, profile=None):
    for rel in only:
        put(Path(dest) / rel, f"generated {rel} for {profile.name}\n")


class PackageTests(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory(prefix="tgcx_pkg_")
        self.addCleanup(self.tmp.cleanup)
        root = Path(self.tmp.name)
        self.game, self.mod, self.src = root / "game", root / "game/mod", root / "stage"
        put(self.game / "interface/core.gfx", 'spriteType = { name = "GFX_vanilla" }')
        put(self.mod / "TGC_v2.5.2.mod", 'name = "TGC v2.5.2 (stable)"\npath = "mod/TGC_v2.5.2/TGC"\nuser_dir = "TGC252"\n')
        put(self.mod / "TGC_v2.5.2/TGC/common/x.txt", "tgc")
        put(self.mod / "HPM4.5.mod", 'name = "HPM"\npath = "mod/HPM4.5"\nuser_dir = "HPM"\n')
        put(self.mod / "HPM/common/x.txt", "hpm")
        for rel in ("decisions/tgcx_laws.txt", "localisation/tgcx_laws.csv", "localisation/tgcx_templates.csv",
                    "gfx/interface/tgcx_tpl_bg.dds", "gfx/interface/tgcx_cf_bg.dds", "gfx/interface/tgcx_bill_bg.dds",
                    "interface/tgcx_templates.gfx", "interface/tgcx_bill.gfx", "tgcx_templates_layout.txt",
                    "events/tgcx_loadtest.txt"):
            put(self.src / "TGCX" / rel, rel)
        put(self.src / "TGCX.mod", 'name = "TGCX"\npath = "mod/TGCX"\n')
        # Today's single install, to migrate (S8).
        put(self.mod / "TGCX/decisions/tgcx_laws.txt", "old")
        put(self.mod / "TGCX.mod", 'name = "TGCX"\npath = "mod/TGCX"\n')
        self.before = snapshot(self.mod)
        for p in (patch.object(install_submod, "generate", fake_generate),
                  patch("install_dll.game_running", return_value=False),
                  contextlib.redirect_stdout(io.StringIO())):
            p.__enter__()
            self.addCleanup(p.__exit__, None, None, None)

    def install(self, spec="tgc252", packages=("army", "politics"), **kw):
        base = pk.resolve_base(self.mod, spec, kw.pop("fix_path", None))
        return pk.install(self.mod, base, list(packages), self.src, **kw)

    def test_split_descriptors_markers_and_migration(self):
        backup = self.install(backup=Path(self.tmp.name) / "b1")
        army, politics = self.mod / "tgcx_army_tgc252", self.mod / "tgcx_politics_tgc252"
        self.assertFalse((self.mod / "TGCX").exists() or (self.mod / "TGCX.mod").exists())
        self.assertEqual(sorted(p.relative_to(army).as_posix() for p in army.rglob("*") if p.is_file()),
                         ["gfx/interface/tgcx_cf_bg.dds", "gfx/interface/tgcx_tpl_bg.dds", "interface/buildunit.gui",
                          "interface/tgcx_templates.gfx", "interface/unitpanel.gui", "localisation/tgcx_templates.csv",
                          "tgcx_package.txt", "tgcx_templates_layout.txt"])
        self.assertTrue((politics / "common/event_modifiers.txt").is_file())
        self.assertFalse((politics / "events/tgcx_loadtest.txt").exists())  # LAW-3: probe only with --load-test
        self.assertFalse((politics / "gfx/interface/tgcx_tpl_bg.dds").exists())
        army_mod = (self.mod / "tgcx_army_tgc252.mod").read_text()
        self.assertIn('name = "Army Templates and Conform (TGC v2.5.2 (stable))"', army_mod)
        self.assertNotIn("user_dir", army_mod)  # S4
        self.assertIn('dependencies = { "TGC v2.5.2 (stable)" }', army_mod)
        self.assertIn('user_dir = "TGCX"', (self.mod / "tgcx_politics_tgc252.mod").read_text())
        self.assertIn("package = army", (army / "tgcx_package.txt").read_text())
        pk.restore(self.mod, backup)
        self.assertEqual(snapshot(self.mod), self.before)

    def test_politics_refused_off_tgc252_and_nothing_changes(self):
        with self.assertRaisesRegex(ValueError, "tgc252 only"):
            self.install("vanilla", ("army", "politics"))
        self.assertEqual(snapshot(self.mod), self.before)

    def test_vanilla_army_has_no_dependency(self):
        self.install("vanilla", ("army",))
        text = (self.mod / "tgcx_army_vanilla.mod").read_text()
        self.assertIn("(vanilla)", text)
        self.assertNotIn("dependencies", text)

    def test_hpm_needs_fix_path_and_gets_our_descriptor(self):
        with self.assertRaises(ValueError):
            self.install("HPM4.5.mod", ("army",))
        self.install("HPM4.5.mod", ("army",), fix_path="mod/HPM")
        fixed = (self.mod / "tgcx_base_hpm4.5.mod").read_text()
        self.assertIn('name = "HPM (path fixed)"', fixed)
        self.assertIn('path = "mod/HPM"', fixed)
        self.assertIn('dependencies = { "HPM (path fixed)" }', (self.mod / "tgcx_army_hpm4.5.mod").read_text())
        self.assertEqual((self.mod / "HPM4.5.mod").read_bytes(), self.before["HPM4.5.mod"])  # R1
        pk.remove(self.mod)
        self.assertFalse(list(self.mod.glob("tgcx_*")))

    def test_sprite_check_refuses_before_any_change(self):
        def missing_sprite(tgc, dest, source, only=None, profile=None):
            for rel in only:
                put(Path(dest) / rel, 'spriteType = "GFX_only_in_tgc"')
        with patch.object(install_submod, "generate", missing_sprite):
            with self.assertRaisesRegex(ValueError, "GFX_only_in_tgc"):
                self.install()
        self.assertEqual(snapshot(self.mod), self.before)

    def test_failed_copy_restores_everything(self):
        original = shutil.copytree
        def fail(src, dest, *a, **kw):
            if Path(dest).name == "tgcx_politics_tgc252" and Path(dest).parent == self.mod:
                raise OSError("injected")
            return original(src, dest, *a, **kw)
        with patch.object(pk.shutil, "copytree", side_effect=fail):
            with self.assertRaisesRegex(OSError, "injected"):
                self.install(backup=Path(self.tmp.name) / "b")
        self.assertEqual(snapshot(self.mod), self.before)

    def test_foreign_files_refused_and_v2dll_defines_kept(self):
        self.install()
        live = self.mod / "tgcx_army_tgc252"
        put(live / "common/defines_v2dll.txt", "v2dll")  # P48
        self.install()
        self.assertEqual((live / "common/defines_v2dll.txt").read_text(), "v2dll")
        put(live / "someone.txt", "not ours")
        before = snapshot(self.mod)
        with self.assertRaisesRegex(ValueError, "not ours"):
            self.install()
        with self.assertRaisesRegex(ValueError, "not ours"):
            pk.remove(self.mod)
        self.assertEqual(snapshot(self.mod), before)

    def test_dry_run_changes_nothing(self):
        self.install(dry_run=True)
        self.assertEqual(snapshot(self.mod), self.before)

    def test_slug_resolution(self):
        self.assertEqual(pk.resolve_base(self.mod, "tgc252").name, "TGC v2.5.2 (stable)")
        self.assertEqual(pk.resolve_base(self.mod, "TGC_v2.5.2.mod").slug, "tgc252")
        with self.assertRaises(ValueError):
            pk.resolve_base(self.mod, "nothing")


@unittest.skipUnless(LIVE and STAGE.is_dir(), "no 0.7.0 TGCX on E:")
class LiveTgc252Test(unittest.TestCase):
    def test_packages_are_byte_identical_to_the_installed_tgcx(self):
        base = pk.resolve_base(GAME / "mod", "tgc252")
        with contextlib.redirect_stdout(io.StringIO()):
            out, temp = pk.build(GAME / "mod", base, ["army", "politics"], STAGE)
        try:
            live, seen = LIVE, set()
            for folder, _ in out.values():
                for p in folder.rglob("*"):
                    rel = p.relative_to(folder).as_posix()
                    if p.is_file() and rel != pk.MARKER:
                        self.assertNotIn(rel, seen)
                        seen.add(rel)
                        self.assertEqual(p.read_bytes(), (live / rel).read_bytes(), rel)
            self.assertEqual(seen, {p.relative_to(live).as_posix() for p in live.rglob("*") if p.is_file()})
        finally:
            shutil.rmtree(temp)


if __name__ == "__main__":
    unittest.main(testRunner=unittest.TextTestRunner(stream=sys.stdout, verbosity=1))
