// FUN_008fd270 @ 008fd270 body=[[008fd270, 008fd295]]


void FUN_008fd270(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  in_EAX[8] = 0;
  in_EAX[9] = 0;
  *in_EAX = CUpperHouseTrigger::vftable;
  in_EAX[10] = 0;
  return;
}

