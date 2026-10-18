// FUN_00879750 @ 00879750 body=[[00879750, 00879793]]


void FUN_00879750(void)

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
  *in_EAX = CRandomOwnedEffect::vftable;
  in_EAX[0xf] = 0;
  in_EAX[0x10] = 0;
  in_EAX[0x11] = 0;
  *(undefined1 *)(in_EAX + 0x12) = 0;
  return;
}

