// FUN_00648c30 @ 00648c30 body=[[00648c30, 00648c71]]


void FUN_00648c30(void)

{
  int in_EAX;
  undefined4 *unaff_ESI;
  
  unaff_ESI[1] = *(undefined4 *)(in_EAX + 4);
  *unaff_ESI = CVersion::vftable;
  unaff_ESI[2] = *(undefined4 *)(in_EAX + 8);
  unaff_ESI[3] = *(undefined4 *)(in_EAX + 0xc);
  unaff_ESI[4] = *(undefined4 *)(in_EAX + 0x10);
  unaff_ESI[10] = 0xf;
  unaff_ESI[9] = 0;
  *(undefined1 *)(unaff_ESI + 5) = 0;
  FUN_00408ed0(in_EAX + 0x14,0,0xffffffff);
  return;
}

