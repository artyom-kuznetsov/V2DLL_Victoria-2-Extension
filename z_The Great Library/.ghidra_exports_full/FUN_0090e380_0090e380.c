// FUN_0090e380 @ 0090e380 body=[[0090e380, 0090e3c8]]


void FUN_0090e380(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = param_2;
  in_EAX[4] = param_4;
  in_EAX[3] = param_3;
  in_EAX[6] = param_1;
  in_EAX[7] = param_1;
  in_EAX[5] = param_5;
  *(undefined1 *)(in_EAX + 8) = 0;
  in_EAX[9] = 0;
  in_EAX[1] = 0x18d;
  *in_EAX = CCallAllyAction::vftable;
  in_EAX[10] = param_6;
  in_EAX[0xb] = param_7;
  return;
}

