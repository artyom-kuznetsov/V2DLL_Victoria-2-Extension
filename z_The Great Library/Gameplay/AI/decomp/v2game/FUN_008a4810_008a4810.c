// FUN_008a4810 @ 008a4810 body=[[008a4810, 008a483f]]


void FUN_008a4810(undefined4 param_1)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined1 *)(in_EAX + 5) = 0;
  *(undefined2 *)(in_EAX + 7) = 0;
  *(undefined2 *)(in_EAX + 8) = 0;
  in_EAX[1] = 0x18d;
  *in_EAX = CBuildProvinceBuildingInCapitalEffect::vftable;
  in_EAX[9] = param_1;
  return;
}

