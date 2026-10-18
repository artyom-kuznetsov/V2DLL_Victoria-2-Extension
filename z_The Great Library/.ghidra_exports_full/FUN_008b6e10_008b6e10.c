// FUN_008b6e10 @ 008b6e10 body=[[008b6e10, 008b6e45]]


void FUN_008b6e10(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  in_EAX[7] = 0x2d2d2d;
  in_EAX[8] = 0;
  *in_EAX = CGuaranteeTrigger::vftable;
  return;
}

