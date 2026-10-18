// FUN_008ca230 @ 008ca230 body=[[008ca230, 008ca268]]


void FUN_008ca230(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CControlledByTrigger::vftable;
  in_EAX[7] = 0x2d2d2d;
  in_EAX[8] = 0;
  *(undefined1 *)(in_EAX + 9) = 0;
  return;
}

