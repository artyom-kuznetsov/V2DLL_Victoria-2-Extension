// FUN_008fd870 @ 008fd870 body=[[008fd870, 008fd88f]]


void FUN_008fd870(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CIsNextReformTrigger::vftable;
  in_EAX[7] = 0;
  return;
}

