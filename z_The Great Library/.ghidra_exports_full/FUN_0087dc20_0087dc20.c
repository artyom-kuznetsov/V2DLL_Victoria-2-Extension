// FUN_0087dc20 @ 0087dc20 body=[[0087dc20, 0087dcc3] [0087dcc7, 0087de21] [0087de25, 0087de46] [0087de4a, 0087de74] [0087de78, 0087de9d] [0087dea1, 0087dec0] [0087dec4, 0087dee1] [0087dee5, 0087df30] [0087df34, 0087df73] [0087df77, 0087df8b]]


/* WARNING: Removing unreachable block (ram,0x0087ded6) */

undefined1 * FUN_0087dc20(undefined1 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  uint in_stack_00000020;
  uint local_d4;
  uint local_b8;
  uint local_9c;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  undefined4 local_5c;
  undefined4 *local_58;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b69ab6;
  local_10 = ExceptionList;
  local_58 = (undefined4 *)0x0;
  local_8 = 0;
  local_5c = param_2[2];
  if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_2[3] * 4) + 0xbe4) ==
      *(int *)(in_ECX + 0x20) / 1000) {
    ExceptionList = &local_10;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  else {
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("CAPITAL_CHANGE",0xe);
    local_8._0_1_ = 1;
    FUN_009a8ee0(local_24,local_78);
    local_8._0_1_ = 3;
    if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 4;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350(&DAT_00e03350,3);
    local_8._0_1_ = 5;
    (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + (*(int *)(in_ECX + 0x20) / 1000) * 4) +
                0x1c))();
    local_8._0_1_ = 6;
    FUN_00988fa0();
    local_8._0_1_ = 7;
    uVar1 = FUN_00988f20();
    local_8._0_1_ = 8;
    puVar2 = (undefined4 *)FUN_009a8ee0(local_38,uVar1);
    local_8._0_1_ = 9;
    puVar3 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 10;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = &PTR_FUN_00e38ecc;
      puVar3[1] = local_24;
      puVar3[7] = 0xf;
      puVar3[6] = 0;
      *(undefined1 *)(puVar3 + 2) = 0;
      param_2 = puVar3;
      FUN_00408ed0();
      *puVar3 = &PTR_FUN_00e38f08;
      local_58 = puVar3 + 9;
      *local_58 = *puVar2;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      local_8._0_1_ = 0xc;
      FUN_009a97b0();
    }
    local_8._0_1_ = 9;
    param_2 = puVar3;
    FUN_009e6810(local_54,&param_2);
    local_8._0_1_ = 0xd;
    FUN_009adb70();
    if (local_34 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,0xe);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

