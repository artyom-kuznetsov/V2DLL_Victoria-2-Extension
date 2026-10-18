// FUN_008b7a70 @ 008b7a70 body=[[008b7a70, 008b7a8c]]


void FUN_008b7a70(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CNumberOfStatesTrigger::vftable;
  return;
}

