// FUN_00891c70 @ 00891c70 body=[[00891c70, 00891c9e]]


void FUN_00891c70(undefined4 param_1)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined1 *)(in_EAX + 5) = 0;
  *(undefined2 *)(in_EAX + 7) = 0;
  in_EAX[1] = 0x18d;
  in_EAX[8] = 0;
  *in_EAX = CBuildingEffect::vftable;
  in_EAX[9] = param_1;
  return;
}

