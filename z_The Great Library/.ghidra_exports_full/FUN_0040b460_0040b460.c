// FUN_0040b460 @ 0040b460 body=[[0040b460, 0040b4c7] [0040b4cb, 0040b5bf] [0040b5c3, 0040b5fd] [0040b601, 0040b618] [0040b61c, 0040b63d] [0040b641, 0040b6e4] [0040b6e8, 0040b6fc]]


undefined4 *
FUN_0040b460(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  short *psVar6;
  uint in_stack_00000024;
  undefined4 local_88;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34 [2];
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  uint local_20;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b96790;
  local_10 = ExceptionList;
  local_8 = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("DefaultConfirm",0xe);
  local_8._0_1_ = 1;
  FUN_00640680(param_1,local_34);
  local_8._0_1_ = 3;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  param_1[0x1a] = param_2;
  *param_1 = CConfirmSavePlan::vftable;
  param_1[0x1b] = param_3;
  param_1[0x21] = 0xf;
  param_1[0x20] = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  FUN_00408ed0();
  local_8._0_1_ = 4;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  FUN_00409350("BP_SAVE_PLAN_PROMPT",0x13);
  local_8._0_1_ = 5;
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  FUN_00409350("Description",0xb);
  local_8._0_1_ = 6;
  FUN_009a8ee0(local_2c,local_6c);
  local_8._0_1_ = 7;
  iVar3 = FUN_00475500();
  uVar4 = FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
  local_8._0_1_ = 8;
  (**(code **)(*(int *)param_1[1] + 0x3c))();
  FUN_00408ed0(uVar4,0,0xffffffff);
  FUN_00a5ecc0();
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88);
  }
  local_8._0_1_ = 9;
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_28);
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50);
  }
  local_8 = CONCAT31(local_8._1_3_,4);
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c[0]);
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x40))();
  local_18 = *(int *)(iVar3 + 0x6b9bc);
  piVar2 = *(int **)(param_1[1] + 0x248);
  iVar3 = *(int *)(iVar3 + 0x6b9c0);
  iVar5 = (**(code **)(*piVar2 + 0xf4))(&param_2);
  sVar1 = *(short *)(iVar5 + 2);
  psVar6 = (short *)(**(code **)(*piVar2 + 0xf4))();
  (**(code **)(*(int *)param_1[1] + 0xa8))
            (local_18 / 2 - (int)*psVar6 / 2,iVar3 / 2 - (int)sVar1 / 2);
  DAT_012586d4 = 1;
  if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_4);
  }
  ExceptionList = local_10;
  return param_1;
}

