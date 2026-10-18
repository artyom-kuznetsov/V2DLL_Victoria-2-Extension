// FUN_008b31b0 @ 008b31b0 body=[[008b31b0, 008b31cf]]


void FUN_008b31b0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CSubUnitTrigger::vftable;
  in_EAX[8] = 0;
  return;
}

