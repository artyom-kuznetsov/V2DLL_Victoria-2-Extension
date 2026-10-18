// FUN_004c0560 @ 004c0560 body=[[004c0560, 004c0857]]


int FUN_004c0560(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  
  if (in_EAX != param_1) {
    puVar2 = in_EAX + 3;
    do {
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)(puVar2 + -2);
      *(undefined4 *)(param_2 + 0x10) = puVar2[1];
      *(undefined4 *)(param_2 + 0x14) = puVar2[2];
      *(undefined4 *)(param_2 + 0xc) = *puVar2;
      *(undefined4 *)(param_2 + 0x18) = puVar2[3];
      *(undefined4 *)(param_2 + 0x1c) = puVar2[4];
      *(undefined4 *)(param_2 + 0x20) = puVar2[5];
      *(undefined4 *)(param_2 + 0x24) = puVar2[6];
      FUN_0047dbb0(param_2 + 0x28,puVar2 + 7);
      FUN_0047dbb0(param_2 + 0x80,puVar2 + 0x1d);
      *(undefined4 *)(param_2 + 0xd8) = puVar2[0x33];
      *(undefined4 *)(param_2 + 0xdc) = puVar2[0x34];
      FUN_004c01c0(puVar2 + 0x35);
      *(undefined4 *)(param_2 + 0x150) = puVar2[0x51];
      *(undefined4 *)(param_2 + 0x154) = puVar2[0x52];
      *(undefined4 *)(param_2 + 0x158) = puVar2[0x53];
      *(undefined4 *)(param_2 + 0x15c) = puVar2[0x54];
      *(undefined4 *)(param_2 + 0x160) = puVar2[0x55];
      *(undefined4 *)(param_2 + 0x164) = puVar2[0x56];
      *(undefined4 *)(param_2 + 0x168) = puVar2[0x57];
      *(undefined4 *)(param_2 + 0x16c) = puVar2[0x58];
      *(undefined4 *)(param_2 + 0x170) = puVar2[0x59];
      *(undefined4 *)(param_2 + 0x174) = puVar2[0x5a];
      *(undefined4 *)(param_2 + 0x178) = puVar2[0x5b];
      *(undefined4 *)(param_2 + 0x17c) = puVar2[0x5c];
      *(undefined1 *)(param_2 + 0x180) = *(undefined1 *)(puVar2 + 0x5d);
      *(undefined4 *)(param_2 + 0x184) = puVar2[0x5e];
      *(undefined1 *)(param_2 + 0x188) = *(undefined1 *)(puVar2 + 0x5f);
      *(undefined4 *)(param_2 + 400) = puVar2[0x61];
      *(undefined4 *)(param_2 + 0x194) = puVar2[0x62];
      *(undefined4 *)(param_2 + 0x198) = puVar2[99];
      *(undefined4 *)(param_2 + 0x19c) = puVar2[100];
      *(undefined4 *)(param_2 + 0x1a0) = puVar2[0x65];
      *(undefined4 *)(param_2 + 0x1a4) = puVar2[0x66];
      *(undefined4 *)(param_2 + 0x1a8) = puVar2[0x67];
      *(undefined4 *)(param_2 + 0x1ac) = puVar2[0x68];
      *(undefined4 *)(param_2 + 0x1b0) = puVar2[0x69];
      *(undefined4 *)(param_2 + 0x1b4) = puVar2[0x6a];
      *(undefined4 *)(param_2 + 0x1b8) = puVar2[0x6b];
      *(undefined4 *)(param_2 + 0x1bc) = puVar2[0x6c];
      *(undefined4 *)(param_2 + 0x1c0) = puVar2[0x6d];
      *(undefined4 *)(param_2 + 0x1c4) = puVar2[0x6e];
      *(undefined4 *)(param_2 + 0x1c8) = puVar2[0x6f];
      *(undefined4 *)(param_2 + 0x1cc) = puVar2[0x70];
      *(undefined4 *)(param_2 + 0x1d0) = puVar2[0x71];
      *(undefined4 *)(param_2 + 0x1d8) = puVar2[0x73];
      *(undefined4 *)(param_2 + 0x1dc) = puVar2[0x74];
      *(undefined4 *)(param_2 + 0x1e0) = puVar2[0x75];
      *(undefined4 *)(param_2 + 0x1e4) = puVar2[0x76];
      *(undefined4 *)(param_2 + 0x1e8) = puVar2[0x77];
      *(undefined4 *)(param_2 + 0x1ec) = puVar2[0x78];
      *(undefined4 *)(param_2 + 0x1f0) = puVar2[0x79];
      *(undefined4 *)(param_2 + 500) = puVar2[0x7a];
      *(undefined4 *)(param_2 + 0x1f8) = puVar2[0x7b];
      *(undefined4 *)(param_2 + 0x1fc) = puVar2[0x7c];
      *(undefined4 *)(param_2 + 0x200) = puVar2[0x7d];
      *(undefined4 *)(param_2 + 0x204) = puVar2[0x7e];
      *(undefined4 *)(param_2 + 0x208) = puVar2[0x7f];
      *(undefined4 *)(param_2 + 0x20c) = puVar2[0x80];
      *(undefined4 *)(param_2 + 0x210) = puVar2[0x81];
      *(undefined4 *)(param_2 + 0x214) = puVar2[0x82];
      *(undefined4 *)(param_2 + 0x218) = puVar2[0x83];
      puVar1 = puVar2 + 0x85;
      param_2 = param_2 + 0x220;
      puVar2 = puVar2 + 0x88;
    } while (puVar1 != param_1);
  }
  return param_2;
}

