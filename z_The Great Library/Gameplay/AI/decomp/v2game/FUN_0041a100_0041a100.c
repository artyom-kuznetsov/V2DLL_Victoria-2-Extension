// FUN_0041a100 @ 0041a100 body=[[0041a100, 0041a15b]]


void FUN_0041a100(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined1 *unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  FUN_00408ed0(in_EAX,0,0xffffffff);
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  *(undefined4 *)(unaff_ESI + 0x2c) = 0;
  unaff_ESI[0x30] = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = param_1;
  *(undefined4 *)(unaff_ESI + 0x20) = 0x2d2d2d;
  *(undefined2 *)(unaff_ESI + 0x28) = 0x100;
  *(undefined4 *)(unaff_ESI + 0x34) = 43800000;
  *(undefined4 *)(unaff_ESI + 0x34) = DAT_01259abc;
  return;
}

