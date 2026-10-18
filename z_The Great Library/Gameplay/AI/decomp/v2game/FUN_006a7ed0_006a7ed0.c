// FUN_006a7ed0 @ 006a7ed0 body=[[006a7ed0, 006a8020] [006a8024, 006a806e]]


undefined4 *
FUN_006a7ed0(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_34 [5];
  uint local_20;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7ede4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CMessage::vftable;
  param_1[6] = 0xf;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0;
  param_1[8] = param_2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  iVar1 = *param_3;
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0x3c);
    FUN_0042b730(iVar1);
    iVar1 = iVar3;
  }
  param_1[0xd] = param_7;
  param_1[0xe] = param_8;
  param_1[0xf] = param_9;
  param_1[0x10] = param_10;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
  local_8._0_1_ = 2;
  param_1[0x15] = param_4;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0xf;
  *(undefined1 *)(param_1 + 0x17) = 0;
  FUN_00408ed0(param_5,0,0xffffffff);
  local_8._0_1_ = 3;
  param_1[0x1e] = param_11;
  iVar1 = DAT_012588e8;
  param_1[0x1f] = param_12;
  if (param_1[0x15] == 0) {
    if (param_1[0xe] == 0) {
      if (param_1[0x10] == 0) goto LAB_006a7fee;
      local_18 = param_1[0xf];
      iVar3 = param_1[0x10];
    }
    else {
      local_18 = param_1[0xd];
      iVar3 = param_1[0xe];
    }
    param_1[0x15] =
         *(undefined4 *)
          (*(int *)(iVar1 + 0xacc) +
          *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar3 * 4) + 0xbe4) * 4);
  }
LAB_006a7fee:
  uVar2 = FUN_0043b700(iVar1 + 0xb0c,local_34);
  local_8._0_1_ = 4;
  FUN_00408ed0(uVar2,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  if (param_6 != (undefined4 *)0x0) {
    if ((param_1[0x12] - param_1[0x11] & 0xfffffff8) == 0) {
      FUN_0043a750(param_6);
    }
    else {
      FUN_00630060(param_1[0x12],*param_6,param_6[1],param_1);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

