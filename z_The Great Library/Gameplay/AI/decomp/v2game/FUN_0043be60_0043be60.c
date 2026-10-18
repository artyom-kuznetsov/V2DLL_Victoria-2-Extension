// FUN_0043be60 @ 0043be60 body=[[0043be60, 0043bf80] [0043bf84, 0043bfae] [0043bfb2, 0043bfd1] [0043bfd5, 0043c065] [0043c069, 0043c094] [0043c098, 0043c0bc] [0043c0c0, 0043c13c] [0043c140, 0043c16a] [0043c16e, 0043c18d] [0043c191, 0043c202] [0043c206, 0043c230] [0043c234, 0043c253] [0043c257, 0043c273] [0043c277, 0043c29e] [0043c2a2, 0043c2b2]]


void FUN_0043be60(undefined4 param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  undefined4 local_198 [5];
  uint local_184;
  uint local_17c;
  undefined4 local_16c;
  uint local_168;
  uint local_160;
  undefined4 local_150;
  uint local_14c;
  uint local_144;
  undefined4 local_134;
  uint local_130;
  uint local_128;
  undefined4 local_118;
  uint local_114;
  uint local_10c;
  undefined4 local_fc;
  uint local_f8;
  uint local_f0;
  undefined4 local_e0;
  uint local_dc;
  uint local_d4;
  undefined4 local_c4;
  uint local_c0;
  uint local_b8;
  undefined4 local_a8;
  uint local_a4;
  uint local_9c;
  undefined4 local_8c;
  uint local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b53d23;
  local_10 = ExceptionList;
  if (param_2 != 0x19) {
    ExceptionList = &local_10;
    FUN_009c6f50(param_1,param_2);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  FUN_004367c0();
  local_8 = 0;
  FUN_00436780();
  local_8._0_1_ = 1;
  iVar4 = *(int *)(DAT_012586e0 + 0x60);
  if (iVar4 == 1) {
    FUN_00408ed0(local_198,0,0xffffffff);
  }
  iVar5 = in_ECX + 0x24;
  FUN_009a1750(iVar5,0);
  if (iVar4 != 2) {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350(&DAT_00dedc68,1);
    local_8._0_1_ = 2;
    FUN_00988f20(local_48);
    local_8._0_1_ = 3;
    uVar2 = FUN_00988f20(iVar5);
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_00408ed0(uVar2,0,0xffffffff);
    if (0xf < local_130) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_144);
    }
    local_130 = 0xf;
    local_134 = 0;
    local_144 = local_144 & 0xffffff00;
    if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_b8);
    }
    local_a4 = 0xf;
    local_a8 = 0;
    local_b8 = local_b8 & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    goto LAB_0043c260;
  }
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  FUN_00409350(&DAT_00df8158,2);
  local_8._0_1_ = 5;
  FUN_00988f20(local_80);
  local_8 = CONCAT31(local_8._1_3_,6);
  pcVar3 = (char *)FUN_00988f20(iVar5);
  if (0xf < *(uint *)(pcVar3 + 0x14)) {
    pcVar3 = *(char **)pcVar3;
  }
  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
LAB_0043c04f:
    bVar1 = false;
  }
  else {
    iVar4 = PHYSFS_exists(pcVar3);
    bVar1 = true;
    if (iVar4 == 0) goto LAB_0043c04f;
  }
  if (0xf < local_f8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_10c);
  }
  local_f8 = 0xf;
  local_fc = 0;
  local_10c = local_10c & 0xffffff00;
  if (0xf < local_168) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_17c);
  }
  local_8._0_1_ = 1;
  local_168 = 0xf;
  local_16c = 0;
  local_17c = local_17c & 0xffffff00;
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_80[0]);
  }
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  if (bVar1) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dedc68,1);
    local_8._0_1_ = 7;
    FUN_00988f20(local_2c);
    local_8._0_1_ = 8;
    uVar2 = FUN_00988f20(iVar5);
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_00408ed0(uVar2,0,0xffffffff);
    if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_d4);
    }
    local_c0 = 0xf;
    local_c4 = 0;
    local_d4 = local_d4 & 0xffffff00;
    if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f0);
    }
    local_dc = 0xf;
    local_e0 = 0;
    local_f0 = local_f0 & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
  }
  else {
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350(&DAT_00dedc68,1);
    local_8._0_1_ = 10;
    FUN_00988f20(local_64);
    local_8._0_1_ = 0xb;
    uVar2 = FUN_00988f20(iVar5);
    local_8 = CONCAT31(local_8._1_3_,0xc);
    FUN_00408ed0(uVar2,0,0xffffffff);
    if (0xf < local_114) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_128);
    }
    local_114 = 0xf;
    local_118 = 0;
    local_128 = local_128 & 0xffffff00;
    if (0xf < local_14c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_160);
    }
    local_14c = 0xf;
    local_150 = 0;
    local_160 = local_160 & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
  }
LAB_0043c260:
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_9c);
  }
  local_8c = 0;
  local_9c = local_9c & 0xffffff00;
  local_88 = 0xf;
  if (0xf < local_184) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_198[0]);
  }
  ExceptionList = local_10;
  return;
}

