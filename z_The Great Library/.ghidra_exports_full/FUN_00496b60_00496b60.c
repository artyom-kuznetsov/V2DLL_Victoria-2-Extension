// FUN_00496b60 @ 00496b60 body=[[00496b60, 00496c45] [00496c49, 00496c64] [00496c68, 00496d1c] [00496d20, 00496d3c] [00496d40, 00496d5b] [00496d5f, 00496dc7] [00496dcb, 00496de6] [00496dea, 00496e49] [00496e4d, 00496e68] [00496e6c, 00496e82] [00496e86, 00496e9b] [00496e9f, 00496ec5] [00496ec9, 00496edb]]


/* WARNING: Removing unreachable block (ram,0x00496dde) */
/* WARNING: Removing unreachable block (ram,0x00496dbf) */

undefined1 * FUN_00496b60(undefined1 *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 in_ECX;
  undefined4 local_a4;
  uint local_90;
  undefined4 local_88;
  uint local_74;
  uint local_68;
  uint local_54;
  uint local_4c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4688f;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_004367c0();
  local_8 = 1;
  FUN_00436780();
  local_8._0_1_ = 2;
  iVar3 = *(int *)(DAT_012586e0 + 0x5c);
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (iVar3 == 1) {
    FUN_00409350(&DAT_00dedc68,1);
    local_8._0_1_ = 3;
    FUN_00988f20(local_30);
    local_8._0_1_ = 4;
    uVar1 = FUN_00988f20(in_ECX);
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_00408ed0(uVar1,0,0xffffffff);
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c);
    }
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68);
    }
    goto joined_r0x00496df6;
  }
  if (iVar3 == 0) {
    FUN_00409350(&DAT_00dedc68,1);
    local_8._0_1_ = 6;
    FUN_00988f20(local_30);
    local_8._0_1_ = 7;
    uVar1 = FUN_00988f20(in_ECX);
    local_8 = CONCAT31(local_8._1_3_,8);
  }
  else {
    FUN_00409350(&DAT_00dedc68,1);
    local_8._0_1_ = 9;
    FUN_00988f20(local_30);
    local_8 = CONCAT31(local_8._1_3_,10);
    pcVar2 = (char *)FUN_00988f20(in_ECX);
    if (0xf < *(uint *)(pcVar2 + 0x14)) {
      pcVar2 = *(char **)pcVar2;
    }
    if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
LAB_00496d0c:
      local_11 = '\0';
    }
    else {
      iVar3 = PHYSFS_exists(pcVar2);
      local_11 = '\x01';
      if (iVar3 == 0) goto LAB_00496d0c;
    }
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68);
    }
    local_54 = 0xf;
    local_68 = local_68 & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c);
    }
    local_8._0_1_ = 2;
    local_38 = 0xf;
    local_4c = local_4c & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00dedc68,1);
    if (local_11 != '\0') {
      local_8._0_1_ = 0xb;
      FUN_00988f20(local_30);
      local_8._0_1_ = 0xc;
      uVar1 = FUN_00988f20(in_ECX);
      local_8 = CONCAT31(local_8._1_3_,0xd);
      FUN_00408ed0(uVar1,0,0xffffffff);
      goto joined_r0x00496df6;
    }
    local_8._0_1_ = 0xe;
    FUN_00988f20(local_30);
    local_8._0_1_ = 0xf;
    uVar1 = FUN_00988f20(in_ECX);
    local_8 = CONCAT31(local_8._1_3_,0x10);
  }
  FUN_00408ed0(uVar1,0,0xffffffff);
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68);
  }
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c);
  }
joined_r0x00496df6:
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88);
  }
  if (local_90 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_a4);
}

