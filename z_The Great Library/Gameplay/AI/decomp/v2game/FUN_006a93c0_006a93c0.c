// FUN_006a93c0 @ 006a93c0 body=[[006a93c0, 006a94c2] [006a94c6, 006a9529] [006a952d, 006a95ad] [006a95b1, 006a9614] [006a9618, 006a9698] [006a969c, 006a96ff] [006a9703, 006a9783] [006a9787, 006a97ea] [006a97ee, 006a985b] [006a985f, 006a98bc] [006a98c0, 006a991d] [006a9921, 006a99ac] [006a99b0, 006a9a0d] [006a9a11, 006a9a6e] [006a9a72, 006a9acb] [006a9acf, 006a9b39] [006a9b3d, 006a9bc9] [006a9bcd, 006a9c27] [006a9c2b, 006a9c94] [006a9c9a, 006a9ce7] [006a9ceb, 006a9da7] [006a9dab, 006a9e85] [006a9e89, 006a9eb3] [006a9eb7, 006a9ed3] [006a9ed7, 006a9efe] [006a9f02, 006a9f91] [006a9f95, 006a9ffc] [006aa000, 006aa0ab] [006aa0af, 006aa0d9] [006aa0dd, 006aa114] [006aa11d, 006aa334] [006aa338, 006aa39f] [006aa3a3, 006aa44e] [006aa452, 006aa47c] [006aa480, 006aa4b7] [006aa4c0, 006aa6ce] [006aa6d2, 006aa6fd] [006aa701, 006aa821] [006aa825, 006aa859] [006aa85d, 006aa887] [006aa88b, 006aa8b5] [006aa8b9, 006aa8cd]]


/* WARNING: Removing unreachable block (ram,0x006aa6f4) */
/* WARNING: Removing unreachable block (ram,0x006a9eca) */

