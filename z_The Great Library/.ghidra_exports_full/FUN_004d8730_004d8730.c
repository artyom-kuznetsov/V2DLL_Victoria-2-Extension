// FUN_004d8730 @ 004d8730 body=[[004d8730, 004d875c]]


void FUN_004d8730(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  undefined4 in_EDX;
  undefined1 *unaff_ESI;
  
  uVar1 = *in_ECX;
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  FUN_00408ed0(in_EDX,0,0xffffffff);
  *(undefined4 *)(unaff_ESI + 0x1c) = uVar1;
  return;
}

