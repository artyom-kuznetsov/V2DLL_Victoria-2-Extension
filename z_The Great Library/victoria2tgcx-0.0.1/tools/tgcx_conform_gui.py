"""TPL-1 Conform window (board 6-conform), generated from installed TGC art.

Only our fragment enters git. The installer inserts it at the named
"unitpanel" window in TGC's unitpanel.gui: a small Conform button on the
stack panel, and the Conform window the DLL promotes and places beside it.
Without the DLL the window stays off-screen and the button does nothing.
"""
import argparse
import re
from pathlib import Path
from PIL import Image, ImageDraw
from gen_laws import DEFAULT_TGC, ROOT
from tgc_scan import parse, read
from tgcx_army_catalog import profile_for
from tgcx_bill_gui import write_dds
from tgcx_templates_gui import units
from tgcx_army_art import sprites, texture, sprite, unit_frames

LAYOUT = "tgcx_conform_layout.txt"
WIDTH, HEIGHT = 332, 594
ROW_W, ROW_H = 317, 30
SLOTS, CHANGES, MINIS = 4, 8, 4
# Native 332px army-panel width and 317x30 regiment rows.
SLOT_X, SLOT_Y = 7, 42
CHANGE_X, CHANGE_Y = 7, 232
# The fixed 400x80 stack panel has no room for the board's wide bottom
# button: the free cell between the location and the attrition icon. OPEN
# retains the accepted TGC reference; other bases use opening_rect().
OPEN = (222, 68, 20, 20)


def opening_rect(tgc=DEFAULT_TGC, profile=None):
    # Vanilla's header is 26px higher than TGC's. Follow its attrition icon,
    # leaving the same 3px gap; fixed TGC coordinates fall under vanilla's
    # statistics row, which covers the button and intercepts its clicks.
    base = profile or profile_for(tgc)
    path = base.find('interface/unitpanel.gui')
    if not path:
        raise ValueError('missing effective unitpanel.gui')
    roots = dict(parse(read(path))).get('guiTypes', [])
    panels = [v for k, v in roots if k == 'windowType' and isinstance(v, list)
              and dict(v).get('name', '').strip('"') == 'unitpanel']
    if len(panels) != 1:
        raise ValueError('require one native unitpanel for the Conform button')
    anchors = [dict(v) for k, v in panels[0] if k == 'iconType' and isinstance(v, list)
               and dict(v).get('name', '').strip('"') == 'unitattrition_icon']
    if len(anchors) != 1:
        raise ValueError('require one native unitattrition_icon for the Conform button')
    position = dict(anchors[0].get('position', []))
    x, y = int(position['x']) - 23, int(position['y'])
    if x < 0 or y < 0:
        raise ValueError('invalid native header position for the Conform button')
    return x, y, 20, 20


def buttons():
    result = [("open", "open", 0, 0, 20, 20), ("close", "GFX_unit_close", 303, 7, 20, 20)]
    result += [(f"slot_{i}", "slot", SLOT_X, SLOT_Y+i*32, ROW_W, ROW_H) for i in range(SLOTS)]
    result += [("list_prev", "left", 228, 172, 24, 24), ("list_next", "right", 300, 172, 24, 24),
               ("conform", "button", 12, 558, 148, 28), ("cancel", "button", 172, 558, 148, 28)]
    return result


def texts():
    result = [("title", "Conform to template", 12, 9, 285, 22, "Arial14", "left")]
    for i in range(SLOTS):
        x, y = SLOT_X, SLOT_Y+i*32
        result += [(f"slot_{i}", "", x+40, y+2, 132, 14, "Arial12_bold_black", "left"),
                   (f"detail_{i}", "", x+40, y+16, 132, 14, "Arial12_black", "left")]
        result += [(f"mini_{i}_{k}", "", x+195+k*35, y+9, 18, 14, "Arial12_bold", "left") for k in range(MINIS)]
    result += [("list_page", "", 252, 176, 48, 16, "Arial12_black", "centre"),
               ("changes", "Changes", 14, 203, 210, 20, "Arial12_bold_black", "left")]
    for i in range(CHANGES):
        x, y = CHANGE_X, CHANGE_Y+i*32
        result += [(f"change_{i}", "", x+40, y+1, 272, 14, "Arial12_bold_black", "left"),
                   (f"note_{i}", "", x+40, y+15, 272, 14, "Arial12_black", "left")]
    result += [("summary", "", 10, 492, 312, 28, "Arial12_black", "left"),
               ("status", "", 10, 522, 312, 26, "Arial12_black", "left"),
               ("conform", "Conform", 12, 565, 148, 18, "Arial12_bold_black", "centre"),
               ("cancel", "Cancel", 172, 565, 148, 18, "Arial12_bold_black", "centre")]
    return result


