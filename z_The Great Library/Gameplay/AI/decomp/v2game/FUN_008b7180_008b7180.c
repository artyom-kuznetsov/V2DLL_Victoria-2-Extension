// FUN_008b7180 @ 008b7180 body=[[008b7180, 008b719c]]


void FUN_008b7180(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CTerrainTrigger::vftable;
  return;
}

