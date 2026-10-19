"""TPL-1 Conform window: byte-preserving injection, real installed assets and staged rollback."""
from pathlib import Path
import re
import shutil
import sys
import tempfile
import unittest
from unittest.mock import patch
from gen_laws import DEFAULT_TGC
from tgc_scan import parse, read
from tgcx_bill_gui import game_root, sprites
import tgcx_conform_gui as gui
import install_submod as installer


def names_of(fragment):
    names = []
    def walk(items):
        for key, value in items:
            if isinstance(value, list):
                if 'name' in dict(value):
                    names.append(dict(value)['name'].strip('"'))
                walk(value)
    walk(parse(fragment))
    return names


class ConformGuiTests(unittest.TestCase):
    def test_open_button_follows_effective_native_header(self):
        from tgcx_bases import Base
        game = game_root(DEFAULT_TGC)
        self.assertEqual(gui.opening_rect(game), (222, 42, 20, 20))
        self.assertEqual(gui.opening_rect(DEFAULT_TGC), gui.OPEN)
        # A shifted mod header and a same-name vanilla GUI both exist. The
        # generated button must follow the effective override, not its base.
        with tempfile.TemporaryDirectory(prefix='tgcx_cf_anchor_') as folder:
            root = Path(folder); (root/'v2game.exe').touch()
            (root/'interface').mkdir(); (root/'mod/custom/interface').mkdir(parents=True)
            vanilla = read(game/'interface/unitpanel.gui')
            (root/'interface/unitpanel.gui').write_text(vanilla, encoding='cp1252')
            shifted = re.sub(r'(name\s*=\s*"unitattrition_icon".*?position\s*=\s*)\{[^}]+\}',
                             r'\1{ x=300 y=83 }', vanilla, count=1, flags=re.S)
            (root/'mod/custom/interface/unitpanel.gui').write_text(shifted, encoding='cp1252')
            descriptor = root/'mod/custom.mod'
            descriptor.write_text('name="Custom"\npath="mod/custom"\n')
            base = Base(root, descriptor)
            self.assertEqual(gui.opening_rect(base.folder, base), (277, 83, 20, 20))
            fragment, _ = gui.layout(game)
            self.assertIn('name="tgcx_cf_tab" position={x=222 y=42}', fragment)

    def test_effective_base_preserved(self):
        base = read(Path(DEFAULT_TGC)/'interface/unitpanel.gui')
        fragment, _ = gui.layout()
        result = gui.inject(base, fragment)
        start = result.index('\n# >>> tgcx_conform\n')
        end = result.index('\n# <<< tgcx_conform\n')+len('\n# <<< tgcx_conform\n')
        self.assertEqual(result[:start]+result[end:], base)
        panel = next(v for k, v in dict(parse(result))['guiTypes'] if k == 'windowType' and dict(v).get('name').strip('"') == 'unitpanel')
        self.assertEqual(sum(k == 'windowType' and dict(v).get('name', '').strip('"') == 'tgcx_cf_window' for k, v in panel), 1)
        self.assertIn('name = "multi_unitpanel"', result)

    def test_bad_anchors_fail_closed(self):
        fragment, _ = gui.layout()
        base = 'guiTypes={windowType={name="unitpanel"}}'
        for bad in ('guiTypes={}', base+base, gui.inject(base, fragment)):
            with self.assertRaises(ValueError):
                gui.inject(bad, fragment)

    def test_layout_header_and_no_dll_fallback(self):
        fragment, loc = gui.layout()
        self.assertIn('name="tgcx_cf_window" position={x=30000 y=30000}', fragment)
        names = names_of(fragment)
        self.assertEqual(len(names), len(set(names)))
        self.assertTrue(all(n.startswith('tgcx_') for n in names))
        self.assertTrue(all(k.startswith('tgcx_') and ';' not in v for k, v in loc.items()))
        self.assertEqual((Path(gui.ROOT)/'dll/tgcx/tgcx_conform_layout.h').read_text(), gui.header())
        for name, _, x, y, w, h in gui.buttons()[1:]:
            self.assertTrue(x >= 0 and y >= 0 and x+w <= gui.WIDTH and y+h <= gui.HEIGHT, name)
        for name, _, x, y, w, h, _, _ in gui.texts():
            self.assertTrue(x >= 0 and y >= 0 and x+w <= gui.WIDTH and y+h <= gui.HEIGHT, name)
        # The button fits the fixed stack panel, clear of its native controls.
        x, y, w, h = gui.OPEN
        self.assertTrue(x+w <= 245 and y >= 54+17 - 4 and y+h <= 90)
        self.assertNotIn('replace_path', fragment)

    def test_native_sprites_and_order(self):
        fragment, _ = gui.layout()
        table = sprites(DEFAULT_TGC)
        for name in set(re.findall(r'"(GFX_[A-Za-z0-9_]+)"', fragment)):
            self.assertIn(name, table, name)
        special = set()
        for root in (Path(DEFAULT_TGC), game_root(DEFAULT_TGC)):
            for path in (root/'interface').glob('*.gfx'):
                special |= set(re.findall(r'(?:textSpriteType|corneredTileSpriteType)\s*=\s*\{[^}]*?name\s*=\s*"([^"]+)"', read(path)))
        for name in re.findall(r'quadTextureSprite="([^"]+)"', fragment):
            self.assertNotIn(name, special, name)   # P41
        frames = [int(f) for f in re.findall(r'spriteType="GFX_unit_strip" frame=(\d+)', fragment)]
        self.assertTrue(frames and all(1 <= f <= 21 for f in frames))
        # The background button comes first; covers and the ring follow the
        # slot buttons they decorate; texts come last, above everything.
        self.assertLess(fragment.index('name="tgcx_cf_bg"'), fragment.index('name="tgcx_cf_slot_0"'))
        last = fragment.index('name="tgcx_cf_slot_3"')
        for row in range(gui.SLOTS):
            self.assertGreater(fragment.index(f'name="tgcx_cf_slot_blank_{row}"'), last)
            self.assertGreater(fragment.index(f'name="tgcx_cf_slot_sel_{row}"'), last)
        self.assertGreater(fragment.index('name="tgcx_cf_text_title"'), fragment.index('name="tgcx_cf_change_icon_7_plane"'))
        tab = fragment.index('name="tgcx_cf_tab"'); end = fragment.index('\n}', tab)
        self.assertIn('name="tgcx_cf_open"', fragment[tab:end])
        self.assertLess(tab, fragment.index('name="tgcx_cf_window"'))
        # The probe button is a direct child of the unit panel (lookups are
        # not recursive), before the tab and window it announces.
        self.assertLess(fragment.index('name="tgcx_cf_marker"'), tab)
        self.assertNotIn('name="tgcx_cf_marker"', fragment[tab:end])

    def test_real_assets_and_installer_round_trip(self):
        with tempfile.TemporaryDirectory(prefix='tgcx_cf_gui_') as folder:
            root = Path(folder); source = root/'source'; mod = root/'game/mod'; tgc = mod/'TGC_v2.5.2/TGC'
            shutil.copytree(Path(gui.ROOT)/'submod', source)
            images = gui.generate(source)
            self.assertEqual(images['bg'].size, (gui.WIDTH, gui.HEIGHT))
            self.assertEqual(images['open'].size, (20, 20))
            self.assertEqual(images['change'].size, (gui.ROW_W, gui.ROW_H))
            self.assertEqual(images['button'].size, (148, 28))
            self.assertEqual(images['blank_2'].tobytes(), images['bg'].crop((gui.SLOT_X, gui.SLOT_Y+64, gui.SLOT_X+gui.ROW_W, gui.SLOT_Y+64+gui.ROW_H)).tobytes())
            self.assertEqual(installer.foreign_files(source/'TGCX'), [])
            mod.mkdir(parents=True); (root/'game/interface').mkdir()
            (tgc/'common').mkdir(parents=True); (tgc/'interface').mkdir()
            (tgc/'common/event_modifiers.txt').write_text('base={}\n')
            (root/'game/v2game.exe').write_bytes(b'fixture')   # synthetic: nothing read or launched
            base = read(Path(DEFAULT_TGC)/'interface/unitpanel.gui')
            (tgc/'interface/unitpanel.gui').write_bytes(base.encode('cp1252'))
            with patch.object(installer, 'game_running', return_value=False):
                installer.install(mod, tgc, source, backup=root/'before')
                before = {str(p.relative_to(mod)): p.read_bytes() for p in mod.rglob('*') if p.is_file()}
                self.assertIn(b'# >>> tgcx_conform', (mod/'TGCX/interface/unitpanel.gui').read_bytes())
                installer.install(mod, tgc, source, backup=root/'rollback')
                installer.install(mod, tgc, root/'rollback', backup=root/'after')
                after = {str(p.relative_to(mod)): p.read_bytes() for p in mod.rglob('*') if p.is_file()}
                self.assertEqual(before, after)


if __name__ == '__main__':
    unittest.main(verbosity=2, testRunner=unittest.TextTestRunner(stream=sys.stdout, verbosity=2))
