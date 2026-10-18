// FUN_008b72e0 @ 008b72e0 body=[[008b72e0, 008b7302]]


void FUN_008b72e0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  in_EAX[8] = 0;
  in_EAX[9] = 0;
  *in_EAX = CConsciousnessTrigger::vftable;
  return;
}

