// FUN_004e0ae0 @ 004e0ae0 body=[[004e0ae0, 004e0c17]]


void FUN_004e0ae0(void)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_00e3a544;
  unaff_ESI[1] = 0x18d;
  unaff_ESI[2] = DAT_01268fec;
  unaff_ESI[3] = DAT_01268ff0;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  unaff_ESI[10] = 0xf;
  unaff_ESI[9] = 0;
  *(undefined1 *)(unaff_ESI + 5) = 0;
  unaff_ESI[0xe] = 0x2d2d2d;
  unaff_ESI[0x12] = 0;
  uVar1 = DAT_012587e4;
  unaff_ESI[0xf] = 0;
  *unaff_ESI = CRebelFaction::vftable;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0x10] = 0;
  unaff_ESI[0x11] = 0x2d2d2d;
  unaff_ESI[0x13] = 0;
  unaff_ESI[0x14] = 0;
  FUN_0055c6c0(uVar1,unaff_ESI + 0x15,&DAT_00dfdc14);
  unaff_ESI[0x1b] = 0;
  unaff_ESI[0x1c] = 0xf;
  *(undefined1 *)(unaff_ESI + 0x17) = 0;
  unaff_ESI[0x1e] = 0;
  unaff_ESI[0x1f] = 0;
  unaff_ESI[0x20] = 0;
  unaff_ESI[0x21] = 0;
  unaff_ESI[0x22] = 0;
  *(undefined1 *)(unaff_ESI + 0x23) = 0;
  *(undefined2 *)(unaff_ESI + 0x24) = 0;
  unaff_ESI[0x25] = 0;
  unaff_ESI[0x26] = 0;
  unaff_ESI[0x27] = 0;
  *(undefined1 *)(unaff_ESI + 0x28) = 0;
  unaff_ESI[0x29] = 0;
  unaff_ESI[0x2a] = 0;
  unaff_ESI[0x2b] = 0;
  *(undefined1 *)(unaff_ESI + 0x2c) = 0;
  unaff_ESI[0x2e] = 0;
  unaff_ESI[0x2f] = 0;
  unaff_ESI[0x30] = 0;
  unaff_ESI[0x31] = 0;
  unaff_ESI[0x32] = 0;
  unaff_ESI[0x34] = 0x18d;
  unaff_ESI[0x33] = CUniqueUnitName::vftable;
  unaff_ESI[0x35] = 0;
  unaff_ESI[0x36] = 0;
  unaff_ESI[0x37] = 0;
  unaff_ESI[0x39] = 1;
  return;
}

