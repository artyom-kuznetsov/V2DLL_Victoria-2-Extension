// FUN_008b7280 @ 008b7280 body=[[008b7280, 008b72a2]]


void FUN_008b7280(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  in_EAX[8] = 0;
  in_EAX[9] = 0;
  *in_EAX = CLuxuryNeedsTrigger::vftable;
  return;
}

