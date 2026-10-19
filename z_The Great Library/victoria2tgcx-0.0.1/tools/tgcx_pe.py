"""Small, read-only PE32 reader used by DLL build and installation gates."""

import struct
from pathlib import Path


class PE:
    def __init__(self, path):
        self.data = Path(path).read_bytes()
        if self.data[:2] != b"MZ":
            raise ValueError("not a PE file")
        pe = self.u32(0x3C)
        if self.data[pe:pe + 4] != b"PE\0\0":
            raise ValueError("invalid PE signature")
        self.machine = self.u16(pe + 4)
        count = self.u16(pe + 6)
        opt = pe + 24
        if self.u16(opt) != 0x10B:
            raise ValueError("expected PE32")
        self.base = self.u32(opt + 28)
        self.image_size = self.u32(opt + 56)
        self.directories = [(self.u32(opt + 96 + i * 8), self.u32(opt + 100 + i * 8))
                            for i in range(16)]
        start = opt + self.u16(pe + 20)
        self.sections = []
        for i in range(count):
            s = start + i * 40
            self.sections.append((self.u32(s + 12), self.u32(s + 16), self.u32(s + 20)))

    def u16(self, off):
        return struct.unpack_from("<H", self.data, off)[0]

    def u32(self, off):
        return struct.unpack_from("<I", self.data, off)[0]

    def offset(self, rva):
        for start, size, raw in self.sections:
            if start <= rva < start + size:
                return raw + rva - start
        raise ValueError(f"RVA {rva:#x} has no file bytes")

    def string(self, rva):
        off = self.offset(rva)
        return self.data[off:self.data.index(b"\0", off)].decode("ascii")

    def exports(self):
        rva, size = self.directories[0]
        if not rva:
            return {}
        off = self.offset(rva)
        base, funcs, names, ft, nt, ot = struct.unpack_from("<6I", self.data, off + 16)
        result = {}
        for i in range(names):
            name = self.string(self.u32(self.offset(nt) + i * 4))
            index = self.u16(self.offset(ot) + i * 2)
            if index >= funcs:
                raise ValueError("invalid export ordinal")
            target = self.u32(self.offset(ft) + index * 4)
            forward = self.string(target) if rva <= target < rva + size else None
            result[name] = (base + index, forward)
        return result

    def relocations(self):
        rva, size = self.directories[5]
        if not rva:
            return []
        off, end = self.offset(rva), self.offset(rva) + size
        result = []
        while off < end:
            page, block = struct.unpack_from("<II", self.data, off)
            if block < 8 or off + block > end:
                raise ValueError("invalid relocation block")
            for p in range(off + 8, off + block, 2):
                value = self.u16(p)
                if value >> 12 == 3:  # IMAGE_REL_BASED_HIGHLOW
                    result.append(page + (value & 0xFFF))
                elif value >> 12:
                    raise ValueError("unsupported relocation type")
            off += block
        return result
