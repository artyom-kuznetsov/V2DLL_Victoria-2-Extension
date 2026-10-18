// FUN_008b7440 @ 008b7440 body=[[008b7440, 008b745f]]


void FUN_008b7440(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  in_EAX[7] = 0;
  *in_EAX = CIndustrialScoreTrigger::vftable;
  return;
}

