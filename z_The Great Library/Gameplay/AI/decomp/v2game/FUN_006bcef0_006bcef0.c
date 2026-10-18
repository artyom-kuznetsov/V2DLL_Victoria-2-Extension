// FUN_006bcef0 @ 006bcef0 body=[[006bcef0, 006bcf9a] [006bcf9e, 006bcffc] [006bd000, 006bd05e] [006bd062, 006bd0c4] [006bd0c8, 006bd1b7] [006bd1bb, 006bd219] [006bd21d, 006bd27b] [006bd27f, 006bd2dd] [006bd2e1, 006bd33f] [006bd343, 006bd3a1] [006bd3a7, 006bd412] [006bd416, 006bd47f] [006bd483, 006bd4e1] [006bd4e5, 006bd543] [006bd547, 006bd5a9] [006bd5ad, 006bd612] [006bd616, 006bd674] [006bd678, 006bd6d6] [006bd6da, 006bd74c] [006bd750, 006bd7b9] [006bd7bd, 006bd81b] [006bd81f, 006bd87d] [006bd881, 006bd8dd] [006bd8e1, 006bd935] [006bd939, 006be712] [006be716, 006be789] [006be78d, 006be7bd] [006be7c1, 006be84c] [006be850, 006be884] [006be888, 006be89c]]


/* WARNING: Removing unreachable block (ram,0x006bd53a) */
/* WARNING: Removing unreachable block (ram,0x006bd6cd) */
/* WARNING: Removing unreachable block (ram,0x006bd336) */
/* WARNING: Removing unreachable block (ram,0x006bd2d4) */
/* WARNING: Removing unreachable block (ram,0x006bd609) */
/* WARNING: Removing unreachable block (ram,0x006bd4d8) */
/* WARNING: Removing unreachable block (ram,0x006bd743) */
/* WARNING: Removing unreachable block (ram,0x006bd272) */

