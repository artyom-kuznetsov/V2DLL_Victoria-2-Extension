// FUN_0087a030 @ 0087a030 body=[[0087a030, 0087a067]]


void FUN_0087a030(void)

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
  *in_EAX = CAnyPopEffect::vftable;
  return;
}

