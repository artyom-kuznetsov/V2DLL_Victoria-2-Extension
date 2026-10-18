// FUN_0040d430 @ 0040d430 body=[[0040d430, 0040d531] [0040d535, 0040d55e] [0040d562, 0040d5f6] [0040d5fa, 0040d613] [0040d617, 0040d634] [0040d638, 0040d6ac] [0040d6b0, 0040d6c9] [0040d6cd, 0040d6e7] [0040d6eb, 0040d706] [0040d70d, 0040d770] [0040d774, 0040d793] [0040d797, 0040d7b3] [0040d7b7, 0040d7dc] [0040d7e0, 0040d7f2]]


void FUN_0040d430(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_114 [5];
  uint local_100;
  uint local_f8;
  undefined4 local_e8;
  uint local_e4;
  uint local_dc [4];
  undefined4 local_cc;
  uint local_c8;
  uint local_c0;
  undefined4 local_b0;
  uint local_ac;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b60c78;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004367c0();
  local_8 = 0;
  FUN_00436780();
  local_8._0_1_ = 1;
  local_18 = *(int *)(DAT_012586e0 + 0x80);
  if (local_18 == 1) {
    FUN_00408ed0(local_114,0,0xffffffff);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("bp_settings.txt",0xf);
  local_8._0_1_ = 2;
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  FUN_00409350(&DAT_00dedc68,1);
  local_8._0_1_ = 3;
  FUN_00988f20(local_a4);
  local_8._0_1_ = 4;
  FUN_00988f20(local_50);
  if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_f8);
  }
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8 = local_f8 & 0xffffff00;
  local_8._0_1_ = 7;
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a4[0]);
  }
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  if (local_18 != 2) goto LAB_0040d6eb;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350(&DAT_00dedc68,1);
  local_8._0_1_ = 8;
  FUN_00988f20(local_34);
  local_8 = CONCAT31(local_8._1_3_,9);
  pcVar1 = (char *)FUN_00988f20(local_50);
  if (0xf < *(uint *)(pcVar1 + 0x14)) {
    pcVar1 = *(char **)pcVar1;
  }
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
LAB_0040d5e6:
    local_11 = '\0';
  }
  else {
    iVar2 = PHYSFS_exists(pcVar1);
    local_11 = '\x01';
    if (iVar2 == 0) goto LAB_0040d5e6;
  }
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c);
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88);
  }
  local_8._0_1_ = 7;
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  if (local_11 != '\0') {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350(&DAT_00dedc68,1);
    local_8._0_1_ = 10;
    FUN_00988f20(local_34);
    local_8._0_1_ = 0xb;
    uVar3 = FUN_00988f20(local_50);
    local_8._0_1_ = 0xc;
    FUN_00408ed0(uVar3,0,0xffffffff);
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_88);
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c);
    }
    local_8._0_1_ = 7;
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
LAB_0040d6eb:
  local_8._0_1_ = 7;
  iVar2 = *(int *)(param_1 + 0x398);
  if (iVar2 != 0) {
    FUN_00413e10();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar2);
  }
  iVar2 = FUN_00aae9af(0x10c);
  local_8._0_1_ = 0xd;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00413cc0(iVar2,param_1);
  }
  local_8 = CONCAT31(local_8._1_3_,7);
  *(undefined4 *)(param_1 + 0x398) = uVar3;
  FUN_00413f50(uVar3,local_dc);
  FUN_00414a90();
  if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_dc[0]);
  }
  local_c8 = 0xf;
  local_cc = 0;
  local_dc[0] = local_dc[0] & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c0);
  }
  local_ac = 0xf;
  local_b0 = 0;
  local_c0 = local_c0 & 0xffffff00;
  if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_114[0]);
  }
  ExceptionList = local_10;
  return;
}

