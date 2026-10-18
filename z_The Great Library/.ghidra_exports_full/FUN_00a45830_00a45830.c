// FUN_00a45830 @ 00a45830 body=[[00a45830, 00a45898]]


void FUN_00a45830(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  undefined4 unaff_EDI;
  
  FUN_007d9800(unaff_ESI,unaff_EDI);
  uVar1 = DAT_00f092fc;
  unaff_ESI[0x4f] = param_1;
  *unaff_ESI = &PTR_FUN_00e41120;
  unaff_ESI[0x50] = unaff_EDI;
  unaff_ESI[0x51] = uVar1;
  unaff_ESI[0x52] = 0;
  unaff_ESI[0x53] = 0;
  unaff_ESI[0x54] = 0;
  *(undefined1 *)(unaff_ESI + 0x56) = 0;
  unaff_ESI[0x5b] = uVar1;
  unaff_ESI[0x5c] = 0;
  unaff_ESI[0x5d] = 0;
  unaff_ESI[0x5e] = 0;
  return;
}

