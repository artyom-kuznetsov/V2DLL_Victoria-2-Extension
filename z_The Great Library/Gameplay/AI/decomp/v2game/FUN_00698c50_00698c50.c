// FUN_00698c50 @ 00698c50 body=[[00698c50, 00698ca4]]


void FUN_00698c50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_EAX;
  undefined4 in_ECX;
  undefined1 *unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 8) = in_EAX;
  *(undefined4 *)(unaff_ESI + 0xc) = in_ECX;
  *unaff_ESI = 1;
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 0x10) = param_1;
  *(undefined4 *)(unaff_ESI + 0x28) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  unaff_ESI[0x14] = 0;
  FUN_00408ed0(param_3,0,0xffffffff);
  *(undefined4 *)(unaff_ESI + 0x30) = 0;
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  *(undefined4 *)(unaff_ESI + 0x38) = 0;
  *(undefined4 *)(unaff_ESI + 0x44) = 0;
  *(undefined4 *)(unaff_ESI + 0x40) = param_2;
  *(undefined4 *)(unaff_ESI + 0x48) = 0;
  *(undefined4 *)(unaff_ESI + 0x4c) = 0;
  *(undefined4 *)(unaff_ESI + 0x50) = 0;
  return;
}

