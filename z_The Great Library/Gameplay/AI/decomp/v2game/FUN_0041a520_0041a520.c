// FUN_0041a520 @ 0041a520 body=[[0041a520, 0041a547]]


void FUN_0041a520(void)

{
  undefined1 *in_EAX;
  undefined1 *unaff_ESI;
  
  *unaff_ESI = *in_EAX;
  *(undefined4 *)(unaff_ESI + 0x18) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  unaff_ESI[4] = 0;
  FUN_00408ed0(in_EAX + 4,0,0xffffffff);
  return;
}

