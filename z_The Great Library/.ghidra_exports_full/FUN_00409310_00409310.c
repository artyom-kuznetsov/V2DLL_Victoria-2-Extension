// FUN_00409310 @ 00409310 body=[[00409310, 00409345]]


void FUN_00409310(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  undefined1 *unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  FUN_00408ed0(in_EAX,0,0xffffffff);
  *(undefined4 *)(unaff_ESI + 0x1c) = param_1;
  *(undefined4 *)(unaff_ESI + 0x20) = param_2;
  unaff_ESI[0x24] = 0;
  return;
}

