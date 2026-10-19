"""Bill window (LAW-2): layout, art and DLL header, from the mockup board.

The coordinates are those of the agreed Bill board (`mockups/2-negotiation.png`,
900 x 772; R10). Nothing from TGC or the game enters git (R3, R8): the window
background and the sprite atlas the DLL draws from are composed at staging time
from the installed textures, and the GUI is inserted next to a named anchor.

    python tools/tgcx_bill_gui.py --header           DLL header (catalogue + layout)
    python tools/tgcx_bill_gui.py --stage <folder>   layout, art, sprites, text
"""
import argparse
import json
from pathlib import Path
import re
import struct

from PIL import Image, ImageDraw
from gen_law_catalog import catalog_data
from gen_laws import BLOC, DEFAULT_TGC, Gen, ROOT, as_dict
from tgc_scan import parse, read

WIDTH, HEIGHT = 900, 772
LAYOUT = "tgcx_bill_layout.txt"
BG, ATLAS = "tgcx_bill_bg.dds", "tgcx_bill_atlas.dds"
ATLAS_SIZE = (256, 512)

# Board columns (Bill.dc.html): Bloc | Closeness | Affinity | Votes, and rows.
CB, CC, CS, CV, CE = 377, 509, 665, 746, 827
CARDS, CARD_Y, CARD_STEP = 3, 152, 96
CROWN_Y, LOG_Y, STATUS_Y, BAR_Y = 440, 538, 636, 660
LX, LW = 60, 284
CHART = (72, 207, 260, 128)           # projected-vote seats
CHART_PATCH = (64, 205, 276, 135)     # background redrawn over the marker
MODE_X, MODE_Y = (90, 177, 265), 183
LOT_X, LOT_Y = (172, 256), 518
LEGEND_X, LEGEND_Y = (90, 163, 260), 345

# Atlas cells (x, y, w, h); the law icons follow in catalogue order.
CELLS = {"checked": (0, 0, 20, 20), "diamond": (20, 0, 11, 11), "plupp": (32, 0, 24, 24),
         "selected": (0, 24, 150, 15), "select": (0, 39, 135, 13), "row": (0, 52, 151, 14),
         "off111": (0, 66, 111, 34), "off144": (0, 100, 144, 34), "off177": (0, 134, 177, 34)}
ICON_Y, ICON_CELL, ICON_COLUMNS = 168, 36, 7
TEXT_SPRITE = re.compile(r"GFX_(button_standard|sortbutton)_\d+$")


def card_y(slot):
    return CARD_Y + CARD_STEP * slot


def buttons():
    """(name, sprite, x, y, w, h) in GUI order; all are bound by the DLL except sorts 1-3."""
    out = [("tgcx_bill_close", "GFX_main_close_button", 835, 57, 32, 32)]
    for n, (x, sprite, w) in enumerate(((CB, "GFX_sortbutton_132", 132), (CC, "GFX_sortbutton_156", 156),
                                         (CS, "GFX_sortbutton_80", 81), (CV, "GFX_sortbutton_80", 81))):
        out.append((f"tgcx_bill_sort_{n}", sprite, x, 116, w, 32))
    out += [(f"tgcx_bill_mode_{n}", "GFX_checkbox_default", x, MODE_Y, 20, 20) for n, x in enumerate(MODE_X)]
    out += [(f"tgcx_bill_lot_{n}", "GFX_checkbox_default", x, LOT_Y, 20, 20) for n, x in enumerate(LOT_X)]
    for s in range(CARDS):
        out += [(f"tgcx_bill_card_{s}_a", "GFX_button_standard_144", CC, card_y(s) + 55, 144, 34),
                (f"tgcx_bill_card_{s}_b", "GFX_button_standard_144", CC + 156, card_y(s) + 55, 144, 34)]
    out += [("tgcx_bill_audience", "GFX_button_standard_144", CC, CROWN_Y + 55, 144, 34),
            ("tgcx_bill_count", "GFX_button_standard_111", CB - 2, BAR_Y, 111, 34),
            ("tgcx_bill_withdraw", "GFX_button_standard_144", CB + 117, BAR_Y, 144, 34),
            ("tgcx_bill_vote", "GFX_button_standard_177", CE + 2 - 177, BAR_Y, 177, 34)]
    return out


