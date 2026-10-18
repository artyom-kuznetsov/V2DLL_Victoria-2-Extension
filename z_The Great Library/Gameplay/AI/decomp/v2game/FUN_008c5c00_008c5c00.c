// FUN_008c5c00 @ 008c5c00 body=[[008c5c00, 008c5c28]]


void FUN_008c5c00(undefined4 param_1)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CTechnologyTrigger::vftable;
  in_EAX[8] = param_1;
  return;
}

