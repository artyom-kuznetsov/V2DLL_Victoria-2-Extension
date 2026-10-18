// FUN_009f70a0 @ 009f70a0 body=[[009f70a0, 009f70d1]]


void FUN_009f70a0(void)

{
  undefined4 in_EAX;
  undefined1 *unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  FUN_00408ed0(in_EAX,0,0xffffffff);
  unaff_ESI[0x1c] = 0;
  return;
}

