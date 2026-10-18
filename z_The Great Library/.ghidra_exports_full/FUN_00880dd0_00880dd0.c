// FUN_00880dd0 @ 00880dd0 body=[[00880dd0, 00880e13]]


void FUN_00880dd0(undefined1 param_1)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined1 *)(in_EAX + 5) = 0;
  *(undefined2 *)(in_EAX + 7) = 0;
  in_EAX[9] = 0;
  *(undefined1 *)(in_EAX + 10) = 0;
  in_EAX[1] = 0x18d;
  *in_EAX = CChangeTagEffect::vftable;
  in_EAX[8] = 0x2d2d2d;
  *(undefined1 *)((int)in_EAX + 0x29) = param_1;
  return;
}

