"""Effective-base catalogues and custom GUI pagination, without a game process."""
from pathlib import Path
import tempfile
import unittest

from tgcx_bases import Base
from tgcx_army_catalog import units, metadata
from tgcx_templates_gui import layout
from tgcx_conform_gui import layout as conform_layout


class CatalogTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.game = Path(self.temp.name)
        (self.game / "v2game.exe").touch()
        (self.game / "units").mkdir()
        (self.game / "interface").mkdir()
        (self.game / "interface/unitpanel.gui").write_text(
            'guiTypes={windowType={name="unitpanel" iconType={name="unitattrition_icon" position={x=245 y=42}}}}')
        (self.game / "mod/test/units").mkdir(parents=True)
        self.descriptor = self.game / "mod/test.mod"
        self.descriptor.write_text('name="Test"\npath="mod/test"\n')
        self.unit(self.game, "infantry", 90, 1)
        self.unit(self.game, "hussar", 120, 2)

    def unit(self, root, key, days, icon, filename=None):
        (root / "units" / (filename or key + ".txt")).write_text(
            f"{key}={{type=land build_time={days} icon={icon}}}\n")

    def test_overrides_inheritance_and_new_types(self):
        root = self.game / "mod/test"
        self.unit(root, "infantry", 50, 3)
        self.unit(root, "horse_artillery", 40, 4)
        base = Base(self.game, self.descriptor)
        rows = units(root, base)
        self.assertEqual([r[0] for r in rows], ["infantry", "hussar", "horse_artillery"])
        self.assertEqual(rows[0][3], 50)
        self.assertIn("horse_artillery|Horse Artillery|Hor|40", metadata(rows))

    def test_replace_path_hides_vanilla_units(self):
        self.descriptor.write_text(self.descriptor.read_text() + 'replace_path="units"\n')
        root = self.game / "mod/test"
        self.unit(root, "custom_soldier", 30, 4)
        self.assertEqual([r[0] for r in units(root)], ["custom_soldier"])

    def test_third_page_and_custom_conform_icons(self):
        root = self.game / "mod/test"
        for i in range(18):
            self.unit(root, f"custom_{i:02}", 40, i + 1)
        base = Base(self.game, self.descriptor)
        fragment, _ = layout(root, base)
        self.assertIn('name="tgcx_tpl_icons_2"', fragment)
        self.assertIn('name="tgcx_tpl_icon_custom_17"', fragment)
        cf, _ = conform_layout(root, base)
        self.assertIn('name="tgcx_cf_change_icon_0_custom_17"', cf)

    def test_duplicate_or_invalid_metadata_refused(self):
        root = self.game / "mod/test"
        self.unit(root, "infantry", 50, 3, "other.txt")
        with self.assertRaisesRegex(ValueError, "duplicate"):
            units(root)
        (root / "units/other.txt").unlink()
        self.unit(root, "custom_soldier", 0, 3)
        with self.assertRaisesRegex(ValueError, "invalid build time"):
            units(root)

    def test_art_frame_metadata_and_effective_texture_override(self):
        from PIL import Image
        from tgcx_army_art import unit_frames, sprites, texture, sprite
        for root in (self.game, self.game / "mod/test"):
            (root / "interface").mkdir(exist_ok=True)
            (root / "gfx").mkdir()
        declaration = 'spriteTypes={spriteType={name="GFX_unit_strip" texturefile="gfx/strip.png" noOfFrames=24}}'
        (self.game / "interface/base.gfx").write_text(declaration)
        Image.new("RGBA", (48, 2), "red").save(self.game / "gfx/strip.png")
        mod = self.game / "mod/test"
        Image.new("RGBA", (48, 2), "blue").save(mod / "gfx/strip.png")
        self.assertEqual(unit_frames(mod), 24)
        table = sprites(mod)
        self.assertEqual(texture(mod, table["GFX_unit_strip"]).getpixel((0, 0)), (0, 0, 255, 255))
        self.assertEqual(sprite(mod, table, "GFX_unit_strip", 23, 24).size, (2, 2))
        with self.assertRaisesRegex(ValueError, "invalid sprite frame"):
            sprite(mod, table, "GFX_unit_strip", 24, 24)
        self.descriptor.write_text(self.descriptor.read_text() + 'replace_path="interface"\n')
        with self.assertRaisesRegex(ValueError, "does not define"):
            unit_frames(mod)


if __name__ == "__main__":
    unittest.main()