void FUN_006a93c0(void)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  char ***pppcVar8;
  uint uVar9;
  int in_ECX;
  undefined4 extraout_ECX;
  uint unaff_EDI;
  char ***pppcStack_184;
  undefined8 uStack_180;
  uint ***pppuStack_178;
  undefined1 **ppuStack_174;
  char *pcStack_170;
  char *pcStack_16c;
  uint *puStack_168;
  undefined4 uStack_164;
  uint *puStack_160;
  char *pcStack_15c;
  uint *puStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  char *pcStack_148;
  uint *puStack_144;
  undefined8 uStack_140;
  char ***pppcStack_138;
  int *piStack_134;
  int ***pppiStack_130;
  uint *puStack_12c;
  uint **ppuStack_11c;
  undefined4 uStack_118;
  uint **local_114;
  uint uStack_110;
  undefined1 *puStack_10c;
  uint uStack_108;
  uint uStack_104;
  undefined1 *puStack_100;
  undefined1 *puStack_fc;
  uint uStack_f8;
  uint local_f4;
  undefined1 *puStack_f0;
  undefined1 *puStack_ec;
  undefined1 auStack_e8 [4];
  char acStack_e4 [4];
  undefined4 uStack_e0;
  undefined1 *puStack_dc;
  uint uStack_d8;
  undefined1 auStack_d4 [8];
  undefined1 *puStack_cc;
  uint uStack_c8;
  uint uStack_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  uint local_ac;
  uint uStack_a4;
  undefined1 auStack_a0 [12];
  undefined4 uStack_94;
  uint uStack_90;
  undefined4 uStack_88;
  undefined1 auStack_84 [16];
  uint uStack_74;
  void *pvStack_68;
  undefined1 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b6eaa8;
  pvStack_14 = ExceptionList;
  local_114 = (uint **)0x0;
  local_ac = *(uint *)(DAT_012588e8 + 0xb5c);
  local_f4 = *(uint *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  if ((char)(*(int **)(in_ECX + 0x70))[0x17] == '\0') {
    pcVar3 = *(code **)(**(int **)(in_ECX + 0x70) + 4);
  }
  else {
    pcVar3 = *(code **)(**(int **)(in_ECX + 0x6c) + 0x24);
  }
  puStack_12c = (uint *)0x6a942c;
  ExceptionList = &pvStack_14;
  (*pcVar3)();
  if (*(char *)(DAT_012588e8 + 0xd11) != '\0') {
    if (*(char *)(in_ECX + 0x74) == '\0') {
      puStack_12c = (uint *)0x9;
      pppiStack_130 = (int ***)0xe0bfd4;
      puStack_fc = (undefined1 *)0xf;
      puStack_100 = (undefined1 *)0x0;
      uStack_110 = uStack_110 & 0xffffff00;
      piStack_134 = (int *)0x6a9464;
      FUN_00409350();
      uStack_c = 0;
      puStack_12c = &uStack_110;
      local_114 = (uint **)0x1;
      pppiStack_130 = (int ***)0x6a9482;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5c) + 0x34))();
      pppiStack_130 = (int ***)0x6a948e;
      cVar1 = (**(code **)(*piVar2 + 0xc0))();
      uStack_118 = CONCAT13(1,(undefined3)uStack_118);
      if (cVar1 != '\0') goto LAB_006a9497;
    }
    else {
LAB_006a9497:
      uStack_118 = uStack_118 & 0xffffff;
    }
    uStack_c = 0xffffffff;
    if ((((uint)local_114 & 1) != 0) &&
       (local_114 = (uint **)((uint)local_114 & 0xfffffffe), 0xf < puStack_fc)) {
      puStack_12c = (uint *)uStack_110;
                    /* WARNING: Subroutine does not return */
      pppiStack_130 = (int ***)&UNK_006a94c3;
      FUN_00aae91b();
    }
    if (uStack_118._3_1_ != '\0') {
      puStack_12c = (uint *)0x9;
      pppiStack_130 = (int ***)0xe0bfd4;
      puStack_fc = (undefined1 *)0xf;
      puStack_100 = (undefined1 *)0x0;
      uStack_110 = uStack_110 & 0xffffff00;
      piStack_134 = (int *)0x6a94e8;
      FUN_00409350();
      uStack_c = 1;
      puStack_12c = &uStack_110;
      pppiStack_130 = (int ***)0x6a9502;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5c) + 0x34))();
      pppiStack_130 = (int ***)0x6a950e;
      (**(code **)(*piVar2 + 0xbc))();
      uStack_c = 0xffffffff;
      if (0xf < puStack_fc) {
        puStack_12c = (uint *)uStack_110;
                    /* WARNING: Subroutine does not return */
        pppiStack_130 = (int ***)&UNK_006a952a;
        FUN_00aae91b();
      }
    }
    uStack_c = 0xffffffff;
    if (*(char *)(in_ECX + 0x75) == '\0') {
      puStack_12c = (uint *)0x9;
      pppiStack_130 = (int ***)0xe0bfd4;
      puStack_fc = (undefined1 *)0xf;
      puStack_100 = (undefined1 *)0x0;
      uStack_110 = uStack_110 & 0xffffff00;
      piStack_134 = (int *)0x6a954e;
      FUN_00409350();
      uStack_c = 2;
      local_114 = (uint **)((uint)local_114 | 2);
      puStack_12c = &uStack_110;
      pppiStack_130 = (int ***)0x6a956d;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x60) + 0x34))();
      pppiStack_130 = (int ***)0x6a9579;
      cVar1 = (**(code **)(*piVar2 + 0xc0))();
      uStack_118 = CONCAT13(1,(undefined3)uStack_118);
      if (cVar1 != '\0') goto LAB_006a9582;
    }
    else {
LAB_006a9582:
      uStack_118 = uStack_118 & 0xffffff;
    }
    uStack_c = 0xffffffff;
    if ((((uint)local_114 & 2) != 0) &&
       (local_114 = (uint **)((uint)local_114 & 0xfffffffd), 0xf < puStack_fc)) {
      puStack_12c = (uint *)uStack_110;
                    /* WARNING: Subroutine does not return */
      pppiStack_130 = (int ***)&UNK_006a95ae;
      FUN_00aae91b();
    }
    if (uStack_118._3_1_ != '\0') {
      puStack_12c = (uint *)0x9;
      pppiStack_130 = (int ***)0xe0bfd4;
      puStack_fc = (undefined1 *)0xf;
      puStack_100 = (undefined1 *)0x0;
      uStack_110 = uStack_110 & 0xffffff00;
      piStack_134 = (int *)0x6a95d3;
      FUN_00409350();
      uStack_c = 3;
      puStack_12c = &uStack_110;
      pppiStack_130 = (int ***)0x6a95ed;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x60) + 0x34))();
      pppiStack_130 = (int ***)0x6a95f9;
      (**(code **)(*piVar2 + 0xbc))();
      uStack_c = 0xffffffff;
      if (0xf < puStack_fc) {
        puStack_12c = (uint *)uStack_110;
                    /* WARNING: Subroutine does not return */
        pppiStack_130 = (int ***)&UNK_006a9615;
        FUN_00aae91b();
      }
    }
    uStack_c = 0xffffffff;
    if (*(char *)(in_ECX + 0x74) == '\0') {
      puStack_12c = (uint *)0xb;
      pppiStack_130 = (int ***)0xe0bfe0;
      puStack_fc = (undefined1 *)0xf;
      puStack_100 = (undefined1 *)0x0;
      uStack_110 = uStack_110 & 0xffffff00;
      piStack_134 = (int *)0x6a9639;
      FUN_00409350();
      uStack_c = 4;
      local_114 = (uint **)((uint)local_114 | 4);
      puStack_12c = &uStack_110;
      pppiStack_130 = (int ***)0x6a9658;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 100) + 0x34))();
      pppiStack_130 = (int ***)0x6a9664;
      cVar1 = (**(code **)(*piVar2 + 0xc0))();
      uStack_118 = CONCAT13(1,(undefined3)uStack_118);
      if (cVar1 != '\0') goto LAB_006a966d;
    }
    else {
LAB_006a966d:
      uStack_118 = uStack_118 & 0xffffff;
    }
    uStack_c = 0xffffffff;
    if ((((uint)local_114 & 4) != 0) &&
       (local_114 = (uint **)((uint)local_114 & 0xfffffffb), 0xf < puStack_fc)) {
      puStack_12c = (uint *)uStack_110;
                    /* WARNING: Subroutine does not return */
      pppiStack_130 = (int ***)&UNK_006a9699;
      FUN_00aae91b();
    }
    if (uStack_118._3_1_ != '\0') {
      puStack_12c = (uint *)0xb;
      pppiStack_130 = (int ***)0xe0bfe0;
      puStack_fc = (undefined1 *)0xf;
      puStack_100 = (undefined1 *)0x0;
      uStack_110 = uStack_110 & 0xffffff00;
      piStack_134 = (int *)0x6a96be;
      FUN_00409350();
      uStack_c = 5;
      puStack_12c = &uStack_110;
      pppiStack_130 = (int ***)0x6a96d8;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 100) + 0x34))();
      pppiStack_130 = (int ***)0x6a96e4;
      (**(code **)(*piVar2 + 0xbc))();
      uStack_c = 0xffffffff;
      if (0xf < puStack_fc) {
        puStack_12c = (uint *)uStack_110;
                    /* WARNING: Subroutine does not return */
        pppiStack_130 = (int ***)&UNK_006a9700;
        FUN_00aae91b();
      }
    }
    uStack_c = 0xffffffff;
    if (*(char *)(in_ECX + 0x75) == '\0') {
      puStack_12c = (uint *)0xb;
      pppiStack_130 = (int ***)0xe0bfec;
      puStack_fc = (undefined1 *)0xf;
      puStack_100 = (undefined1 *)0x0;
      uStack_110 = uStack_110 & 0xffffff00;
      piStack_134 = (int *)0x6a9724;
      FUN_00409350();
      uStack_c = 6;
      local_114 = (uint **)((uint)local_114 | 8);
      puStack_12c = &uStack_110;
      pppiStack_130 = (int ***)0x6a9743;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 100) + 0x34))();
      pppiStack_130 = (int ***)0x6a974f;
      cVar1 = (**(code **)(*piVar2 + 0xc0))();
      uStack_118 = CONCAT13(1,(undefined3)uStack_118);
      if (cVar1 != '\0') goto LAB_006a9758;
    }
    else {
LAB_006a9758:
      uStack_118 = uStack_118 & 0xffffff;
    }
    uStack_c = 0xffffffff;
    if ((((uint)local_114 & 8) != 0) &&
       (local_114 = (uint **)((uint)local_114 & 0xfffffff7), 0xf < puStack_fc)) {
      puStack_12c = (uint *)uStack_110;
                    /* WARNING: Subroutine does not return */
      pppiStack_130 = (int ***)&UNK_006a9784;
      FUN_00aae91b();
    }
    if (uStack_118._3_1_ != '\0') {
      puStack_12c = (uint *)0xb;
      pppiStack_130 = (int ***)0xe0bfec;
      puStack_fc = (undefined1 *)0xf;
      puStack_100 = (undefined1 *)0x0;
      uStack_110 = uStack_110 & 0xffffff00;
      piStack_134 = (int *)0x6a97a9;
      FUN_00409350();
      uStack_c = 7;
      puStack_12c = &uStack_110;
      pppiStack_130 = (int ***)0x6a97c3;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 100) + 0x34))();
      pppiStack_130 = (int ***)0x6a97cf;
      (**(code **)(*piVar2 + 0xbc))();
      uStack_c = 0xffffffff;
      if (0xf < puStack_fc) {
        puStack_12c = (uint *)uStack_110;
                    /* WARNING: Subroutine does not return */
        pppiStack_130 = (int ***)&UNK_006a97eb;
        FUN_00aae91b();
      }
    }
  }
  puStack_12c = (uint *)0x9;
  puStack_fc = (undefined1 *)0xf;
  puStack_100 = (undefined1 *)0x0;
  uStack_110 = uStack_110 & 0xffffff00;
  pppiStack_130 = (int ***)0xe0bfd4;
  if (*(char *)(local_f4 + 3000) == '\0') {
    piStack_134 = (int *)0x6a996b;
    FUN_00409350();
    uStack_c = 0xc;
    puStack_12c = &uStack_110;
    pppiStack_130 = (int ***)0x6a9985;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5c) + 0x34))();
    pppiStack_130 = (int ***)0x6a9991;
    (**(code **)(*piVar2 + 0xb8))();
    puStack_10 = (undefined1 *)0xffffffff;
    if ((undefined1 *)0xf < puStack_100) {
      pppiStack_130 = (int ***)local_114;
                    /* WARNING: Subroutine does not return */
      piStack_134 = (int *)&UNK_006a99ad;
      FUN_00aae91b();
    }
    pppiStack_130 = (int ***)0x9;
    piStack_134 = (int *)0xe0bfd4;
    puStack_100 = (undefined1 *)0xf;
    uStack_104 = 0;
    local_114 = (uint **)((uint)local_114 & 0xffffff00);
    pppcStack_138 = (char ***)0x6a99cc;
    FUN_00409350();
    puStack_10 = (undefined1 *)0xd;
    pppiStack_130 = (int ***)&local_114;
    piStack_134 = (int *)0x6a99e6;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x60) + 0x34))();
    piStack_134 = (int *)0x6a99f2;
    (**(code **)(*piVar2 + 0xb8))();
    pvStack_14 = (void *)0xffffffff;
    if (0xf < uStack_104) {
      piStack_134 = (int *)uStack_118;
                    /* WARNING: Subroutine does not return */
      pppcStack_138 = (char ***)&UNK_006a9a0e;
      FUN_00aae91b();
    }
    piStack_134 = (int *)0x10;
    pppcStack_138 = (char ***)0xe0bff8;
    uStack_104 = 0xf;
    uStack_108 = 0;
    uStack_118 = uStack_118 & 0xffffff00;
    uStack_140._4_4_ = (char *)0x6a9a2d;
    FUN_00409350();
    pvStack_14 = (void *)0xe;
    piStack_134 = &uStack_118;
    pppcStack_138 = (char ***)0x6a9a47;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x60) + 0x44))();
    pppcStack_138 = (char ***)0x6a9a53;
    (**(code **)(*piVar2 + 0x104))();
    uStack_18 = 0xffffffff;
    if (0xf < uStack_108) {
      pppcStack_138 = (char ***)ppuStack_11c;
                    /* WARNING: Subroutine does not return */
      uStack_140._4_4_ = &UNK_006a9a6f;
      FUN_00aae91b();
    }
    pppcStack_138 = (char ***)0x10;
    uStack_140._4_4_ = "cut_down_to_size";
    uStack_108 = 0xf;
    puStack_10c = (undefined1 *)0x0;
    ppuStack_11c = (uint **)((uint)ppuStack_11c & 0xffffff00);
    uStack_140._0_4_ = (char *)0x6a9a8e;
    FUN_00409350();
    uStack_18 = 0xf;
    pppcStack_138 = (char ***)&ppuStack_11c;
    uStack_140._4_4_ = (char *)0x6a9aa4;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5c) + 0x44))();
    pcVar3 = *(code **)(*piVar2 + 0x104);
  }
  else {
    piStack_134 = (int *)0x6a981a;
    FUN_00409350();
    uStack_c = 8;
    puStack_12c = &uStack_110;
    pppiStack_130 = (int ***)0x6a9834;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5c) + 0x34))();
    pppiStack_130 = (int ***)0x6a9840;
    (**(code **)(*piVar2 + 0xbc))();
    puStack_10 = (undefined1 *)0xffffffff;
    if ((undefined1 *)0xf < puStack_100) {
      pppiStack_130 = (int ***)local_114;
                    /* WARNING: Subroutine does not return */
      piStack_134 = (int *)&UNK_006a985c;
      FUN_00aae91b();
    }
    pppiStack_130 = (int ***)0x9;
    piStack_134 = (int *)0xe0bfd4;
    puStack_100 = (undefined1 *)0xf;
    uStack_104 = 0;
    local_114 = (uint **)((uint)local_114 & 0xffffff00);
    pppcStack_138 = (char ***)0x6a987b;
    FUN_00409350();
    puStack_10 = (undefined1 *)0x9;
    pppiStack_130 = (int ***)&local_114;
    piStack_134 = (int *)0x6a9895;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x60) + 0x34))();
    piStack_134 = (int *)0x6a98a1;
    (**(code **)(*piVar2 + 0xbc))();
    pvStack_14 = (void *)0xffffffff;
    if (0xf < uStack_104) {
      piStack_134 = (int *)uStack_118;
                    /* WARNING: Subroutine does not return */
      pppcStack_138 = (char ***)&UNK_006a98bd;
      FUN_00aae91b();
    }
    piStack_134 = (int *)0x10;
    pppcStack_138 = (char ***)0xe0bff8;
    uStack_104 = 0xf;
    uStack_108 = 0;
    uStack_118 = uStack_118 & 0xffffff00;
    uStack_140._4_4_ = (char *)0x6a98dc;
    FUN_00409350();
    pvStack_14 = (void *)0xa;
    piStack_134 = &uStack_118;
    pppcStack_138 = (char ***)0x6a98f6;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x60) + 0x44))();
    pppcStack_138 = (char ***)0x6a9902;
    (**(code **)(*piVar2 + 0x108))();
    uStack_18 = 0xffffffff;
    if (0xf < uStack_108) {
      pppcStack_138 = (char ***)ppuStack_11c;
                    /* WARNING: Subroutine does not return */
      uStack_140._4_4_ = &UNK_006a991e;
      FUN_00aae91b();
    }
    pppcStack_138 = (char ***)0x10;
    uStack_140._4_4_ = "cut_down_to_size";
    uStack_108 = 0xf;
    puStack_10c = (undefined1 *)0x0;
    ppuStack_11c = (uint **)((uint)ppuStack_11c & 0xffffff00);
    uStack_140._0_4_ = (char *)0x6a993d;
    FUN_00409350();
    uStack_18 = 0xb;
    pppcStack_138 = (char ***)&ppuStack_11c;
    uStack_140._4_4_ = (char *)0x6a9957;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x5c) + 0x44))();
    pcVar3 = *(code **)(*piVar2 + 0x108);
  }
  uStack_140._4_4_ = (char *)0x6a9ab0;
  (*pcVar3)();
  uStack_1c = 0xffffffff;
  if ((undefined1 *)0xf < puStack_10c) {
                    /* WARNING: Subroutine does not return */
    uStack_140._0_4_ = &UNK_006a9acc;
    FUN_00aae91b();
  }
  puStack_10c = (undefined1 *)0xf;
  uStack_110 = 0;
  if (*(char *)(uStack_104 + 0x120) == '\0') {
    uStack_140._4_4_ = (char *)0xa;
    uStack_140._0_4_ = "demobilize";
    puStack_144 = (uint *)0x6a9b8b;
    FUN_00409350();
    uStack_1c = 0x12;
    uStack_140._4_4_ = &stack0xfffffee0;
    uStack_140._0_4_ = (char *)0x6a9ba5;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))();
    uStack_140._0_4_ = (char *)0x6a9bae;
    (**(code **)(*piVar2 + 0x38))();
    uStack_20 = 0xffffffff;
    if (0xf < uStack_110) {
                    /* WARNING: Subroutine does not return */
      puStack_144 = (uint *)&UNK_006a9bca;
      FUN_00aae91b();
    }
    uStack_140._0_4_ = (char *)0x8;
    puStack_144 = (uint *)0xe0c00c;
    uStack_110 = 0xf;
    local_114 = (uint **)0x0;
    pcStack_148 = (char *)0x6a9be9;
    FUN_00409350();
    uStack_20 = 0x13;
    uStack_140._0_4_ = &stack0xfffffedc;
    puStack_144 = (uint *)0x6a9c03;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))();
    puStack_144 = (uint *)0x6a9c0c;
    (**(code **)(*piVar2 + 0x34))();
    uStack_24 = 0xffffffff;
    if ((uint **)0xf < local_114) {
                    /* WARNING: Subroutine does not return */
      pcStack_148 = &UNK_006a9c28;
      FUN_00aae91b();
    }
    if (*(int *)(puStack_10c + 0x14e0) == 0) {
      puStack_144 = (uint *)0x8;
      pcStack_148 = "mobilize";
      local_114 = (uint **)0xf;
      uStack_118 = 0;
      unaff_EDI = unaff_EDI & 0xffffff00;
      uStack_150 = CONCAT44(0x6a9c53,(uint)uStack_150);
      FUN_00409350();
      uStack_24 = 0x14;
      puStack_144 = (uint *)&stack0xfffffed8;
      pcStack_148 = (char *)0x6a9c6d;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))();
      pcVar3 = *(code **)(*piVar2 + 0xbc);
      goto LAB_006a9c77;
    }
    puStack_144 = (uint *)0x6a9ca8;
    FUN_009885d0();
    uStack_24 = 0x15;
    pcStack_148 = (char *)0x6a9cc0;
    puStack_144 = &uStack_e0;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))();
    pcStack_148 = (char *)0x6a9ccc;
    (**(code **)(*piVar2 + 0xb8))();
    uStack_24 = 0xffffffff;
    if (0xf < puStack_cc) {
      puStack_144 = (uint *)uStack_e0;
                    /* WARNING: Subroutine does not return */
      pcStack_148 = &UNK_006a9ce8;
      FUN_00aae91b();
    }
  }
  else {
    uStack_140._4_4_ = (char *)0x8;
    uStack_140._0_4_ = "mobilize";
    puStack_144 = (uint *)0x6a9afb;
    FUN_00409350();
    uStack_1c = 0x10;
    uStack_140._4_4_ = &stack0xfffffee0;
    uStack_140._0_4_ = (char *)0x6a9b15;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))();
    uStack_140._0_4_ = (char *)0x6a9b1e;
    (**(code **)(*piVar2 + 0x38))();
    uStack_20 = 0xffffffff;
    if (0xf < uStack_110) {
                    /* WARNING: Subroutine does not return */
      puStack_144 = (uint *)&UNK_006a9b3a;
      FUN_00aae91b();
    }
    uStack_140._0_4_ = (char *)0xa;
    puStack_144 = (uint *)0xe0c018;
    uStack_110 = 0xf;
    local_114 = (uint **)0x0;
    pcStack_148 = (char *)0x6a9b59;
    FUN_00409350();
    uStack_20 = 0x11;
    uStack_140._0_4_ = &stack0xfffffedc;
    puStack_144 = (uint *)0x6a9b73;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))();
    pcVar3 = *(code **)(*piVar2 + 0x34);
