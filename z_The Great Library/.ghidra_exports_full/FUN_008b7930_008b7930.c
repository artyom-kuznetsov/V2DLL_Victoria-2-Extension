// FUN_008b7930 @ 008b7930 body=[[008b7930, 008b7965]]


void FUN_008b7930(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  in_EAX[7] = 0x2d2d2d;
  in_EAX[8] = 0;
  *in_EAX = CIsSphereLeaderOfTrigger::vftable;
  return;
}

