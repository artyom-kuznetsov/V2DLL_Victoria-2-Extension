// FUN_006ea0e0 @ 006ea0e0 body=[[006ea0e0, 006ea2e9] [006ea2ed, 006ea317] [006ea31b, 006ea340] [006ea344, 006ea370] [006ea379, 006ea459] [006ea45d, 006ea487] [006ea48b, 006ea4b0] [006ea4b4, 006ea4e0] [006ea4e9, 006ea588] [006ea58c, 006ea5b6] [006ea5ba, 006ea5d9] [006ea5dd, 006ea5f6] [006ea5fc, 006ea666] [006ea66a, 006ea688] [006ea68c, 006ea6f1] [006ea6f5, 006ea70e] [006ea712, 006ea73c] [006ea740, 006ea77f] [006ea783, 006ea797]]


undefined1 * FUN_006ea0e0(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint local_190;
  uint local_174;
  uint local_164 [4];
  undefined4 local_154;
  uint local_150;
  uint local_148 [4];
  undefined4 local_138;
  uint local_134;
  uint local_12c;
  undefined4 local_11c;
  uint local_118;
  uint local_110;
  undefined4 local_100;
  uint local_fc;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  uint local_d8;
  undefined4 local_c8;
  uint local_c4;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  uint local_a0 [4];
  undefined4 local_90;
  uint local_8c;
  undefined1 local_84 [20];
  uint local_70;
  int local_68;
  int local_64;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b7d927;
  local_10 = ExceptionList;
  local_18 = 0;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  ExceptionList = &local_10;
  if (DAT_0125ce80 == 0) {
    ExceptionList = &local_10;
    local_18 = FUN_00aae9af();
    local_8._0_1_ = 1;
    if (local_18 != 0) {
      FUN_004dada0();
    }
    local_8._0_1_ = 0;
    FUN_004dc340();
  }
  piVar7 = *(int **)(DAT_0125ce80 + 0xc);
  iVar2 = *(int *)(DAT_0125ce80 + 0x10) - (int)piVar7 >> 2;
  iVar6 = 0;
  local_18 = -1;
  iVar4 = local_18;
  if (0 < iVar2) {
    do {
      iVar4 = iVar6;
      if (*(int *)(*piVar7 + 300) == param_3) break;
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
      iVar4 = local_18;
    } while (iVar6 < iVar2);
  }
  local_18 = iVar4;
  FUN_005393c0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4));
  if ((local_68 == 0 && local_64 == 0) || (iVar4 = *(int *)(param_3 + 0x138), iVar4 == 0)) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350();
    if (local_3c < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (iVar4 == 0) {
    FUN_005659c0();
    local_8._0_1_ = 8;
    uVar3 = FUN_00988bb0(local_34,2);
    local_8._0_1_ = 9;
    uVar5 = FUN_0096d650();
    local_8._0_1_ = 10;
    uVar3 = FUN_0043e9a0(local_bc,&DAT_00df7e80,uVar5,"VALUE",uVar3);
    local_8._0_1_ = 0xb;
    FUN_00448aa0(uVar3);
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8 = local_d8 & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else if (iVar4 == 1) {
    if (DAT_0125ce80 == 0) {
      iVar4 = FUN_00aae9af();
      local_8._0_1_ = 0xc;
      if (iVar4 != 0) {
        FUN_004dada0();
      }
      local_8._0_1_ = 0;
      FUN_004dc340();
    }
    piVar7 = *(int **)(*(int *)(DAT_0125ce80 + 0xc) + local_18 * 4);
    FUN_005659c0();
    local_8._0_1_ = 0xd;
    uVar3 = FUN_00988bb0(local_148,2);
    local_8._0_1_ = 0xe;
    uVar5 = (**(code **)(*piVar7 + 0x18))();
    local_8._0_1_ = 0xf;
    uVar3 = FUN_0043e9a0(local_a0,&DAT_00df7e80,uVar5,"VALUE",uVar3);
    local_8._0_1_ = 0x10;
    FUN_00448aa0(uVar3);
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = local_a0[0] & 0xffffff00;
    if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_118 = 0xf;
    local_11c = 0;
    local_12c = local_12c & 0xffffff00;
    if (0xf < local_134) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0;
    local_134 = 0xf;
    local_138 = 0;
    local_148[0] = local_148[0] & 0xffffff00;
    if (0xf < local_174) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else if (iVar4 == 2) {
    FUN_005659c0();
    local_8._0_1_ = 2;
    uVar3 = FUN_00988bb0(local_f4,2);
    local_8._0_1_ = 3;
    uVar1 = (undefined1)local_8;
    local_8._0_1_ = 3;
    if (DAT_0131bb34 == 0) {
      iVar4 = FUN_00aae9af();
      local_8._0_1_ = 4;
      if (iVar4 != 0) {
        FUN_0041a160();
      }
      local_8._0_1_ = 3;
      FUN_00423700();
      uVar1 = (undefined1)local_8;
    }
    local_8._0_1_ = uVar1;
    if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 <
        *(int *)(DAT_0131bb34 + 0x184)) {
      FUN_0096bb70();
    }
    uVar5 = FUN_0096d650();
    local_8._0_1_ = 6;
    uVar3 = FUN_0043e9a0(local_164,&DAT_00df7e80,uVar5,"VALUE",uVar3);
    local_8._0_1_ = 7;
    FUN_00448aa0(uVar3);
    if (0xf < local_150) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_150 = 0xf;
    local_154 = 0;
    local_164[0] = local_164[0] & 0xffffff00;
    if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_fc = 0xf;
    local_100 = 0;
    local_110 = local_110 & 0xffffff00;
    if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0;
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    if (0xf < local_190) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  FUN_00448740();
  FUN_00988bb0(local_84,2);
  local_8._0_1_ = 0x11;
  uVar3 = FUN_0042c180();
  local_8._0_1_ = 0x12;
  FUN_00448aa0(uVar3);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_00448740();
  FUN_00988bb0(local_84,2);
  local_8._0_1_ = 0x13;
  uVar3 = FUN_0042c180();
  local_8._0_1_ = 0x14;
  FUN_00448aa0(uVar3);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (local_70 < 0x10) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00408ed0(local_50);
    if (local_3c < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

