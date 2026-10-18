// FUN_00769670 @ 00769670 body=[[00769670, 00769736] [0076973a, 007698bc] [007698c0, 00769905] [00769909, 007699b3] [007699b7, 007699dc] [007699e0, 00769a07] [00769a0b, 00769a2c] [00769a30, 00769a4c] [00769a50, 00769bd9] [00769bdd, 00769ca4] [00769ca8, 00769ccb] [00769ccf, 00769d8c] [00769d90, 00769de2] [00769de6, 00769e7d] [00769e81, 00769e8f] [00769e93, 00769ead]]


/* WARNING: Removing unreachable block (ram,0x00769d25) */
/* WARNING: Removing unreachable block (ram,0x00769d84) */

void FUN_00769670(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int local_440;
  char local_234 [256];
  undefined1 local_134;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_108;
  undefined4 local_104;
  uint local_100;
  undefined4 local_f0;
  uint local_ec;
  uint local_e4;
  undefined4 local_d4;
  uint local_d0;
  undefined1 local_c8;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_ac [28];
  uint local_90;
  undefined4 local_80;
  uint local_7c;
  uint local_74;
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7bacf;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xfffffb90;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  ExceptionList = &pvStack_10;
  FUN_00409350();
  local_8 = 0;
  piVar4 = *(int **)(DAT_012588e8 + 0xb24);
  local_38 = (**(code **)(*piVar4 + 0x3c))();
  piVar4 = (int *)(**(code **)(*piVar4 + 0x34))();
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = &PTR_FUN_00e39158;
  local_8._0_1_ = 4;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar5 = (**(code **)(*piVar4 + 0x2c))();
  param_1[8] = uVar5;
  local_8._0_1_ = 6;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puVar7 = param_1 + 10;
  *param_1 = CSavegameItem::vftable;
  param_1[7] = CSavegameItem::vftable;
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  *(undefined1 *)puVar7 = 0;
  FUN_00408ed0();
  param_1[0x12] = 0;
  local_3c = 0x2d2d2d;
  param_1[0x11] = 0x2d2d2d;
  param_1[0x13] = 43800000;
  param_1[0x13] = DAT_01259abc;
  param_1[0x14] = param_3;
  FUN_00779930(&LAB_0077a0a0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 8;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  local_b4 = 0xf;
  local_b8 = 0;
  local_c8 = 0;
  FUN_00408ed0();
  local_8._0_1_ = 9;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 9;
  iVar6 = param_1[0xe];
  if (3 < iVar6) {
    puVar9 = puVar7;
    if (0xf < (uint)param_1[0xf]) {
      puVar9 = (undefined4 *)*puVar7;
    }
    uVar3 = (undefined1)local_8;
    if (*(char *)((int)puVar9 + iVar6 + -3) == '.') {
      puVar9 = puVar7;
      if (0xf < (uint)param_1[0xf]) {
        puVar9 = (undefined4 *)*puVar7;
      }
      if (*(char *)((int)puVar9 + iVar6 + -2) == 'v') {
        if (0xf < (uint)param_1[0xf]) {
          puVar7 = (undefined4 *)*puVar7;
        }
        if (*(char *)((int)puVar7 + iVar6 + -1) == '2') {
          FUN_009895f0();
          local_8._0_1_ = 10;
          FUN_00408ed0();
          local_8._0_1_ = 9;
          FUN_00408ad0();
          uVar3 = (undefined1)local_8;
        }
      }
    }
  }
  local_8._0_1_ = uVar3;
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xb;
  (**(code **)(*(int *)param_1[8] + 0x38))();
  FUN_009e7500();
  local_8._0_1_ = 9;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_00988fa0();
  local_8._0_1_ = 0xc;
  FUN_00475500();
  iVar6 = FUN_0040b410();
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_7c = 0xf;
  local_80 = 0;
  local_90 = local_90 & 0xffffff00;
  if (*(int *)(iVar6 + 0x10) != 0) {
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xd;
    FUN_00475500();
    FUN_0040b410();
    local_8._0_1_ = 0xe;
    FUN_00988fa0();
    local_8._0_1_ = 0xf;
    FUN_00988f20();
    local_8._0_1_ = 0x10;
    FUN_00988f20();
    local_8._0_1_ = 0x11;
    FUN_00408ed0();
    if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4 = local_e4 & 0xffffff00;
    if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ec = 0xf;
    local_f0 = 0;
    local_100 = local_100 & 0xffffff00;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0xc;
    local_60 = 0xf;
    local_64 = 0;
    local_74 = local_74 & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
  }
  if (DAT_00f20c18 == (int *)0x0) {
    DAT_00f20c18 = (int *)FUN_00aae9af();
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  (**(code **)(*DAT_00f20c18 + 0x30))();
  local_8._0_1_ = 0x12;
  iVar6 = FUN_00aae9af();
  local_8._0_1_ = 0x13;
  if (iVar6 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_00409350(&DAT_00ded94d,0);
    uVar5 = FUN_00992740(iVar6,local_ac,0);
  }
  local_8._0_1_ = 0x12;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x14;
  puVar7 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x15;
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = uVar5;
    *puVar7 = &PTR_FUN_00e37c30;
    *(undefined2 *)(puVar7 + 0x44) = 0x100;
    FUN_00990100();
    *puVar7 = &PTR_FUN_00e37c3c;
  }
  local_8._0_1_ = 0x16;
  local_120 = 0xf;
  local_124 = 0;
  local_134 = 0;
  FUN_00408ed0();
  local_118 = 0;
  local_114 = 0;
  local_110 = 0;
  local_108 = 1;
  local_104 = 0;
  local_8._0_1_ = 0x18;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  FUN_009a1440();
  pcVar8 = local_234;
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  local_8._0_1_ = 0x19;
  FUN_00408ed0(local_58,0,0xffffffff);
  FUN_0043bb10();
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x1a;
  piVar4 = (int *)param_1[8];
  FUN_0043b700();
  local_8._0_1_ = 0x1b;
  (**(code **)(*piVar4 + 0x38))();
  FUN_009e7500();
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x19;
  local_60 = 0xf;
  local_64 = 0;
  local_74 = local_74 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_009a1440();
  if (local_440 == 0x484) {
    puVar7 = (undefined4 *)FUN_0055c6c0();
    param_1[0x11] = *puVar7;
    param_1[0x12] = puVar7[1];
    FUN_009a1440();
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x1d;
    piVar4 = (int *)(**(code **)(*(int *)param_1[8] + 0x34))();
    (**(code **)(*piVar4 + 0xd4))();
    local_8._0_1_ = 0x19;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    FUN_00409350();
    local_8 = CONCAT31(local_8._1_3_,0x1e);
    iVar6 = (**(code **)(*(int *)param_1[8] + 0x34))();
    (**(code **)(*(int *)(iVar6 + 0x54) + 4))();
    uVar2 = local_20;
  }
  else {
    local_7c = 0xf;
    local_80 = 0;
    local_90 = local_90 & 0xffffff00;
    FUN_00409350();
    local_8 = CONCAT31(local_8._1_3_,0x1f);
    piVar4 = (int *)(**(code **)(*(int *)param_1[8] + 0x34))();
    (**(code **)(*piVar4 + 0xd4))();
    uVar2 = local_7c;
  }
  if (0xf < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (local_44 < 0x10) {
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
    local_8 = CONCAT31(local_8._1_3_,0x12);
    FUN_009a0dc0();
    FUN_00769eb7();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

