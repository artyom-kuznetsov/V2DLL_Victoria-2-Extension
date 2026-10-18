// FUN_008982f0 @ 008982f0 body=[[008982f0, 0089831e]]


void FUN_008982f0(undefined4 param_1)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined1 *)(in_EAX + 5) = 0;
  *(undefined2 *)(in_EAX + 7) = 0;
  in_EAX[1] = 0x18d;
  in_EAX[8] = 0;
  *in_EAX = CModifyStockpileEffect::vftable;
  in_EAX[9] = param_1;
  return;
}

