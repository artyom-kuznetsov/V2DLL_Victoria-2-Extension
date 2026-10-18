// FUN_0041f720 @ 0041f720 body=[[0041f720, 0041f911] [0041f915, 0041f927]]


undefined1 * FUN_0041f720(undefined1 *param_1,int *param_2)

{
  undefined4 ***pppuVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 **local_38 [4];
  int local_28;
  uint local_24;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b8fa3c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  local_14 = 1;
  if ((param_2[1] - *param_2) / 0x1c < 1) {
    *param_1 = 0;
    FUN_00409350("Please specify the country tag",0x1e);
    ExceptionList = local_10;
    return param_1;
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = (undefined4 **)((uint)local_38[0] & 0xffffff00);
  FUN_00408ed0(*param_2,0,0xffffffff);
  local_8 = 1;
  if (local_28 == 3) {
    pppuVar1 = (undefined4 ***)local_38[0];
    if (local_24 < 0x10) {
      pppuVar1 = local_38;
    }
    FUN_0055c6c0(DAT_012587e4,&local_1c,pppuVar1);
    if ((local_18 != 0) &&
       (iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_18 * 4),
       0 < (int)(*(int *)(iVar2 + 0x9dc) - *(int *)(iVar2 + 0x9d8) & 0xfffffffcU))) {
      iVar2 = FUN_00aae9af(0x50);
      local_8._0_1_ = 2;
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
        uVar4 = FUN_007297a0(iVar2,local_1c,local_18,*(undefined4 *)(DAT_012588e8 + 0xb5c),
                             *(undefined4 *)(DAT_012588e8 + 0xb60),*(undefined4 *)(iVar3 + 0x6c));
      }
      local_8._0_1_ = 1;
      iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar4);
      FUN_007dcf30(&local_1c);
      *param_1 = 1;
      uVar4 = FUN_0055dd40();
      local_8._0_1_ = 3;
      uVar4 = FUN_00988fa0(uVar4);
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_00408ed0(uVar4,0,0xffffffff);
      FUN_00408ad0();
      FUN_00408ad0();
      goto LAB_0041f903;
    }
    pcVar5 = "Such country does not exist.";
  }
  else {
    pcVar5 = "empty tag. check your spaces";
  }
  *param_1 = 0;
  FUN_00409350(pcVar5,0x1c);
LAB_0041f903:
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

