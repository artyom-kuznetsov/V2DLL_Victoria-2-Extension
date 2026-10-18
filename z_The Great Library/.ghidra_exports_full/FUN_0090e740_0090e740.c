// FUN_0090e740 @ 0090e740 body=[[0090e740, 0090e785]]


void FUN_0090e740(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  
  uVar1 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  in_EAX[2] = param_1;
  in_EAX[3] = param_2;
  in_EAX[4] = param_3;
  in_EAX[6] = uVar1;
  in_EAX[7] = uVar1;
  in_EAX[1] = 0x18d;
  in_EAX[5] = param_4;
  *(undefined1 *)(in_EAX + 8) = 0;
  in_EAX[9] = 0;
  *in_EAX = CCancelUnitCommandAction::vftable;
  return;
}

