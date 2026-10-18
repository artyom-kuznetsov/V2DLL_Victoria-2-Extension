// FUN_00879d60 @ 00879d60 body=[[00879d60, 00879d82]]


void FUN_00879d60(void)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined1 *)(in_EAX + 5) = 0;
  in_EAX[1] = 0x18d;
  *(undefined2 *)(in_EAX + 7) = 0;
  in_EAX[8] = 0;
  *in_EAX = CMovePopEffect::vftable;
  return;
}

