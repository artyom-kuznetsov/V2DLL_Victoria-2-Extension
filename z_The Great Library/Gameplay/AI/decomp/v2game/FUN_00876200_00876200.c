// FUN_00876200 @ 00876200 body=[[00876200, 0087623c]]


void FUN_00876200(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = param_2;
  in_EAX[4] = param_4;
  in_EAX[3] = param_3;
  in_EAX[6] = param_1;
  in_EAX[7] = param_1;
  in_EAX[1] = 0x18d;
  in_EAX[5] = param_5;
  *(undefined1 *)(in_EAX + 8) = 0;
  in_EAX[9] = 0;
  *in_EAX = CAllianceAction::vftable;
  return;
}

