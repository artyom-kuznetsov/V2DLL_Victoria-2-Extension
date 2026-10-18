// FUN_008b7340 @ 008b7340 body=[[008b7340, 008b7362]]


void FUN_008b7340(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  in_EAX[8] = 0;
  in_EAX[9] = 0;
  *in_EAX = CMilitancyTrigger::vftable;
  return;
}

