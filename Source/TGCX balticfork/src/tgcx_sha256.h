// Original TGCX implementation of SHA-256 (FIPS 180-4). Integer arithmetic only.
#pragma once
#include <stdint.h>
#include <string.h>

struct tgcx_SHA256 {
    uint32_t state[8] = {0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a,
                         0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19};
    uint64_t length = 0;
    unsigned char pending[64] = {};
    unsigned int used = 0;

    static uint32_t rotate(uint32_t value, unsigned int shift) {
        return (value >> shift) | (value << (32 - shift));
    }

    void block(const unsigned char* bytes) {
        static constexpr uint32_t constants[64] = {
            0x428a2f98,0x71374491,0xb5c0fbcf,0xe9b5dba5,0x3956c25b,0x59f111f1,0x923f82a4,0xab1c5ed5,
            0xd807aa98,0x12835b01,0x243185be,0x550c7dc3,0x72be5d74,0x80deb1fe,0x9bdc06a7,0xc19bf174,
            0xe49b69c1,0xefbe4786,0x0fc19dc6,0x240ca1cc,0x2de92c6f,0x4a7484aa,0x5cb0a9dc,0x76f988da,
            0x983e5152,0xa831c66d,0xb00327c8,0xbf597fc7,0xc6e00bf3,0xd5a79147,0x06ca6351,0x14292967,
            0x27b70a85,0x2e1b2138,0x4d2c6dfc,0x53380d13,0x650a7354,0x766a0abb,0x81c2c92e,0x92722c85,
            0xa2bfe8a1,0xa81a664b,0xc24b8b70,0xc76c51a3,0xd192e819,0xd6990624,0xf40e3585,0x106aa070,
            0x19a4c116,0x1e376c08,0x2748774c,0x34b0bcb5,0x391c0cb3,0x4ed8aa4a,0x5b9cca4f,0x682e6ff3,
            0x748f82ee,0x78a5636f,0x84c87814,0x8cc70208,0x90befffa,0xa4506ceb,0xbef9a3f7,0xc67178f2
        };
        uint32_t words[64];
        for (unsigned int i = 0; i < 16; ++i)
            words[i] = (uint32_t(bytes[i*4]) << 24) | (uint32_t(bytes[i*4+1]) << 16)
                     | (uint32_t(bytes[i*4+2]) << 8) | bytes[i*4+3];
        for (unsigned int i = 16; i < 64; ++i) {
            uint32_t s0 = rotate(words[i-15],7) ^ rotate(words[i-15],18) ^ (words[i-15] >> 3);
            uint32_t s1 = rotate(words[i-2],17) ^ rotate(words[i-2],19) ^ (words[i-2] >> 10);
            words[i] = words[i-16] + s0 + words[i-7] + s1;
        }
        uint32_t a=state[0], b=state[1], c=state[2], d=state[3];
        uint32_t e=state[4], f=state[5], g=state[6], h=state[7];
        for (unsigned int i = 0; i < 64; ++i) {
            uint32_t s1 = rotate(e,6) ^ rotate(e,11) ^ rotate(e,25);
            uint32_t t1 = h + s1 + ((e & f) ^ (~e & g)) + constants[i] + words[i];
            uint32_t s0 = rotate(a,2) ^ rotate(a,13) ^ rotate(a,22);
            uint32_t t2 = s0 + ((a & b) ^ (a & c) ^ (b & c));
            h=g; g=f; f=e; e=d+t1; d=c; c=b; b=a; a=t1+t2;
        }
        state[0]+=a; state[1]+=b; state[2]+=c; state[3]+=d;
        state[4]+=e; state[5]+=f; state[6]+=g; state[7]+=h;
    }

    void update(const unsigned char* bytes, unsigned int size) {
        length += size;
        while (size) {
            unsigned int count = size < 64-used ? size : 64-used;
            memcpy(pending+used, bytes, count);
            used += count; bytes += count; size -= count;
            if (used == 64) { block(pending); used = 0; }
        }
    }

    void finish(char hex[65]) {
        uint64_t bits = length * 8;
        pending[used++] = 0x80;
        if (used > 56) { memset(pending+used, 0, 64-used); block(pending); used=0; }
        memset(pending+used, 0, 56-used);
        for (unsigned int i=0; i<8; ++i) pending[63-i] = static_cast<unsigned char>(bits >> (i*8));
        block(pending);
        const char* digits = "0123456789abcdef";
        for (unsigned int i=0; i<32; ++i) {
            unsigned char b = static_cast<unsigned char>(state[i/4] >> ((3-i%4)*8));
            hex[i*2]=digits[b >> 4]; hex[i*2+1]=digits[b & 15];
        }
        hex[64]=0;
    }
};
