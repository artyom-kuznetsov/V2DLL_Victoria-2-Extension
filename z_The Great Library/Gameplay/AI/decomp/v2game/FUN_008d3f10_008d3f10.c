// FUN_008d3f10 @ 008d3f10 body=[[008d3f10, 008d3f45]]


void FUN_008d3f10(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CTagTrigger::vftable;
  in_EAX[7] = 0x2d2d2d;
  in_EAX[8] = 0;
  return;
}

