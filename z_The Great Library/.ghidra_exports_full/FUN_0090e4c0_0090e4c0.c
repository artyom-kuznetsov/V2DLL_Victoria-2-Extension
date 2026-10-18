// FUN_0090e4c0 @ 0090e4c0 body=[[0090e4c0, 0090e50c]]


void FUN_0090e4c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = param_2;
  in_EAX[3] = param_3;
  in_EAX[4] = param_4;
  in_EAX[5] = param_5;
  in_EAX[6] = param_1;
  in_EAX[7] = param_1;
  in_EAX[1] = 0x18d;
  *(undefined1 *)(in_EAX + 8) = 0;
  in_EAX[9] = 0;
  *in_EAX = CDecreaseOpinionAction::vftable;
  in_EAX[10] = 0x2d2d2d;
  in_EAX[0xb] = 0;
  return;
}

