// FUN_0075bbd0 @ 0075bbd0 body=[[0075bbd0, 0075bc86] [0075bc8a, 0075bca8] [0075bcac, 0075bd92] [0075bd96, 0075bdcf] [0075bdd3, 0075bdee] [0075bdf2, 0075be0d] [0075be11, 0075be2e] [0075be32, 0075bf17] [0075bf1b, 0075bf4b] [0075bf4f, 0075bf6b] [0075bf6f, 0075bf93] [0075bf97, 0075bfb4] [0075bfb8, 0075c04b] [0075c04f, 0075c07f] [0075c083, 0075c0c3]]


/* WARNING: Removing unreachable block (ram,0x0075c074) */

void FUN_0075bbd0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  uint local_a0;
  undefined4 local_90;
  uint local_8c;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68;
  undefined4 local_58;
  uint local_54;
  uint local_4c [2];
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7c0d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00475500();
  *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(iVar1 + 0x160);
  *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(DAT_012588e8 + 0xbb4);
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("counterdistance_slider",0x16);
  local_8 = 0;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("menu_settings_GAME",0x12);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x34c) + 0x6c))(local_4c);
  uVar3 = (**(code **)(*piVar2 + 0x4c))(local_30);
  *(undefined4 *)(param_1 + 0x348) = uVar3;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8 = 0xffffffff;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68 = local_68 & 0xffffff00;
  FUN_00409350();
  local_8 = 2;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 3;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x34c) + 0x6c))(local_30);
  uVar3 = FUN_00475660(local_84,*(undefined4 *)(param_1 + 0x350));
  local_8._0_1_ = 4;
  local_14 = (int *)FUN_009a8ee0(local_44,uVar3);
  local_8._0_1_ = 5;
  iVar1 = FUN_00475500();
  uVar3 = FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8._0_1_ = 6;
  (**(code **)(*piVar2 + 0x3c))();
  FUN_00408ed0(uVar3,0,0xffffffff);
  FUN_00a5ecc0();
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a0);
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_009adb70();
  if (local_40 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40);
  }
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84[0]);
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68);
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68 = local_68 & 0xffffff00;
  FUN_00409350();
  local_8 = 8;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 9;
  local_14 = (int *)(**(code **)(**(int **)(param_1 + 0x34c) + 0x6c))(local_30);
  uVar3 = FUN_0075a970();
  local_8._0_1_ = 10;
  FUN_009a8ee0(local_44,uVar3);
  local_8._0_1_ = 0xb;
  iVar1 = FUN_00475500();
  uVar3 = FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8._0_1_ = 0xc;
  (**(code **)(*local_14 + 0x3c))();
  FUN_00408ed0(uVar3,0,0xffffffff);
  FUN_00a5ecc0();
  if (local_70 < 0x10) {
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0xd);
    FUN_009adb70();
    if (local_40 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_40);
    }
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a0);
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0 = local_a0 & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_8 = 0xffffffff;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (local_54 < 0x10) {
      FUN_00409350();
      local_8 = 0xe;
      local_a8 = 0xf;
      local_ac = 0;
      local_bc[0] = local_bc[0] & 0xffffff00;
      FUN_00409350();
      local_8 = CONCAT31(local_8._1_3_,0xf);
      piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x34c) + 0x6c))(local_bc);
      uVar3 = (**(code **)(*piVar2 + 0x48))();
      *(undefined4 *)(param_1 + 0x2dc) = uVar3;
      if (local_a8 < 0x10) {
        local_8 = 0xffffffff;
        local_a8 = 0xf;
        local_ac = 0;
        local_bc[0] = local_bc[0] & 0xffffff00;
        (**(code **)(*(int *)(*(int *)(param_1 + 0x2dc) + 0x54) + 4))(param_1 + 700);
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_bc[0]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_84[0]);
}

