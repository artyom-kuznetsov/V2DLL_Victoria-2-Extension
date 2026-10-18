// FUN_008806e0 @ 008806e0 body=[[008806e0, 0088070e]]


void FUN_008806e0(undefined4 param_1)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined1 *)(in_EAX + 5) = 0;
  *(undefined2 *)(in_EAX + 7) = 0;
  in_EAX[1] = 0x18d;
  in_EAX[8] = 0;
  *in_EAX = CTechnologyInvestmentEffect::vftable;
  in_EAX[9] = param_1;
  return;
}

