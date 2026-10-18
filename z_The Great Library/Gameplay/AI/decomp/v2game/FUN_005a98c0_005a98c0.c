// FUN_005a98c0 @ 005a98c0 body=[[005a98c0, 005a98fa]]


void FUN_005a98c0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = CSelectable::vftable;
  *(undefined1 *)(in_EAX + 3) = 0;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[7] = 0xffffffff;
  in_EAX[8] = 0;
  in_EAX[6] = 0;
  in_EAX[9] = 0;
  *(undefined2 *)(in_EAX + 10) = 0;
  *in_EAX = CLandCombat::vftable;
  in_EAX[2] = CLandCombat::vftable;
  return;
}

