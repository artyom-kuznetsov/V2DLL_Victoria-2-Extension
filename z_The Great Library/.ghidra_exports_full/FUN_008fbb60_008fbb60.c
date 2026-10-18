// FUN_008fbb60 @ 008fbb60 body=[[008fbb60, 008fbb7f]]


void FUN_008fbb60(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CProducesTrigger::vftable;
  in_EAX[7] = 0;
  return;
}

