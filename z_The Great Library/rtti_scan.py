import struct
from pathlib import Path

p = Path("I:/Vic2_Dev/V2BDSM/v2game.exe")
b = p.read_bytes()
pe = struct.unpack_from("<I", b, 0x3c)[0]
machine, nsec, _, _, _, optsize, _ = struct.unpack_from("<HHIIIHH", b, pe + 4)
opt = pe + 24
imagebase = struct.unpack_from("<I", b, opt + 28)[0]
sects = []
sh = opt + optsize
for i in range(nsec):
    o = sh + i * 40
    name = b[o:o+8].rstrip(b"\0").decode(errors="replace")
    vs, va, rs, pr = struct.unpack_from("<IIII", b, o + 8)
    sects.append((name, va, vs, pr, rs))

def rva2off(rva):
    for name, va, vs, pr, rs in sects:
        if va <= rva < va + max(vs, rs):
            return pr + rva - va
    return None

def off2rva(off):
    for name, va, vs, pr, rs in sects:
        if pr <= off < pr + rs:
            return va + off - pr
    return None

needle = b".?AVCSetCountryControllerCommand@@\0"
nameoff = b.find(needle)
print("imagebase", hex(imagebase), "sections", [(s[0], hex(s[1]), hex(s[2])) for s in sects])
print("nameoff", hex(nameoff), "name rva", hex(off2rva(nameoff)))
tdva = imagebase + off2rva(nameoff - 8)
print("tdva", hex(tdva))
refs = []
tdbytes = struct.pack("<I", tdva)
pos = 0
while True:
    q = b.find(tdbytes, pos)
    if q < 0: break
    if q % 4 == 0:
        refs.append(q)
    pos = q + 1
print("td refs", [hex(x) for x in refs], "rvas", [hex(off2rva(x) or 0) for x in refs])
for q in refs:
    vals0 = struct.unpack_from("<12I", b, q - 16)
    print(" around", hex(q), [hex(x) for x in vals0])
    colrva = off2rva(q)
    # pointer to COL is normally before vtable; scan refs to col va near this col.
    colva = imagebase + colrva
    cb = struct.pack("<I", colva)
    pos2 = 0
    vrefs = []
    while True:
        r = b.find(cb, pos2)
        if r < 0: break
        if r % 4 == 0:
            vrefs.append(r)
        pos2 = r + 1
    print("COL rva", hex(colrva), "va", hex(colva), "refs", [(hex(x), hex(off2rva(x) or 0)) for x in vrefs])
    for vr in vrefs:
        vtoff = vr + 4
        vtrva = off2rva(vtoff)
        vals = struct.unpack_from("<32I", b, vtoff)
        print(" possible vtable rva", hex(vtrva), "functions", [hex(x) for x in vals])
