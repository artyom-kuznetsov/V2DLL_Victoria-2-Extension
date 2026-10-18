// FUN_008b7480 @ 008b7480 body=[[008b7480, 008b749c]]


void FUN_008b7480(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CGoodsTrigger::vftable;
  return;
}