def _window(name, x, y, w, h, inner):
    return [f'windowType={{name="{name}" position={{x={x} y={y}}} size={{x={w} y={h}}} backGround="" moveable=0 fullScreen=no'] + inner + ['}']


def _strip(name, x, y, frame, scale=None):
    extra = f' scale={scale}' if scale else ''
    return f'iconType={{name="{name}" spriteType="GFX_unit_strip" frame={frame} position={{x={x} y={y}}}{extra}}}'


def layout(tgc=DEFAULT_TGC, profile=None, universal=False):
    rows = [("unit", "", "", 1, 1)] if universal else units(tgc, profile)
    order = [row[0] for row in rows]
    icons = {key: icon for key, _, _, _, icon in rows}
    x, y, w, h = (30000, 30000, 20, 20) if universal else opening_rect(tgc, profile)
    # Fleets share the panel: the button sits in a window the DLL can hide.
    # A button lookup searches only its own window's children, so an
    # off-screen marker at the panel's level is the DLL's silent probe for our
    # GUI before any window is looked up (as TPL-0's marker; 0.6.0 probed the
    # nested open button and never found it).
    parts = ['guiButtonType={name="tgcx_cf_marker" quadTextureSprite="tgcx_cf_open" position={x=30000 y=30000}}',
             *_window("tgcx_cf_tab", x, y, w, h,
                      ['guiButtonType={name="tgcx_cf_open" quadTextureSprite="tgcx_cf_open" position={x=0 y=0} clicksound=click}']),
             f'windowType={{name="tgcx_cf_window" position={{x=30000 y=30000}} size={{x={WIDTH} y={HEIGHT}}} backGround="" moveable=0 fullScreen=no orientation="UPPER_LEFT"',
             # A background button, not an icon: clicks on the window must not
             # fall through to the map and deselect the army.
             'guiButtonType={name="tgcx_cf_bg" quadTextureSprite="tgcx_cf_bg" position={x=0 y=0}}',
             # The same art as an icon right above it: a button draws its
             # hover highlight, which lit the whole window in 0.6.1.
             'iconType={name="tgcx_cf_bg_icon" spriteType="tgcx_cf_bg" position={x=0 y=0}}']
    if universal:
        parts.pop(0)  # Shared definitions are constructed by the DLL, not injected.
    for name, art, bx, by, _, _ in buttons()[1:]:
        sprite_name = art if art.startswith("GFX_") else f"tgcx_cf_{art}"
        parts.append(f'guiButtonType={{name="tgcx_cf_{name}" quadTextureSprite="{sprite_name}" position={{x={bx} y={by}}} clicksound=click}}')
    # Native buttons cannot be hidden by the DLL's verified window methods:
    # the selection ring and the covers for empty rows are windows above them.
    for row in range(SLOTS):
        ry = SLOT_Y+row*32
        parts += _window(f"tgcx_cf_slot_sel_{row}", SLOT_X, ry, ROW_W, ROW_H,
                         [f'iconType={{name="tgcx_cf_ring_{row}" spriteType="tgcx_cf_ring" position={{x=0 y=0}}}}'])
        parts += _window(f"tgcx_cf_slot_blank_{row}", SLOT_X, ry, ROW_W, ROW_H,
                         [f'iconType={{name="tgcx_cf_blank_icon_{row}" spriteType="tgcx_cf_blank_{row}" position={{x=0 y=0}}}}'])
    parts += _window("tgcx_cf_pager_blank", 228, 170, 96, 28,
                     ['iconType={name="tgcx_cf_pager_icon" spriteType="tgcx_cf_pager" position={x=0 y=0}}'])
    for row in range(CHANGES):
        parts += _window(f"tgcx_cf_change_row_{row}", CHANGE_X, CHANGE_Y+row*32, ROW_W, ROW_H,
                         [f'iconType={{name="tgcx_cf_change_bg_{row}" spriteType="tgcx_cf_change" position={{x=0 y=0}}}}'])
    # Each place has its own fixed unit icon; the DLL only shows one per place.
    for row in range(SLOTS):
        ry = SLOT_Y+row*32
        for u in order:
            parts += _window(f"tgcx_cf_slot_icon_{row}_{u}", SLOT_X+1, ry-2, 36, 36, [_strip(f"tgcx_cf_slot_sprite_{row}_{u}", 0, 0, icons[u])])
            for k in range(MINIS):
                parts += _window(f"tgcx_cf_mini_{row}_{k}_{u}", SLOT_X+175+k*35, ry+3, 24, 24,
                                 [_strip(f"tgcx_cf_mini_sprite_{row}_{k}_{u}", 0, 0, icons[u], 0.66)])
    for row in range(CHANGES):
        for u in order:
            parts += _window(f"tgcx_cf_change_icon_{row}_{u}", CHANGE_X+1, CHANGE_Y+row*32-2, 36, 36,
                             [_strip(f"tgcx_cf_change_sprite_{row}_{u}", 0, 0, icons[u])])
    loc = {}
    for name, text, tx, ty, tw, th, font, fmt in texts():
        key = f"tgcx_cf_text_{name}"
        loc[key] = text
        parts.append(f'instantTextBoxType={{name="{key}" position={{x={tx} y={ty}}} font="{font}" text="{key}" maxWidth={tw} maxHeight={th} format={fmt} allwaystransparent=yes}}')
    parts.append('}')
    return "\n".join(parts)+"\n", loc


