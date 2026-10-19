"""Shared GUI definitions contain fixed slots, never a particular mod's units."""
import unittest
from tgc_scan import parse
from tgcx_templates_gui import layout as templates
from tgcx_conform_gui import layout as conform


class UniversalGuiTests(unittest.TestCase):
    def test_shared_roots_and_compact_dense_row_entry(self):
        t,_=templates(universal=True);c,_=conform(universal=True)
        roots=parse('guiTypes={'+t+c+'}')[0][1]
        self.assertEqual([dict(v)['name'] for k,v in roots],
                         ['tgcx_tpl_tab','tgcx_tpl_window','tgcx_cf_tab','tgcx_cf_window'])
        self.assertIn('quadTextureSprite="tgcx_tpl_compact"',t)
        self.assertNotIn('name="tgcx_tpl_tabsel"',t)
        self.assertNotIn('tgcx_tpl_marker',t)
        self.assertNotIn('tgcx_cf_marker',c)

    def test_all_editor_and_change_slots_exist_without_unit_keys(self):
        t,_=templates(universal=True);c,_=conform(universal=True)
        for row in range(8):
            self.assertIn(f'name="tgcx_tpl_edit_sprite_{row}"',t)
            self.assertIn(f'name="tgcx_cf_change_sprite_{row}_unit"',c)
        for text in (t,c):
            self.assertNotIn('_infantry',text)
            self.assertNotIn('_horse_artillery',text)
            self.assertNotIn('_regular',text)
            self.assertNotIn('build_unit_view_large',text)
            self.assertNotIn('replace_path',text)


if __name__=='__main__':
    unittest.main()
