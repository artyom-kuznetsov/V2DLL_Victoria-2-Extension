// FUN_0041b670 @ 0041b670 body=[[0041b670, 0041b7c7] [0041b7cb, 0041b7e9] [0041b7f2, 0041b9a7] [0041b9ab, 0041b9cf] [0041b9d3, 0041b9f8] [0041b9fc, 0041ba21] [0041ba25, 0041ba4a] [0041ba4e, 0041ba73] [0041ba77, 0041ba9c] [0041baa0, 0041bac5] [0041bac9, 0041bae8] [0041baec, 0041bb02] [0041bb06, 0041bb19] [0041bb1d, 0041bb30]]


undefined1 * FUN_0041b670(undefined1 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint local_140;
  uint local_124;
  uint local_11c [4];
  undefined4 local_10c;
  uint local_108;
  uint local_100;
  undefined4 local_f0;
  uint local_ec;
  uint local_e4;
  undefined4 local_d4;
  uint local_d0;
  uint local_c8;
  undefined4 local_b8;
  uint local_b4;
  uint local_ac;
  undefined4 local_9c;
  uint local_98;
  uint local_90;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_74;
  undefined1 local_70 [4];
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b82f5f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  local_30 = 1;
  if ((param_2[1] - *param_2) / 0x1c < 1) {
    *param_1 = 0;
    FUN_00409350();
    ExceptionList = local_10;
    return param_1;
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  FUN_00408ed0(*param_2);
  local_8 = 1;
  if (DAT_0125eadc == 0) {
    iVar2 = FUN_00aae9af();
    local_8._0_1_ = 2;
    if (iVar2 != 0) {
      FUN_00576fe0();
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0057ab10();
  }
  piVar3 = (int *)FUN_0057b0a0();
  cVar1 = (**(code **)(*piVar3 + 0x20))();
  if (cVar1 == '\0') {
    *param_1 = 0;
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 3;
    uVar4 = FUN_00988f20();
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_00408ed0(uVar4);
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    iVar2 = FUN_00aae9af();
    local_8._0_1_ = 5;
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_0058ad00(iVar2,*(undefined4 *)(DAT_012588e8 + 0xb5c));
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    cVar1 = (**(code **)(*piVar3 + 0x38))();
    if (cVar1 == '\0') {
      *param_1 = 0;
      FUN_00409350();
    }
    else {
      (**(code **)(*piVar3 + 0x18))();
    }
    (**(code **)*piVar3)();
    local_74 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    iVar2 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) +
                    0x4c4);
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    FUN_00409350(" ETA: ");
    local_8._0_1_ = 6;
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    FUN_00409350(" at cost: ");
    local_8._0_1_ = 7;
    piVar3 = *(int **)(iVar2 + 0x24);
    uVar4 = FUN_0057a230(iVar2,local_70);
    local_34 = FUN_0043acd0(uVar4);
    local_8._0_1_ = 8;
    FUN_00988970(local_11c);
    local_8._0_1_ = 9;
    (**(code **)(*piVar3 + 0x18))();
    local_8._0_1_ = 10;
    FUN_00988fa0();
    local_8._0_1_ = 0xb;
    FUN_00988f20();
    local_8._0_1_ = 0xc;
    FUN_00988f20();
    local_8._0_1_ = 0xd;
    FUN_00988f20();
    local_8._0_1_ = 0xe;
    uVar4 = FUN_00988f20();
    local_8 = CONCAT31(local_8._1_3_,0xf);
    FUN_00408ed0(uVar4);
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_7c = 0xf;
    local_80 = 0;
    local_90 = local_90 & 0xffffff00;
    if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b4 = 0xf;
    local_b8 = 0;
    local_c8 = local_c8 & 0xffffff00;
    if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ec = 0xf;
    local_f0 = 0;
    local_100 = local_100 & 0xffffff00;
    if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = 0xf;
    local_9c = 0;
    local_ac = local_ac & 0xffffff00;
    if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4 = local_e4 & 0xffffff00;
    if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_108 = 0xf;
    local_10c = 0;
    local_11c[0] = local_11c[0] & 0xffffff00;
    if (0xf < local_140) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *param_1 = 1;
  }
  if (local_58 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

