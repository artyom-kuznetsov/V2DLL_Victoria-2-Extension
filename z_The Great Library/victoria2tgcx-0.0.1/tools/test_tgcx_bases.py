"""Tests for tools/tgcx_bases.py (MOD-2 step 1). Synthetic trees only."""
import tempfile
import unittest
from pathlib import Path

from tgcx_bases import Base, missing_fonts, missing_sprites, slug


def put(path, text):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(text, encoding="cp1252")


class BasesTest(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        g = self.game = Path(self.tmp.name)
        put(g / "interface/core.gfx", 'spriteType = { name = "GFX_vanilla" }')
        put(g / "common/defines.lua", "vanilla")
        put(g / "common/x.txt", "vanilla")
        put(g / "mod/B/interface/b.gfx", 'spriteType = { name = "GFX_base" }')
        put(g / "mod/B/common/x.txt", "base")
        put(g / "mod/B.mod", 'name = "Base B"\npath = "mod/B"\nuser_dir = "BB"\n'
            'replace_path = "common"\n')
        put(g / "mod/Bad.mod", 'name = "Bad"\npath = "mod/Bad4.5"\n')
        put(g / "mod/Fixed/interface/f.gfx", "")

    def tearDown(self):
        self.tmp.cleanup()

    def test_vanilla(self):
        b = Base(self.game, "vanilla")
        self.assertEqual((b.name, b.root, b.slug), ("vanilla", None, "vanilla"))
        self.assertEqual(b.sprites(), {"GFX_vanilla"})

    def test_mod_reads_descriptor_and_replace_path(self):
        b = Base(self.game, self.game / "mod/B.mod")
        self.assertEqual((b.name, b.user_dir, b.replace), ("Base B", "BB", ["common"]))
        files = b.files("common")
        self.assertEqual(sorted(files), ["x.txt"])  # vanilla's defines.lua hidden
        self.assertEqual(files["x.txt"].read_text(), "base")
        self.assertEqual(b.sprites(), {"GFX_vanilla", "GFX_base"})

    def test_missing_path_refused_unless_fixed(self):
        with self.assertRaises(ValueError):
            Base(self.game, self.game / "mod/Bad.mod")
        b = Base(self.game, self.game / "mod/Bad.mod", fix_path="mod/Fixed")
        self.assertTrue(b.fixed)
        self.assertEqual(b.root, self.game / "mod/Fixed")

    def test_missing_sprites(self):
        b = Base(self.game, "vanilla")
        gui = 'spriteType = "GFX_vanilla"\nquadTextureSprite = "GFX_base"\nspriteType = "GFX_tgcx_x"'
        self.assertEqual(missing_sprites(b, gui, {"GFX_tgcx_x"}), ["GFX_base"])

    def test_missing_fonts(self):
        put(self.game / "gfx/fonts/vic_18.fnt", "")
        put(self.game / "interface/fonts.gfx", 'bitmapfont = { name = "Arial12" fontname = "a" }')
        b = Base(self.game, "vanilla")
        gui = 'font = "vic_18"\nfont = "arial12"\nfont = "TGC_only"'
        self.assertEqual(missing_fonts(b, gui), ["TGC_only"])

    def test_slug(self):
        self.assertEqual(slug("TGC_v2.5.2"), "tgc252")
        self.assertEqual(slug("Divergences of Darkness Fan Fork"), "divergences_of_darkness_fan_fork")
        self.assertEqual(slug("HPM4.5"), "hpm4.5")


if __name__ == "__main__":
    unittest.main()
