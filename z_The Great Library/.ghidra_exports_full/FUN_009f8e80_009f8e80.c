// FUN_009f8e80 @ 009f8e80 body=[[009f8e80, 009f8f39]]


void FUN_009f8e80(void)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  uVar1 = DAT_00f092fc;
  *unaff_ESI = &PTR_FUN_00e3d250;
  unaff_ESI[1] = 0;
  unaff_ESI[7] = 0xf;
  unaff_ESI[6] = 0;
  *(undefined1 *)(unaff_ESI + 2) = 0;
  unaff_ESI[9] = 0;
  *(undefined2 *)(unaff_ESI + 10) = 0;
  unaff_ESI[0xd] = 0x18d;
  unaff_ESI[0xc] = CColor::vftable;
  unaff_ESI[0xe] = uVar1;
  unaff_ESI[0xf] = uVar1;
  unaff_ESI[0x10] = uVar1;
  unaff_ESI[0x11] = uVar1;
  *(undefined1 *)(unaff_ESI + 0x12) = 1;
  *(undefined2 *)((int)unaff_ESI + 0x4e) = 0xffff;
  *(undefined2 *)(unaff_ESI + 0x13) = 0x101;
  *(undefined1 *)(unaff_ESI + 0x14) = 0;
  FUN_005da1e0();
  FUN_005da1e0();
  DAT_01258ac4 = DAT_01258ac4 + 1;
  unaff_ESI[0x35] = 0;
  unaff_ESI[0x36] = 0;
  unaff_ESI[0x37] = 0;
  unaff_ESI[0x38] = 0;
  unaff_ESI[0x39] = 0;
  unaff_ESI[0x3a] = 0;
  unaff_ESI[0x3b] = 0xffffffff;
  *(undefined2 *)(unaff_ESI + 0x3c) = 0x100;
  return;
}

