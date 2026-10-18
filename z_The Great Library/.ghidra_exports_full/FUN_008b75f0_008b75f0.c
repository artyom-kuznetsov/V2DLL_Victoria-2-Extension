// FUN_008b75f0 @ 008b75f0 body=[[008b75f0, 008b7612]]


void FUN_008b75f0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  in_EAX[8] = 0;
  in_EAX[9] = 0;
  *in_EAX = CSocialSpendingTrigger::vftable;
  return;
}