def texts():
    """(name, default text, x, y, w, h, font, format); DLL fills the empty ones."""

    t = [("title", "Bill", 620, 22, 200, 40, "vic_title", "right"),
         ("law", "", 62, 88, 280, 24, "vic_22", "centre"),
         ("transition", "", 106, 119, 236, 20, "vic_18_black", "left"),
         # Long TGC names: the DLL writes the same line here instead (fits_transition).
         ("transition_small", "", 106, 121, 236, 16, "Arial12_bold_black", "left"),
         ("intro", "", 106, 137, 236, 16, "Arial12_black", "left"),
         ("vote_header", "Projected Vote", LX + 4, 161, LW - 8, 18, "vic_18", "centre")]
    t += [(f"mode_{n}", label, x + 24, MODE_Y + 1, 70, 20, "vic_18_black", "left")
          for n, (x, label) in enumerate(zip(MODE_X, ("By vote", "By bloc", "Both")))]
    t += [(f"legend_{n}", "", x + 14, LEGEND_Y - 4, 90, 20, "vic_18_black", "left") for n, x in enumerate(LEGEND_X)]
    t += [("chart_note", "", LX, 368, LW, 16, "Arial12_black", "centre"),
          ("favour_header", "Political Favours", LX + 4, 405, LW - 8, 18, "vic_18", "centre"),
          ("favours", "", 92, 435, 38, 24, "vic_22_black", "right"),
          ("favours_cap", "/ 100", 135, 442, 45, 16, "Arial12_black", "left"),
          ("rate", "", 194, 432, 146, 16, "Arial12_black", "left"),
          ("spent", "", 194, 447, 146, 16, "Arial12_black", "left"),
          ("sources", "", 194, 462, 146, 16, "Arial12_black", "left"),
          ("price_header", "Price in Favours", LX + 4, 497, LW - 8, 18, "vic_18", "centre"),
          ("lots_label", "Buy in lots of", LX + 10, 522, 100, 16, "Arial12_black", "left"),
          ("lot_0", "5 seats", LOT_X[0] + 24, LOT_Y + 1, 60, 20, "vic_18_black", "left"),
          ("lot_1", "25 seats", LOT_X[1] + 24, LOT_Y + 1, 60, 20, "vic_18_black", "left")]
    rows = (("Bloc is", "Abstain", "Aye"), ("Friendly / neutral", "–", ""),
            ("Against", "", ""), ("Strongly against", "", "promise"))
    for i, (name, ab, aye) in enumerate(rows):
        font = "Arial12_bold_black" if i == 0 else "Arial12_black"
        y = 548 + 17 * i
        t += [(f"table_{i}_name", name, 76, y, 104, 16, font, "left"),
              (f"table_{i}_abstain", ab, 180, y, 76, 16, font, "centre"),
              (f"table_{i}_aye", aye, 256, y, 80, 16, font, "centre")]
    t += [("debt_header", "Debts", LX + 4, 637, LW - 8, 18, "vic_18", "centre")]
    t += [(f"debt_{i}", "", LX + 10, 658 + 15 * i, LW - 16, 16, "Arial12_black", "left") for i in range(4)]
    t += [("bloc_header", "Upper House Blocs", 366, 88, 472, 24, "vic_22", "centre")]
    for n, (x, w, label) in enumerate(((CB, 132, "Bloc"), (CC, 156, "Closeness"), (CS, 81, "Affinity"), (CV, 81, "Votes"))):
        t.append((f"sort_{n}", label, x, 123, w, 20, "vic_18_black", "centre"))
    for s in range(CARDS):
        y = card_y(s)
        t += [(f"card_{s}_name", "", CB + 30, y + 7, 100, 20, "vic_18_black", "left"),
              (f"card_{s}_seats", "", CB + 30, y + 25, 100, 16, "Arial12_black", "left"),
              (f"card_{s}_native", "", CB + 6, y + 40, 125, 16, "Arial12_black", "left")]
        t += [(f"card_{s}_option_{i}", "", CC + 20, y + 7 + 14 * i, 120, 14, "Arial12_black", "left") for i in range(3)]
        t += [(f"card_{s}_stance", "", CS, y + 7, CV - CS, 20, "vic_18_black", "centre"),
              (f"card_{s}_stance_note", "", CS, y + 25, CV - CS, 16, "Arial12_black", "centre"),
              (f"card_{s}_aye", "", CV + 10, y + 6, 74, 16, "Arial12_black", "left"),
              (f"card_{s}_abstain", "", CV + 10, y + 20, 74, 16, "Arial12_black", "left"),
              (f"card_{s}_nay", "", CV + 10, y + 34, 74, 16, "Arial12_black", "left"),
              (f"card_{s}_bought_label", "", CB + 4, y + 58, 120, 16, "Arial12_black", "left"),
              (f"card_{s}_bought", "", CB + 4, y + 72, 125, 16, "Arial12_black", "left"),
              (f"card_{s}_note", "", CC + 4, y + 65, CE - CC - 8, 16, "Arial12_black", "left"),
              (f"card_{s}_a", "", CC, y + 64, 144, 20, "vic_18_black", "centre"),
              (f"card_{s}_b", "", CC + 156, y + 64, 144, 20, "vic_18_black", "centre")]
    y = CROWN_Y
    t += [("crown_title", "The Crown", CB + 42, y + 7, 100, 20, "vic_18_black", "left"),
          ("crown_name", "", CB + 42, y + 25, 90, 16, "Arial12_black", "left"),
          ("crown_desc_0", "", CC + 4, y + 8, 152, 16, "Arial12_black", "left"),
          ("crown_desc_1", "", CC + 4, y + 22, 152, 16, "Arial12_black", "left"),
          ("crown_stance", "", CS, y + 7, CV - CS, 20, "vic_18_black", "centre"),
          ("crown_stance_note", "", CS, y + 25, CV - CS, 16, "Arial12_black", "centre"),
          ("crown_veto_0", "", CV + 10, y + 8, 74, 16, "Arial12_black", "left"),
          ("crown_veto_1", "", CV + 10, y + 22, 74, 16, "Arial12_black", "left"),
          ("audience_label", "Audience", CB + 4, y + 58, 120, 16, "Arial12_black", "left"),
          ("audience_state", "", CB + 4, y + 72, 120, 16, "Arial12_black", "left"),
          ("audience", "", CC, y + 64, 144, 20, "vic_18_black", "centre"),
          ("log_header", "Negotiation Log", CB + 1, LOG_Y + 5, CE - CB - 2, 18, "vic_18", "centre")]
    t += [(f"log_{i}", "", CB + 6, LOG_Y + 28 + 15 * i, CE - CB - 12, 16, "Arial12_black", "left") for i in range(4)]
    t += [("status", "", CB, STATUS_Y, CE - CB, 20, "vic_18_black", "centre"),
          ("count", "Recount", CB - 2, BAR_Y + 9, 111, 20, "vic_18_black", "centre"),
          ("withdraw", "Withdraw", CB + 117, BAR_Y + 9, 144, 20, "vic_18_black", "centre"),
          ("vote", "Call the Vote", CE + 2 - 177, BAR_Y + 9, 177, 20, "vic_18_black", "centre")]
    return [(f"tgcx_bill_t_{name}", *rest) for name, *rest in t]