void FUN_006bcef0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  code *pcVar6;
  int in_ECX;
  undefined4 uVar7;
  uint unaff_EBX;
  uint unaff_ESI;
  bool bVar8;
  undefined4 *puStack_1dc;
  char ***pppcStack_1d8;
  uint *puStack_1d4;
  char **ppcStack_1d0;
  char **ppcStack_1cc;
  uint *puStack_1c8;
  char **ppcStack_1c4;
  char *pcStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  char **ppcStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  char *pcStack_1a0;
  char *pcStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  uint uVar9;
  uint uVar10;
  uint uStack_184;
  uint local_180;
  uint uStack_17c;
  uint uStack_178;
  char **ppcStack_174;
  uint local_170;
  char *local_16c;
  int aiStack_168 [2];
  uint uStack_160;
  uint uStack_15c;
  undefined4 uStack_158;
  char **ppcStack_150;
  int iStack_14c;
  char *pcStack_148;
  char *local_144;
  char **ppcStack_138;
  undefined1 auStack_134 [16];
  uint uStack_124;
  char **local_120 [4];
  undefined1 *puStack_110;
  char *apcStack_10c [4];
  char **ppcStack_fc;
  undefined1 auStack_f8 [12];
  undefined4 uStack_ec;
  uint uStack_e8;
  uint auStack_e4 [3];
  undefined1 auStack_d8 [20];
  char *pcStack_c4;
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [36];
  undefined4 auStack_98 [6];
  undefined1 auStack_80 [28];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *pvStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6e4fc;
  pvStack_14 = ExceptionList;
  if (*(int *)(in_ECX + 0x5cc) == 0) {
    local_120[0] = (char **)0x0;
  }
  else {
    local_120[0] = (char **)(*(int *)(in_ECX + 0x5cc) + -8);
  }
  local_144 = local_120[0][0x17];
  uStack_194 = (char **)0x8;
  uStack_198 = "nudge_up";
  DAT_012589a6 = 0;
  local_16c = (char *)0xf;
  local_170 = 0;
  local_180 = local_180 & 0xffffff00;
  pcStack_19c = (char *)0x6bcf5d;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  local_c = 0;
  uStack_194 = (char **)&local_180;
  uStack_198 = (char *)0x6bcf76;
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
  uStack_198 = (char *)0x6bcf7f;
  (**(code **)(*piVar2 + 0x38))();
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_170) {
    uStack_198 = (char *)uStack_184;
                    /* WARNING: Subroutine does not return */
    pcStack_19c = &UNK_006bcf9b;
    FUN_00aae91b();
  }
  uStack_198 = (char *)0xa;
  pcStack_19c = "nudge_zero";
  local_170 = 0xf;
  ppcStack_174 = (char **)0x0;
  uStack_184 = uStack_184 & 0xffffff00;
  pcStack_1a0 = (char *)0x6bcfbb;
  FUN_00409350();
  puStack_10 = (undefined1 *)0x1;
  uStack_198 = (char *)&uStack_184;
  pcStack_19c = (char *)0x6bcfd8;
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
  pcStack_19c = (char *)0x6bcfe1;
  (**(code **)(*piVar2 + 0x38))();
  pvStack_14 = (void *)0xffffffff;
  if (0xf < ppcStack_174) {
                    /* WARNING: Subroutine does not return */
    pcStack_1a0 = &UNK_006bcffd;
    FUN_00aae91b();
  }
  pcStack_19c = (char *)0xa;
  pcStack_1a0 = "nudge_down";
  ppcStack_174 = (char **)0xf;
  uStack_178 = 0;
  uVar10 = unaff_EBX & 0xffffff00;
  uStack_1a4 = (char *)0x6bd01d;
  FUN_00409350();
  pvStack_14 = (void *)0x2;
  pcStack_19c = &stack0xfffffe78;
  pcStack_1a0 = (char *)0x6bd03a;
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
  pcStack_1a0 = (char *)0x6bd043;
  (**(code **)(*piVar2 + 0x38))();
  uStack_18 = 0xffffffff;
  if (0xf < uStack_178) {
                    /* WARNING: Subroutine does not return */
    uStack_1a4 = &UNK_006bd05f;
    FUN_00aae91b();
  }
  pcStack_1a0 = (char *)0x1f;
  uStack_1a4 = "nudge_selection_railroad_spline";
  uStack_178 = 0xf;
  uStack_17c = 0;
  uVar9 = unaff_ESI & 0xffffff00;
  uStack_1a8 = (char *)0x6bd07f;
  FUN_00409350();
  uStack_18 = 3;
  iVar4 = *(int *)(in_ECX + 0xa3c);
  pcStack_1a0 = &stack0xfffffe74;
  uStack_1a4 = (char *)0x6bd0a2;
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x5d0) + 0x48))();
  bVar8 = iVar4 == iVar3;
  uStack_194 = (char **)CONCAT13(bVar8,(undefined3)uStack_194);
  uStack_1c = 0xffffffff;
  if (0xf < uStack_17c) {
                    /* WARNING: Subroutine does not return */
    uStack_1a8 = &UNK_006bd0c5;
    FUN_00aae91b();
  }
  if (bVar8) {
    pcVar6 = *(code **)(**(int **)(in_ECX + 0xa98) + 0x34);
    *(undefined1 *)((int)*(int **)(in_ECX + 0xa98) + 0x143) = 0;
    uStack_1a4 = (char *)0x6bd0e3;
    (*pcVar6)();
  }
  else {
    piVar2 = *(int **)(in_ECX + 0xa98);
    uStack_1a4 = (char *)0x6bd0f4;
    (**(code **)(*piVar2 + 0x38))();
    *(undefined1 *)((int)piVar2 + 0x143) = 1;
  }
  if (*(char *)(*(int *)(in_ECX + 0xa98) + 0x4f) != '\0') {
    uStack_1a4 = (char *)0x6bd116;
    cVar1 = FUN_004c8a70();
    iVar4 = *(int *)(in_ECX + 0xa98);
    if (cVar1 == '\0') {
      if ((*(char *)(iVar4 + 0xe4) != '\0') && (*(char *)(iVar4 + 0x142) == '\0'))
      goto LAB_006bd144;
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    *(undefined4 *)(iVar4 + 0x10c) = uVar7;
    *(undefined4 *)(iVar4 + 0x6c) = uVar7;
  }
LAB_006bd144:
  if (*(int *)(in_ECX + 0x998) == 5) {
    uStack_1a4 = (char *)0x14;
    uStack_1a8 = "nudge_rotation_title";
    uStack_17c = 0xf;
    local_180 = 0;
    uStack_1ac = (char *)0x6bd177;
    FUN_00409350();
    uStack_1c = 4;
    uStack_1a4 = &stack0xfffffe70;
    uStack_1a8 = (char *)0x6bd194;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x38))();
    uStack_1a8 = (char *)0x6bd19d;
    (**(code **)(*piVar2 + 0x38))();
    uStack_20 = 0xffffffff;
    if (0xf < local_180) {
      uStack_1a8 = (char *)uStack_194;
                    /* WARNING: Subroutine does not return */
      uStack_1ac = &UNK_006bd1b8;
      FUN_00aae91b();
    }
    uStack_1a8 = (char *)0xe;
    uStack_1ac = "nudge_rotation";
    local_180 = 0xf;
    uStack_184 = 0;
    uStack_194 = (char **)((uint)uStack_194 & 0xffffff00);
    ppcStack_1b0 = (char **)0x6bd1dc;
    FUN_00409350();
    uStack_20 = 5;
    uStack_1a8 = (char *)&uStack_194;
    uStack_1ac = (char *)0x6bd1f9;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x38))();
    uStack_1ac = (char *)0x6bd202;
    (**(code **)(*piVar2 + 0x38))();
    uStack_24 = 0xffffffff;
    if (0xf < uStack_184) {
      uStack_1ac = uStack_198;
                    /* WARNING: Subroutine does not return */
      ppcStack_1b0 = (char **)&UNK_006bd21a;
      FUN_00aae91b();
    }
    uStack_1ac = (char *)0x13;
    ppcStack_1b0 = (char **)0xe0ca9c;
    uStack_184 = 0xf;
    uStack_198 = (char *)((uint)uStack_198 & 0xffffff00);
    uStack_1b4 = (char *)0x6bd23e;
    FUN_00409350();
    uStack_24 = 6;
    uStack_1ac = (char *)&uStack_198;
    ppcStack_1b0 = (char **)0x6bd25b;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
    ppcStack_1b0 = (char **)0x6bd264;
    (**(code **)(*piVar2 + 0x38))();
    uStack_28 = 0xffffffff;
    ppcStack_1b0 = (char **)0x18;
    uStack_1b4 = "nudge_rotation_plus_plus";
    uVar10 = 0xf;
    pcStack_19c = (char *)((uint)pcStack_19c & 0xffffff00);
    uStack_1b8 = (char *)0x6bd2a0;
    FUN_00409350();
    uStack_28 = 7;
    ppcStack_1b0 = &pcStack_19c;
    uStack_1b4 = (char *)0x6bd2bd;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
    uStack_1b4 = (char *)0x6bd2c6;
    (**(code **)(*piVar2 + 0x38))();
    uStack_2c = 0xffffffff;
    uStack_1b4 = (char *)0x14;
    uStack_1b8 = "nudge_rotation_minus";
    uVar9 = 0xf;
    pcStack_1a0 = (char *)((uint)pcStack_1a0 & 0xffffff00);
    uStack_1bc = (char *)0x6bd302;
    FUN_00409350();
    uStack_2c = 8;
    uStack_1b4 = (char *)&pcStack_1a0;
    uStack_1b8 = (char *)0x6bd31f;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
    uStack_1b8 = (char *)0x6bd328;
    (**(code **)(*piVar2 + 0x38))();
    uStack_30 = 0xffffffff;
    uStack_1b8 = (char *)0x1a;
    uStack_1bc = "nudge_rotation_minus_minus";
    uStack_194 = (char **)0x0;
    uStack_1a4 = (char *)((uint)uStack_1a4 & 0xffffff00);
    pcStack_1c0 = (char *)0x6bd364;
    FUN_00409350();
    uStack_30 = 9;
    uStack_1b8 = (char *)&uStack_1a4;
    uStack_1bc = (char *)0x6bd381;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
    uStack_1bc = (char *)0x6bd38a;
    (**(code **)(*piVar2 + 0x38))();
    uStack_1c = 0xffffffff;
    if (0xf < uStack_17c) {
      uStack_1a4 = (char *)0xf;
                    /* WARNING: Subroutine does not return */
      uStack_1a8 = &UNK_006bd3a2;
      FUN_00aae91b();
    }
  }
  uStack_1a4 = (char *)0x14;
  uStack_1a8 = "nudge_selection_city";
  uStack_17c = 0xf;
  local_180 = 0;
  uStack_1ac = (char *)0x6bd3cb;
  FUN_00409350();
  uStack_1c = 10;
  uStack_158 = *(undefined4 *)(in_ECX + 0xa3c);
  uStack_1a4 = &stack0xfffffe70;
  uStack_1a8 = (char *)0x6bd3f2;
  iVar4 = (**(code **)(**(int **)(in_ECX + 0x5d0) + 0x48))();
  uStack_20 = 0xffffffff;
  uStack_198 = (char *)CONCAT13(uStack_15c == iVar4,(undefined3)uStack_198);
  if (0xf < local_180) {
    uStack_1a8 = (char *)uStack_194;
                    /* WARNING: Subroutine does not return */
    uStack_1ac = &UNK_006bd413;
    FUN_00aae91b();
  }
  local_180 = 0xf;
  uStack_184 = 0;
  uStack_194 = (char **)((uint)uStack_194 & 0xffffff00);
  if (uStack_15c == iVar4) {
    uStack_1a8 = (char *)0x8;
    uStack_1ac = "nudge_up";
    ppcStack_1b0 = (char **)0x6bd442;
    FUN_00409350();
    uStack_20 = 0xb;
    uStack_1a8 = (char *)&uStack_194;
    uStack_1ac = (char *)0x6bd45f;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
    uStack_1ac = (char *)0x6bd468;
    (**(code **)(*piVar2 + 0x34))();
    uStack_24 = 0xffffffff;
    if (0xf < uStack_184) {
      uStack_1ac = uStack_198;
                    /* WARNING: Subroutine does not return */
      ppcStack_1b0 = (char **)&UNK_006bd480;
      FUN_00aae91b();
    }
    uStack_1ac = (char *)0xa;
    ppcStack_1b0 = (char **)0xe0cb38;
    uStack_184 = 0xf;
    uStack_198 = (char *)((uint)uStack_198 & 0xffffff00);
    uStack_1b4 = (char *)0x6bd4a4;
    FUN_00409350();
    uStack_24 = 0xc;
    uStack_1ac = (char *)&uStack_198;
    ppcStack_1b0 = (char **)0x6bd4c1;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
    ppcStack_1b0 = (char **)0x6bd4ca;
    (**(code **)(*piVar2 + 0x34))();
    uStack_28 = 0xffffffff;
    ppcStack_1b0 = (char **)0xa;
    uStack_1b4 = "nudge_down";
    uVar10 = 0xf;
    pcStack_19c = (char *)((uint)pcStack_19c & 0xffffff00);
    uStack_1b8 = (char *)0x6bd506;
    FUN_00409350();
    uStack_28 = 0xd;
    ppcStack_1b0 = &pcStack_19c;
    uStack_1b4 = (char *)0x6bd523;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
    uStack_1b4 = (char *)0x6bd52c;
    (**(code **)(*piVar2 + 0x34))();
    *(undefined4 *)(in_ECX + 0x998) = 1;
  }
  else {
    uStack_1a8 = (char *)0x14;
    uStack_1ac = "nudge_selection_town";
    ppcStack_1b0 = (char **)0x6bd562;
    FUN_00409350();
    uStack_20 = 0xe;
    uStack_15c = *(int *)(in_ECX + 0xa3c);
    uStack_1a8 = (char *)&uStack_194;
    uStack_1ac = (char *)0x6bd589;
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x5d0) + 0x48))();
    uStack_2c = 0xffffffff;
    uStack_1a4 = (char *)CONCAT13(aiStack_168[0] == iVar4,(undefined3)uStack_1a4);
    if (0xf < uVar9) {
      uStack_1b4 = pcStack_1a0;
                    /* WARNING: Subroutine does not return */
      uStack_1b8 = &UNK_006bd5aa;
      FUN_00aae91b();
    }
    if (aiStack_168[0] == iVar4) {
      uStack_1b4 = (char *)0x8;
      uStack_1b8 = "nudge_up";
      pcStack_1a0 = (char *)((uint)pcStack_1a0 & 0xffffff00);
      uStack_1bc = (char *)0x6bd5d9;
      FUN_00409350();
      uStack_2c = 0xf;
      uStack_1b4 = (char *)&pcStack_1a0;
      uStack_1b8 = (char *)0x6bd5f2;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
      uStack_1b8 = (char *)0x6bd5fb;
      (**(code **)(*piVar2 + 0x34))();
      uStack_30 = 0xffffffff;
      uStack_1b8 = (char *)0xa;
      uStack_1bc = "nudge_zero";
      uStack_194 = (char **)0x0;
      uStack_1a4 = (char *)((uint)uStack_1a4 & 0xffffff00);
      pcStack_1c0 = (char *)0x6bd637;
      FUN_00409350();
      uStack_30 = 0x10;
      uStack_1b8 = (char *)&uStack_1a4;
      uStack_1bc = (char *)0x6bd654;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
      uStack_1bc = (char *)0x6bd65d;
      (**(code **)(*piVar2 + 0x34))();
      uStack_34 = 0xffffffff;
      if (0xf < uStack_194) {
        uStack_1bc = uStack_1a8;
                    /* WARNING: Subroutine does not return */
        pcStack_1c0 = &UNK_006bd675;
        FUN_00aae91b();
      }
      uStack_1bc = (char *)0xa;
      pcStack_1c0 = "nudge_down";
      uStack_194 = (char **)0xf;
      uStack_198 = (char *)0x0;
      uStack_1a8 = (char *)((uint)uStack_1a8 & 0xffffff00);
      ppcStack_1c4 = (char **)0x6bd699;
      FUN_00409350();
      uStack_34 = 0x11;
      uStack_1bc = (char *)&uStack_1a8;
      pcStack_1c0 = (char *)0x6bd6b6;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
      pcStack_1c0 = (char *)0x6bd6bf;
      (**(code **)(*piVar2 + 0x34))();
      *(undefined4 *)(in_ECX + 0x998) = 9;
    }
  }
  uStack_2c = 0xffffffff;
  uStack_1b4 = (char *)0x1c;
  uStack_1b8 = "nudge_selection_construction";
  pcStack_1a0 = (char *)((uint)pcStack_1a0 & 0xffffff00);
  uStack_1bc = (char *)0x6bd705;
  FUN_00409350();
  uStack_2c = 0x12;
  aiStack_168[0] = *(int *)(in_ECX + 0xa3c);
  uStack_1b4 = (char *)&pcStack_1a0;
  uStack_1b8 = (char *)0x6bd72c;
  pcVar5 = (char *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x48))();
  uStack_30 = 0xffffffff;
  uStack_1a8 = (char *)CONCAT13(local_16c == pcVar5,(undefined3)uStack_1a8);
  uStack_194 = (char **)0x0;
  uStack_1a4 = (char *)((uint)uStack_1a4 & 0xffffff00);
  if (local_16c == pcVar5) {
    uStack_1b8 = (char *)0x8;
    uStack_1bc = "nudge_up";
    pcStack_1c0 = (char *)0x6bd77c;
    FUN_00409350();
    uStack_30 = 0x13;
    uStack_1b8 = (char *)&uStack_1a4;
    uStack_1bc = (char *)0x6bd799;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
    uStack_1bc = (char *)0x6bd7a2;
    (**(code **)(*piVar2 + 0x34))();
    uStack_34 = 0xffffffff;
    if (0xf < uStack_194) {
      uStack_1bc = uStack_1a8;
                    /* WARNING: Subroutine does not return */
      pcStack_1c0 = &UNK_006bd7ba;
      FUN_00aae91b();
    }
    uStack_1bc = (char *)0xa;
    pcStack_1c0 = "nudge_zero";
    uStack_194 = (char **)0xf;
    uStack_198 = (char *)0x0;
    uStack_1a8 = (char *)((uint)uStack_1a8 & 0xffffff00);
    ppcStack_1c4 = (char **)0x6bd7de;
    FUN_00409350();
    uStack_34 = 0x14;
    uStack_1bc = (char *)&uStack_1a8;
    pcStack_1c0 = (char *)0x6bd7fb;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
    pcStack_1c0 = (char *)0x6bd804;
    (**(code **)(*piVar2 + 0x34))();
    uStack_38 = 0xffffffff;
    if (0xf < uStack_198) {
      pcStack_1c0 = uStack_1ac;
                    /* WARNING: Subroutine does not return */
      ppcStack_1c4 = (char **)&UNK_006bd81c;
      FUN_00aae91b();
    }
    pcStack_1c0 = (char *)0xa;
    ppcStack_1c4 = (char **)0xe0cb44;
    uStack_198 = (char *)0xf;
    pcStack_19c = (char *)0x0;
    uStack_1ac = (char *)((uint)uStack_1ac & 0xffffff00);
    puStack_1c8 = (uint *)0x6bd840;
    FUN_00409350();
    uStack_38 = 0x15;
    pcStack_1c0 = (char *)&uStack_1ac;
    ppcStack_1c4 = (char **)0x6bd85d;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
    ppcStack_1c4 = (char **)0x6bd866;
    (**(code **)(*piVar2 + 0x34))();
    uStack_3c = 0xffffffff;
    if ((char *)0xf < pcStack_19c) {
      ppcStack_1c4 = ppcStack_1b0;
                    /* WARNING: Subroutine does not return */
      puStack_1c8 = (uint *)&UNK_006bd87e;
      FUN_00aae91b();
    }
    *(undefined4 *)(in_ECX + 0x998) = 3;
  }
  else {
    uStack_1b8 = (char *)0x20;
    uStack_1bc = "nudge_selection_unitconstruction";
    pcStack_1c0 = (char *)0x6bd89c;
    FUN_00409350();
    uStack_30 = 0x16;
    iVar4 = *(int *)(in_ECX + 0xa3c);
    uStack_1b8 = (char *)&uStack_1a4;
    uStack_1bc = (char *)0x6bd8bf;
    iVar3 = (**(code **)(**(int **)(in_ECX + 0x5d0) + 0x48))();
    bVar8 = iVar4 == iVar3;
    uStack_1ac = (char *)CONCAT13(bVar8,(undefined3)uStack_1ac);
    uStack_34 = 0xffffffff;
    if (0xf < uStack_194) {
      uStack_1bc = uStack_1a8;
                    /* WARNING: Subroutine does not return */
      pcStack_1c0 = &UNK_006bd8de;
      FUN_00aae91b();
    }
    if (bVar8) {
      uStack_1bc = (char *)0x6bd8fa;
      FUN_009885d0();
      uStack_34 = 0x17;
      pcStack_1c0 = (char *)0x6bd915;
      uStack_1bc = &stack0xfffffe74;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
      pcStack_1c0 = (char *)0x6bd91e;
      (**(code **)(*piVar2 + 0x34))();
      uStack_38 = 0xffffffff;
      if (0xf < uStack_17c) {
        pcStack_1c0 = (char *)0xf;
                    /* WARNING: Subroutine does not return */
        ppcStack_1c4 = (char **)&UNK_006bd936;
        FUN_00aae91b();
      }
      pcStack_1c0 = (char *)0x6bd947;
      FUN_009885d0();
      uStack_38 = 0x18;
      ppcStack_1c4 = (char **)0x6bd962;
      pcStack_1c0 = &stack0xfffffe70;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
      ppcStack_1c4 = (char **)0x6bd96b;
      (**(code **)(*piVar2 + 0x34))();
      uStack_3c = 0xffffffff;
      ppcStack_1c4 = (char **)0x6bd979;
      FUN_00408ad0();
      ppcStack_1c4 = (char **)0x6bd987;
      FUN_009885d0();
      uStack_3c = 0x19;
      puStack_1c8 = (uint *)0x6bd9a2;
      ppcStack_1c4 = (char **)&uStack_194;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
      puStack_1c8 = (uint *)0x6bd9ab;
      (**(code **)(*piVar2 + 0x34))();
      uStack_3c = 0xffffffff;
      ppcStack_1c4 = (char **)0x6bd9b9;
      FUN_00408ad0();
      *(undefined4 *)(in_ECX + 0x998) = 4;
    }
    else {
      uStack_1bc = (char *)0x6bd9d2;
      FUN_009885d0();
      uStack_34 = 0x1a;
      iVar4 = *(int *)(in_ECX + 0xa3c);
      uStack_1bc = &stack0xfffffe74;
      pcStack_1c0 = (char *)0x6bd9f5;
      iVar3 = (**(code **)(**(int **)(in_ECX + 0x5d0) + 0x48))();
      uStack_1b4 = (char *)CONCAT13(iVar4 == iVar3,(undefined3)uStack_1b4);
      uStack_3c = 0xffffffff;
      ppcStack_1c4 = (char **)0x6bda0c;
      FUN_00408ad0();
      if (uStack_1b4._3_1_ == '\0') {
        ppcStack_1c4 = (char **)0x6bda30;
        FUN_009885d0();
        uStack_3c = 0x1b;
        iVar4 = *(int *)(in_ECX + 0xa3c);
        ppcStack_1c4 = (char **)&uStack_194;
        puStack_1c8 = (uint *)0x6bda53;
        iVar3 = (**(code **)(**(int **)(in_ECX + 0x5d0) + 0x48))();
        uStack_1b8 = (char *)CONCAT13(iVar4 == iVar3,(undefined3)uStack_1b8);
        uStack_40 = 0xffffffff;
        puStack_1c8 = (uint *)0x6bda6a;
        FUN_00408ad0();
        if (uStack_1b8._3_1_ == '\0') {
          puStack_1c8 = (uint *)0x6bdd4c;
          FUN_009885d0();
          uStack_40 = 0x27;
          iVar4 = *(int *)(in_ECX + 0xa3c);
          puStack_1c8 = &uStack_198;
          ppcStack_1cc = (char **)0x6bdd6f;
          iVar3 = (**(code **)(**(int **)(in_ECX + 0x5d0) + 0x48))();
          uStack_1bc = (char *)CONCAT13(iVar4 == iVar3,(undefined3)uStack_1bc);
          uStack_44 = 0xffffffff;
          ppcStack_1cc = (char **)0x6bdd86;
          FUN_00408ad0();
          if (uStack_1bc._3_1_ == '\0') {
            ppcStack_1cc = (char **)0x6bdfb6;
            FUN_009885d0();
            uStack_44 = 0x30;
            iVar4 = *(int *)(in_ECX + 0xa3c);
            ppcStack_1cc = &pcStack_19c;
            ppcStack_1d0 = (char **)0x6bdfd9;
            iVar3 = (**(code **)(**(int **)(in_ECX + 0x5d0) + 0x48))();
            uStack_1b4 = (char *)CONCAT13(iVar4 == iVar3,(undefined3)uStack_1b4);
            uStack_3c = 0xffffffff;
            ppcStack_1c4 = (char **)0x6bdff0;
            FUN_00408ad0();
            if (uStack_1b4._3_1_ == '\0') {
              iStack_14c = *(int *)(in_ECX + 0xa3c);
              if (iStack_14c != 0) {
                ppcStack_1c4 = (char **)0x6be1b1;
                uStack_178 = FUN_004dad40();
                local_170 = 1;
                if (4 < (int)(*(int *)(uStack_178 + 0x10) - *(int *)(uStack_178 + 0xc) & 0xfffffffcU
                             )) {
                  do {
                    puStack_110 = (undefined1 *)&puStack_1dc;
                    FUN_00401320();
                    iVar4 = (*(code *)**(undefined4 **)(in_ECX + 0x9f0))();
                    if (iStack_14c == iVar4) {
                      *(undefined4 *)(in_ECX + 0x998) = 6;
                      *(undefined4 *)(in_ECX + 0xaa8) =
                           *(undefined4 *)(*(int *)(uStack_178 + 0xc) + local_170 * 4);
                      ppcStack_1c4 = (char **)0x6be252;
                      FUN_009885d0();
                      uStack_3c = 0x37;
                      puStack_1c8 = (uint *)0x6be26d;
                      ppcStack_1c4 = apcStack_10c;
                      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x38))();
                      puStack_1c8 = (uint *)0x6be276;
                      (**(code **)(*piVar2 + 0x34))();
                      uStack_40 = 0xffffffff;
                      puStack_1c8 = (uint *)0x6be287;
                      FUN_00408ad0();
                      puStack_1c8 = (uint *)0x6be298;
                      FUN_009885d0();
                      uStack_40 = 0x38;
                      ppcStack_1cc = (char **)0x6be2b3;
                      puStack_1c8 = (uint *)auStack_d8;
                      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x38))();
                      ppcStack_1cc = (char **)0x6be2bc;
                      (**(code **)(*piVar2 + 0x34))();
                      uStack_44 = 0xffffffff;
                      ppcStack_1cc = (char **)0x6be2ca;
                      FUN_00408ad0();
                      ppcStack_1cc = (char **)0x6be2db;
                      FUN_009885d0();
                      uStack_44 = 0x39;
                      ppcStack_1d0 = (char **)0x6be2f6;
                      ppcStack_1cc = (char **)auStack_c0;
                      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
                      ppcStack_1d0 = (char **)0x6be2ff;
                      (**(code **)(*piVar2 + 0x34))();
                      uStack_48 = 0xffffffff;
                      ppcStack_1d0 = (char **)0x6be30d;
                      FUN_00408ad0();
                      ppcStack_1d0 = (char **)0x6be31b;
                      FUN_009885d0();
                      uStack_48 = 0x3a;
                      puStack_1d4 = (uint *)0x6be336;
                      ppcStack_1d0 = &pcStack_1a0;
                      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
                      puStack_1d4 = (uint *)0x6be33f;
                      (**(code **)(*piVar2 + 0x34))();
                      uStack_4c = 0xffffffff;
                      puStack_1d4 = (uint *)0x6be34d;
                      FUN_00408ad0();
                      puStack_1d4 = (uint *)0x6be35b;
                      FUN_009885d0();
                      uStack_4c = 0x3b;
                      pppcStack_1d8 = (char ***)0x6be376;
                      puStack_1d4 = &uStack_17c;
                      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
                      pppcStack_1d8 = (char ***)0x6be37f;
                      (**(code **)(*piVar2 + 0x34))();
                      pvStack_50 = (void *)0xffffffff;
                      pppcStack_1d8 = (char ***)0x6be38d;
                      FUN_00408ad0();
                      pppcStack_1d8 = (char ***)0x6be39b;
                      FUN_009885d0();
                      pvStack_50 = (void *)0x3c;
                      puStack_1dc = (undefined4 *)0x6be3b6;
                      pppcStack_1d8 = &ppcStack_1c4;
                      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
                      puStack_1dc = (undefined4 *)0x6be3bf;
                      (**(code **)(*piVar2 + 0x34))();
                      uStack_54 = 0xffffffff;
                      puStack_1dc = (undefined4 *)0x6be3cd;
                      FUN_00408ad0();
                      puStack_1dc = (undefined4 *)0x6be3de;
                      FUN_009885d0();
                      uStack_54 = 0x3d;
                      puStack_1dc = auStack_98;
                      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
                      (**(code **)(*piVar2 + 0x34))();
                      uStack_58 = 0xffffffff;
                      FUN_00408ad0();
                      FUN_009885d0();
                      uStack_58 = 0x3e;
                      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))(auStack_80);
                      (**(code **)(*piVar2 + 0x34))();
                      uStack_5c = 0xffffffff;
                      FUN_00408ad0();
                      FUN_009885d0();
                      uStack_5c = 0x3f;
                      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))(auStack_bc);
                      (**(code **)(*piVar2 + 0x34))();
                      uStack_60 = 0xffffffff;
                      FUN_00408ad0();
                      FUN_009885d0();
                      uStack_60 = 0x40;
                      FUN_009888f0(auStack_c0);
                      uStack_60 = CONCAT31(uStack_60._1_3_,0x41);
                      (**(code **)(**(int **)(in_ECX + 0x5d0) + 0x38))(&local_16c);
                      ppcStack_1c4 = (char **)0x6be506;
                      FUN_009e7500();
                      ppcStack_1c4 = (char **)0x6be512;
                      FUN_00408ad0();
                      uStack_3c = 0xffffffff;
                      ppcStack_1c4 = (char **)0x6be526;
                      FUN_00408ad0();
                      ppcStack_1c4 = (char **)0x6be539;
                      cVar1 = FUN_0040b360();
                      if (cVar1 != '\0') {
                        ppcStack_1c4 = DAT_0125870c;
                        puStack_1c8 = (uint *)0x6be56b;
                        FUN_004a0c40();
                        ppcStack_1c4 = (char **)0x6be572;
                        cVar1 = FUN_004946b0();
                        if (cVar1 == '\0') {
                          ppcStack_1c4 = (char **)0x6be584;
                          FUN_009885d0();
                          uStack_3c = 0x42;
                          puStack_1c8 = (uint *)0x6be59f;
                          ppcStack_1c4 = &pcStack_148;
                          piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x38))();
                          pcVar6 = *(code **)(*piVar2 + 0x34);
                        }
                        else {
                          ppcStack_1c4 = (char **)0x6be5ad;
                          FUN_009885d0();
                          uStack_3c = 0x43;
                          ppcStack_1c4 = &pcStack_148;
                          puStack_1c8 = (uint *)0x6be5ca;
                          piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x38))();
                          pcVar6 = *(code **)(*piVar2 + 0x38);
                        }
                        puStack_1c8 = (uint *)0x6be5d3;
                        (*pcVar6)();
                        uStack_3c = 0xffffffff;
                        ppcStack_1c4 = (char **)0x6be5e7;
                        FUN_00408ad0();
                      }
                      ppcStack_1c4 = ppcStack_150;
                      ppcStack_1cc = (char **)0x6be5f2;
                      FUN_006b6e70();
                      DAT_012589a6 = 1;
                      goto LAB_006be5f9;
                    }
                    local_170 = local_170 + 1;
                  } while ((int)local_170 <
                           *(int *)(uStack_178 + 0x10) - *(int *)(uStack_178 + 0xc) >> 2);
                }
              }
            }
            else {
              ppcStack_1c4 = (char **)0x6be009;
              FUN_009885d0();
              uStack_3c = 0x31;
              puStack_1c8 = (uint *)0x6be024;
              ppcStack_1c4 = (char **)&uStack_194;
              piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x38))();
              puStack_1c8 = (uint *)0x6be02d;
              (**(code **)(*piVar2 + 0x38))();
              uStack_40 = 0xffffffff;
              puStack_1c8 = (uint *)0x6be03b;
              FUN_00408ad0();
              puStack_1c8 = (uint *)0x6be049;
              FUN_009885d0();
              uStack_40 = 0x32;
              ppcStack_1cc = (char **)0x6be064;
              puStack_1c8 = &local_170;
              piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x38))();
              ppcStack_1cc = (char **)0x6be06d;
              (**(code **)(*piVar2 + 0x38))();
              uStack_44 = 0xffffffff;
              ppcStack_1cc = (char **)0x6be07b;
              FUN_00408ad0();
              ppcStack_1cc = (char **)0x6be089;
              FUN_009885d0();
              uStack_44 = 0x33;
              ppcStack_1d0 = (char **)0x6be0a4;
              ppcStack_1cc = (char **)&uStack_1b8;
              piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
              ppcStack_1d0 = (char **)0x6be0ad;
              (**(code **)(*piVar2 + 0x34))();
              uStack_48 = 0xffffffff;
              ppcStack_1d0 = (char **)0x6be0bb;
              FUN_00408ad0();
              ppcStack_1d0 = (char **)0x6be0cc;
              FUN_009885d0();
              uStack_48 = 0x34;
              puStack_1d4 = (uint *)0x6be0e7;
              ppcStack_1d0 = &pcStack_c4;
              piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
              puStack_1d4 = (uint *)0x6be0f0;
              (**(code **)(*piVar2 + 0x38))();
              uStack_4c = 0xffffffff;
              puStack_1d4 = (uint *)0x6be0fe;
              FUN_00408ad0();
              puStack_1d4 = (uint *)0x6be10f;
              FUN_009885d0();
              uStack_4c = 0x35;
              pppcStack_1d8 = (char ***)0x6be12a;
              puStack_1d4 = auStack_e4;
              piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
              pppcStack_1d8 = (char ***)0x6be133;
              (**(code **)(*piVar2 + 0x34))();
              pvStack_50 = (void *)0xffffffff;
              pppcStack_1d8 = (char ***)0x6be141;
              FUN_00408ad0();
              pppcStack_1d8 = (char ***)0x6be152;
              FUN_009885d0();
              pvStack_50 = (void *)0x36;
              puStack_1dc = (undefined4 *)0x6be16d;
              pppcStack_1d8 = local_120;
              piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
              puStack_1dc = (undefined4 *)0x6be176;
              (**(code **)(*piVar2 + 0x38))();
              uStack_3c = 0xffffffff;
              ppcStack_1c4 = (char **)0x6be184;
              FUN_00408ad0();
              *(undefined4 *)(in_ECX + 0x998) = 8;
              DAT_012589a6 = 1;
            }
          }
          else {
            ppcStack_1cc = (char **)0x6bdd9f;
            FUN_009885d0();
            uStack_44 = 0x28;
            ppcStack_1d0 = (char **)0x6bddba;
            ppcStack_1cc = &pcStack_19c;
            piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x38))();
            ppcStack_1d0 = (char **)0x6bddc3;
            (**(code **)(*piVar2 + 0x34))();
            uStack_48 = 0xffffffff;
            ppcStack_1d0 = (char **)0x6bddd4;
            FUN_00408ad0();
            ppcStack_1d0 = (char **)0x6bdde2;
            FUN_009885d0();
            uStack_48 = 0x29;
            puStack_1d4 = (uint *)0x6bddfd;
            ppcStack_1d0 = &pcStack_1a0;
            piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x38))();
            puStack_1d4 = (uint *)0x6bde06;
            (**(code **)(*piVar2 + 0x34))();
            uStack_4c = 0xffffffff;
            puStack_1d4 = (uint *)0x6bde14;
            FUN_00408ad0();
            puStack_1d4 = (uint *)0x6bde22;
            FUN_009885d0();
            uStack_4c = 0x2a;
            pppcStack_1d8 = (char ***)0x6bde3d;
            puStack_1d4 = &uStack_1a4;
            piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
            pppcStack_1d8 = (char ***)0x6bde46;
            (**(code **)(*piVar2 + 0x34))();
            pvStack_50 = (void *)0xffffffff;
            pppcStack_1d8 = (char ***)0x6bde54;
            FUN_00408ad0();
            pppcStack_1d8 = (char ***)0x6bde62;
            FUN_009885d0();
            pvStack_50 = (void *)0x2b;
            puStack_1dc = (undefined4 *)0x6bde7d;
            pppcStack_1d8 = (char ***)&uStack_1a8;
            piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
            puStack_1dc = (undefined4 *)0x6bde86;
            (**(code **)(*piVar2 + 0x34))();
            uStack_54 = 0xffffffff;
            puStack_1dc = (undefined4 *)0x6bde94;
            FUN_00408ad0();
            puStack_1dc = (undefined4 *)0x6bdea2;
            FUN_009885d0();
            uStack_54 = 0x2c;
            puStack_1dc = &uStack_1ac;
            piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
            (**(code **)(*piVar2 + 0x34))();
            uStack_58 = 0xffffffff;
            FUN_00408ad0();
            FUN_009885d0();
            uStack_58 = 0x2d;
            piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))(&stack0xfffffe78);
            (**(code **)(*piVar2 + 0x34))();
            uStack_5c = 0xffffffff;
            FUN_00408ad0();
            *(undefined4 *)(in_ECX + 0x998) = 7;
            FUN_009885d0();
            uStack_5c = 0x2e;
            FUN_009888f0(aiStack_168);
            uStack_5c = CONCAT31(uStack_5c._1_3_,0x2f);
            (**(code **)(**(int **)(in_ECX + 0x5d0) + 0x38))(&ppcStack_1d0);
            ppcStack_1c4 = (char **)0x6bdf7f;
            FUN_009e7500();
            ppcStack_1c4 = (char **)0x6bdf88;
            FUN_00408ad0();
            uStack_3c = 0xffffffff;
            ppcStack_1c4 = (char **)0x6bdf9c;
            FUN_00408ad0();
            ppcStack_1c4 = ppcStack_150;
            ppcStack_1cc = (char **)0x6bdfa7;
            FUN_006b6e70();
