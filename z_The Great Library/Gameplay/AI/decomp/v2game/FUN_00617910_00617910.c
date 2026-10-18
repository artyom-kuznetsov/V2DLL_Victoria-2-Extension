// FUN_00617910 @ 00617910 body=[[00617910, 00617968] [00617970, 00617a1a] [00617a1e, 00617a9e] [00617aa2, 00617b1b] [00617b1f, 00617ba4] [00617ba8, 00617bd5] [00617bd9, 00617c33] [00617c37, 00617c94] [00617c98, 00617d3a] [00617d3e, 00617da7] [00617dab, 00617e05] [00617e09, 00617e7b] [00617e7f, 00617f0e] [00617f12, 00617f81] [00617f85, 00617fe2] [00617fe6, 00618054] [00618058, 006181f0] [006181f4, 0061823e] [00618244, 00618261] [00618267, 00618287] [0061828d, 006182b9] [006182bf, 00618374] [00618378, 006183b6] [006183ba, 00618404]]


/* WARNING: Removing unreachable block (ram,0x00618267) */
/* WARNING: Removing unreachable block (ram,0x0061827e) */
/* WARNING: Removing unreachable block (ram,0x0061828d) */
/* WARNING: Removing unreachable block (ram,0x006182b0) */
/* WARNING: Removing unreachable block (ram,0x006182bf) */
/* WARNING: Removing unreachable block (ram,0x0061830d) */
/* WARNING: Removing unreachable block (ram,0x00618305) */
/* WARNING: Removing unreachable block (ram,0x00618316) */
/* WARNING: Removing unreachable block (ram,0x00618368) */
/* WARNING: Removing unreachable block (ram,0x00618378) */
/* WARNING: Removing unreachable block (ram,0x006183aa) */
/* WARNING: Removing unreachable block (ram,0x006183ba) */
/* WARNING: Removing unreachable block (ram,0x00617970) */
/* WARNING: Removing unreachable block (ram,0x00617dfc) */
/* WARNING: Removing unreachable block (ram,0x00617d31) */
/* WARNING: Removing unreachable block (ram,0x00617c2a) */
/* WARNING: Removing unreachable block (ram,0x00618048) */
/* WARNING: Removing unreachable block (ram,0x00617e6f) */
/* WARNING: Removing unreachable block (ram,0x00617bcc) */
/* WARNING: Removing unreachable block (ram,0x00617c8b) */
/* WARNING: Removing unreachable block (ram,0x00617d9e) */
/* WARNING: Removing unreachable block (ram,0x00617f75) */
/* WARNING: Removing unreachable block (ram,0x00617a0e) */

