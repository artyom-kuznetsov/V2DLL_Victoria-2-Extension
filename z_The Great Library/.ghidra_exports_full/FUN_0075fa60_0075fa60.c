// FUN_0075fa60 @ 0075fa60 body=[[0075fa60, 0075fbd4] [0075fbd8, 0075fc1c] [0075fc20, 0075fc3b] [0075fc3f, 0075fc5f] [0075fc63, 0075fc89] [0075fc8d, 0075fdbc] [0075fdc0, 0075fe04] [0075fe08, 0075fe23] [0075fe27, 0075fe47] [0075fe4b, 0075fe71] [0075fe75, 0075ffd1] [0075ffd5, 00760025] [00760029, 00760053] [00760057, 00760086] [0076008a, 007600b4] [007600b8, 007600cc]]


void FUN_0075fa60(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int local_124 [2];
  int iStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  uint local_10c [4];
  undefined4 local_fc;
  uint local_f8;
  uint local_f0 [4];
  undefined4 local_e0;
  uint local_dc;
  undefined1 auStack_d8 [4];
  uint local_d4;
  undefined4 local_c4;
  uint local_c0;
  uint uStack_b8;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined1 auStack_a0 [8];
  int iStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  undefined1 auStack_54 [4];
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint uStack_34;
  undefined4 uStack_24;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6d560;
  local_14 = ExceptionList;
  if (*(int *)(in_ECX + 0x16c) == 0) {
    ExceptionList = &local_14;
    *(undefined4 *)(in_ECX + 0x16c) = 2;
  }
  else {
    ExceptionList = &local_14;
    *(int *)(in_ECX + 0x16c) = *(int *)(in_ECX + 0x16c) + -1;
  }
  local_124[0] = in_ECX;
  if (*(int *)(in_ECX + 0x16c) == 0) {
    local_c0 = 0xf;
    local_c4 = 0;
    local_d4 = local_d4 & 0xffffff00;
    FUN_00409350();
    local_c = 0;
    local_f8 = 0xf;
    local_fc = 0;
    local_10c[0] = local_10c[0] & 0xffffff00;
    FUN_00409350();
    local_c._0_1_ = 1;
    local_dc = 0xf;
    local_e0 = 0;
    local_f0[0] = local_f0[0] & 0xffffff00;
    FUN_00409350();
    local_c._0_1_ = 2;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x34c) + 0x6c))(local_f0);
    FUN_009a8ee0(local_124,auStack_d8);
    puStack_10._0_1_ = 3;
    iVar2 = FUN_00475500();
    uVar3 = FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,4);
    (**(code **)(*piVar1 + 0x3c))();
    FUN_00408ed0(uVar3,0,0xffffffff);
    FUN_00a5ecc0();
    if (0xf < uStack_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_b8);
    }
    uStack_a4 = 0xf;
    uStack_a8 = 0;
    uStack_b8 = uStack_b8 & 0xffffff00;
    local_c = CONCAT31(local_c._1_3_,5);
    FUN_009adb70();
    if (iStack_11c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iStack_11c);
    }
    iStack_11c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f0[0]);
    }
    local_dc = 0xf;
    local_e0 = 0;
    local_f0[0] = local_f0[0] & 0xffffff00;
    if (0xf < local_f8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_10c[0]);
    }
    local_c = 0xffffffff;
    local_f8 = 0xf;
    local_fc = 0;
    local_10c[0] = local_10c[0] & 0xffffff00;
    if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_d4);
    }
  }
  iVar2 = local_124[0];
  local_c = 0xffffffff;
  if (*(int *)(local_124[0] + 0x16c) == 1) {
    local_c0 = 0xf;
    local_c4 = 0;
    local_d4 = local_d4 & 0xffffff00;
    FUN_00409350();
    local_c = 6;
    local_dc = 0xf;
    local_e0 = 0;
    local_f0[0] = local_f0[0] & 0xffffff00;
    FUN_00409350();
    local_c._0_1_ = 7;
    local_f8 = 0xf;
    local_fc = 0;
    local_10c[0] = local_10c[0] & 0xffffff00;
    FUN_00409350();
    local_c._0_1_ = 8;
    piVar1 = (int *)(**(code **)(**(int **)(iVar2 + 0x34c) + 0x6c))(local_10c);
    FUN_009a8ee0(local_124,auStack_d8);
    puStack_10._0_1_ = 9;
    iVar2 = FUN_00475500();
    uVar3 = FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,10);
    (**(code **)(*piVar1 + 0x3c))();
    FUN_00408ed0(uVar3,0,0xffffffff);
    FUN_00a5ecc0();
    if (0xf < uStack_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_b8);
    }
    uStack_a4 = 0xf;
    uStack_a8 = 0;
    uStack_b8 = uStack_b8 & 0xffffff00;
    local_c = CONCAT31(local_c._1_3_,0xb);
    FUN_009adb70();
    if (iStack_11c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iStack_11c);
    }
    iStack_11c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    if (0xf < local_f8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_10c[0]);
    }
    local_f8 = 0xf;
    local_fc = 0;
    local_10c[0] = local_10c[0] & 0xffffff00;
    if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f0[0]);
    }
    local_c = 0xffffffff;
    local_dc = 0xf;
    local_e0 = 0;
    local_f0[0] = local_f0[0] & 0xffffff00;
    iVar2 = local_124[0];
    if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_d4);
    }
  }
  local_c = 0xffffffff;
  if (*(int *)(iVar2 + 0x16c) == 2) {
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    FUN_00409350();
    local_c = 0xc;
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    FUN_00409350();
    local_c._0_1_ = 0xd;
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    FUN_00409350();
    local_c._0_1_ = 0xe;
    piVar1 = (int *)(**(code **)(**(int **)(iVar2 + 0x34c) + 0x6c))(local_6c);
    FUN_009a8ee0(auStack_a0,auStack_54);
    puStack_10._0_1_ = 0xf;
    iVar2 = FUN_00475500();
    uVar3 = FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x10);
    (**(code **)(*piVar1 + 0x3c))();
    FUN_00408ed0(uVar3,0,0xffffffff);
    FUN_00a5ecc0();
    if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_34);
    }
    uStack_20 = 0xf;
    uStack_24 = 0;
    uStack_34 = uStack_34 & 0xffffff00;
    local_c = CONCAT31(local_c._1_3_,0x11);
    FUN_009adb70();
    if (iStack_98 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iStack_98);
    }
    iStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_88);
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50);
    }
  }
  ExceptionList = local_14;
  return;
}

