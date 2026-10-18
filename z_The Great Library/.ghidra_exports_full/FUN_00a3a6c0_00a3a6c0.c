// FUN_00a3a6c0 @ 00a3a6c0 body=[[00a3a6c0, 00a3a701]]


void FUN_00a3a6c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  FUN_00408ed0(unaff_EDI,0,0xffffffff);
  *(undefined4 *)(unaff_ESI + 0x20) = *(undefined4 *)(unaff_EDI + 0x20);
  uVar1 = *(undefined4 *)(unaff_EDI + 0x24);
  *(undefined4 *)(unaff_ESI + 0x2c) = param_2;
  *(undefined4 *)(unaff_ESI + 0x24) = uVar1;
  *(undefined4 *)(unaff_ESI + 0x28) = param_1;
  unaff_ESI[0x30] = 0;
  return;
}

