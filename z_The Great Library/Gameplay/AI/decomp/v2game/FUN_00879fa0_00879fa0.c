// FUN_00879fa0 @ 00879fa0 body=[[00879fa0, 00879fc2]]


void FUN_00879fa0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined1 *)(in_EAX + 5) = 0;
  in_EAX[1] = 0x18d;
  *(undefined2 *)(in_EAX + 7) = 0;
  in_EAX[8] = 0;
  *in_EAX = CTreasuryEffect::vftable;
  return;
}

