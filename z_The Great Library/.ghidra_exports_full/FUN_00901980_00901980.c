// FUN_00901980 @ 00901980 body=[[00901980, 009019ae]]


void FUN_00901980(undefined4 param_1)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  in_EAX[8] = 0;
  in_EAX[9] = 0;
  *in_EAX = CPopTypePercentageTrigger::vftable;
  in_EAX[10] = param_1;
  return;
}

