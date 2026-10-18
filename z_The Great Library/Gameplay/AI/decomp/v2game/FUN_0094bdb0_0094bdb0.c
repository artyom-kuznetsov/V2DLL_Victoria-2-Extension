// FUN_0094bdb0 @ 0094bdb0 body=[[0094bdb0, 0094be14]]


void FUN_0094bdb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_EAX;
  undefined4 in_ECX;
  
  in_EAX[3] = in_ECX;
  in_EAX[4] = 0x2d2d2d;
  in_EAX[6] = param_1;
  in_EAX[7] = param_2;
  in_EAX[8] = param_3;
  in_EAX[1] = 0x18d;
  *in_EAX = CWarGoal::vftable;
  in_EAX[5] = 0;
  in_EAX[9] = param_4;
  in_EAX[10] = 0;
  in_EAX[0xb] = 0;
  in_EAX[0xc] = 0;
  in_EAX[0xd] = DAT_0131b788;
  *(undefined1 *)(in_EAX + 0xe) = 0;
  in_EAX[0xf] = 0;
  return;
}

