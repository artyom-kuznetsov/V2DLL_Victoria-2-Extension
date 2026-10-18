// FUN_009035e0 @ 009035e0 body=[[009035e0, 00903608]]


void FUN_009035e0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CNewsValuesEqTrigger::vftable;
  in_EAX[7] = 0;
  in_EAX[8] = 0;
  in_EAX[9] = 0;
  *(undefined1 *)(in_EAX + 10) = 0;
  return;
}

