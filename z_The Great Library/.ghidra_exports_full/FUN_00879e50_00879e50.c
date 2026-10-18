// FUN_00879e50 @ 00879e50 body=[[00879e50, 00879e72]]


void FUN_00879e50(void)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined1 *)(in_EAX + 5) = 0;
  in_EAX[1] = 0x18d;
  *(undefined2 *)(in_EAX + 7) = 0;
  in_EAX[8] = 0;
  *in_EAX = CLeadershipEffect::vftable;
  return;
}

