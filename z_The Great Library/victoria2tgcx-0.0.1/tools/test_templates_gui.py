"""TPL-0 byte-preserving injection, real installed assets and staged rollback."""
from pathlib import Path
import re
import shutil
import sys
import tempfile
import unittest
from unittest.mock import patch
from PIL import Image
from gen_laws import DEFAULT_TGC
from tgc_scan import parse, read
from tgcx_bill_gui import game_root
import tgcx_templates_gui as gui
import install_submod as installer


class TemplatesGuiTests(unittest.TestCase):
    def test_effective_base_preserved_and_queue_unchanged(self):
        base=read(game_root(DEFAULT_TGC)/'interface/buildunit.gui')
        fragment,_=gui.layout()
        result=gui.inject(base,fragment)
        start=result.index('\n# >>> tgcx_templates\n')
        end=result.index('\n# <<< tgcx_templates\n')+len('\n# <<< tgcx_templates\n')
        self.assertEqual(result[:start]+result[end:],base)
        large=next(v for k,v in dict(parse(result))['guiTypes'] if k=='windowType' and dict(v).get('name')=='build_unit_view_large')
        self.assertEqual(sum(k=='windowType' and dict(v).get('name')=='tgcx_tpl_window' for k,v in large),1)
        self.assertIn('name = "cell_window_queue"',result)

    def test_bad_anchors_fail_closed(self):
        fragment,_=gui.layout()
        base='guiTypes={windowType={name="build_unit_view_large"}}'
        for bad in ('guiTypes={}',base+base,gui.inject(base,fragment)):
            with self.assertRaises(ValueError):gui.inject(bad,fragment)

    def test_catalogue_layout_and_no_dll_fallback(self):
        fragment,loc=gui.layout()
        self.assertIn('position={x=30000 y=30000}',fragment)
        names=[]
        def walk(items):
            for key,value in items:
                if isinstance(value,list):
                    if 'name' in dict(value):names.append(dict(value)['name'].strip('"'))
                    walk(value)
        walk(parse(fragment))
        self.assertEqual(len(names),len(set(names)))
        self.assertTrue(all(n.startswith('tgcx_') for n in names))
        self.assertTrue(all(n.startswith('tgcx_') and ';' not in v for n,v in loc.items()))
        self.assertEqual((Path(gui.ROOT)/'dll/tgcx/tgcx_templates_catalog.h').read_text(),gui.header())
        self.assertEqual(len(gui.units()),11)
        for name,_,x,y,w,h in gui.buttons():
            if name=='open' or name.startswith('native_'):continue
            self.assertTrue(x>=0 and y>=0 and x+w<=652 and y+h<=528,name)
        self.assertNotIn('replace_path',fragment)

    def test_native_sprites_and_cover_order(self):
        from tgcx_bill_gui import sprites
        fragment,_=gui.layout()
        table=sprites(DEFAULT_TGC)
        for name in set(re.findall(r'"(GFX_[A-Za-z0-9_]+)"',fragment)):
            self.assertIn(name,table,name)
        # Only plain spriteTypes work on our bare buttons (0.4.2: a textSpriteType
        # Recruit button neither drew nor bound in game).
        special=set()
        for root in (Path(DEFAULT_TGC),game_root(DEFAULT_TGC)):
            for path in (root/'interface').glob('*.gfx'):
                special|=set(re.findall(r'(?:textSpriteType|corneredTileSpriteType)\s*=\s*\{[^}]*?name\s*=\s*"([^"]+)"',read(path)))
        self.assertIn('GFX_button_standard_177',special)
        for name in re.findall(r'quadTextureSprite="([^"]+)"',fragment):
            self.assertNotIn(name,special,name)
        frames=[int(f) for f in re.findall(r'spriteType="GFX_unit_strip" frame=(\d+)',fragment)]
        self.assertTrue(frames and all(1<=f<=21 for f in frames))
        # Later declarations draw above earlier ones: the ring and the empty-row
        # covers must follow the native slot buttons they decorate or hide.
        last_button=fragment.index('name="tgcx_tpl_slot_3"')
        for row in range(4):
            self.assertGreater(fragment.index(f'name="tgcx_tpl_slot_blank_{row}"'),last_button)
            self.assertGreater(fragment.index(f'name="tgcx_tpl_slot_sel_{row}"'),last_button)
        # Build Navy shares the view: the tab is a window the DLL can hide, and
        # the open button is its only child (button lookups are flat).
        tab=fragment.index('name="tgcx_tpl_tab"');end=fragment.index(chr(10)+'}',tab)
        self.assertIn('name="tgcx_tpl_open"',fragment[tab:end])
        self.assertLess(fragment.index('name="tgcx_tpl_marker"'),tab)
        self.assertGreater(fragment.index('name="tgcx_tpl_pager_blank"'),fragment.index('name="tgcx_tpl_list_next"'))
        self.assertLess(fragment.index('name="tgcx_tpl_pager_blank"'),fragment.index('name="tgcx_tpl_text_list_page"'))

    def test_real_assets_and_installer_round_trip(self):
        with tempfile.TemporaryDirectory(prefix='tgcx_tpl_gui_') as folder:
            root=Path(folder);source=root/'source';mod=root/'game/mod';tgc=mod/'TGC_v2.5.2/TGC'
            shutil.copytree(Path(gui.ROOT)/'submod',source)
            images=gui.generate(source)
            self.assertEqual(images['bg'].size,(405,466))
            self.assertEqual(images['bar'].size,(652,62))
            self.assertEqual(images['left'].size,(24,24))
            self.assertEqual(images['ring'].size,(366,30))
            self.assertEqual(images['tab'].size,(34,36))
            # Covers repeat the column behind them exactly.
            self.assertEqual(images['blank_1'].tobytes(),images['bg'].crop((2,34,368,64)).tobytes())
            self.assertEqual(installer.foreign_files(source/'TGCX'),[])
            (mod).mkdir(parents=True);(root/'game/interface').mkdir()
            (tgc/'common').mkdir(parents=True)
            (tgc/'common/event_modifiers.txt').write_text('base={}\n')
            # Synthetic game root: no executable is read or launched.
            (root/'game/v2game.exe').write_bytes(b'fixture')
            base=read(game_root(DEFAULT_TGC)/'interface/buildunit.gui')
            (root/'game/interface/buildunit.gui').write_bytes(base.encode('cp1252'))
            with patch.object(installer,'game_running',return_value=False):
                installer.install(mod,tgc,source,backup=root/'before')
                before={str(p.relative_to(mod)):p.read_bytes() for p in mod.rglob('*') if p.is_file()}
                self.assertIn(b'# >>> tgcx_templates',(mod/'TGCX/interface/buildunit.gui').read_bytes())
                installer.install(mod,tgc,source,backup=root/'rollback')
                installer.install(mod,tgc,root/'rollback',backup=root/'after')
                after={str(p.relative_to(mod)):p.read_bytes() for p in mod.rglob('*') if p.is_file()}
                self.assertEqual(before,after)
            # When TGC overrides the inherited file, its named anchors win.
            (tgc/'interface').mkdir()
            original=base+'\n# fixture TGC override\n'
            (tgc/'interface/buildunit.gui').write_bytes(original.encode('cp1252'))
            installer.generate(tgc,source/'TGCX',source)
            self.assertIn(b'# fixture TGC override',(source/'TGCX/interface/buildunit.gui').read_bytes())


if __name__=='__main__':
    unittest.main(verbosity=2,testRunner=unittest.TextTestRunner(stream=sys.stdout,verbosity=2))
