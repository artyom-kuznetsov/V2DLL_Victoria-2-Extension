// FUN_008b6b90 @ 008b6b90 body=[[008b6b90, 008b6bb9]]


void FUN_008b6b90(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CLastMissionTrigger::vftable;
  in_EAX[0xc] = 0xf;
  in_EAX[0xb] = 0;
  *(undefined1 *)(in_EAX + 7) = 0;
  return;
}

