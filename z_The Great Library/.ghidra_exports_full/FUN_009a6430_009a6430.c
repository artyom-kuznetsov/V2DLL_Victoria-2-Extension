// FUN_009a6430 @ 009a6430 body=[[009a6430, 009a662d]]


undefined4 *
FUN_009a6430(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined1 param_14,undefined4 param_15)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b52807;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009a6a30(param_1,param_3);
  local_8 = 0;
  param_1[0x15] = param_4;
  param_1[0x16] = param_13;
  *param_1 = &PTR_FUN_00e38738;
  param_1[0x17] = param_2;
  param_1[0x1d] = 0xf;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_00408ed0(param_6,0,0xffffffff);
  local_8._0_1_ = 1;
  param_1[0x24] = 0xf;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  uVar1 = DAT_00f092fc;
  local_8._0_1_ = 2;
  param_1[0x27] = param_9;
  param_1[0x26] = param_8;
  param_1[0x2b] = uVar1;
  param_1[0x2c] = uVar1;
  param_1[0x2d] = uVar1;
  param_1[0x2e] = uVar1;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  param_1[0x2a] = 0x18d;
  param_1[0x29] = CColor::vftable;
  param_1[0x31] = 0x18d;
  param_1[0x30] = CColor::vftable;
  param_1[0x32] = uVar1;
  param_1[0x33] = uVar1;
  param_1[0x34] = uVar1;
  param_1[0x35] = uVar1;
  *(undefined1 *)(param_1 + 0x36) = 1;
  param_1[0x3c] = 0xf;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  FUN_00408ed0(param_5,0,0xffffffff);
  local_8._0_1_ = 3;
  *(undefined1 *)(param_1 + 0x3e) = param_14;
  param_1[0x3f] = param_11;
  *(undefined1 *)(param_1 + 0x40) = 0;
  iVar2 = FUN_00aae9af(0x1d4);
  local_8._0_1_ = 4;
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00a5e790(iVar2,param_6,param_7,param_8,param_9,param_1 + 0x37,param_10,
                                 param_11,param_12,param_13,*(undefined1 *)(param_1 + 0x3e),param_15
                                );
  }
  local_8 = CONCAT31(local_8._1_3_,3);
  param_1[0x28] = piVar3;
  if (param_4 == 0) {
    (**(code **)(*piVar3 + 0x74))(param_1[0x17] + 0x6b9e0);
  }
  else {
    (**(code **)(*piVar3 + 0x74))(param_4);
  }
  FUN_0099e960();
  ExceptionList = local_10;
  return param_1;
}

