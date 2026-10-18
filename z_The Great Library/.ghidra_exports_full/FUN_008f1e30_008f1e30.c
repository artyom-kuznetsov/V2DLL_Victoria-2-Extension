// FUN_008f1e30 @ 008f1e30 body=[[008f1e30, 008f1e4f]]


void FUN_008f1e30(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CPopMajorityIdeologyTrigger::vftable;
  in_EAX[7] = 0;
  return;
}

