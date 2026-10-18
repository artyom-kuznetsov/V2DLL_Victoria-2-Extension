// FUN_0087a250 @ 0087a250 body=[[0087a250, 0087a294]]


void FUN_0087a250(void)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined1 *)(in_EAX + 5) = 0;
  *(undefined2 *)(in_EAX + 7) = 0;
  *in_EAX = CNewsClearScopesEffect::vftable;
  in_EAX[1] = 0x18d;
  in_EAX[0xd] = 0xf;
  in_EAX[0xc] = 0;
  *(undefined1 *)(in_EAX + 8) = 0;
  in_EAX[0x10] = 0x18d;
  in_EAX[0x11] = 0;
  in_EAX[0x12] = 0;
  in_EAX[0x13] = 0;
  *(undefined2 *)(in_EAX + 0x15) = 0;
  in_EAX[0xf] = CAndTrigger::vftable;
  return;
}