LAB_006a9c77:
    puStack_144 = (uint *)0x6a9c79;
    (*pcVar3)();
    uStack_24 = 0xffffffff;
    if ((uint **)0xf < local_114) {
                    /* WARNING: Subroutine does not return */
      pcStack_148 = &UNK_006a9c95;
      puStack_144 = (uint *)unaff_EDI;
      FUN_00aae91b();
    }
  }
  uStack_24 = 0xffffffff;
  puStack_144 = &uStack_108;
  pcStack_148 = puStack_10c;
  uStack_150 = CONCAT44(0x6a9cff,(uint)uStack_150);
  puVar4 = (uint *)FUN_005152f0();
  uStack_108 = *puVar4;
  puStack_144 = (uint *)0x47c35040;
  pcStack_148 = (char *)0x6a9d18;
  FUN_00401000();
  puStack_144 = (uint *)0x6a9d20;
  iVar5 = FUN_00b31c00();
  uStack_150 = (longlong)iVar5 * (longlong)(int)uStack_108;
  puStack_144 = (uint *)0x0;
  pcStack_148 = (char *)0x3e8;
  uStack_154 = (char *)0x6a9d31;
  uStack_108 = __alldiv();
  puStack_144 = (uint *)0x11;
  pcStack_148 = "mobilize_progress";
  local_114 = (uint **)0xf;
  uStack_118 = 0;
  uStack_150 = CONCAT44(0x6a9d51,(uint)uStack_150);
  FUN_00409350();
  uStack_24 = 0x16;
  puStack_144 = (uint *)&stack0xfffffed8;
  pcStack_148 = (char *)0x6a9d6b;
  iVar5 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x44))();
  pcStack_148 = (char *)((int)puStack_10c / 1000);
  uStack_150 = CONCAT44(0x6a9d8c,(uint)uStack_150);
  (**(code **)(**(int **)(iVar5 + 0x94) + 0x60))();
  uStack_2c = 0xffffffff;
  if ((uint **)0xf < ppuStack_11c) {
    uStack_150 = CONCAT44(pppiStack_130,&UNK_006a9da8);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_150 = 0x100df9644;
  puStack_f0 = (undefined1 *)0xf;
  local_f4 = 0;
  uStack_104 = uStack_104 & 0xffffff00;
  uStack_154 = (char *)0x6a9dcc;
  FUN_00409350();
  uStack_2c = 0x17;
  uStack_150 = 0x1600e0c038;
  ppuStack_11c = (uint **)0xf;
  pppiStack_130 = (int ***)((uint)pppiStack_130 & 0xffffff00);
  uStack_154 = (char *)0x6a9df3;
  FUN_00409350();
  puStack_cc = (undefined1 *)&uStack_150;
  uStack_2c._0_1_ = 0x18;
  uStack_154 = auStack_e8;
  uStack_150 = CONCAT44(2,uStack_110);
  puStack_158 = (uint *)0x6a9e17;
  FUN_00988a50();
  uStack_2c._0_1_ = 0x19;
  uStack_150 = CONCAT44(&uStack_104,0x6a9e32);
  uVar6 = FUN_00988f20();
  uStack_2c = CONCAT31(uStack_2c._1_3_,0x1a);
  uStack_150._4_4_ = &pppiStack_130;
  uStack_150._0_4_ = 0x6a9e4b;
  local_114 = (uint **)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x3c))();
  uStack_150._0_4_ = 0xffffffff;
  uStack_154 = (char *)0x0;
  pcStack_15c = (char *)0x6a9e5e;
  puStack_158 = (uint *)uVar6;
  FUN_00408ed0();
  uStack_150._0_4_ = 0;
  puStack_158 = (uint *)0x6a9e6f;
  uStack_154 = (char *)uVar6;
  FUN_00a5ecc0();
  if (0xf < uStack_b4) {
    uStack_150 = CONCAT44(uStack_150._4_4_,uStack_c8);
                    /* WARNING: Subroutine does not return */
    uStack_154 = &UNK_006a9e86;
    FUN_00aae91b();
  }
  uStack_b4 = 0xf;
  uStack_b8 = 0;
  uStack_c8 = uStack_c8 & 0xffffff00;
  if (0xf < uStack_d8) {
    uStack_150 = CONCAT44(uStack_150._4_4_,puStack_ec);
                    /* WARNING: Subroutine does not return */
    uStack_154 = &UNK_006a9eb4;
    FUN_00aae91b();
  }
  uStack_d8 = 0xf;
  puStack_dc = (undefined1 *)0x0;
  puStack_ec = (undefined1 *)((uint)puStack_ec & 0xffffff00);
  uStack_30 = 0xffffffff;
  piVar2 = (int *)0xf;
  piStack_134 = (int *)((uint)piStack_134 & 0xffffff00);
  if (0xf < local_f4) {
    uStack_150 = CONCAT44(uStack_150._4_4_,uStack_108);
                    /* WARNING: Subroutine does not return */
    uStack_154 = &UNK_006a9eff;
    FUN_00aae91b();
  }
  uStack_150._0_4_ = 0xb;
  uStack_154 = "new_general";
  local_f4 = 0xf;
  uStack_f8 = 0;
  uStack_108 = uStack_108 & 0xffffff00;
  puStack_158 = (uint *)0x6a9f1e;
  FUN_00409350();
  uStack_30 = 0x1b;
  pppcStack_138 = (char ***)((uint)pppcStack_138 | 0x10);
  uStack_150 = CONCAT44(uStack_150._4_4_,&uStack_108);
  uStack_154 = (char *)0x6a9f3d;
  piVar7 = (int *)(**(code **)(**(int **)(in_ECX + 100) + 0x34))();
  uStack_154 = (char *)0x6a9f49;
  cVar1 = (**(code **)(*piVar7 + 0xc0))();
  if (cVar1 == '\0') {
LAB_006a9f67:
    uStack_140._0_4_ = (char *)((uint)(char *)uStack_140 & 0xffffff);
  }
  else {
    uStack_154 = (char *)0x6a9f5a;
    piVar7 = (int *)FUN_0050e8a0();
    uStack_140._0_4_ = (char *)CONCAT13(1,(undefined3)uStack_140);
    if (*piVar7 < 1000) goto LAB_006a9f67;
  }
  uStack_34 = 0xffffffff;
  if ((((uint)uStack_140._4_4_ & 0x10) != 0) &&
     (uStack_140._4_4_ = (char *)((uint)uStack_140._4_4_ & 0xffffffef), 0xf < uStack_f8)) {
    uStack_154 = puStack_10c;
                    /* WARNING: Subroutine does not return */
    puStack_158 = (uint *)&UNK_006a9f92;
    FUN_00aae91b();
  }
  uStack_154 = (char *)0xb;
  puStack_158 = (uint *)0xe0bfe0;
  if (uStack_140._3_1_ == '\0') {
    puStack_dc = (undefined1 *)0xf;
    uStack_e0 = 0;
    puStack_f0 = (undefined1 *)((uint)puStack_f0 & 0xffffff00);
    pcStack_15c = (char *)0x6aa136;
    FUN_00409350();
    uStack_34 = 0x20;
    uStack_140._4_4_ = (char *)((uint)uStack_140._4_4_ | 0x20);
    uStack_154 = (char *)&puStack_f0;
    puStack_158 = (uint *)0x6aa155;
    piVar7 = (int *)(**(code **)(**(int **)(in_ECX + 100) + 0x34))();
    puStack_158 = (uint *)0x6aa161;
    cVar1 = (**(code **)(*piVar7 + 0xc0))();
    if (cVar1 == '\0') {
      uStack_164 = (uint ***)0x6aa172;
      piVar7 = (int *)FUN_0050e8a0();
      uStack_150._0_4_ = CONCAT13(1,(uint3)uStack_150);
      if (999 < *piVar7) goto LAB_006aa17f;
    }
    else {
LAB_006aa17f:
      uStack_150._0_4_ = (uint)(uint3)uStack_150;
    }
    uStack_44 = 0xffffffff;
    if ((uStack_150 & 0x2000000000) != 0) {
      uStack_150 = uStack_150 & 0xffffffdfffffffff;
      uStack_164 = (uint ***)0x6aa1a3;
      FUN_00408ad0();
    }
    if (uStack_150._3_1_ != '\0') {
      uStack_164 = (uint ***)0x6aa1bb;
      FUN_009885d0();
      uStack_44 = 0x21;
      puStack_168 = (uint *)0x6aa1d3;
      uStack_164 = (uint ***)&puStack_100;
      piVar7 = (int *)(**(code **)(**(int **)(in_ECX + 100) + 0x34))();
      puStack_168 = (uint *)0x6aa1df;
      (**(code **)(*piVar7 + 0xbc))();
      uStack_48 = 0xffffffff;
      puStack_168 = (uint *)0x6aa1f1;
      FUN_00408ad0();
      puStack_168 = (uint *)0x6aa1ff;
      FUN_009885d0();
      uStack_48 = 0x22;
      pcStack_16c = (char *)0x6aa217;
      puStack_168 = &uStack_104;
      pppiStack_130 = (int ***)(**(code **)(**(int **)(in_ECX + 100) + 0x34))();
      pcStack_16c = (char *)0x0;
      puStack_ec = (undefined1 *)&pcStack_170;
      pppuStack_178 = (uint ***)0x6aa230;
      FUN_0050e8a0();
      ppuStack_174 = (undefined1 **)&stack0xfffffedc;
      pppuStack_178 = (uint ***)0x6aa23d;
      pcStack_16c = (char *)FUN_00988a50();
      pcStack_170 = acStack_e4;
      uStack_4c._0_1_ = 0x23;
      ppuStack_174 = (undefined1 **)0x6aa25d;
      pcStack_170 = (char *)FUN_0042c180();
      uStack_4c = CONCAT31(uStack_4c._1_3_,0x24);
      pcStack_16c = (char *)0x0;
      ppuStack_174 = (undefined1 **)0x6aa278;
      (*(code *)(*pppiStack_130)[0x33])();
      uStack_164 = (uint ***)0x6aa284;
      FUN_00408ad0();
      uStack_164 = (uint ***)0x6aa28d;
      FUN_00408ad0();
      uStack_44 = 0xffffffff;
      uStack_164 = (uint ***)0x6aa2a1;
      FUN_00408ad0();
    }
  }
  else {
    uStack_f8 = 0xf;
    puStack_fc = (undefined1 *)0x0;
    puStack_10c = (undefined1 *)((uint)puStack_10c & 0xffffff00);
    pcStack_15c = (char *)0x6a9fbf;
    FUN_00409350();
    uStack_34 = 0x1c;
    uStack_154 = (char *)&puStack_10c;
    puStack_158 = (uint *)0x6a9fd9;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 100) + 0x34))();
    puStack_158 = (uint *)0x6a9fe5;
    (**(code **)(*piVar2 + 0xb8))();
    uStack_38 = 0xffffffff;
    if (0xf < puStack_fc) {
      puStack_158 = (uint *)uStack_110;
                    /* WARNING: Subroutine does not return */
      pcStack_15c = &UNK_006a9ffd;
      FUN_00aae91b();
    }
    puStack_158 = (uint *)0xb;
    pcStack_15c = "new_general";
    puStack_fc = (undefined1 *)0xf;
    puStack_100 = (undefined1 *)0x0;
    uStack_110 = uStack_110 & 0xffffff00;
    puStack_160 = (uint *)0x6aa020;
    FUN_00409350();
    uStack_38 = 0x1d;
    puStack_158 = &uStack_110;
    pcStack_15c = (char *)0x6aa03a;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 100) + 0x34))();
    pcStack_15c = (char *)0x0;
    puStack_dc = (undefined1 *)&puStack_160;
    puStack_168 = (uint *)0x6aa053;
    FUN_0050e8a0();
    uStack_164 = (uint ***)auStack_d4;
    puStack_168 = (uint *)0x6aa063;
    pcStack_15c = (char *)FUN_00988a50();
    puStack_160 = &uStack_f8;
    uStack_3c = 0x1e;
    uStack_164 = (uint ***)0x6aa080;
    puStack_160 = (uint *)FUN_0042c180();
    uStack_3c = 0x1f;
    pcStack_15c = (char *)0x0;
    uStack_164 = (uint ***)0x6aa09b;
    (**(code **)(*piVar2 + 0xcc))();
    if ((undefined1 *)0xf < puStack_ec) {
      uStack_164 = (uint ***)puStack_100;
                    /* WARNING: Subroutine does not return */
      puStack_168 = (uint *)&UNK_006aa0ac;
      FUN_00aae91b();
    }
    puStack_ec = (undefined1 *)0xf;
    puStack_f0 = (undefined1 *)0x0;
    puStack_100 = (undefined1 *)((uint)puStack_100 & 0xffffff00);
    if (0xf < uStack_c8) {
      uStack_164 = (uint ***)puStack_dc;
                    /* WARNING: Subroutine does not return */
      puStack_168 = (uint *)&UNK_006aa0da;
      FUN_00aae91b();
    }
    uStack_44 = 0xffffffff;
    uStack_c8 = 0xf;
    puStack_cc = (undefined1 *)0x0;
    puStack_dc = (undefined1 *)((uint)puStack_dc & 0xffffff00);
    if (0xf < uStack_108) {
      uStack_164 = (uint ***)ppuStack_11c;
                    /* WARNING: Subroutine does not return */
      puStack_168 = (uint *)&UNK_006aa115;
      FUN_00aae91b();
    }
  }
  uStack_164 = (uint ***)0xb;
  puStack_168 = (uint *)0xe0bfec;
  uStack_108 = 0xf;
  puStack_10c = (undefined1 *)0x0;
  ppuStack_11c = (uint **)((uint)ppuStack_11c & 0xffffff00);
  pcStack_16c = (char *)0x6aa2c1;
  FUN_00409350();
  uStack_44 = 0x25;
  uStack_150 = uStack_150 | 0x4000000000;
  uStack_164 = &ppuStack_11c;
  puStack_168 = (uint *)0x6aa2e0;
  piVar7 = (int *)(**(code **)(**(int **)(in_ECX + 100) + 0x34))();
  puStack_168 = (uint *)0x6aa2ec;
  cVar1 = (**(code **)(*piVar7 + 0xc0))();
  if (cVar1 == '\0') {
LAB_006aa30a:
    uStack_154 = (char *)((uint)uStack_154 & 0xffffff);
  }
  else {
    puStack_168 = (uint *)0x6aa2fd;
    piVar7 = (int *)FUN_0050e8a0();
    uStack_154 = (char *)CONCAT13(1,(undefined3)uStack_154);
    if (*piVar7 < 1000) goto LAB_006aa30a;
  }
  uStack_48 = 0xffffffff;
  if (((uStack_150 & 0x40) != 0) &&
     (uStack_150 = uStack_150 & 0xffffffffffffffbf, (undefined1 *)0xf < puStack_10c)) {
                    /* WARNING: Subroutine does not return */
    pcStack_16c = &UNK_006aa335;
    puStack_168 = (uint *)piVar2;
    FUN_00aae91b();
  }
  puStack_168 = (uint *)0xb;
  pcStack_16c = "new_admiral";
  if (uStack_154._3_1_ != '\0') {
    puStack_10c = (undefined1 *)0xf;
    uStack_110 = 0;
    pcStack_170 = (char *)0x6aa362;
    FUN_00409350();
    uStack_48 = 0x26;
    puStack_168 = (uint *)&stack0xfffffee0;
    pcStack_16c = (char *)0x6aa37c;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 100) + 0x34))();
    pcStack_16c = (char *)0x6aa388;
    (**(code **)(*piVar2 + 0xb8))();
    uStack_4c = 0xffffffff;
    if (0xf < uStack_110) {
      pcStack_16c = (char *)0x0;
                    /* WARNING: Subroutine does not return */
      pcStack_170 = &UNK_006aa3a0;
      FUN_00aae91b();
    }
    pcStack_16c = (char *)0xb;
    pcStack_170 = "new_admiral";
    uStack_110 = 0xf;
    local_114 = (uint **)0x0;
    ppuStack_174 = (undefined1 **)0x6aa3c3;
    FUN_00409350();
    uStack_4c = 0x27;
    pcStack_16c = &stack0xfffffedc;
    pcStack_170 = (char *)0x6aa3dd;
    piStack_134 = (int *)(**(code **)(**(int **)(in_ECX + 100) + 0x34))();
    pcStack_170 = (char *)0x0;
    puStack_f0 = (undefined1 *)&ppuStack_174;
    uStack_180._4_4_ = (char *)0x6aa3f6;
    FUN_0050e8a0();
    pppuStack_178 = (uint ***)auStack_e8;
    uStack_180._4_4_ = (char *)0x6aa406;
    pcStack_170 = (char *)FUN_00988a50();
    ppuStack_174 = &puStack_10c;
    uStack_50 = 0x28;
    pppuStack_178 = (uint ***)0x6aa423;
    ppuStack_174 = (undefined1 **)FUN_0042c180();
    uStack_50 = 0x29;
    pcStack_170 = (char *)0x0;
    pppuStack_178 = (uint ***)0x6aa43e;
    (**(code **)(*piStack_134 + 0xcc))();
    if ((undefined1 *)0xf < puStack_100) {
      pppuStack_178 = (uint ***)local_114;
                    /* WARNING: Subroutine does not return */
      uStack_180._4_4_ = &UNK_006aa44f;
      FUN_00aae91b();
    }
    puStack_100 = (undefined1 *)0xf;
    uStack_104 = 0;
    local_114 = (uint **)((uint)local_114 & 0xffffff00);
    if (0xf < puStack_dc) {
      pppuStack_178 = (uint ***)puStack_f0;
                    /* WARNING: Subroutine does not return */
      uStack_180._4_4_ = &UNK_006aa47d;
      FUN_00aae91b();
    }
    uStack_58 = 0xffffffff;
    puStack_dc = (undefined1 *)0xf;
    uStack_e0 = 0;
    puStack_f0 = (undefined1 *)((uint)puStack_f0 & 0xffffff00);
    if ((uint **)0xf < ppuStack_11c) {
      pppuStack_178 = (uint ***)pppiStack_130;
                    /* WARNING: Subroutine does not return */
      uStack_180._4_4_ = &UNK_006aa4b8;
      FUN_00aae91b();
    }
    goto LAB_006aa642;
  }
  puStack_f0 = (undefined1 *)0xf;
  local_f4 = 0;
  uStack_104 = uStack_104 & 0xffffff00;
  pcStack_170 = (char *)0x6aa4d9;
  FUN_00409350();
  uStack_48 = 0x2a;
  uStack_150 = uStack_150 | 0x80;
  puStack_168 = &uStack_104;
  pcStack_16c = (char *)0x6aa4fb;
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 100) + 0x34))();
  pcStack_16c = (undefined1 *)0x6aa507;
  cVar1 = (**(code **)(*piVar2 + 0xc0))();
  if (cVar1 == '\0') {
    pppuStack_178 = (uint ***)0x6aa518;
    piVar2 = (int *)FUN_0050e8a0();
    uStack_164 = (uint ***)CONCAT13(1,(undefined3)uStack_164);
    if (999 < *piVar2) goto LAB_006aa525;
  }
  else {
LAB_006aa525:
    uStack_164 = (uint ***)((uint)uStack_164 & 0xffffff);
  }
  uStack_58 = 0xffffffff;
  if (((uint)puStack_160 & 0x80) != 0) {
    pppuStack_178 = (uint ***)0x6aa544;
    FUN_00408ad0();
  }
  if (uStack_164._3_1_ != '\0') {
    pppuStack_178 = (uint ***)0x6aa55c;
    FUN_009885d0();
    uStack_58 = 0x2b;
    uStack_180._4_4_ = (char *)0x6aa574;
    pppuStack_178 = &local_114;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 100) + 0x34))();
    uStack_180._4_4_ = (char *)0x6aa580;
    (**(code **)(*piVar2 + 0xbc))();
    uStack_5c = 0xffffffff;
    uStack_180._4_4_ = (char *)0x6aa592;
    FUN_00408ad0();
    uStack_180._4_4_ = (char *)0x6aa5a3;
    FUN_009885d0();
    uStack_5c = 0x2c;
    uStack_180._0_4_ = (char ***)0x6aa5bb;
    uStack_180._4_4_ = (char *)&local_f4;
    puStack_144 = (uint *)(**(code **)(**(int **)(in_ECX + 100) + 0x34))();
    uStack_180._0_4_ = (char ***)0x0;
    puStack_100 = (undefined1 *)&pppcStack_184;
    FUN_0050e8a0(extraout_ECX);
    uStack_180._0_4_ = (char ***)FUN_00988a50(&pppcStack_138);
    pppcStack_184 = (char ***)&ppuStack_11c;
    uStack_60 = 0x2d;
    pppcStack_184 = (char ***)FUN_0042c180();
    uStack_60 = 0x2e;
    uStack_180._0_4_ = (char ***)0x0;
    (**(code **)(*puStack_144 + 0xcc))();
    pppuStack_178 = (uint ***)0x6aa622;
    FUN_00408ad0();
    pppuStack_178 = (uint ***)0x6aa62b;
    FUN_00408ad0();
    uStack_58 = 0xffffffff;
    pppuStack_178 = (uint ***)0x6aa642;
    FUN_00408ad0();
  }
