// FUN_008b6df0 @ 008b6df0 body=[[008b6df0, 008b6e0f]]


void FUN_008b6df0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  in_EAX[7] = 0;
  *in_EAX = CNationalProvinceTigger::vftable;
  return;
}

