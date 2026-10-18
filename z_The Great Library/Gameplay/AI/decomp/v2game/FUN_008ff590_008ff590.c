// FUN_008ff590 @ 008ff590 body=[[008ff590, 008ff5af]]


void FUN_008ff590(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CHasFactionTrigger::vftable;
  in_EAX[7] = 0;
  return;
}

