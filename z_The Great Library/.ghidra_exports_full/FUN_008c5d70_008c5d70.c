// FUN_008c5d70 @ 008c5d70 body=[[008c5d70, 008c5d98]]


void FUN_008c5d70(undefined4 param_1)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CRegionScopeTrigger::vftable;
  in_EAX[7] = param_1;
  return;
}

