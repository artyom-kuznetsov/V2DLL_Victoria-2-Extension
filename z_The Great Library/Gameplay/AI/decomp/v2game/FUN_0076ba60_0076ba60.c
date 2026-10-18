// FUN_0076ba60 @ 0076ba60 body=[[0076ba60, 0076bbaa] [0076bbae, 0076bd44] [0076bd48, 0076bd6c] [0076bd70, 0076bdac] [0076bdb0, 0076bdd4] [0076bdd8, 0076be9b]]


void FUN_0076ba60(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_b4;
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  undefined **local_90;
  undefined4 local_8c;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  undefined1 local_6c [4];
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  uint local_58;
  undefined4 local_48;
  uint local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6ccfc;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffff28;
  if (param_1 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = param_1 + 8;
  }
  ExceptionList = &pvStack_10;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x44))();
  (**(code **)(*piVar2 + 4))(iVar7);
  local_1c = FUN_00aae9af(0x60);
  local_8 = 0;
  if (local_1c == 0) {
    uVar3 = 0;
  }
  else {
    (**(code **)(**(int **)(param_1 + 4) + 0x44))();
    uVar3 = FUN_0072ba30();
  }
  local_8 = 0xffffffff;
  iVar4 = (**(code **)(**(int **)(param_1 + 4) + 0x44))();
  (**(code **)(**(int **)(iVar4 + 0x38) + 0x18))(uVar3);
  uVar3 = *(undefined4 *)(param_1 + 0x2ec);
  local_48 = 0;
  local_44 = 0xf;
  local_58 = local_58 & 0xffffff00;
  FUN_00408ed0();
  local_20 = 0x2d2d2d;
  local_38 = 0x2d2d2d;
  local_34 = 0;
  local_30 = 0x100;
  local_2c = 0;
  local_28 = 0;
  local_24 = DAT_01259abc;
  local_8 = 1;
  local_3c = uVar3;
  FUN_00408ed0();
  *(undefined4 *)(param_1 + 0x2ec) = local_3c;
  *(undefined4 *)(param_1 + 0x2f0) = local_38;
  *(undefined1 *)(param_1 + 0x2f8) = (undefined1)local_30;
  *(undefined4 *)(param_1 + 0x2f4) = local_34;
  *(undefined1 *)(param_1 + 0x2f9) = local_30._1_1_;
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2fc) = local_2c;
  *(undefined1 *)(param_1 + 0x300) = local_28;
  *(undefined4 *)(param_1 + 0x304) = local_24;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if ((*(int *)(param_1 + 0x5c0) != 0) &&
     (iVar4 = (**(code **)(**(int **)(param_1 + 4) + 0x44))(), *(char *)(iVar4 + 0x34) == '\0')) {
    local_1c = FUN_00aae9af();
    local_8 = 2;
    if (local_1c != 0) {
      iVar5 = (**(code **)(**(int **)(param_1 + 4) + 0x100))();
      iVar4 = *(int *)(*(int *)(param_1 + 0x5c0) + 0x1b8);
      iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x100))();
      FUN_00a069a0(local_1c,*(int *)(*(int *)(param_1 + 0x5c0) + 0x1b8) + 0x2c,iVar6 + 0x134,1,
                   iVar4 + 0x70,iVar5 + 0x150);
    }
    local_8 = 0xffffffff;
    (**(code **)(**(int **)(*(int *)(param_1 + 0x5c0) + 0x38) + 0x18))();
  }
  local_98 = 0xf;
  local_9c = 0;
  local_ac[0] = local_ac[0] & 0xffffff00;
  FUN_00409350("CONNECTED",9);
  local_8 = 3;
  FUN_009a8ee0(local_6c,local_ac);
  local_8._0_1_ = 4;
  iVar4 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
  local_8._0_1_ = 5;
  local_8c = 0x18d;
  local_90 = &PTR_FUN_00e3cffc;
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_00408ed0();
  local_90 = &PTR_FUN_00e3d020;
  local_8._0_1_ = 6;
  FUN_00771510();
  local_90 = &PTR_FUN_00e3cffc;
  if (local_74 < 0x10) {
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,7);
    FUN_009adb70();
    if (local_68 == 0) {
      local_8 = 0xffffffff;
      local_68 = 0;
      local_64 = 0;
      local_60 = 0;
      if (local_98 < 0x10) {
        *(undefined4 *)(param_1 + 0x180) = 1;
        local_98 = 0xf;
        local_9c = 0;
        local_ac[0] = local_ac[0] & 0xffffff00;
        (**(code **)(**(int **)(param_1 + 4) + 0x44))();
        FUN_009c17f0();
        FUN_00475500();
        cVar1 = FUN_00416db0();
        if (cVar1 == '\0') {
          FUN_00475500();
          FUN_00408ed0();
        }
        if (DAT_012589ac == 2) {
          FUN_00475500();
          cVar1 = FUN_00416db0();
          if (cVar1 == '\0') {
            FUN_00475500();
            FUN_00408ed0();
          }
        }
        local_8 = 8;
        FUN_00475500();
        FUN_009d7fa0();
        local_8 = 0xffffffff;
        FUN_0076beac(iVar7);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

