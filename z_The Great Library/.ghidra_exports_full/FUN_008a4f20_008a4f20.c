// FUN_008a4f20 @ 008a4f20 body=[[008a4f20, 008a4f4c]]


void FUN_008a4f20(void)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined1 *)(in_EAX + 5) = 0;
  in_EAX[1] = 0x18d;
  *(undefined2 *)(in_EAX + 7) = 0;
  *in_EAX = CBuildFactoryInCapitalEffect::vftable;
  in_EAX[0xd] = 0xf;
  in_EAX[0xc] = 0;
  *(undefined1 *)(in_EAX + 8) = 0;
  return;
}

