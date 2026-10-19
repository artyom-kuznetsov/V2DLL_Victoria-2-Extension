"""Build the same additive Army package for every supported 3.04 base."""
import argparse
import hashlib
import json
from pathlib import Path
import shutil
import zipfile

from PIL import Image
import tgcx_templates_gui as tpl
import tgcx_conform_gui as cf


def build(output, art, dll, loader):
    output, art, dll, loader = map(lambda p: Path(p).resolve(), (output, art, dll, loader))
    if output.exists() or Path(str(output)+'.zip').exists():
        raise ValueError('output folder/ZIP must be new')
    if b'TGCX MOD-6 0.10.4 tgcx.dll' not in dll.read_bytes():
        raise ValueError('universal package requires current MOD-6 DLL')
    package = output/'mod/tgcx_army_universal'
    (package/'interface').mkdir(parents=True)
    (package/'gfx/interface').mkdir(parents=True)
    (package/'localisation').mkdir()
    for p in (art/'gfx/interface').glob('tgcx_*.dds'):
        shutil.copy2(p, package/'gfx/interface'/p.name)
    for name in ('tgcx_templates.gfx', 'tgcx_conform.gfx'):
        shutil.copy2(art/'interface'/name, package/'interface'/name)
    with Image.open(package/'gfx/interface/tgcx_tpl_tab.dds') as image:
        tpl.write_dds(image.convert('RGBA').resize((20,20)), package/'gfx/interface/tgcx_tpl_compact.dds')
    gfx = package/'interface/tgcx_templates.gfx'
    text = gfx.read_text(encoding='cp1252')
    text = text.rstrip()[:-1] + '\nspriteType={name="tgcx_tpl_compact" texturefile="gfx/interface/tgcx_tpl_compact.dds" noOfFrames=1 loadType="INGAME"}\n}\n'
    gfx.write_text(text, encoding='cp1252')
    templates, tloc = tpl.layout(universal=True)
    conform, cloc = cf.layout(universal=True)
    (package/'interface/tgcx_army.gui').write_text('guiTypes={\n'+templates+conform+'}\n', encoding='cp1252')
    loc = ['CODE;ENGLISH;FRENCH;GERMAN;POLISH;SPANISH;ITALIAN;SWEDISH;CZECH;HUNGARIAN;DUTCH;PORTUGUESE;RUSSIAN;FINNISH;x']
    loc += [k+';'+v+';'*13+'x' for k,v in (tloc|cloc).items()]
    (package/'localisation/tgcx_army.csv').write_bytes(('\n'.join(loc)+'\n').encode('cp1252'))
    (package/'tgcx_package.txt').write_text('package = army\nbase = universal\nmodules = "templates conform"\nversion = 0.10.4\n')
    (package/'tgcx_universal.txt').write_bytes(b'army_gui 1\n')
    shutil.copy2(dll, package/'tgcx.dll')
    shutil.copy2(dll, package/'v2dll_mod.dll')
    (output/'mod/tgcx_army_universal.mod').write_text('name = "Army Templates and Conform (Universal)"\npath = "mod/tgcx_army_universal"\n', encoding='cp1252')
    shutil.copy2(loader, output/'lua51.dll')
    (output/'README.txt').write_text(
        'Army Templates and Conform 0.10.4 - universal prototype\n\n'
        'The SAME mod folder/descriptor and DLL work with the active supported 3.04 base.\n'
        'No installer, scripts, per-base preparation or original GUI overrides.\n'
        'Close the game normally before copying. Keep backups of existing files.\n'
        'With our existing loader: copy mod/ into the game folder. In the normal\n'
        'launcher select ONLY Universal Army plus your base (if any). Untick\n'
        'old base-specific Army packages. Never select two Army packages.\n'
        'Clean game: retain original lua51.dll as lua51_real.dll, then copy the\n'
        'included lua51.dll loader. Do not replace a V2DLL installation with it.\n'
        'V2DLL users: the identical logic is included as v2dll_mod.dll in the Army folder,\n'
        'with LOAD_DLL_FROM_MOD_FOLDER=1 and Army first in the mod list.\n\n'
        'Uses shared native panel definitions and live unit keys/icons/build times.\n'
        'Conform recruits only within land reach of the target; shortages are left out.\n'
        'Templates uses a compact button after native folders, or in the title\n'
        'band for crowded DoD rows. Current Conform design retained.\n'
        'PROTOTYPE: automated checks do not prove native game integration yet.\n'
        'Test Templates, custom unit icons, Conform detach/recruit/march/merge,\n'
        'native tab switching, Navy/fleet hiding, repeated army selection and\n'
        'save/reload. Preserve Logs/tgcx.log; do not share private game art publicly.\n', encoding='utf-8')
    manifest={p.relative_to(output).as_posix():hashlib.sha256(p.read_bytes()).hexdigest()
              for p in sorted(output.rglob('*')) if p.is_file()}
    (output/'SHA256.json').write_text(json.dumps(manifest,indent=2))
    archive=Path(str(output)+'.zip')
    with zipfile.ZipFile(archive,'x',zipfile.ZIP_DEFLATED) as z:
        for p in sorted(output.rglob('*')):
            if p.is_file():z.write(p,p.relative_to(output))
    with zipfile.ZipFile(archive) as z:
        if z.testzip() is not None:raise ValueError('ZIP failed CRC')
        for name,digest in manifest.items():
            if hashlib.sha256(z.read(name)).hexdigest()!=digest:raise ValueError('ZIP entry mismatch')
    return archive


if __name__=='__main__':
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--output',required=True,type=Path)
    ap.add_argument('--art',required=True,type=Path,help='private accepted staged Army art folder')
    ap.add_argument('--dll',type=Path,default=Path('dll/tgcx/Release/tgcx.dll'))
    ap.add_argument('--loader',type=Path,default=Path('dll/tgcx/Release/lua51.dll'))
    a=ap.parse_args();print(build(a.output,a.art,a.dll,a.loader))
