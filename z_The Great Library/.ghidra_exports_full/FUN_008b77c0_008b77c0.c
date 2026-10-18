// FUN_008b77c0 @ 008b77c0 body=[[008b77c0, 008b77df]]


void FUN_008b77c0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  in_EAX[7] = 0;
  *in_EAX = CCorruptionTrigger::vftable;
  return;
}

