// FUN_00401320 @ 00401320 body=[[00401320, 0040133f]]


void FUN_00401320(void)

{
  undefined4 in_EAX;
  undefined1 *unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  FUN_00408ed0(in_EAX,0,0xffffffff);
  return;
}

