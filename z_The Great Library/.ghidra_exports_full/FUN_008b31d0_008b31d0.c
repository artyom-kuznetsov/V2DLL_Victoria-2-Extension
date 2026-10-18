// FUN_008b31d0 @ 008b31d0 body=[[008b31d0, 008b3201]]


void FUN_008b31d0(undefined4 param_1)

{
  undefined4 *in_EAX;
  undefined4 in_EDX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  in_EAX[8] = 0;
  in_EAX[9] = 0;
  *in_EAX = CPopStrataNeedTrigger::vftable;
  in_EAX[10] = param_1;
  in_EAX[0xb] = in_EDX;
  return;
}

