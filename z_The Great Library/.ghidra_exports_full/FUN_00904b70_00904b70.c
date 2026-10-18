// FUN_00904b70 @ 00904b70 body=[[00904b70, 00904b95]]


void FUN_00904b70(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CNewsValuesContainsTrigger::vftable;
  in_EAX[7] = 0;
  in_EAX[8] = 0;
  *(undefined1 *)(in_EAX + 9) = 0;
  return;
}

