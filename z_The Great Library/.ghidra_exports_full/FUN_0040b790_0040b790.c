// FUN_0040b790 @ 0040b790 body=[[0040b790, 0040b7f9] [0040b7fd, 0040b97b] [0040b97f, 0040b9be] [0040b9c2, 0040b9eb] [0040b9ef, 0040ba16] [0040ba1a, 0040ba59] [0040ba5d, 0040ba89] [0040ba8d, 0040baff] [0040bb03, 0040bbae] [0040bbb2, 0040bbc6]]


undefined4 *
FUN_0040b790(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int in_ECX;
  uint local_d4;
  uint local_b8;
  uint local_b0 [4];
  undefined4 local_a0;
  uint local_9c;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  undefined1 local_5c [4];
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_48 [4];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b96734;
  local_10 = ExceptionList;
  local_14 = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("DefaultConfirm",0xe);
  local_8 = 0;
  FUN_00640680(param_1,local_34);
  local_8._0_1_ = 2;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  param_1[0x1a] = param_2;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  *param_1 = CConfirmDeletePlan::vftable;
  param_1[0x1b] = param_3;
  param_1[0x1c] = param_4;
  param_1[0x1d] = in_ECX;
  if (in_ECX == 0) {
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
    FUN_00409350("BP_DELETE_SAVED_PLAN_PROMPT",0x1b);
    local_8 = CONCAT31(local_8._1_3_,3);
    local_14 = 1;
    param_2 = FUN_009a8ee0(local_5c,local_94);
    local_8 = 4;
    local_14 = 3;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_8 = 5;
    local_14 = 7;
  }
  else {
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    FUN_00409350("BP_DELETE_CURRENT_PLAN_PROMPT",0x1d);
    local_8 = 6;
    local_14 = 8;
    param_2 = FUN_009a8ee0(local_48,local_78);
    local_8 = 7;
    local_14 = 0x18;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_8 = 8;
    local_14 = 0x38;
  }
  local_9c = 0xf;
  local_a0 = 0;
  local_b0[0] = local_b0[0] & 0xffffff00;
  FUN_00408ed0();
  local_8 = 9;
  if (((local_14 & 0x20) != 0) && (local_14 = local_14 & 0xffffffdf, 0xf < local_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if ((local_14 & 0x10) != 0) {
    local_14 = local_14 & 0xffffffef;
    local_8 = 0xc;
    FUN_009adb70();
    if (local_44 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
  }
  if ((local_14 & 8) != 0) {
    local_14 = local_14 & 0xfffffff7;
    if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
  }
  if (((local_14 & 4) != 0) && (local_14 = local_14 & 0xfffffffb, 0xf < local_d4)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    local_8 = CONCAT31(local_8._1_3_,0x10);
    FUN_009adb70();
    if (local_58 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
  }
  local_8._0_1_ = 0x11;
  if ((local_14 & 1) != 0) {
    if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("Description",0xb);
  local_8._0_1_ = 0x12;
  (**(code **)(*(int *)param_1[1] + 0x3c))();
  FUN_00408ed0(local_b0,0,0xffffffff);
  FUN_00a5ecc0();
  local_8 = CONCAT31(local_8._1_3_,0x11);
  if (local_20 < 0x10) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x40))();
    local_18 = *(int *)(iVar3 + 0x6b9bc);
    piVar2 = *(int **)(param_1[1] + 0x248);
    iVar3 = *(int *)(iVar3 + 0x6b9c0);
    iVar4 = (**(code **)(*piVar2 + 0xf4))(&param_2);
    sVar1 = *(short *)(iVar4 + 2);
    psVar5 = (short *)(**(code **)(*piVar2 + 0xf4))();
    (**(code **)(*(int *)param_1[1] + 0xa8))
              (local_18 / 2 - (int)*psVar5 / 2,iVar3 / 2 - (int)sVar1 / 2);
    DAT_012586d5 = 1;
    if (local_9c < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_b0[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_34[0]);
}