def inject(base, fragment):
    """Insert our child window into the one named native Politics window.

    Token spans preserve every original byte, including comments/whitespace.
    Match the window's immediate name, not a similarly named nested object.
    """
    tokens = list(re.finditer(r'#[^\r\n]*|"[^"\r\n]*"|[{}=]|[^\s{}=#"]+', base))
    tokens = [t for t in tokens if not t[0].startswith("#")]
    candidates = []
    for n in range(len(tokens)-3):
        if [t[0] for t in tokens[n:n+3]] != ["windowType", "=", "{"]:
            continue
        depth, name, end = 1, None, None
        k = n+3
        while k < len(tokens):
            t = tokens[k][0]
            if depth == 1 and t == "name" and tokens[k+1][0] == "=":
                name = tokens[k+2][0].strip('"')
            if t == "{": depth += 1
            elif t == "}": depth -= 1
            if depth == 0:
                end = tokens[k].start()
                break
            k += 1
        if name == "country_politics" and end is not None:
            candidates.append(end)
    if len(candidates) != 1 or "tgcx_bill_window" in base:
        raise ValueError("require exactly one unmodified country_politics window")
    at = candidates[0]
    result = base[:at] + "\n# >>> tgcx_bill\n" + fragment + "\n# <<< tgcx_bill\n" + base[at:]
    if not parse(result):
        raise ValueError("generated GUI is empty")
    return result


def numbers():
    return dict(parse((Path(ROOT) / "data/tgcx_laws.txt").read_text(encoding="cp1252")))


