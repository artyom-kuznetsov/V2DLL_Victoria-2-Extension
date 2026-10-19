"""Re-export the interface mockups (R10) as PNGs, with headless Chrome.

The boards (`<Board>.dc.html`) and their assets come from the private
artifact https://claude.ai/artifact/Wt2YTaaM6xV8JXsUwapRV4 and contain game
and TGC art, so they live outside git (R8), in E:\\v2re\\mockups:

    project\\<Board>.dc.html   the boards, as published
    blobs\\<id>.<ext>          the artifact's assets, named by their id

`view.html` (next to this file) is a minimal stand-in for the artifact
runtime: it fills the boards' `sc-for` / `sc-if` / `{{...}}` templates and
can click buttons by their aria-label before the screenshot (`?do=`).

usage: python tools/mockups/export.py [--src E:\\v2re\\mockups] [--out mockups]
"""
import argparse
import functools
import glob
import http.server
import os
import socketserver
import subprocess
import tempfile
import threading

from PIL import Image, ImageDraw, ImageFont

HERE = os.path.dirname(os.path.abspath(__file__))
CHROME = r"C:\Program Files\Google\Chrome\Application\chrome.exe"
PORT = 8767

# (output file, board with optional clicks, width, caption in the overview or None)
SHOTS = [
    ("1-politics.png", "Main.dc.html", 1168, "Politics, with the hemicycle"),
    ("2-negotiation.png", "Bill.dc.html?do=Abstain 5 (2)*2|Buy in lots of 25 seats|Aye 25 (25)|Abstain 25 (10)|Promise a law|Show both", 900,
     "Bill: favours and affinity"),
    ("2b-favours-breakdown.png", "Bill.dc.html?do=Favours per month: breakdown", 900, None),
    ("2c-law-pressure.png", "Bill.dc.html?pressure=9", 900, None),
    ("3-ruler.png", "Ruler.dc.html", 760, "Head of State"),
    ("4-economy.png", "Economy.dc.html", 1168, "Economy: GDP meter and history"),
    ("5-templates.png", "Templates.dc.html", 900, "Army templates"),
    ("6-conform.png", "Conform.dc.html?do=Conform to template", 900, "Conform a stack to a template"),
]
OVERVIEW = [["1-politics.png", "4-economy.png"], ["2-negotiation.png", "3-ruler.png", "5-templates.png", "6-conform.png"]]
HEIGHT = 772
TYPES = {".css": "text/css", ".js": "application/javascript", ".png": "image/png",
         ".html": "text/html; charset=utf-8", ".json": "application/json"}


class Handler(http.server.BaseHTTPRequestHandler):
    def __init__(self, *a, src, **k):
        self.src = src
        super().__init__(*a, **k)

    def send(self, path):
        if not path or not os.path.isfile(path):
            self.send_error(404)
            return
        data = open(path, "rb").read()
        self.send_response(200)
        self.send_header("Content-Type", TYPES.get(os.path.splitext(path)[1], "application/octet-stream"))
        self.send_header("Cache-Control", "no-store")
        self.end_headers()
        self.wfile.write(data)

    def do_GET(self):
        p = self.path.split("?")[0]
        if p.startswith("/_blob/"):
            hits = glob.glob(os.path.join(self.src, "blobs", os.path.basename(p) + ".*"))
            return self.send(hits[0] if hits else None)
        if p.endswith(".dc.html"):
            return self.send(os.path.join(self.src, "project", os.path.basename(p)))
        if p in ("/", "/view.html"):
            return self.send(os.path.join(HERE, "view.html"))
        self.send_error(404)

    def log_message(self, *a):
        pass


def shoot(board, width, out):
    profile = tempfile.mkdtemp(prefix="tgcx_chrome")
    subprocess.run([CHROME, "--headless=new", "--disable-gpu", "--hide-scrollbars", "--user-data-dir=" + profile,
                    "--window-size=%d,%d" % (width, HEIGHT), "--force-device-scale-factor=1",
                    "--virtual-time-budget=4000", "--screenshot=" + out,
                    "http://127.0.0.1:%d/view.html?b=%s" % (PORT, board.replace("?", "&", 1))],
                   capture_output=True, timeout=120, check=True)
    print(out, Image.open(out).size)


def overview(out_dir, captions):
    M, G, CAP = 40, 32, 44
    rows = [[(Image.open(os.path.join(out_dir, f)).convert("RGB"), captions[f]) for f in r] for r in OVERVIEW]
    widths = [sum(i.width for i, _ in r) + G * (len(r) - 1) for r in rows]
    W = max(widths) + 2 * M
    H = M + 70 + len(rows) * (CAP + HEIGHT) + G * (len(rows) - 1) + M
    img = Image.new("RGB", (W, H), (21, 23, 18))
    d = ImageDraw.Draw(img)
    title = ImageFont.truetype("C:/Windows/Fonts/georgiab.ttf", 40)
    cap = ImageFont.truetype("C:/Windows/Fonts/georgia.ttf", 24)
    d.text((M, M), "TGCX: mockups (TGC v2.5.2 art and fonts; example data)", font=title, fill=(214, 200, 140))
    y = M + 70
    for r, w in zip(rows, widths):
        x = (W - w) // 2
        for im, t in r:
            d.text((x + 4, y + 8), t, font=cap, fill=(200, 194, 170))
            img.paste(im, (x, y + CAP))
            x += im.width + G
        y += CAP + HEIGHT + G
    path = os.path.join(out_dir, "mockups-tgcx.png")
    img.save(path, optimize=True)
    print(path, img.size)


def main():
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    ap.add_argument("--src", default=r"E:\v2re\mockups")
    ap.add_argument("--out", default=os.path.join(os.path.dirname(os.path.dirname(HERE)), "mockups"))
    args = ap.parse_args()
    missing = sorted({b.split("?")[0] for _, b, _, _ in SHOTS
                      if not os.path.isfile(os.path.join(args.src, "project", b.split("?")[0]))})
    if missing:
        raise SystemExit("missing boards in %s: %s" % (os.path.join(args.src, "project"), ", ".join(missing)))
    os.makedirs(args.out, exist_ok=True)
    socketserver.ThreadingTCPServer.allow_reuse_address = True
    server = socketserver.ThreadingTCPServer(("127.0.0.1", PORT), functools.partial(Handler, src=args.src))
    threading.Thread(target=server.serve_forever, daemon=True).start()
    try:
        for name, board, width, _ in SHOTS:
            shoot(board, width, os.path.join(args.out, name))
    finally:
        server.shutdown()
    overview(args.out, {name: caption for name, _, _, caption in SHOTS})


if __name__ == "__main__":
    main()
