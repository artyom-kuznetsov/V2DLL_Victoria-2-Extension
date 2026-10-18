// FUN_00879970 @ 00879970 body=[[00879970, 0087999f]]


void FUN_00879970(void)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined1 *)(in_EAX + 5) = 0;
  in_EAX[1] = 0x18d;
  *(undefined2 *)(in_EAX + 7) = 0;
  in_EAX[0xd] = 0xf;
  in_EAX[0xc] = 0;
  *(undefined1 *)(in_EAX + 8) = 0;
  in_EAX[0xf] = 0;
  *in_EAX = CChangeVariableEffect::vftable;
  return;
}

