"""Verify native Bill injection/metadata stays bounded and preserves the TGC base."""
from pathlib import Path
import sys
import unittest

from gen_laws import DEFAULT_TGC
from tgc_scan import parse, read
import tempfile

from PIL import Image
from gen_law_catalog import catalog_data
from tgcx_bill_gui import (ATLAS_SIZE, ICON_CELL, ICON_COLUMNS, ICON_Y, atlas, background, buttons, catalogue_header,
                           fit, font_widths, inject, layout, text_width, texts)


class BillGuiTests(unittest.TestCase):
    def test_real_base_is_preserved_byte_for_byte_outside_insertion(self):
        original = read(Path(DEFAULT_TGC) / "interface/country_politics.gui")
        fragment, _ = layout()
        generated = inject(original, fragment)
        start = generated.index("\n# >>> tgcx_bill\n")
        end = generated.index("\n# <<< tgcx_bill\n") + len("\n# <<< tgcx_bill\n")
        self.assertEqual(generated[:start]+generated[end:], original)
        root = dict(parse(generated))["guiTypes"]
        country = next(v for k, v in root if k == "windowType" and dict(v).get("name") == "country_politics")
        self.assertEqual(sum(k == "windowType" and dict(v).get("name") == "tgcx_bill_window" for k, v in country), 1)

    def test_reject_missing_duplicate_and_already_modified_anchors(self):
        fragment, _ = layout()
        base = 'guiTypes={windowType={name="country_politics"}}'
        for bad in ("guiTypes={}", base+base, inject(base, fragment)):
            with self.assertRaises(ValueError): inject(bad, fragment)
        # Comments/strings containing braces do not affect insertion depth.
        original = 'guiTypes={windowType={name="country_politics" text="} {" # }\n }}'
        self.assertIn("# >>> tgcx_bill", inject(original, fragment))

    def test_read_only_fallback_layout_and_catalogue(self):
        fragment, loc = layout()
        self.assertIn("x=30000 y=30000", fragment)
        self.assertIn("size={ x=900 y=772 }", fragment)
        header = catalogue_header()
        catalog = header[header.index("tgcx_bill_catalog[]"):]
        self.assertEqual(catalog[:catalog.index("};")].count("\n    {"), 144)
        self.assertTrue(all(k.startswith("tgcx_") for k in loc))
        self.assertTrue(all(";" not in text for text in loc.values()))
        self.assertNotIn("replace_path", fragment)
        # Board numbers the DLL relies on (R10): price table, debts, lots.
        self.assertIn("tgcx_bill_abstain_price[] = {5,2,0,0,0}", header)
        self.assertIn("tgcx_bill_aye_price[] = {0,5,2,2,2}", header)
        self.assertIn("tgcx_bill_broken_years = 10", header)

    def test_layout_matches_the_header_and_draw_order(self):
        fragment, _ = layout()
        window = next(v for k, v in parse(fragment) if k == "windowType" and dict(v).get("name") == "tgcx_bill_window")
        kinds = [(k, dict(v)["name"]) for k, v in window if isinstance(v, list) and "name" in dict(v)]
        marker = kinds.index(("iconType", "tgcx_bill_chart_overlay"))
        # Buttons below the DLL's overlay, every text above it (P26/P28).
        self.assertTrue(all(k == "guiButtonType" for k, _ in kinds[:marker]))
        self.assertTrue(all(k == "instantTextBoxType" for k, _ in kinds[marker+1:]))
        header = catalogue_header()
        self.assertEqual([n for k, n in kinds[1:marker]], [b[0] for b in buttons()])
        self.assertEqual([n for k, n in kinds[marker+1:]], [t[0] for t in texts()])
        self.assertEqual(header.count("TGCX_B_"), len(buttons()) + 1)
        self.assertEqual(header.count("TGCX_T_"), len(texts()) + 1)
        for name, _, x, y, w, h in buttons():
            self.assertTrue(0 <= x and x + w <= 900 and 0 <= y and y + h <= 772, name)
        for name, _, x, y, w, h, _, _ in texts():
            self.assertTrue(0 <= x and x + w <= 900 and 0 <= y and y + h <= 772, name)

    def test_composed_art_from_installed_textures(self):
        with tempfile.TemporaryDirectory() as folder:
            bg, atlas_path = Path(folder) / "bg.dds", Path(folder) / "atlas.dds"
            background(bg)
            groups = catalog_data(DEFAULT_TGC)[4]
            atlas(atlas_path, groups=groups)
            for path, size in ((bg, (900, 772)), (atlas_path, ATLAS_SIZE)):
                data = path.read_bytes()
                self.assertEqual(data[:4], b"DDS ")
                self.assertEqual(len(data), 128 + size[0] * size[1] * 4)
                self.assertEqual(Image.open(path).size, size)
            art = Image.open(atlas_path).convert("RGBA")
            for n in range(len(groups)):
                x, y = ICON_CELL * (n % ICON_COLUMNS), ICON_Y + ICON_CELL * (n // ICON_COLUMNS)
                self.assertIsNotNone(art.crop((x, y, x + ICON_CELL, y + ICON_CELL)).getbbox(), groups[n])

    def test_bill_uses_native_movable_background(self):
        fragment, _ = layout()
        window = next(v for k, v in parse(fragment)
                      if k == "windowType" and dict(v).get("name") == "tgcx_bill_window")
        props = dict(window)
        self.assertEqual(props["moveable"], "1")
        background = props["backGround"]
        buttons = [dict(v) for k, v in window if k == "guiButtonType"]
        self.assertEqual(sum(b.get("name") == background for b in buttons), 1)
        self.assertEqual(next(b for b in buttons if b["name"] == background)["quadTextureSprite"], "tgcx_bill_bg")

    def test_text_sprite_buttons_declare_text_and_the_board_has_no_open_button(self):
        fragment, _ = layout()
        items = parse(fragment)
        opened = next(dict(v) for k, v in items if k == "guiButtonType" and dict(v).get("name") == "tgcx_bill_open")
        self.assertEqual(dict(opened["position"])["x"], "30000")     # probe only (board 1 has no button)
        window = next(v for k, v in items if k == "windowType" and dict(v).get("name") == "tgcx_bill_window")
        for b in (dict(v) for k, v in window if k == "guiButtonType"):
            text_sprite = b["quadTextureSprite"].startswith(("GFX_button_standard", "GFX_sortbutton"))
            self.assertEqual("buttonFont" in b, text_sprite, b["name"])
            if text_sprite:
                self.assertEqual(b["buttonText"].strip('"'), "", b["name"])

    def test_header_names_every_option_by_its_script_key(self):
        _, _, groups, _, chosen, _ = catalog_data(DEFAULT_TGC)
        header = catalogue_header(DEFAULT_TGC)
        for g in chosen:
            self.assertIn('"' + '","'.join(groups[g]["options"]) + '"', header, g)
        self.assertIn('"' + '","'.join(chosen) + '"', header)


    def test_long_names_fit_their_text_boxes(self):
        # U-7 deviation 2: the longest catalogue names overprinted the next line.
        boxes = {n.removeprefix("tgcx_bill_t_"): (w, f) for n, _, _, _, w, _, f, _ in texts()}
        for box in ("transition", "transition_small", "card_0_option_0"):
            w, font = boxes[box]
            widths = font_widths(DEFAULT_TGC, font)
            self.assertLessEqual(text_width(widths, fit(widths, "Universal Weighted Voting » Universal Voting", w)), w)
        header = catalogue_header()
        self.assertIn('"Universal Weighted Vo..."', header)              # Closeness row
        self.assertRegex(header, r'"Wealth Voting","Universal Weighted Voting".*"Wealth Voting",true\}')
        self.assertRegex(header, r'"Censored Press","Free Press".*"Censored Press",false\}')  # board 2 keeps vic_18

if __name__ == "__main__":
    unittest.main(testRunner=unittest.TextTestRunner(stream=sys.stdout, verbosity=2))
