// FUN_008fc810 @ 008fc810 body=[[008fc810, 008fc83e]]


void FUN_008fc810(undefined4 param_1)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  in_EAX[8] = 0;
  in_EAX[9] = 0;
  *in_EAX = CIssueTrigger::vftable;
  in_EAX[10] = param_1;
  return;
}

