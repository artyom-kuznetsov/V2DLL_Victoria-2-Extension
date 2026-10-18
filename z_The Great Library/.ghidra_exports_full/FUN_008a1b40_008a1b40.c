// FUN_008a1b40 @ 008a1b40 body=[[008a1b40, 008a1b68]]


void FUN_008a1b40(void)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined1 *)(in_EAX + 5) = 0;
  in_EAX[1] = 0x18d;
  *(undefined2 *)(in_EAX + 7) = 0;
  *in_EAX = CUpperHouseEffect::vftable;
  in_EAX[8] = 0;
  in_EAX[9] = 0;
  in_EAX[10] = 0;
  return;
}

