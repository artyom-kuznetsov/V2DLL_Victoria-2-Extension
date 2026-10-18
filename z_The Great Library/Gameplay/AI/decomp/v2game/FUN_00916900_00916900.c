// FUN_00916900 @ 00916900 body=[[00916900, 00916a24]]


undefined4 *
FUN_00916900(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e865;
  local_10 = ExceptionList;
  uVar1 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  ExceptionList = &local_10;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[1] = 0x18d;
  param_1[5] = param_5;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *param_1 = CPeaceAction::vftable;
  param_1[0xb] = 0x18d;
  param_1[10] = CPeaceOffer::vftable;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x25) = 1;
  local_8 = 1;
  FUN_0092a7c0(param_1[2],param_1[3],param_1[4],param_1[5]);
  if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[3] * 4) + 0xbe8) +
                       param_1[5] * 4) + 0x34) != 0) {
    FUN_00929bf0(param_1 + 10,
                 *(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[3] * 4) + 0xbe8)
                           + param_1[5] * 4) + 0x34));
  }
  ExceptionList = local_10;
  return param_1;
}

