// FUN_00449100 @ 00449100 body=[[00449100, 0044911c]]


void FUN_00449100(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CAndTrigger::vftable;
  return;
}

