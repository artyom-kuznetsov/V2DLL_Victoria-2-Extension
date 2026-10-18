// FUN_0097ebd0 @ 0097ebd0 body=[[0097ebd0, 0097ec60] [0097ec64, 0097eddb] [0097eddf, 0097ee09] [0097ee0d, 0097ee2c] [0097ee30, 0097ee49] [0097ee4d, 0097ee6c] [0097ee70, 0097ee95] [0097ee99, 0097eeb8] [0097eebc, 0097eed5] [0097eed9, 0097efb5] [0097efb9, 0097efcd]]


undefined1 * FUN_0097ebd0(undefined1 *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  undefined8 uVar6;
  int *piStack_114;
  uint *puStack_110;
  uint local_100 [4];
  undefined4 local_f0;
  uint local_ec;
  uint local_e4;
  undefined4 local_d4;
  uint local_d0;
  uint local_c8 [4];
  undefined4 local_b8;
  uint local_b4;
  uint local_ac;
  undefined4 local_9c;
  uint local_98;
  uint local_90;
  undefined4 local_80;
  uint local_7c;
  uint local_74;
  undefined4 local_64;
  uint local_60;
  undefined1 *local_58;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined4 local_38;
  uint local_34 [3];
  int local_28 [4];
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00baa370;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 1;
  local_8 = 0;
  piStack_114 = *(int **)(in_ECX + 0x2c);
  puStack_110 = local_54;
  local_38 = 1;
  local_14 = in_ECX;
  uVar3 = FUN_0096d650();
  puStack_110 = (uint *)0xffffffff;
  piStack_114 = (int *)0x0;
  local_8 = 1;
  FUN_00408ed0(uVar3);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_40) {
    puStack_110 = (uint *)local_54[0];
                    /* WARNING: Subroutine does not return */
    piStack_114 = (int *)&UNK_0097ec61;
    FUN_00aae91b();
  }
  iVar5 = *(int *)(*(int *)(in_ECX + 0x28) + 100);
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  if (*(int *)(iVar5 + 0x164) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)(iVar5 + 0x15c);
  }
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) + *(int *)(iVar5 + 300) * 0x10) +
                    *(int *)(iVar4 + 0x6c) * 4);
  puStack_110 = (uint *)0x97ecb1;
  cVar2 = (**(code **)(*piVar1 + 0x34))();
  if ((cVar2 != '\0') &&
     (local_18 = *(int *)(piVar1[0x1f] + *(int *)(*(int *)(local_14 + 0x2c) + 0x28) * 4),
     0 < local_18)) {
    puStack_110 = (uint *)0x1;
    piStack_114 = (int *)&DAT_00dee2cc;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 2;
    puStack_110 = (uint *)0x5;
    piStack_114 = (int *)&DAT_00e37044;
    local_28[2] = 0xf;
    local_28[1] = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 3;
    puStack_110 = local_100;
    piStack_114 = (int *)0x97ed25;
    uVar3 = (**(code **)(*piVar1 + 0x18))();
    puStack_110 = (uint *)0x1;
    local_58 = (undefined1 *)&piStack_114;
    local_8._0_1_ = 4;
    uVar6 = __allmul(local_18,local_18 >> 0x1f,100000,0);
    piStack_114 = (int *)__alldiv(uVar6,1000,0);
    puStack_110 = (uint *)FUN_00988a50(local_c8);
    local_8._0_1_ = 5;
    piStack_114 = (int *)0x97ed74;
    FUN_00988fa0();
    puStack_110 = local_34;
    local_8._0_1_ = 6;
    piStack_114 = (int *)0x97ed89;
    FUN_00988f20();
    local_8._0_1_ = 7;
    piStack_114 = (int *)0x97ed9b;
    puStack_110 = (uint *)uVar3;
    FUN_00988f20();
    puStack_110 = local_54;
    local_8._0_1_ = 8;
    piStack_114 = (int *)0x97edb0;
    uVar3 = FUN_00988f20();
    puStack_110 = (uint *)0xffffffff;
    piStack_114 = (int *)0x0;
    local_8._0_1_ = 9;
    FUN_00448aa0(uVar3);
    if (0xf < local_d0) {
      puStack_110 = (uint *)local_e4;
                    /* WARNING: Subroutine does not return */
      piStack_114 = (int *)&UNK_0097eddc;
      FUN_00aae91b();
    }
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4 = local_e4 & 0xffffff00;
    if (0xf < local_98) {
      puStack_110 = (uint *)local_ac;
                    /* WARNING: Subroutine does not return */
      piStack_114 = (int *)&UNK_0097ee0a;
      FUN_00aae91b();
    }
    local_98 = 0xf;
    local_9c = 0;
    local_ac = local_ac & 0xffffff00;
    if (0xf < local_60) {
      puStack_110 = (uint *)local_74;
                    /* WARNING: Subroutine does not return */
      piStack_114 = (int *)&UNK_0097ee2d;
      FUN_00aae91b();
    }
    local_60 = 0xf;
    local_64 = 0;
    local_74 = local_74 & 0xffffff00;
    if (0xf < local_7c) {
      puStack_110 = (uint *)local_90;
                    /* WARNING: Subroutine does not return */
      piStack_114 = (int *)&UNK_0097ee4a;
      FUN_00aae91b();
    }
    local_7c = 0xf;
    local_80 = 0;
    local_90 = local_90 & 0xffffff00;
    if (0xf < local_b4) {
      puStack_110 = (uint *)local_c8[0];
                    /* WARNING: Subroutine does not return */
      piStack_114 = (int *)&UNK_0097ee6d;
      FUN_00aae91b();
    }
    local_b4 = 0xf;
    local_b8 = 0;
    local_c8[0] = local_c8[0] & 0xffffff00;
    if (0xf < local_ec) {
      puStack_110 = (uint *)local_100[0];
                    /* WARNING: Subroutine does not return */
      piStack_114 = (int *)&UNK_0097ee96;
      FUN_00aae91b();
    }
    local_ec = 0xf;
    local_f0 = 0;
    local_100[0] = local_100[0] & 0xffffff00;
    if (0xf < (uint)local_28[2]) {
      puStack_110 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      piStack_114 = (int *)&UNK_0097eeb9;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_28[2] = 0xf;
    local_28[1] = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_40) {
      puStack_110 = (uint *)local_54[0];
                    /* WARNING: Subroutine does not return */
      piStack_114 = (int *)&UNK_0097eed6;
      FUN_00aae91b();
    }
  }
  local_18 = *(int *)(*(int *)(local_14 + 0x28) + 0x68);
  iVar5 = *(int *)(*(int *)(local_14 + 0x2c) + 0x28);
  iVar4 = iVar5 * 0x30 + *(int *)(local_18 + 200);
  if (((*(int *)(iVar4 + 0x24) - *(int *)(iVar4 + 0x20) & 0xfffffffcU) == 0) &&
     ((*(int *)(iVar4 + 0xc) - *(int *)(iVar4 + 8) & 0xfffffff0U) == 0)) {
    iVar5 = iVar5 * 0x30 + *(int *)(local_18 + 0xd8);
    if (((*(int *)(iVar5 + 0x24) - *(int *)(iVar5 + 0x20) & 0xfffffffcU) == 0) &&
       ((*(int *)(iVar5 + 0xc) - *(int *)(iVar5 + 8) & 0xfffffff0U) == 0)) {
      ExceptionList = local_10;
      return param_1;
    }
    puStack_110 = *(uint **)(local_14 + 0x28);
    piStack_114 = local_28;
    FUN_0096d990();
    local_8 = 0xb;
    iVar5 = *(int *)(*(int *)(local_14 + 0x2c) + 0x28);
  }
  else {
    puStack_110 = *(uint **)(local_14 + 0x28);
    piStack_114 = local_28;
    FUN_0096d700();
    local_8 = 10;
    iVar5 = *(int *)(*(int *)(local_14 + 0x2c) + 0x28);
  }
  puStack_110 = (uint *)0xffffffff;
  piStack_114 = (int *)0x0;
  FUN_00448aa0(local_28[0] + iVar5 * 0x1c);
  if (local_28[0] == 0) {
    ExceptionList = local_10;
    return param_1;
  }
  puStack_110 = (uint *)0x97efad;
  FUN_00413860();
  puStack_110 = (uint *)local_28[0];
                    /* WARNING: Subroutine does not return */
  piStack_114 = (int *)&UNK_0097efb6;
  FUN_00aae91b();
}

