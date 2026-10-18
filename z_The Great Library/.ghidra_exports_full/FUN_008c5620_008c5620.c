// FUN_008c5620 @ 008c5620 body=[[008c5620, 008c564e]]


void FUN_008c5620(undefined4 param_1)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  in_EAX[8] = 0;
  in_EAX[9] = 0;
  *in_EAX = CIdeologyTrigger::vftable;
  in_EAX[10] = param_1;
  return;
}

