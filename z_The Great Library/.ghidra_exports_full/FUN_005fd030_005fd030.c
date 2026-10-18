// FUN_005fd030 @ 005fd030 body=[[005fd030, 005fd1aa] [005fd1ae, 005fd1d3] [005fd1d7, 005fd1fc] [005fd200, 005fd235] [005fd239, 005fd254] [005fd258, 005fd273] [005fd277, 005fd439] [005fd43d, 005fd462] [005fd466, 005fd48b] [005fd48f, 005fd4b4] [005fd4b8, 005fd4dd] [005fd4e1, 005fd500] [005fd504, 005fd51a] [005fd51e, 005fd53a] [005fd53e, 005fd563] [005fd567, 005fd589] [005fd58d, 005fd5a6] [005fd5aa, 005fd736] [005fd73a, 005fd75f] [005fd763, 005fd788] [005fd78c, 005fd7b1] [005fd7b5, 005fd7da] [005fd7de, 005fd7fd] [005fd801, 005fd817] [005fd81b, 005fd837] [005fd83b, 005fd85a] [005fd85e, 005fd877] [005fd87b, 005fd89d] [005fd8a1, 005fd978] [005fd97c, 005fd9a1] [005fd9a5, 005fd9c4] [005fd9c8, 005fd9e4] [005fd9e8, 005fd9fb] [005fd9ff, 005fda11]]


/* WARNING: Removing unreachable block (ram,0x005fd9f0) */

