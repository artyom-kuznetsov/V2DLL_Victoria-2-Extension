// FUN_00788d30 @ 00788d30 body=[[00788d30, 00788d6a]]


void FUN_00788d30(void)

{
  int in_EAX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = *(undefined4 *)(in_EAX + 0x28);
  unaff_ESI[1] = *(undefined4 *)(in_EAX + 0x2c);
  unaff_ESI[2] = *(undefined4 *)(in_EAX + 0x30);
  unaff_ESI[8] = 0xf;
  unaff_ESI[7] = 0;
  *(undefined1 *)(unaff_ESI + 3) = 0;
  FUN_00408ed0(in_EAX + 0x34,0,0xffffffff);
  return;
}

