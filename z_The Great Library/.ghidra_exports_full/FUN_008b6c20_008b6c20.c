// FUN_008b6c20 @ 008b6c20 body=[[008b6c20, 008b6c55]]


void FUN_008b6c20(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  in_EAX[7] = 0x2d2d2d;
  in_EAX[8] = 0;
  *in_EAX = CCasusBelliTrigger::vftable;
  return;
}

