// FUN_004370a0 @ 004370a0 body=[[004370a0, 00437100]]


void FUN_004370a0(undefined4 param_1)

{
  undefined4 *unaff_ESI;
  undefined8 uVar1;
  
  unaff_ESI[1] = 0x18d;
  *unaff_ESI = CDistributionSetting::vftable;
  uVar1 = FUN_00b31c36();
  *(undefined8 *)(unaff_ESI + 2) = uVar1;
  *(undefined8 *)(unaff_ESI + 4) = uVar1;
  unaff_ESI[8] = param_1;
  unaff_ESI[10] = 0;
  unaff_ESI[0xb] = 0;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xf] = 0;
  unaff_ESI[0xe] = 0x8000;
  unaff_ESI[0x10] = 0;
  unaff_ESI[0x11] = 0;
  unaff_ESI[0x12] = 0;
  unaff_ESI[0x13] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[6] = 0x147;
  return;
}

