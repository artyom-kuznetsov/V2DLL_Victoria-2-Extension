// FUN_00900d80 @ 00900d80 body=[[00900d80, 00900d9f]]


void FUN_00900d80(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CTechSchoolTrigger::vftable;
  in_EAX[7] = 0;
  return;
}

