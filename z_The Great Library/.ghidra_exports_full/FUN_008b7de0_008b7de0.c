// FUN_008b7de0 @ 008b7de0 body=[[008b7de0, 008b7e13]]


void FUN_008b7de0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  in_EAX[0xb] = 0;
  in_EAX[0xc] = 0xf;
  *(undefined1 *)(in_EAX + 7) = 0;
  *in_EAX = CNewsHasFlagTrigger::vftable;
  in_EAX[0x13] = 0xf;
  in_EAX[0x12] = 0;
  *(undefined1 *)(in_EAX + 0xe) = 0;
  return;
}

