// FUN_00a17b40 @ 00a17b40 body=[[00a17b40, 00a17b9e]]


void FUN_00a17b40(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 in_EAX;
  undefined4 *unaff_ESI;
  
  unaff_ESI[1] = 0x18d;
  *unaff_ESI = &PTR_FUN_00e3e544;
  unaff_ESI[7] = 0xf;
  unaff_ESI[6] = 0;
  *(undefined1 *)(unaff_ESI + 2) = 0;
  FUN_00408ed0(in_EAX,0,0xffffffff);
  unaff_ESI[9] = param_2;
  unaff_ESI[0xb] = param_4;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0xf] = 0;
  unaff_ESI[0x10] = 0;
  unaff_ESI[0x11] = 0;
  unaff_ESI[0x12] = 0;
  unaff_ESI[0x13] = 0;
  *(undefined1 *)(unaff_ESI + 10) = param_3;
  unaff_ESI[0xc] = param_1;
  return;
}

