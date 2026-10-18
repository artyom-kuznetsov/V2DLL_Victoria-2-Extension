// FUN_008c72d0 @ 008c72d0 body=[[008c72d0, 008c7308]]


void FUN_008c72d0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CRelationTrigger::vftable;
  in_EAX[7] = 0x2d2d2d;
  in_EAX[8] = 0;
  in_EAX[9] = 0;
  return;
}

