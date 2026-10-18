// FUN_0087a070 @ 0087a070 body=[[0087a070, 0087a0b0]]


void FUN_0087a070(void)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined1 *)(in_EAX + 5) = 0;
  *(undefined2 *)(in_EAX + 7) = 0;
  in_EAX[1] = 0x18d;
  in_EAX[9] = 0x18d;
  in_EAX[10] = 0;
  in_EAX[0xb] = 0;
  in_EAX[0xc] = 0;
  *(undefined2 *)(in_EAX + 0xe) = 0;
  in_EAX[8] = CAndTrigger::vftable;
  *in_EAX = CRandomPopEffect::vftable;
  in_EAX[0xf] = 0;
  in_EAX[0x10] = 0;
  in_EAX[0x11] = 0;
  return;
}

