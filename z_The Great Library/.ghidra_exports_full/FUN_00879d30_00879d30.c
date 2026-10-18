// FUN_00879d30 @ 00879d30 body=[[00879d30, 00879d55]]


void FUN_00879d30(void)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined1 *)(in_EAX + 5) = 0;
  in_EAX[1] = 0x18d;
  *(undefined2 *)(in_EAX + 7) = 0;
  in_EAX[8] = 0;
  in_EAX[9] = 0;
  *in_EAX = CReducePopEffect::vftable;
  return;
}

