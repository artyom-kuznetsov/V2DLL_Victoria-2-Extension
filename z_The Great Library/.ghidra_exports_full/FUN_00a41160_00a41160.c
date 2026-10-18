// FUN_00a41160 @ 00a41160 body=[[00a41160, 00a411c1]]


void FUN_00a41160(void)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  undefined4 unaff_EDI;
  
  FUN_007d9800(unaff_ESI,unaff_EDI);
  unaff_ESI[0x4f] = unaff_EDI;
  *unaff_ESI = &PTR_FUN_00e40ce0;
  unaff_ESI[0x50] = 0;
  unaff_ESI[0x51] = 0;
  unaff_ESI[0x52] = 0;
  unaff_ESI[0x53] = 0;
  unaff_ESI[0x54] = 0;
  if (*(int *)(unaff_ESI[0x4f] + 0x90) != 0) {
    uVar1 = FUN_00a6fa00(*(undefined4 *)(DAT_00f20c38 + 0x110),*(int *)(unaff_ESI[0x4f] + 0x90));
    unaff_ESI[0x50] = uVar1;
  }
  return;
}

