// FUN_008da590 @ 008da590 body=[[008da590, 008da5bc]]


void FUN_008da590(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CVariableTrigger::vftable;
  in_EAX[0xc] = 0xf;
  in_EAX[0xb] = 0;
  *(undefined1 *)(in_EAX + 7) = 0;
  in_EAX[0xe] = 0;
  return;
}