void FUN_005fd030(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint local_154;
  uint local_138;
  uint local_11c;
  uint local_100;
  uint local_f8 [4];
  undefined4 local_e8;
  uint local_e4;
  uint local_dc;
  undefined4 local_cc;
  uint local_c8;
  uint local_c0;
  undefined4 local_b0;
  uint local_ac;
  uint local_a4;
  undefined4 local_94;
  uint local_90;
  uint local_88;
  int local_7c;
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b92efa;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(char *)(*(int *)(param_1 + 0x30) + 0x20) == '\0') {
    ExceptionList = &local_10;
    FUN_00409350();
  }
  if (*(int *)(*(int *)(param_1 + 0x30) + 0xc) == 0) {
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 1;
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 2;
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 3;
    local_14 = *(int **)(param_1 + 0x20);
    local_18 = (int *)FUN_009a8ee0();
    local_8._0_1_ = 4;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
    local_8._0_1_ = 5;
    FUN_00988f20();
    local_8._0_1_ = 6;
    uVar5 = FUN_00988f20();
    local_8._0_1_ = 7;
    local_14 = (int *)(**(code **)(*local_14 + 0x3c))();
    FUN_00408ed0(uVar5);
    FUN_00a5ecc0();
    if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_90 = 0xf;
    local_94 = 0;
    local_a4 = local_a4 & 0xffffff00;
    if (0xf < local_138) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ac = 0xf;
    local_b0 = 0;
    local_c0 = local_c0 & 0xffffff00;
    local_8._0_1_ = 8;
    FUN_009adb70();
    if (local_7c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = local_6c & 0xffffff00;
    uVar3 = local_20;
  }
  else {
    local_90 = 0xf;
    local_94 = 0;
    local_a4 = local_a4 & 0xffffff00;
    if (*(char *)(param_1 + 0x34) == '\0') {
      FUN_00409350();
      pcVar6 = (char *)(param_1 + 0x28);
      local_8._0_1_ = 0x15;
      local_14 = (int *)(param_1 + 0x29);
      local_74 = 0xf;
      local_78 = 0;
      local_88 = local_88 & 0xffffff00;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00409350();
      local_8._0_1_ = 0x16;
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x17;
      local_18 = *(int **)(param_1 + 0x20);
      local_14 = (int *)FUN_005fce10();
      local_8._0_1_ = 0x18;
      local_58 = 0xf;
      local_5c = 0;
      local_6c = local_6c & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x19;
      local_20 = 0xf;
      local_24 = 0;
      local_34 = local_34 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x1a;
      FUN_00988f20();
      local_8._0_1_ = 0x1b;
      FUN_00988f20();
      local_8._0_1_ = 0x1c;
      FUN_00988f20();
      local_8._0_1_ = 0x1d;
      FUN_00988f20();
      local_8._0_1_ = 0x1e;
      uVar5 = FUN_00988f20();
      local_8._0_1_ = 0x1f;
      local_14 = (int *)(**(code **)(*local_18 + 0x3c))();
      FUN_00408ed0(uVar5);
      FUN_00a5ecc0();
      if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c8 = 0xf;
      local_cc = 0;
      local_dc = local_dc & 0xffffff00;
      if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_e4 = 0xf;
      local_e8 = 0;
      local_f8[0] = local_f8[0] & 0xffffff00;
      if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_154) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34 = local_34 & 0xffffff00;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c = local_6c & 0xffffff00;
      if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_ac = 0xf;
      local_b0 = 0;
      local_c0 = local_c0 & 0xffffff00;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_74 = 0xf;
      local_88 = local_88 & 0xffffff00;
      uVar3 = local_90;
    }
    else {
      FUN_00409350();
      pcVar6 = (char *)(param_1 + 0x28);
      local_8._0_1_ = 9;
      local_14 = (int *)(param_1 + 0x29);
      local_20 = 0xf;
      local_24 = 0;
      local_34 = local_34 & 0xffffff00;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00409350();
      local_8._0_1_ = 10;
      local_74 = 0xf;
      local_78 = 0;
      local_88 = local_88 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0xb;
      local_18 = *(int **)(param_1 + 0x20);
      FUN_005fce10();
      local_8._0_1_ = 0xc;
      local_14 = (int *)FUN_0042c180();
      local_8._0_1_ = 0xd;
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0xe;
      local_58 = 0xf;
      local_5c = 0;
      local_6c = local_6c & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0xf;
      FUN_00988f20();
      local_8._0_1_ = 0x10;
      FUN_00988f20();
      local_8._0_1_ = 0x11;
      FUN_00988f20();
      local_8._0_1_ = 0x12;
      FUN_00988f20();
      local_8._0_1_ = 0x13;
      uVar5 = FUN_00988f20();
      local_8._0_1_ = 0x14;
      local_14 = (int *)(**(code **)(*local_18 + 0x3c))();
      FUN_00408ed0(uVar5);
      FUN_00a5ecc0();
      if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_ac = 0xf;
      local_b0 = 0;
      local_c0 = local_c0 & 0xffffff00;
      if (0xf < local_138) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_154) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c = local_6c & 0xffffff00;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_e4 = 0xf;
      local_e8 = 0;
      local_f8[0] = local_f8[0] & 0xffffff00;
      if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c8 = 0xf;
      local_cc = 0;
      local_dc = local_dc & 0xffffff00;
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_74 = 0xf;
      local_78 = 0;
      local_88 = local_88 & 0xffffff00;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34 = local_34 & 0xffffff00;
      uVar3 = local_90;
    }
  }
  if (0xf < uVar3) {
    local_8._0_1_ = 0;
    local_3c = 0xf;
    local_40 = 0;
    local_58 = 0xf;
    local_5c = 0;
    local_78 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  local_3c = 0xf;
  local_40 = 0;
  local_58 = 0xf;
  local_5c = 0;
  local_78 = 0;
  local_90 = 0xf;
  local_94 = 0;
  local_a4 = local_a4 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x20;
  piVar2 = *(int **)(param_1 + 0x20);
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x21;
  local_14 = (int *)&stack0xfffffe64;
  FUN_00988bb0(local_f8,1);
  local_8._0_1_ = 0x22;
  uVar5 = FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,0x23);
  (**(code **)(*piVar2 + 0x3c))();
  FUN_00408ed0(uVar5,0);
  FUN_00a5ecc0(uVar5);
  if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c8 = 0xf;
  local_cc = 0;
  local_dc = local_dc & 0xffffff00;
  if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8[0] = local_f8[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  if (local_90 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

