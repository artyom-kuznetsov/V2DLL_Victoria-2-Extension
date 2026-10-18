// FUN_005a9f10 @ 005a9f10 body=[[005a9f10, 005a9f66]]


void FUN_005a9f10(void)

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
  *in_EAX = CSiegeCombat::vftable;
  in_EAX[2] = CSiegeCombat::vftable;
  in_EAX[0xb] = 0x2d2d2d;
  in_EAX[0xc] = 0;
  in_EAX[0xd] = 0;
  return;
}