def layout():
    loc = {}

    def key(name, text):
        if ";" in text:
            raise ValueError("localisation text cannot contain the CSV delimiter")
        loc[name] = text
        return name

    # The board has no Open Bill button: the bill's target row in the Reforms
    # tab opens it. This one stays off-screen as the DLL's probe for our GUI.
    parts = ['guiButtonType = { name="tgcx_bill_open" position={ x=30000 y=30000 }',
             f'    quadTextureSprite="GFX_button_212wide" buttonText="{key("tgcx_bill_open", "Open Bill")}"',
             '    buttonFont="vic_18_black" clicksound=click }',
             # Offscreen without the DLL: script-only Politics remains usable.
             'windowType = { name="tgcx_bill_window" position={ x=30000 y=30000 }',
             f'size={{ x={WIDTH} y={HEIGHT} }} moveable=1 fullScreen=no orientation="CENTER"',
             'backGround="tgcx_bill_bg" dontRender="" horizontalBorder="0" verticalBorder=""',
             # Native movable windows use a named background button (as TGC
             # Event_Country_Window does), not a decorative background icon.
             'guiButtonType={ name="tgcx_bill_bg" quadTextureSprite="tgcx_bill_bg" position={x=0 y=0} orientation="UPPER_LEFT" }']
    for name, sprite, x, y, _, _ in buttons():
        # Text-sprite buttons (standard, sort) draw nothing without buttonText
        # and buttonFont (0.3.4 in game); every native use declares both. The
        # label is our text box above, so the button's own text is empty.
        text = ' buttonText="" buttonFont="vic_18_black"' if TEXT_SPRITE.match(sprite) else ""
        parts.append(f'guiButtonType={{ name="{name}" quadTextureSprite="{sprite}" position={{x={x} y={y}}}{text} '
                     f'orientation="UPPER_LEFT" clicksound=click }}')
    # The DLL draws state (checks, disabled buttons, seats) right after this
    # marker, so later text stays above it (native GUI order, P26/P28).
    parts.append('iconType={ name="tgcx_bill_chart_overlay" spriteType="GFX_politics_piebig_overlay" '
                 f'position={{x={CHART[0] + 76} y={CHART[1] + 10}}} orientation="UPPER_LEFT" }}')
    for name, text, x, y, w, h, font, fmt in texts():
        parts.append(f'instantTextBoxType={{ name="{name}" position={{ x={x} y={y} }} font="{font}" '
                     f'text="{key(name, text)}" maxWidth={w} maxHeight={h} format={fmt} allwaystransparent=yes }}')
    parts.append("}")
    return "\n".join(parts)+"\n", loc


# ---------------------------------------------------------------- installed art

def game_root(tgc):
    tgc = Path(tgc)
    # MOD-2: the base may be the game folder itself (vanilla).
    return next(p for p in (tgc, *tgc.parents) if (p / "v2game.exe").is_file())


def font_widths(tgc, font):
    """Character advances of a GUI font (core.gfx name -> BMFont .fnt), TGC first."""
    fontname = None
    for root in (Path(tgc), game_root(tgc)):
        core = root / "interface/core.gfx"
        if fontname is None and core.is_file():
            m = re.search(r'name\s*=\s*"' + re.escape(font) + r'"\s*fontname\s*=\s*"([^"]+)"',
                          core.read_text(encoding="cp1252", errors="replace"))
            fontname = m[1] if m else None
    for root in (Path(tgc), game_root(tgc)):
        fnt = root / "gfx/fonts" / f"{fontname}.fnt"
        if fontname and fnt.is_file():
            return {int(m[1]): int(m[2]) for m in re.finditer(r"char id=(\d+).*?xadvance=(-?\d+)", fnt.read_text(encoding="cp1252"))}
    raise ValueError(f"font {font} not found")


def text_width(widths, text):
    return sum(widths.get(b, widths.get(32, 0)) for b in text.encode("cp1252"))


def fit(widths, text, width):
    """The text, or its longest prefix plus "..." that fits the box."""
    if text_width(widths, text) <= width:
        return text
    while text and text_width(widths, text.rstrip() + "...") > width:
        text = text[:-1]
    return text.rstrip() + "..."


def sprites(tgc):
    """Sprite name -> texture path, TGC's definition first (as the game loads it)."""
    found = {}
    for root in (Path(tgc), game_root(tgc)):
        for gfx in sorted((root / "interface").glob("*.gfx")):
            text = gfx.read_text(encoding="cp1252", errors="replace")
            for m in re.finditer(r'name\s*=\s*"([^"]+)"[^{}]*?texture[Ff]ile\s*=\s*"([^"]+)"', text):
                found.setdefault(m[1], m[2].replace("\\\\", "/").replace("\\", "/"))
    return found


def texture(tgc, path):
    for root in (Path(tgc), game_root(tgc)):
        base = root / path
        for candidate in (base, base.with_suffix(".dds"), base.with_suffix(".tga")):
            if candidate.is_file():
                return Image.open(candidate).convert("RGBA")
    raise ValueError(f"installed texture not found: {path}")


def sprite(tgc, table, name, frame=0, frames=1):
    image = texture(tgc, table[name])
    w = image.width // frames
    return image.crop((w * frame, 0, w * (frame + 1), image.height))