def inject(base, fragment):
    # Reuse the byte-preserving named-window parser, with our window.
    from tgcx_bill_gui import inject as insert
    if "tgcx_cf_window" in base or "country_politics" in base:
        raise ValueError("require an unmodified unitpanel GUI")
    if len(re.findall(r'name\s*=\s*"unitpanel"', base)) != 1:
        raise ValueError("require exactly one unitpanel window")
    renamed = re.sub(r'(name\s*=\s*)"unitpanel"', r'\1"country_politics"', base)
    result = insert(renamed, fragment)
    result = result.replace('"country_politics"', '"unitpanel"')
    return result.replace("# >>> tgcx_bill", "# >>> tgcx_conform").replace("# <<< tgcx_bill", "# <<< tgcx_conform")


def header():
    lines = ['// Generated by tools/tgcx_conform_gui.py --header; do not edit.', '#pragma once',
             f'constexpr unsigned tgcx_cf_slots={SLOTS},tgcx_cf_changes={CHANGES},tgcx_cf_minis={MINIS};',
             f'constexpr int tgcx_cf_width={WIDTH},tgcx_cf_height={HEIGHT};',
             'enum tgcx_CfButtonId {']
    lines += [f'    TGCX_CF_B_{name.upper()},' for name, *_ in buttons()]
    lines += ['    TGCX_CF_BUTTONS', '};', 'static constexpr const char* tgcx_cf_button_names[]={']
    lines += [f'    "tgcx_cf_{name}",' for name, *_ in buttons()]
    lines += ['};', 'enum tgcx_CfTextId {']
    lines += [f'    TGCX_CF_T_{name.upper()},' for name, *_ in texts()]
    lines += ['    TGCX_CF_TEXTS', '};', 'static constexpr const char* tgcx_cf_text_names[]={']
    lines += [f'    "tgcx_cf_text_{name}",' for name, *_ in texts()]
    lines += ['};', '#define TGCX_CF_THUNKS(M) '+' '.join(f'M({i})' for i in range(len(buttons()))), '']
    return '\n'.join(lines)


