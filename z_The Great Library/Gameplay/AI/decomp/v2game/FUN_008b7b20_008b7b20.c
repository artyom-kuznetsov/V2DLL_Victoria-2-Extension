// FUN_008b7b20 @ 008b7b20 body=[[008b7b20, 008b7b3c]]


void FUN_008b7b20(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CCanbuildFactory::vftable;
  return;
}

