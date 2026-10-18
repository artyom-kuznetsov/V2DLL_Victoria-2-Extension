// FUN_008797e0 @ 008797e0 body=[[008797e0, 00879817]]


void FUN_008797e0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined1 *)(in_EAX + 5) = 0;
  *(undefined2 *)(in_EAX + 7) = 0;
  in_EAX[1] = 0x18d;
  in_EAX[9] = 0x18d;
  in_EAX[10] = 0;
  in_EAX[0xb] = 0;
  in_EAX[0xc] = 0;
  *(undefined2 *)(in_EAX + 0xe) = 0;
  in_EAX[8] = CAndTrigger::vftable;
  *in_EAX = CAnyNeighborCountryEffect::vftable;
  return;
}

