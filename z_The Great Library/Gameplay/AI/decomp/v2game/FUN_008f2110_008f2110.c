// FUN_008f2110 @ 008f2110 body=[[008f2110, 008f212f]]


void FUN_008f2110(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CPopMajorityIssueTrigger::vftable;
  in_EAX[7] = 0;
  return;
}

