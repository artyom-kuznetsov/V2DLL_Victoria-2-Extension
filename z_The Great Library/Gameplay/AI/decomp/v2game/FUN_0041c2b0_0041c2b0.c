// FUN_0041c2b0 @ 0041c2b0 body=[[0041c2b0, 0041c414] [0041c418, 0041c42c] [0041c430, 0041c442]]


undefined1 * FUN_0041c2b0(undefined1 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_54;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b96654;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  local_14 = 1;
  if ((param_2[1] - *param_2) / 0x1c < 1) {
    *param_1 = 0;
    FUN_00409350("Please specify invention name.",0x1e);
    ExceptionList = local_10;
    return param_1;
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00408ed0(*param_2,0,0xffffffff);
  local_8 = 1;
  if (DAT_0125eadc == 0) {
    iVar1 = FUN_00aae9af(0x9c);
    local_8._0_1_ = 2;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00576fe0(iVar1);
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0057ab10(uVar2);
  }
  iVar1 = FUN_005661b0(local_38);
  if (iVar1 == 0) {
    uVar2 = FUN_00988fa0(local_38);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_00408ed0(uVar2,0,0xffffffff);
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54);
    }
    *param_1 = 0;
  }
  else {
    local_1c = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    FUN_00502090(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4),
                 iVar1,0);
    FUN_00409350("Triggered invention.",0x14);
    *param_1 = 1;
  }
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