def generate(output, tgc=DEFAULT_TGC, profile=None):
    output = Path(output)
    if not (output/'TGCX.mod').is_file():
        raise ValueError("Conform GUI needs a complete staged source")
    fragment, loc = layout(tgc, profile)
    (output/'TGCX'/LAYOUT).write_bytes(fragment.encode('cp1252'))
    gfx = output/'TGCX/gfx/interface'
    gfx.mkdir(parents=True, exist_ok=True)
    (output/'TGCX/interface').mkdir(parents=True, exist_ok=True)
    (output/'TGCX/localisation').mkdir(parents=True, exist_ok=True)
    table = sprites(tgc, profile)
    def native(name, **kwargs):
        return sprite(tgc, table, name, profile=profile, **kwargs)
    images = {}
    # Native 332px army panel: top/bottom gold braids and green name bar from
    # GFX_unit_toppanel_bg, unstretched parchment middle and recessed footer
    # tray from GFX_unit_bottom_bg, and GFX_unit_bg_28 section divider.
    body = native('GFX_unit_bottom_bg')
    top = native('GFX_unit_toppanel_bg', frames=2)
    bg = Image.new('RGBA', (WIDTH, HEIGHT))
    parchment = body.crop((0, 80, WIDTH, 360))
    for y in range(30, HEIGHT-35, parchment.height):
        h = min(parchment.height, HEIGHT-35-y)
        bg.paste(parchment.crop((0, 0, WIDTH, h)), (0, y))
    bg.paste(body.crop((0, 373, WIDTH, 408)), (0, HEIGHT-35))
    bg.alpha_composite(top.crop((0, 0, WIDTH, 27)), (0, 0))
    bg.alpha_composite(top.crop((51, 5, 324, 27)).resize((317, 22)), (7, 5))
    bg.alpha_composite(top.crop((0, 58, WIDTH, 64)), (0, 27))
    band = native('GFX_unit_bg_28').crop((7, 0, 314, 28)).resize((ROW_W, 28))
    bg.alpha_composite(band, (SLOT_X, 198))
    images['bg'] = bg
    # Native 317x30 regiment row with the two right-hand POP/bar columns
    # replaced by the clean dual-tone middle band.
    entry = native('GFX_unit_entry_bg')
    slot = entry.copy()
    slot.paste(entry.crop((38, 0, 248, ROW_H)).resize((278, ROW_H)), (38, 0))
    images['slot'] = slot
    for row in range(SLOTS):
        y = SLOT_Y+row*32
        images[f'blank_{row}'] = images['bg'].crop((SLOT_X, y, SLOT_X+ROW_W, y+ROW_H))
    images['pager'] = images['bg'].crop((228, 170, 324, 198))
    ring = Image.new('RGBA', (ROW_W, ROW_H))
    d = ImageDraw.Draw(ring)
    d.rectangle((0, 0, ROW_W-1, ROW_H-1), outline=(59, 46, 16, 255))
    d.rectangle((1, 1, ROW_W-2, ROW_H-2), outline=(243, 215, 124, 255)); d.rectangle((2, 2, ROW_W-3, ROW_H-3), outline=(243, 215, 124, 255))
    images['ring'] = ring
    for key, name in [('left', 'GFX_button_arrow_left'), ('right', 'GFX_button_arrow_right')]:
        images[key] = native(name).resize((24, 24))
    # Native unit-panel footer button (148x28 steel/gold bevelled button).
    images['button'] = native('GFX_unit_gunboat_diplo_button')
    # The panel's own 20x20 button frame (disband), its centre cleared, with
    # the infantry figure of the unit strip: "this stack, by template".
    frame = native('GFX_unit_disband')
    if frame.size != (20, 20):
        raise ValueError("Army requires native 20x20 unit panel buttons")
    fill = frame.getpixel((4, 4))
    ImageDraw.Draw(frame).rectangle((3, 3, 16, 16), fill=fill)
    strip = texture(tgc, table['GFX_unit_strip'], profile)
    w = strip.width//unit_frames(tgc, profile)
    frame.alpha_composite(strip.crop((0, 0, w, strip.height)).resize((16, 16)), (2, 2))
    images['open'] = frame
    # Match the army's regiment rows for both templates and changes.
    images['change'] = images['slot'].copy()
    declarations = []
    for key, image in images.items():
        filename = f'tgcx_cf_{key}.dds'
        write_dds(image, gfx/filename)
        declarations.append(f'spriteType={{name="tgcx_cf_{key}" texturefile="gfx/interface/{filename}" noOfFrames=1 loadType="INGAME"}}')
    (output/'TGCX/interface/tgcx_conform.gfx').write_text('spriteTypes={\n'+'\n'.join(declarations)+'\n}\n', encoding='cp1252')
    rows = ['CODE;ENGLISH;FRENCH;GERMAN;POLISH;SPANISH;ITALIAN;SWEDISH;CZECH;HUNGARIAN;DUTCH;PORTUGUESE;RUSSIAN;FINNISH;x']
    rows += [k+';'+v+';'*13+'x' for k, v in loc.items()]
    (output/'TGCX/localisation/tgcx_conform.csv').write_bytes(('\n'.join(rows)+'\n').encode('cp1252'))
    return images


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--header', action='store_true')
    ap.add_argument('--stage', type=Path)
    ap.add_argument('--tgc', type=Path, default=Path(DEFAULT_TGC))
    args = ap.parse_args()
    if args.header:
        (Path(ROOT)/'dll/tgcx/tgcx_conform_layout.h').write_text(header(), encoding='utf-8')
    if args.stage:
        stage = args.stage.resolve()
        if stage == Path(ROOT) or stage.is_relative_to(Path(ROOT)) or any((p/'v2game.exe').exists() for p in (stage, *stage.parents)):
            ap.error('use staging outside the repository and game')
        generate(stage, args.tgc)
    if not args.header and not args.stage:
        ap.error('use --header or --stage')


if __name__ == '__main__':
    main()
