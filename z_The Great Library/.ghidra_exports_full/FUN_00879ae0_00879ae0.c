// FUN_00879ae0 @ 00879ae0 body=[[00879ae0, 00879b18]]


void FUN_00879ae0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined1 *)(in_EAX + 5) = 0;
  in_EAX[1] = 0x18d;
  in_EAX[8] = 0x2d2d2d;
  in_EAX[9] = 0;
  *(undefined2 *)(in_EAX + 7) = 0;
  *in_EAX = CGrantMilitaryAccessEffect::vftable;
  return;
}

