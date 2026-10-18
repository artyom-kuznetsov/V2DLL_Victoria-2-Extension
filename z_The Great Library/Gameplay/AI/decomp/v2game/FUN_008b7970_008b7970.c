// FUN_008b7970 @ 008b7970 body=[[008b7970, 008b798c]]


void FUN_008b7970(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CHasSphereLeaderTrigger::vftable;
  return;
}

