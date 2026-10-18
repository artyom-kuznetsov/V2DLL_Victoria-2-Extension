// FUN_008c39d0 @ 008c39d0 body=[[008c39d0, 008c3a05]]


void FUN_008c39d0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CExistsTrigger::vftable;
  in_EAX[8] = 0x2d2d2d;
  in_EAX[9] = 0;
  return;
}

