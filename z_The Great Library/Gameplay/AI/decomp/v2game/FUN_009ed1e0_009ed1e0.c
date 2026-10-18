// FUN_009ed1e0 @ 009ed1e0 body=[[009ed1e0, 009ed2ea]]


void FUN_009ed1e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_EAX;
  undefined4 *unaff_ESI;
  float10 fVar1;
  
  FUN_007d9800(unaff_ESI,in_EAX);
  unaff_ESI[0x50] = param_1;
  unaff_ESI[0x51] = param_2;
  unaff_ESI[0x54] = 0;
  unaff_ESI[0x56] = 0;
  *unaff_ESI = &PTR_FUN_00e3cb38;
  unaff_ESI[0x4f] = in_EAX;
  unaff_ESI[0x52] = param_3;
  *(undefined1 *)((int)unaff_ESI + 0x14e) = 0;
  unaff_ESI[0x55] = 0;
  *(undefined2 *)(unaff_ESI + 0x53) = 0;
  unaff_ESI[0x2c8] = 0;
  unaff_ESI[0x2c9] = 1;
  unaff_ESI[0x2ca] = 0;
  unaff_ESI[0x2cb] = DAT_00f092fc;
  unaff_ESI[0x2d1] = 0xf;
  unaff_ESI[0x2d0] = 0;
  *(undefined1 *)(unaff_ESI + 0x2cc) = 0;
  *(undefined2 *)((int)unaff_ESI + 0x4e) = 0;
  FUN_009b7670();
  unaff_ESI[0x2c8] = 0;
  FUN_009b7610();
  fVar1 = (float10)FUN_00b31cba();
  unaff_ESI[0x57] = (float)fVar1 * 100.0;
  return;
}