def nine(image, border, w, h, tile=False):
    """CSS border-image: stretch (or round-tile) edges and centre around fixed corners."""
    b, out = border, Image.new("RGBA", (w, h))
    sw, sh = image.width - 2 * b, image.height - 2 * b

    def piece(box, size):
        part = image.crop(box)
        if not tile or size[0] <= 0 or size[1] <= 0:
            return part.resize((max(size[0], 1), max(size[1], 1)))
        nx = max(1, round(size[0] / part.width)) if part.width != b else 1
        ny = max(1, round(size[1] / part.height)) if part.height != b else 1
        cell = part.resize((max(1, -(-size[0] // nx)), max(1, -(-size[1] // ny))))
        tiled = Image.new("RGBA", size)
        for i in range(nx):
            for j in range(ny):
                tiled.paste(cell, (i * cell.width, j * cell.height))
        return tiled
    xs = ((0, b, 0, b), (b, b + sw, b, w - b), (b + sw, image.width, w - b, w))
    ys = ((0, b, 0, b), (b, b + sh, b, h - b), (b + sh, image.height, h - b, h))
    for sx0, sx1, dx0, dx1 in xs:
        for sy0, sy1, dy0, dy1 in ys:
            if dx1 > dx0 and dy1 > dy0:
                out.paste(piece((sx0, sy0, sx1, sy1), (dx1 - dx0, dy1 - dy0)), (dx0, dy0))
    return out


def framed(w, h, rings, fill):
    """Our own bordered box (the board's panel/section art is drawn, not a game file)."""
    image = Image.new("RGBA", (w, h), fill)
    d = ImageDraw.Draw(image)
    for i, color in enumerate(rings):
        d.rectangle((i, i, w - 1 - i, h - 1 - i), outline=color)
    return image


def panel(w, h):
    image = framed(w, h, [(0, 0, 0, 0), (0, 0, 0, 0), (0, 0, 0, 68), (0, 0, 0, 204), (175, 166, 140, 255),
                          (145, 137, 115, 255), (115, 109, 90, 255), (206, 195, 165, 255)], (222, 222, 214, 255))
    d = ImageDraw.Draw(image)
    for x, y in ((3, 3), (w - 12, 3), (3, h - 12), (w - 12, h - 12)):    # corner studs
        d.rectangle((x, y, x + 8, y + 8), fill=(206, 190, 150, 255), outline=(115, 109, 90, 255))
        d.rectangle((x + 3, y + 3, x + 5, y + 5), fill=(10, 10, 8, 255))
    return image


def section(w, h):
    return framed(w, h, [(90, 93, 90, 255), (162, 163, 156, 255), (200, 200, 189, 255)], (206, 203, 195, 255))


def medallion():
    image = Image.new("RGBA", (32, 31))
    d = ImageDraw.Draw(image)
    d.ellipse((0, 0, 31, 30), fill=(92, 78, 52, 255))
    d.ellipse((2, 2, 29, 28), fill=(205, 172, 92, 255), outline=(120, 96, 50, 255))
    d.ellipse((7, 7, 24, 23), fill=(232, 205, 128, 255))
    d.line((9, 17, 15, 13, 22, 17), fill=(110, 80, 30, 255), width=3)          # two hands meeting
    return image


def background(path, tgc=DEFAULT_TGC):
    table = sprites(tgc)
    politics = texture(tgc, table["GFX_bg_politics"])
    im = Image.new("RGBA", (WIDTH, HEIGHT))         # outside the frame: main_bg's own shadow
    frame = nine(texture(tgc, table["GFX_main_bg"]), 100, 976, 822, tile=True)
    im.paste(frame, (-36, -6), frame)
    green = politics.crop((13, 13, 13 + 333, 13 + 25))
    pill = politics.crop((20, 73, 20 + 319, 73 + 17))
    for x, y, w, h in ((52, 76, 300, 652), (356, 76, 492, 652)):
        art = panel(w, h)
        im.paste(art, (x, y), art)
    for x, w in ((62, 280), (366, 472)):
        im.paste(green.resize((w, 25)), (x, 86))
    boxes = [(60, 156, 284, 238), (60, 400, 284, 86), (60, 492, 284, 134), (60, 632, 284, 100)]
    boxes += [(CB - 3, card_y(s), CE - CB + 6, 92) for s in range(CARDS)]
    boxes += [(CB - 3, CROWN_Y, CE - CB + 6, 92), (CB - 3, LOG_Y, CE - CB + 6, 92)]
    for x, y, w, h in boxes:
        im.paste(section(w, h), (x, y))
    for x, y, w in ((64, 160, 276), (64, 404, 276), (64, 496, 276), (64, 636, 276), (CB + 1, LOG_Y + 4, CE - CB - 2)):
        art = nine(pill, 4, w, 18)
        im.paste(art, (x, y), art)
    d = ImageDraw.Draw(im)
    rule = (156, 158, 148, 255)
    d.line((68, 362, 68 + 267, 362), fill=rule)
    d.line((184, 430, 184, 477), fill=rule)
    im.paste(framed(268, 72, [(90, 93, 90, 255), (200, 200, 189, 255)], (226, 224, 214, 255)), (68, 544))
    for x in (180, 256):
        d.line((x, 546, x, 613), fill=rule)
    for y in (563, 580, 597):
        d.line((70, y, 333, y), fill=rule)
    art = medallion()
    im.paste(art, (72, 437), art)
    leader = texture(tgc, table["GFX_leader_generic0"])
    im.paste(leader, (CB + 2, CROWN_Y + 6), leader)
    d.line((CB + 4, CROWN_Y + 52, CE - 4, CROWN_Y + 52), fill=rule)
    write_dds(im, path)
    return im


def group_icons(tgc):
    """Reform group -> its icon sprite in installed TGC's Politics reform windows."""
    gui = parse(read(Path(tgc) / "interface/country_politics.gui"))
    icons = {}

    def walk(items):
        for key, value in items:
            if not isinstance(value, list):
                continue
            if key == "windowType":
                body = dict((k, v) for k, v in value if not isinstance(v, list))
                name = body.get("name", "").strip('"')
                icon = next((dict(v).get("spriteType") for k, v in value if k == "iconType"), None)
                if name and icon:
                    icons.setdefault(name, icon.strip('"'))
            walk(value)
    walk(gui)
    return icons


def atlas(path, tgc=DEFAULT_TGC, groups=None):
    table = sprites(tgc)
    im = Image.new("RGBA", ATLAS_SIZE)

    def put(cell, art):
        x, y, w, h = CELLS[cell]
        im.paste(art.crop((0, 0, w, h)), (x, y), art.crop((0, 0, w, h)))
    put("checked", sprite(tgc, table, "GFX_checkbox_default", 1, 2))
    diamond = Image.new("RGBA", (11, 11))
    ImageDraw.Draw(diamond).polygon(((5, 0), (10, 5), (5, 10), (0, 5)), fill=(226, 189, 76, 255), outline=(58, 42, 10, 255))
    put("diamond", diamond)
    put("plupp", sprite(tgc, table, "GFX_politics_party_plupp"))
    put("selected", sprite(tgc, table, "GFX_politics_reform_selected"))
    put("select", sprite(tgc, table, "GFX_politics_reform_select"))
    politics = texture(tgc, table["GFX_bg_politics"])
    put("row", politics.crop((367, 79, 367 + 151, 79 + 14)))
    for width in (111, 144, 177):
        art = sprite(tgc, table, f"GFX_button_standard_{width}")
        grey = art.convert("LA").convert("RGBA")
        grey.putalpha(art.getchannel("A").point(lambda a: a * 6 // 10))
        put(f"off{width}", grey)
    icons = group_icons(tgc)
    for n, group in enumerate(groups or []):
        name = icons.get(group)
        if not name or name not in table:
            continue
        art = texture(tgc, table[name]).crop((0, 0, ICON_CELL, ICON_CELL))
        x, y = ICON_CELL * (n % ICON_COLUMNS), ICON_Y + ICON_CELL * (n // ICON_COLUMNS)
        im.paste(art, (x, y), art)
    write_dds(im, path)
    return im


def write_dds(image, path):
    """Uncompressed A8R8G8B8 DDS (the game's loader and the DLL both read it)."""
    image = image.convert("RGBA")
    w, h = image.size
    header = struct.pack("<4s7I44x2I4s5I5I", b"DDS ", 124, 0x100F, h, w, w * 4, 0, 1,
                         32, 0x41, b"\0\0\0\0", 32, 0x00FF0000, 0x0000FF00, 0x000000FF, 0xFF000000,
                         0x1000, 0, 0, 0, 0)
    r, g, b, a = image.split()
    Path(path).write_bytes(header + Image.merge("RGBA", (b, g, r, a)).tobytes())


# ---------------------------------------------------------------- DLL header

def catalogue_header(tgc=DEFAULT_TGC):
    laws, affinity, groups, ideologies, chosen, _ = catalog_data(tgc)
    aff = {i: dict(rows) for i, rows in affinity}
    bills = next(body for key, body in laws if key == "bills")
    L = numbers()
    price = {kind: dict(values) for kind, values in L["price"]}
    leg = dict(L["legislature"])
    governments = [v for _, v in leg["limited"]] + [v for _, v in leg["full"]]
    distrust = [v for _, v in L["crown_distrusts"]]
    q = json.dumps
    lines = ["// Generated by tools/tgcx_bill_gui.py from our data, installed TGC names and the Bill board.",
             "#pragma once",
             # transition_from/small: the "from" side and the font that fit the
             # Bill's transition line (vic_18, else Arial12 bold; U-7 deviation 2).
             "struct tgcx_BillInfo { const char* title; const char* from; const char* to; const char* ideal[9];",
             "    unsigned char group, from_index, to_index, ideal_index[9]; const char* transition_from; bool transition_small; };",
             # short_options: fitted to a Closeness row (Arial12, 120 px).
             "struct tgcx_BillGroup { const char* options[8]; unsigned char count; const char* short_options[8]; };",
             "static constexpr tgcx_BillGroup tgcx_bill_groups[] = {"]
    boxes = {name.removeprefix("tgcx_bill_t_"): (w, font) for name, _, _, _, w, _, font, _ in texts()}
    row_w, row_font = boxes["card_0_option_0"]
    row = font_widths(tgc, row_font)
    line_w, line_font = boxes["transition"]
    line, small = font_widths(tgc, line_font), font_widths(tgc, boxes["transition_small"][1])
    for g in chosen:
        opts = [Gen.pretty(o) for o in groups[g]["options"]]
        if len(opts) > 8:
            raise ValueError(f"{g}: more than eight options")
        lines.append("    {{" + ",".join(q(o) for o in opts) + "}," + str(len(opts)) + ",{"
                     + ",".join(q(fit(row, o, row_w)) for o in opts) + "}},")
    # Script keys, for the Reforms tab: the engine names each option by its key.
    lines += ["};", "static constexpr const char* tgcx_bill_group_keys[] = {" + ",".join(q(g) for g in chosen) + "};",
              "static constexpr bool tgcx_bill_group_political[] = {" +
              ",".join("true" if groups[g]["category"] == "political_reforms" else "false" for g in chosen) + "};",
              "static constexpr const char* tgcx_bill_option_keys[][8] = {"]
    lines += ["    {" + ",".join(q(o) for o in groups[g]["options"]) + "}," for g in chosen]
    lines += ["};", "static constexpr tgcx_BillInfo tgcx_bill_catalog[] = {"]
    for group, pair in bills:
        pair = dict(pair)
        opts = groups[group]["options"]
        ideal = [dict(aff[i][group])["ideal"] for i in ideologies]
        ideal_index = [opts.index(pair["from"] if v == "status_quo" else v) for v in ideal]
        strings = [Gen.pretty(group), Gen.pretty(pair["from"]), Gen.pretty(pair["to"])]
        arrow = " \xbb " + strings[2]
        use_small = text_width(line, strings[1] + arrow) > line_w
        widths = small if use_small else line
        shown = fit(widths, strings[1], line_w - text_width(widths, arrow))
        lines.append("    {" + ",".join(q(s) for s in strings) + ",{" + ",".join(q(Gen.pretty(v)) for v in ideal) + "},"
                     + f"{chosen.index(group)},{opts.index(pair['from'])},{opts.index(pair['to'])},{{"
                     + ",".join(map(str, ideal_index)) + f"}},{q(shown)},{'true' if use_small else 'false'}}},")
    lines += ["};",
              "static constexpr const char* tgcx_bill_bloc_names[] = {" + ",".join(q(BLOC[i]) for i in ideologies) + "};",
              "static constexpr const char* tgcx_bill_bloc_singular[] = {" +
              ",".join(q(Gen.pretty(i).replace("Anarcho Liberal", "Anarcho-Liberal")) for i in ideologies) + "};",
              "static constexpr const char* tgcx_bill_governments[] = {" + ",".join(q(re.sub(r"\s*\d+$", "", Gen.pretty(g)).replace("Hms ", "HMS ")) for g in governments) + "};",
              f"static constexpr unsigned tgcx_bill_limited_count = {len(leg['limited'])};",
              "static constexpr bool tgcx_bill_distrusted[] = {" + ",".join("true" if i in distrust else "false" for i in ideologies) + "};",
              "static constexpr const char* tgcx_bill_stance_codes[] = {\"m2\",\"m1\",\"z\",\"p1\",\"p2\"};",
              # Price per 5 seats by stance -2..+2 (0: no such purchase); catalogue friendly Aye = undecided price.
              "static constexpr int tgcx_bill_abstain_price[] = {" + ",".join(str(int(price["abstain"].get(s, 0))) for s in ("m2", "m1", "z", "p1", "p2")) + "};",
              "static constexpr int tgcx_bill_aye_price[] = {" + ",".join(str(int(price["vote"].get(s, price["vote"]["z"] if s[0] == "p" else 0))) for s in ("m2", "m1", "z", "p1", "p2")) + "};",
              f"static constexpr int tgcx_bill_broken_factor = {int(L['broken_debt_price_factor'])};",
              f"static constexpr int tgcx_bill_audience_price = {int(L['audience'])};",
              f"static constexpr int tgcx_bill_debate_days = {int(L['debate_days'])};",
              f"static constexpr int tgcx_bill_broken_militancy = {int(L['broken_debt_militancy'])};",
              f"static constexpr int tgcx_bill_broken_years = {int(L['broken_debt_days']) // 365};",
              f"static constexpr int tgcx_bill_width = {WIDTH}, tgcx_bill_height = {HEIGHT};",
              f"static constexpr int tgcx_bill_cards = {CARDS}, tgcx_bill_card_y = {CARD_Y}, tgcx_bill_card_step = {CARD_STEP};",
              f"static constexpr int tgcx_bill_cb = {CB}, tgcx_bill_cc = {CC}, tgcx_bill_ce = {CE}, tgcx_bill_crown_y = {CROWN_Y};",
              "static constexpr int tgcx_bill_chart[] = {" + ",".join(map(str, CHART)) + "};",
              "static constexpr int tgcx_bill_chart_patch[] = {" + ",".join(map(str, CHART_PATCH)) + "};",
              "static constexpr int tgcx_bill_mode_x[] = {" + ",".join(map(str, MODE_X)) + f"}}, tgcx_bill_mode_y = {MODE_Y};",
              "static constexpr int tgcx_bill_lot_x[] = {" + ",".join(map(str, LOT_X)) + f"}}, tgcx_bill_lot_y = {LOT_Y};",
              "static constexpr int tgcx_bill_legend_x[] = {" + ",".join(map(str, LEGEND_X)) + f"}}, tgcx_bill_legend_y = {LEGEND_Y};",
              f"static constexpr int tgcx_bill_atlas_size[] = {{{ATLAS_SIZE[0]},{ATLAS_SIZE[1]}}};",
              f"static constexpr int tgcx_bill_icon_y = {ICON_Y}, tgcx_bill_icon_cell = {ICON_CELL}, tgcx_bill_icon_columns = {ICON_COLUMNS};"]
    lines += [f"static constexpr int tgcx_bill_cell_{name}[] = {{{','.join(map(str, cell))}}};" for name, cell in CELLS.items()]
    lines += [f'static constexpr const char tgcx_bill_bg_file[] = "{BG}";',
              f'static constexpr const char tgcx_bill_atlas_file[] = "{ATLAS}";',
              "struct tgcx_BillButtonInfo { const char* name; short x, y, w, h; };",
              "static constexpr tgcx_BillButtonInfo tgcx_bill_buttons[] = {"]
    names = []
    for name, _, x, y, w, h in buttons():
        lines.append(f"    {{{q(name)},{x},{y},{w},{h}}},")
        names.append(name)
    lines += ["};", "enum tgcx_BillButtonId {"]
    lines += [f"    TGCX_B_{n.removeprefix('tgcx_bill_').upper()}," for n in names] + ["    TGCX_B_COUNT_OF", "};"]
    lines += ["static constexpr const char* tgcx_bill_text_names[] = {"]
    tnames = [name for name, *_ in texts()]
    lines += [f"    {q(n)}," for n in tnames] + ["};", "enum tgcx_BillTextId {"]
    lines += [f"    TGCX_T_{n.removeprefix('tgcx_bill_t_').upper()}," for n in tnames] + ["    TGCX_T_COUNT_OF", "};", ""]
    return "\n".join(lines)


def generate(output, tgc=DEFAULT_TGC):
    output = Path(output)
    if not (output / "TGCX.mod").is_file():
        raise ValueError("Bill GUI needs a complete staged TGCX source")
    fragment, loc = layout()
    (output / "TGCX" / LAYOUT).write_bytes(fragment.encode("cp1252"))
    gfx = output / "TGCX/gfx/interface"
    gfx.mkdir(parents=True, exist_ok=True)
    background(gfx / BG, tgc)
    _, _, _, _, chosen, _ = catalog_data(tgc)
    atlas(gfx / ATLAS, tgc, chosen)
    target = output / "TGCX/interface/tgcx_bill.gfx"
    target.parent.mkdir(parents=True, exist_ok=True)
    target.write_text(f'spriteTypes={{ spriteType={{ name="tgcx_bill_bg" texturefile="gfx/interface/{BG}" '
                      'noOfFrames=1 loadType="INGAME" } }\n', encoding="cp1252")
    rows = ["CODE;ENGLISH;FRENCH;GERMAN;POLISH;SPANISH;ITALIAN;SWEDISH;CZECH;HUNGARIAN;DUTCH;PORTUGUESE;RUSSIAN;FINNISH;x"]
    rows += [key+";"+value+";"*13+"x" for key, value in loc.items()]
    (output / "TGCX/localisation/tgcx_bill.csv").write_bytes(("\n".join(rows)+"\n").encode("cp1252"))


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--stage", type=Path)
    ap.add_argument("--header", action="store_true")
    ap.add_argument("--tgc", type=Path, default=Path(DEFAULT_TGC))
    args = ap.parse_args()
    if args.header:
        (Path(ROOT) / "dll/tgcx/tgcx_bill_catalog.h").write_text(catalogue_header(args.tgc), encoding="utf-8")
    if args.stage:
        stage = args.stage.resolve()
        repo = Path(ROOT).resolve()
        game_path = any((p / "v2game.exe").is_file() for p in (stage, *stage.parents))
        if stage == repo or stage.is_relative_to(repo) or game_path or "TGC_v2.5.2" in stage.parts:
            ap.error("use private staging outside the repository, game and TGC")
        generate(stage, args.tgc)
    if not args.header and not args.stage:
        ap.error("use --header or --stage")


if __name__ == "__main__":
    main()
