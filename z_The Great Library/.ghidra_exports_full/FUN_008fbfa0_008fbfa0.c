// FUN_008fbfa0 @ 008fbfa0 body=[[008fbfa0, 008fbfbf]]


void FUN_008fbfa0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CBigProducerTrigger::vftable;
  in_EAX[7] = 0;
  return;
}

