// FUN_0057e5b0 @ 0057e5b0 body=[[0057e5b0, 0057e5fe]]


void FUN_0057e5b0(void)

{
  int in_EAX;
  undefined4 *unaff_ESI;
  
  FUN_0040a720(unaff_ESI);
  *unaff_ESI = CCreateUnitCommand::vftable;
  unaff_ESI[0xf] = *(undefined4 *)(in_EAX + 0x3c);
  unaff_ESI[0x10] = *(undefined4 *)(in_EAX + 0x40);
  unaff_ESI[0x11] = *(undefined4 *)(in_EAX + 0x44);
  unaff_ESI[0x12] = *(undefined4 *)(in_EAX + 0x48);
  unaff_ESI[0x13] = *(undefined4 *)(in_EAX + 0x4c);
  unaff_ESI[0x14] = *(undefined4 *)(in_EAX + 0x50);
  unaff_ESI[0x15] = *(undefined4 *)(in_EAX + 0x54);
  unaff_ESI[0x16] = *(undefined4 *)(in_EAX + 0x58);
  *(undefined1 *)(unaff_ESI + 0x17) = *(undefined1 *)(in_EAX + 0x5c);
  *(undefined1 *)((int)unaff_ESI + 0x5d) = *(undefined1 *)(in_EAX + 0x5d);
  return;
}