void FUN_00617910(int param_1)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uStack_168;
  uint uStack_160;
  uint uStack_74;
  char local_54 [20];
  undefined1 uStack_40;
  undefined3 uStack_3f;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  uVar8 = DAT_012588e8 + 0xbe0;
  if (*(int *)(DAT_012588e8 + 0xbe4) - *(int *)(DAT_012588e8 + 0xbe0) >> 2 < 1) {
    return;
  }
  puStack_10 = &LAB_00b8cabf;
  local_14 = ExceptionList;
  local_c = 0;
  ExceptionList = &local_14;
  pcVar2 = __itoa(0,local_54,10);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  local_c = 1;
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x6c))();
  puStack_10 = (undefined1 *)0xffffffff;
  FUN_00409350();
  puStack_10 = (undefined1 *)0x2;
  piVar4 = (int *)(**(code **)(*piVar3 + 0x34))();
  (**(code **)(*piVar4 + 0xd4))();
  uStack_18 = 0xffffffff;
  if (0xf < uStack_160) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_00409350();
  uStack_18 = 3;
  piVar4 = (int *)(**(code **)(*piVar3 + 0x34))();
  piVar4 = (int *)(**(code **)(*piVar4 + 0xec))();
  iVar10 = *piVar4;
  FUN_0052fc10();
  (**(code **)(iVar10 + 0x150))();
  uStack_20 = 0xffffffff;
  if (0xf < uStack_168) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_00409350();
  uStack_20 = 4;
  FUN_004f97a0();
  uStack_20 = CONCAT31(uStack_20._1_3_,5);
  (**(code **)(*piVar3 + 0x3c))();
  FUN_00408ed0();
  FUN_00a5ecc0();
  if (0xf < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_24 = 0xffffffff;
  FUN_00409350();
  uStack_24 = 6;
  piVar4 = (int *)(**(code **)(*piVar3 + 0x44))();
  (**(code **)(*piVar4 + 0x38))();
  uStack_28 = 0xffffffff;
  FUN_00409350();
  uStack_28 = 7;
  piVar4 = (int *)(**(code **)(*piVar3 + 0x44))();
  (**(code **)(*piVar4 + 0x104))();
  uStack_2c = 0xffffffff;
  if (*(int *)(*(int *)(iRam00000bf7 + *(int *)(*(int *)(param_1 + 0x6c) + 0x14) * 4) + 0x90) <
      *(int *)(DAT_012588e8 + 0xb0c)) {
    FUN_00409350();
    uStack_2c = 10;
    piVar4 = (int *)(**(code **)(*piVar3 + 0x44))();
    (**(code **)(*piVar4 + 0x38))();
    uStack_30 = 0xffffffff;
    FUN_00409350();
    uStack_30 = 0xb;
    piVar4 = (int *)(**(code **)(*piVar3 + 0x44))();
    (**(code **)(*piVar4 + 0x104))();
  }
  else {
    FUN_00409350();
    uStack_2c = 8;
    piVar4 = (int *)(**(code **)(*piVar3 + 0x44))();
    (**(code **)(*piVar4 + 0x108))();
    uStack_30 = 0xffffffff;
    FUN_00409350();
    uStack_30 = 9;
    piVar4 = (int *)(**(code **)(*piVar3 + 0x44))();
    (**(code **)(*piVar4 + 0x34))();
  }
  uStack_34 = 0xffffffff;
  iVar10 = 0xf;
  uVar8 = 0;
  if (iRam000000ab < *(int *)(DAT_012588e8 + 0xb0c)) {
    FUN_00409350();
    uStack_34 = 0xe;
    piVar4 = (int *)(**(code **)(*piVar3 + 0x44))();
    (**(code **)(*piVar4 + 0x38))();
    uStack_38 = 0xffffffff;
    if (0xf < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00409350();
    uStack_38 = 0xf;
    piVar4 = (int *)(**(code **)(*piVar3 + 0x44))();
    (**(code **)(*piVar4 + 0x104))();
  }
  else {
    FUN_00409350();
    uStack_34 = 0xc;
    piVar4 = (int *)(**(code **)(*piVar3 + 0x44))();
    (**(code **)(*piVar4 + 0x108))();
    uStack_38 = 0xffffffff;
    if (0xf < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00409350();
    uStack_38 = 0xd;
    piVar4 = (int *)(**(code **)(*piVar3 + 0x44))();
    (**(code **)(*piVar4 + 0x34))();
  }
  uStack_3c = 0xffffffff;
  iVar5 = 1;
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar10 + 0xc) * 4) + 0x31) == '\0') {
    iVar5 = *(int *)(iVar10 + 0x40);
  }
  pcVar2 = (&PTR_s_REL_HOSTILE_00f09158)[iVar5];
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  uStack_3c = 0x10;
  FUN_00409350();
  uStack_3c._0_1_ = 0x11;
  FUN_009a8ee0();
  uStack_3c._0_1_ = 0x12;
  puVar6 = DAT_0125b5e0;
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    iVar10 = FUN_00aae9af();
    uStack_3c._0_1_ = 0x13;
    if (iVar10 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)FUN_00475150();
    }
    uStack_3c._0_1_ = 0x14;
    if ((puVar6 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0125b5e0)();
    }
  }
  DAT_0125b5e0 = puVar6;
  uStack_3c._0_1_ = 0x12;
  uVar7 = FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b));
  uStack_3c = CONCAT31(uStack_3c._1_3_,0x15);
  (**(code **)(*piVar3 + 0x3c))();
  FUN_00408ed0(uVar7);
  FUN_00a5ecc0();
  if (uStack_74 < 0x10) {
    _uStack_40 = CONCAT31(uStack_3f,0x16);
    FUN_009adb70();
    puVar9 = (undefined1 *)0xf;
    do {
      if (0xf < *(uint *)(puVar9 + 0x14)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      *(undefined4 *)(puVar9 + 0x14) = 0xf;
      *(undefined4 *)(puVar9 + 0x10) = 0;
      *puVar9 = 0;
      puVar9 = puVar9 + 0x20;
    } while (puVar9 != (undefined1 *)0x0);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

