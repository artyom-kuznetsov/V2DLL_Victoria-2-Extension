"""Release boundary tests. Fixture archives only; no installed game changes."""
from pathlib import Path
import tempfile
import unittest
import warnings
import zipfile

import prepare_atcu_release as release


class ReleaseTests(unittest.TestCase):
    def test_manifest_rejects_tampering_and_extra_content(self):
        files = {'README.md': b'ATCU'}
        files['SHA256.json'] = release.json_bytes({'README.md': release.sha(b'ATCU')})
        release.check_manifest(files)
        for changed in ({**files, 'README.md': b'changed'}, {**files, 'v2game.exe': b'exe'}):
            with self.assertRaises(ValueError):
                release.check_manifest(changed)

    def test_archive_rejects_traversal_and_duplicate_paths(self):
        for names in (('../outside',), ('C:/outside',), ('mod\\outside',), ('/outside',), ('same', 'same')):
            with self.subTest(names=names), tempfile.TemporaryDirectory() as temp:
                path = Path(temp) / 'input.zip'
                with warnings.catch_warnings(), zipfile.ZipFile(path, 'w') as z:
                    warnings.simplefilter('ignore', UserWarning)
                    for name in names:
                        info = zipfile.ZipInfo('fixture')
                        # Windows ZipInfo normally normalizes backslashes;
                        # retain the raw malicious member name for this case.
                        info.filename = name
                        z.writestr(info, b'data')
                with self.assertRaises(ValueError):
                    release.read_archive(path)

    def test_all_staged_art_has_explicit_origin(self):
        original = ('tgcx_cf_ring.dds', 'tgcx_tpl_bg.dds', 'tgcx_tpl_blank_0.dds')
        derived = ('tgcx_cf_bg.dds', 'tgcx_cf_open.dds', 'tgcx_tpl_compact.dds')
        for name in original:
            self.assertEqual(release.art_origin(name)[0], 'original drawn UI')
        for name in derived:
            self.assertEqual(release.art_origin(name)[0], 'game/effective-base derived UI')

    def test_wrong_source_and_existing_output_are_refused(self):
        with tempfile.TemporaryDirectory() as temp:
            source = Path(temp) / 'wrong.zip'
            source.write_bytes(b'not the accepted archive')
            output = Path(temp) / 'candidate'
            with self.assertRaisesRegex(ValueError, 'accepted'):
                release.build(source, output)
            self.assertFalse(output.exists())
            output.mkdir()
            with self.assertRaisesRegex(ValueError, 'must be new'):
                release.build(source, output)

    def test_zip_holds_only_readme_loader_and_mod(self):
        files = {'README.txt': b'ATCU', 'lua51.dll': b'x', 'mod/a.mod': b'x', 'INSTALL.txt': b'x'}
        manifest = {name: release.sha(data) for name, data in files.items()}
        with self.assertRaisesRegex(ValueError, 'top-level'):
            release.verify_release(files, manifest, {})

    def test_readme_is_crlf_whatever_the_checkout(self):
        for text in ('a\nb\n', 'a\r\nb\r\n'):
            with self.subTest(text=text), tempfile.TemporaryDirectory() as temp:
                (Path(temp) / 'docs/release-0.0.1').mkdir(parents=True)
                (Path(temp) / 'docs/release-0.0.1/README.txt').write_bytes(text.encode())
                self.assertEqual(release.readme_bytes(Path(temp)), b'a\r\nb\r\n')

    def test_dotted_release_version_is_kept_in_archive_name(self):
        self.assertEqual(release.archive_path(Path('ATCU-0.0.1-candidate')).name,
                         'ATCU-0.0.1-candidate.zip')


if __name__ == '__main__':
    unittest.main()
