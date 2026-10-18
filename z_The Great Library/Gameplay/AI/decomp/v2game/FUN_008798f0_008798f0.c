// FUN_008798f0 @ 008798f0 body=[[008798f0, 00879933]]


void FUN_008798f0(void)

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
  *in_EAX = CRandomEmptyNeighborProvinceEffect::vftable;
  in_EAX[0xf] = 0;
  in_EAX[0x10] = 0;
  in_EAX[0x11] = 0;
  *(undefined1 *)(in_EAX + 0x12) = 0;
  return;
}

