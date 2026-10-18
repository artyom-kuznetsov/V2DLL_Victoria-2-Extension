// FUN_00879be0 @ 00879be0 body=[[00879be0, 00879c18]]


void FUN_00879be0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined1 *)(in_EAX + 5) = 0;
  in_EAX[1] = 0x18d;
  in_EAX[8] = 0x2d2d2d;
  in_EAX[9] = 0;
  *(undefined2 *)(in_EAX + 7) = 0;
  *in_EAX = CCreateVassalEffect::vftable;
  return;
}

