// FUN_007d4480 @ 007d4480 body=[[007d4480, 007d46f5] [007d46fb, 007d4734] [007d4738, 007d48da] [007d48de, 007d49c6] [007d49ca, 007d49f1] [007d49f5, 007d4a10] [007d4a14, 007d4a2f] [007d4a33, 007d4a54] [007d4a58, 007d4a82] [007d4a86, 007d4a9a]]


undefined4 *
FUN_007d4480(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  char ****ppppcVar4;
  int iVar5;
  undefined4 in_ECX;
  uint uVar6;
  uint uVar7;
  undefined4 in_EDX;
  uint uVar8;
  float10 fVar9;
  uint local_e8;
  undefined **local_e0 [10];
  uint local_b8;
  int local_b0;
  double local_a4;
  uint local_9c;
  undefined4 local_8c;
  uint local_88;
  uint local_80;
  undefined4 local_70;
  uint local_6c;
  uint local_64;
  undefined4 local_54;
  uint local_50;
  uint local_48;
  undefined4 local_38;
  uint local_34;
  char ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b59640;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = param_3;
  *param_1 = CBorderManager::vftable;
  param_1[2] = in_ECX;
  param_1[3] = in_EDX;
  param_1[4] = param_4;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  iVar5 = DAT_0125870c;
  local_8 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = iVar5;
  uVar3 = *(undefined4 *)(iVar5 + 0x2ac0);
  param_1[0x12] = *(undefined4 *)(iVar5 + 0x2abc);
  param_1[0x13] = uVar3;
  uVar3 = FUN_00aad56b();
  param_1[0x14] = uVar3;
  param_1[0x15] = param_2;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  local_8._0_1_ = 4;
  uVar7 = *(uint *)(param_1[0xe] + 0x2abc);
  param_1[0xb] = uVar7;
  uVar1 = *(uint *)(param_1[0xe] + 0x2ac0);
  uVar6 = 1;
  param_1[0xc] = uVar1;
  uVar8 = uVar6;
  if (1 < uVar7) {
    do {
      uVar8 = 0;
      if (uVar6 == 0) break;
      uVar6 = uVar6 * 2;
      uVar8 = uVar6;
    } while (uVar6 < uVar7);
  }
  uVar6 = 1;
  param_1[5] = uVar8;
  uVar7 = uVar6;
  if (1 < uVar1) {
    do {
      uVar7 = 0;
      if (uVar6 == 0) break;
      uVar6 = uVar6 * 2;
      uVar7 = uVar6;
    } while (uVar6 < uVar1);
  }
  param_1[6] = uVar7;
  param_1[0xd] = (float)(param_1[1] + -1);
  FUN_00436780();
  local_8._0_1_ = 5;
  FUN_004367c0();
  local_8 = CONCAT31(local_8._1_3_,6);
  if (*(int *)(DAT_012586e0 + 0x4c) == 1) {
    FUN_00408ed0();
  }
  FUN_0068f390();
  *(bool *)(param_1 + 0x16) = 0x1ff < *(int *)(*(int *)(param_1[0x15] + 0x6bc48) + 0x2c);
  param_1[0x10] = *(int *)(param_1[0xe] + 0x2abc) + 1;
  param_1[0x11] = *(int *)(param_1[0xe] + 0x2ac0) + 1;
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af();
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  fVar9 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  local_a4 = (double)fVar9;
  FUN_00436780();
  local_8._0_1_ = 7;
  FUN_004367c0();
  local_8._0_1_ = 8;
  iVar5 = *(int *)(DAT_012586e0 + 0x5c);
  if (iVar5 == 1) {
    FUN_00408ed0();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
  FUN_00409350();
  local_8._0_1_ = 9;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 9;
  if (iVar5 == 2) {
    local_8._0_1_ = uVar2;
    FUN_00436de0();
    local_8._0_1_ = 0xb;
    FUN_00408ed0();
    local_8._0_1_ = 9;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    FUN_00988f20();
    local_8._0_1_ = 10;
    FUN_00408ed0();
    local_8._0_1_ = 9;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8._0_1_ = 9;
  uVar3 = FUN_00aad56b();
  param_1[0xf] = uVar3;
  if (*(char *)(param_1[0xe] + 0x28) == '\0') {
    if (local_18 < 0x10) {
      ppppcVar4 = local_2c;
    }
    else {
      ppppcVar4 = (char ****)local_2c[0];
      if ((char ****)local_2c[0] == (char ****)0x0) goto LAB_007d47d9;
    }
    if ((*(char *)ppppcVar4 != '\0') && (iVar5 = PHYSFS_exists(), iVar5 != 0)) {
      FUN_00409350(&DAT_00ded94d);
      FUN_00992740(local_e0,local_2c);
      local_8._0_1_ = 0xc;
      FUN_00992f20();
      local_8 = CONCAT31(local_8._1_3_,9);
      FUN_00992d60();
      goto LAB_007d48de;
    }
  }
LAB_007d47d9:
  uVar3 = FUN_00aad56b();
  param_1[0x18] = uVar3;
  uVar3 = FUN_00aad56b();
  param_1[0x19] = uVar3;
  _memset((void *)param_1[0x18],0,param_1[0x11] * param_1[0x10]);
  _memset((void *)param_1[0x19],0,param_1[0x11] * param_1[0x10]);
  FUN_007d4b70();
  FUN_00409350(&DAT_00ded94d,0);
  FUN_00992740(local_e0,local_2c,1);
  local_8._0_1_ = 0xd;
  FUN_00993720();
  FUN_00aaea59();
  FUN_00aaea59();
  local_8 = CONCAT31(local_8._1_3_,9);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  local_e0[0] = &PTR_FUN_00e37dc0;
  if (local_b0 != 0) {
    PHYSFS_close();
    local_b0 = 0;
  }
  local_e0[0] = &PTR_FUN_00e3b540;
  if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_007d48de:
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xe;
  FUN_004015b0();
  local_8._0_1_ = 0xf;
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af();
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  (**(code **)(*DAT_01258a8c + 0x14))();
  FUN_00987d20();
  FUN_0048c130();
  FUN_00418e30();
  FUN_00401280();
  local_8._0_1_ = 0xe;
  FUN_00987ac0();
  FUN_00aad52d();
  local_8 = CONCAT31(local_8._1_3_,9);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_007d8500();
  FUN_007d85d0();
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
  if (local_6c < 0x10) {
    local_6c = 0xf;
    local_70 = 0;
    local_80 = local_80 & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    if (local_88 < 0x10) {
      local_88 = 0xf;
      local_8c = 0;
      local_9c = local_9c & 0xffffff00;
      if (local_e8 < 0x10) {
        ExceptionList = local_10;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

