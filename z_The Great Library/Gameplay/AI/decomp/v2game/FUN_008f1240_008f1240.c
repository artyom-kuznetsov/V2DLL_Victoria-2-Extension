// FUN_008f1240 @ 008f1240 body=[[008f1240, 008f125f]]


void FUN_008f1240(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CPopMajorityReligionTrigger::vftable;
  in_EAX[7] = 0;
  return;
}

