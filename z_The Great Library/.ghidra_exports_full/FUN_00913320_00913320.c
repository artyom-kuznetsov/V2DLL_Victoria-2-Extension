// FUN_00913320 @ 00913320 body=[[00913320, 0091336e]]


void FUN_00913320(void)

{
  int in_EAX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = CDiplomaticAction::vftable;
  unaff_ESI[1] = 0x18d;
  unaff_ESI[2] = *(undefined4 *)(in_EAX + 8);
  unaff_ESI[3] = *(undefined4 *)(in_EAX + 0xc);
  unaff_ESI[4] = *(undefined4 *)(in_EAX + 0x10);
  unaff_ESI[5] = *(undefined4 *)(in_EAX + 0x14);
  unaff_ESI[6] = *(undefined4 *)(in_EAX + 0x18);
  unaff_ESI[7] = *(undefined4 *)(in_EAX + 0x1c);
  *(undefined1 *)(unaff_ESI + 8) = 0;
  unaff_ESI[9] = *(undefined4 *)(in_EAX + 0x24);
  *unaff_ESI = CWarGoalBaseAction::vftable;
  FUN_0094be20();
  return;
}

