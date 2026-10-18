// FUN_008a5c70 @ 008a5c70 body=[[008a5c70, 008a5cc8]]


void FUN_008a5c70(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = CEventOption::vftable;
  in_EAX[1] = 0x18d;
  in_EAX[3] = 0x18d;
  in_EAX[5] = 0;
  in_EAX[6] = 0;
  in_EAX[7] = 0;
  in_EAX[4] = 1000;
  in_EAX[2] = CAIMTTHChance::vftable;
  in_EAX[9] = 1000;
  in_EAX[0xc] = 0;
  in_EAX[0xd] = 0;
  in_EAX[0xe] = 0;
  *(undefined1 *)(in_EAX + 0xf) = 0;
  in_EAX[0xb] = 0x18d;
  in_EAX[10] = CEffect::vftable;
  *(undefined2 *)(in_EAX + 0x11) = 0;
  in_EAX[0x17] = 0xf;
  in_EAX[0x16] = 0;
  *(undefined1 *)(in_EAX + 0x12) = 0;
  return;
}