LAB_006be5f9:
            *(undefined1 *)(ppcStack_174 + 10) = 1;
            *(undefined1 *)(*(int *)(*(int *)(in_ECX + 0xb4) + 0x124) + 0x3a28) = 1;
          }
        }
        else {
          puStack_1c8 = (uint *)0x6bda83;
          FUN_009885d0();
          uStack_40 = 0x1c;
          ppcStack_1cc = (char **)0x6bda9e;
          puStack_1c8 = &uStack_198;
          piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x38))();
          ppcStack_1cc = (char **)0x6bdaa7;
          (**(code **)(*piVar2 + 0x34))();
          uStack_44 = 0xffffffff;
          ppcStack_1cc = (char **)0x6bdab8;
          FUN_00408ad0();
          ppcStack_1cc = (char **)0x6bdac6;
          FUN_009885d0();
          uStack_44 = 0x1d;
          ppcStack_1d0 = (char **)0x6bdae1;
          ppcStack_1cc = &pcStack_19c;
          piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x38))();
          ppcStack_1d0 = (char **)0x6bdaea;
          (**(code **)(*piVar2 + 0x34))();
          uStack_48 = 0xffffffff;
          ppcStack_1d0 = (char **)0x6bdaf8;
          FUN_00408ad0();
          ppcStack_1d0 = (char **)0x6bdb06;
          FUN_009885d0();
          uStack_48 = 0x1e;
          puStack_1d4 = (uint *)0x6bdb21;
          ppcStack_1d0 = &pcStack_1a0;
          piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
          puStack_1d4 = (uint *)0x6bdb2a;
          (**(code **)(*piVar2 + 0x34))();
          uStack_4c = 0xffffffff;
          puStack_1d4 = (uint *)0x6bdb38;
          FUN_00408ad0();
          puStack_1d4 = (uint *)0x6bdb46;
          FUN_009885d0();
          uStack_4c = 0x1f;
          pppcStack_1d8 = (char ***)0x6bdb61;
          puStack_1d4 = &uStack_1a4;
          piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
          pppcStack_1d8 = (char ***)0x6bdb6a;
          (**(code **)(*piVar2 + 0x34))();
          pvStack_50 = (void *)0xffffffff;
          pppcStack_1d8 = (char ***)0x6bdb78;
          FUN_00408ad0();
          pppcStack_1d8 = (char ***)0x6bdb86;
          FUN_009885d0();
          pvStack_50 = (void *)0x20;
          puStack_1dc = (undefined4 *)0x6bdba1;
          pppcStack_1d8 = (char ***)&uStack_1a8;
          piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
          puStack_1dc = (undefined4 *)0x6bdbaa;
          (**(code **)(*piVar2 + 0x34))();
          uStack_54 = 0xffffffff;
          puStack_1dc = (undefined4 *)0x6bdbb8;
          FUN_00408ad0();
          puStack_1dc = (undefined4 *)0x6bdbc6;
          FUN_009885d0();
          uStack_54 = 0x21;
          puStack_1dc = &uStack_1ac;
          piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))();
          (**(code **)(*piVar2 + 0x34))();
          uStack_58 = 0xffffffff;
          FUN_00408ad0();
          FUN_009885d0();
          uStack_58 = 0x22;
          piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))(&ppcStack_1b0);
          (**(code **)(*piVar2 + 0x34))();
          uStack_5c = 0xffffffff;
          FUN_00408ad0();
          FUN_009885d0();
          uStack_5c = 0x23;
          piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))(&uStack_1b4);
          (**(code **)(*piVar2 + 0x34))();
          uStack_60 = 0xffffffff;
          FUN_00408ad0();
          FUN_009885d0();
          uStack_60 = 0x24;
          piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x34))(&uStack_1b8);
          (**(code **)(*piVar2 + 0x34))();
          uStack_64 = 0xffffffff;
          FUN_00408ad0();
          FUN_009885d0();
          uStack_64 = 0x25;
          FUN_009888f0(&local_170);
          uStack_64 = CONCAT31(uStack_64._1_3_,0x26);
          (**(code **)(**(int **)(in_ECX + 0x5d0) + 0x38))(&uStack_1bc);
          ppcStack_1c4 = (char **)0x6bdd16;
          FUN_009e7500();
          ppcStack_1c4 = (char **)0x6bdd1f;
          FUN_00408ad0();
          uStack_3c = 0xffffffff;
          ppcStack_1c4 = (char **)0x6bdd33;
          FUN_00408ad0();
          *(undefined4 *)(in_ECX + 0x998) = 5;
        }
      }
      else {
        *(undefined4 *)(in_ECX + 0x998) = 2;
      }
    }
  }
  ppcStack_1c4 = ppcStack_174;
  puStack_1c8 = (uint *)0x6be621;
  iVar4 = FUN_004c4570();
  uStack_1a8 = *(char **)(iVar4 + 8);
  uStack_1a4 = *(char **)(iVar4 + 0xc);
  ppcStack_1c4 = DAT_0125870c;
  puStack_1c8 = (uint *)0x6be64a;
  iVar4 = FUN_004a0c40();
  if ((iVar4 < 0) || (DAT_0125870c[0x889][iVar4] == '\0')) {
    ppcStack_1c4 = (char **)0xd;
    puStack_1c8 = (uint *)0xe0c9b0;
    uStack_158 = 0xf;
    uStack_15c = 0;
    local_16c = (char *)((uint)local_16c._1_3_ << 8);
    ppcStack_1cc = (char **)0x6be68a;
    FUN_00409350();
    uStack_3c = 0x44;
    ppcStack_1c4 = &local_16c;
    puStack_1c8 = (uint *)0x6be6a7;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x38))();
    pcVar6 = *(code **)(*piVar2 + 0x34);
  }
  else {
    ppcStack_1c4 = (char **)0xd;
    puStack_1c8 = (uint *)0xe0c9b0;
    uStack_158 = 0xf;
    uStack_15c = 0;
    local_16c = (char *)((uint)local_16c._1_3_ << 8);
    ppcStack_1cc = (char **)0x6be6d5;
    FUN_00409350();
    uStack_3c = 0x45;
    ppcStack_1c4 = &local_16c;
    puStack_1c8 = (uint *)0x6be6f2;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5d0) + 0x38))();
    pcVar6 = *(code **)(*piVar2 + 0x38);
  }
  puStack_1c8 = (uint *)0x6be6fb;
  (*pcVar6)();
  uStack_40 = 0xffffffff;
  if (0xf < uStack_15c) {
    puStack_1c8 = (uint *)local_170;
                    /* WARNING: Subroutine does not return */
    ppcStack_1cc = (char **)&UNK_006be713;
    FUN_00aae91b();
  }
  puStack_1c8 = (uint *)0x7;
  ppcStack_1cc = (char **)0xe0c9c0;
  uStack_15c = 0xf;
  uStack_160 = 0;
  local_170 = local_170 & 0xffffff00;
  ppcStack_1d0 = (char **)0x6be73b;
  FUN_00409350();
  puStack_1c8 = &uStack_198;
  uStack_40 = 0x46;
  ppcStack_1cc = (char **)0x6be756;
  FUN_00988c70();
  uStack_40 = CONCAT31(uStack_40._1_3_,0x47);
  puStack_1c8 = &local_170;
  ppcStack_1cc = (char **)0x6be772;
  (**(code **)(**(int **)(in_ECX + 0x5d0) + 0x38))();
  ppcStack_1cc = (char **)0x6be779;
  FUN_009e7500();
  if (0xf < uVar10) {
    ppcStack_1cc = (char **)pcStack_19c;
                    /* WARNING: Subroutine does not return */
    ppcStack_1d0 = (char **)&UNK_006be78a;
    FUN_00aae91b();
  }
  uStack_44 = 0xffffffff;
  pcStack_19c = (char *)((uint)pcStack_19c & 0xffffff00);
  if (0xf < uStack_160) {
    ppcStack_1cc = ppcStack_174;
                    /* WARNING: Subroutine does not return */
    ppcStack_1d0 = (char **)&UNK_006be7be;
    FUN_00aae91b();
  }
  ppcStack_1cc = (char **)0x7;
  ppcStack_1d0 = (char **)0xe0c9c8;
  local_120[0] = (char **)0xf;
  uStack_124 = 0;
  auStack_134[0] = 0;
  puStack_1d4 = (uint *)0x6be7f2;
  FUN_00409350();
  ppcStack_1cc = (char **)auStack_f8;
  uStack_44 = 0x48;
  ppcStack_1d0 = (char **)0x6be810;
  FUN_00988c70();
  uStack_44 = CONCAT31(uStack_44._1_3_,0x49);
  ppcStack_1cc = (char **)auStack_134;
  ppcStack_1d0 = (char **)0x6be82f;
  (**(code **)(**(int **)(in_ECX + 0x5d0) + 0x38))();
  ppcStack_1d0 = (char **)0x6be836;
  FUN_009e7500();
  if (0xf < uStack_e8) {
    ppcStack_1d0 = ppcStack_fc;
                    /* WARNING: Subroutine does not return */
    puStack_1d4 = (uint *)&UNK_006be84d;
    FUN_00aae91b();
  }
  uStack_e8 = 0xf;
  uStack_ec = 0;
  ppcStack_fc = (char **)((uint)ppcStack_fc & 0xffffff00);
  if (0xf < uStack_124) {
    ppcStack_1d0 = ppcStack_138;
                    /* WARNING: Subroutine does not return */
    puStack_1d4 = (uint *)&UNK_006be885;
    FUN_00aae91b();
  }
  ExceptionList = pvStack_50;
  return;
}