LAB_006aa642:
  pppuStack_178 = (uint ***)0x8;
  uStack_180._4_4_ = "mob_size";
  ppuStack_11c = (uint **)0xf;
  pppiStack_130 = (int ***)((uint)pppiStack_130 & 0xffffff00);
  uStack_180._0_4_ = (char ***)0x6aa662;
  FUN_00409350();
  pppuStack_178 = &local_114;
  uStack_58 = 0x2f;
  uStack_180._4_4_ = (char *)0x6aa681;
  pppcVar8 = (char ***)FUN_009888f0();
  uStack_58 = CONCAT31(uStack_58._1_3_,0x30);
  pppuStack_178 = (uint ***)&pppiStack_130;
  uStack_180._4_4_ = (char *)0x6aa69a;
  uStack_140._0_4_ = (char *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x3c))();
  uStack_180._4_4_ = (char *)0xffffffff;
  uStack_180._0_4_ = (char ***)0x0;
  pppcStack_184 = pppcVar8;
  FUN_00408ed0();
  uStack_180._4_4_ = (char *)0x0;
  pppcStack_184 = (char ***)0x6aa6be;
  uStack_180._0_4_ = pppcVar8;
  FUN_00a5ecc0();
  if (0xf < uStack_104) {
    uStack_180._4_4_ = (char *)uStack_118;
                    /* WARNING: Subroutine does not return */
    uStack_180._0_4_ = (char ***)&UNK_006aa6cf;
    FUN_00aae91b();
  }
  uStack_5c = 0xffffffff;
  uStack_104 = 0xf;
  uStack_108 = 0;
  uStack_118 = uStack_118 & 0xffffff00;
  uVar9 = *(int *)(puStack_144[0x298] + 800) + *(int *)(puStack_144[0x2f3] + 0x50);
  pppcStack_184 =
       (char ***)((((int)uVar9 >> 0x1f) << 0xf | uVar9 >> 0x11) << 0xf | (uVar9 & 0x1ffff) >> 2);
  uStack_180._4_4_ = (char *)0x0;
  uStack_180._0_4_ = (char ***)0x1f40000;
  uStack_140 = __alldiv(uVar9 * 0x40000000);
  uStack_180._4_4_ = "mob_impact";
  uStack_180._0_4_ = (char ***)0x6aa751;
  FUN_004471e0();
  uStack_180._4_4_ = &DAT_00df9644;
  uStack_5c = 0x31;
  uStack_180._0_4_ = (char ***)0x6aa76d;
  FUN_004471e0();
  puStack_fc = (undefined1 *)&uStack_180;
  uStack_5c._0_1_ = 0x32;
  pppcStack_184 = (char ***)0x0;
  uStack_180 = __allmul(uStack_140,0x320000);
  uStack_180 = uStack_180 >> 0xf;
  pppcStack_184 = (char ***)0x2;
  FUN_00988bb0(auStack_a0);
  uStack_180._4_4_ = (char *)&uStack_d8;
  uStack_5c._0_1_ = 0x33;
  uStack_180._0_4_ = (char ***)0x6aa7cf;
  pppcVar8 = (char ***)FUN_00988f20();
  uStack_5c = CONCAT31(uStack_5c._1_3_,0x34);
  uStack_180._4_4_ = auStack_84;
  uStack_180._0_4_ = (char ***)0x6aa7ed;
  (**(code **)(**(int **)(in_ECX + 0x4c) + 0x3c))();
  uStack_180._0_4_ = (char ***)0xffffffff;
  pppcStack_184 = (char ***)0x0;
  FUN_00408ed0(pppcVar8);
  uStack_180._0_4_ = (char ***)0x0;
  pppcStack_184 = pppcVar8;
  FUN_00a5ecc0();
  if (0xf < local_ac) {
    uStack_180._0_4_ = (char ***)uStack_c0;
                    /* WARNING: Subroutine does not return */
    pppcStack_184 = (char ***)&UNK_006aa822;
    FUN_00aae91b();
  }
  local_ac = 0xf;
  uStack_b0 = 0;
  uStack_c0 = uStack_c0 & 0xffffff00;
  if (0xf < uStack_90) {
    uStack_180._0_4_ = (char ***)uStack_a4;
                    /* WARNING: Subroutine does not return */
    pppcStack_184 = (char ***)&UNK_006aa85a;
    FUN_00aae91b();
  }
  uStack_90 = 0xf;
  uStack_94 = 0;
  uStack_a4 = uStack_a4 & 0xffffff00;
  if (0xf < uStack_c8) {
    uStack_180._0_4_ = (char ***)puStack_dc;
                    /* WARNING: Subroutine does not return */
    pppcStack_184 = (char ***)&UNK_006aa888;
    FUN_00aae91b();
  }
  uStack_c8 = 0xf;
  puStack_cc = (undefined1 *)0x0;
  puStack_dc = (undefined1 *)((uint)puStack_dc & 0xffffff00);
  if (0xf < uStack_74) {
    uStack_180._0_4_ = (char ***)uStack_88;
                    /* WARNING: Subroutine does not return */
    pppcStack_184 = (char ***)&UNK_006aa8b6;
    FUN_00aae91b();
  }
  ExceptionList = pvStack_68;
  return;
}

