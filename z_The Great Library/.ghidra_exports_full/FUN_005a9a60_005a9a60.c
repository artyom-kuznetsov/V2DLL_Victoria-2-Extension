// FUN_005a9a60 @ 005a9a60 body=[[005a9a60, 005a9a9a]]


void FUN_005a9a60(void)

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
  *in_EAX = CNavalCombat::vftable;
  in_EAX[2] = CNavalCombat::vftable;
  return;
}

