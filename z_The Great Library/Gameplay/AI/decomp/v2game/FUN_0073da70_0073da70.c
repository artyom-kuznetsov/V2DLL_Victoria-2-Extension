// FUN_0073da70 @ 0073da70 body=[[0073da70, 0073db19] [0073db1d, 0073db72] [0073db76, 0073dbd5] [0073dbd9, 0073dc62] [0073dc66, 0073dc8d] [0073dc91, 0073dd1a] [0073dd1e, 0073dd45] [0073dd49, 0073ddd2] [0073ddd6, 0073ddfd] [0073de01, 0073de8f] [0073de93, 0073deba] [0073debe, 0073df47] [0073df4b, 0073df72] [0073df76, 0073dfff] [0073e003, 0073e02a] [0073e02e, 0073e048] [0073e04c, 0073e0d8] [0073e0dc, 0073e1bf] [0073e1c3, 0073e2dc] [0073e2e0, 0073e30d] [0073e311, 0073e333] [0073e337, 0073e35e] [0073e362, 0073e400] [0073e404, 0073e43c] [0073e440, 0073e4a5] [0073e4a9, 0073e50e] [0073e512, 0073e5a1] [0073e5a5, 0073e61c] [0073e620, 0073e67a] [0073e67e, 0073e732] [0073e736, 0073e7a8] [0073e7ac, 0073e811] [0073e815, 0073e984] [0073e988, 0073e9b6] [0073e9bf, 0073e9ee] [0073e9f2, 0073ea92] [0073ea96, 0073eb16] [0073eb1a, 0073eb80] [0073eb84, 0073ec30] [0073ec34, 0073eca8] [0073ecac, 0073ed1a] [0073ed1e, 0073edf5] [0073edf9, 0073ee7a] [0073ee7e, 0073ef0b]]


/* WARNING: Removing unreachable block (ram,0x0073e9ad) */
/* WARNING: Removing unreachable block (ram,0x0073ec9f) */
/* WARNING: Removing unreachable block (ram,0x0073de86) */
/* WARNING: Removing unreachable block (ram,0x0073e598) */

void FUN_0073da70(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  char *pcVar8;
  uint unaff_EBX;
  int ***pppiVar9;
  char ****ppppcVar10;
  undefined1 *puVar11;
  int **ppiVar12;
  uint uStack_14c;
  char ****ppppcStack_148;
  uint ***pppuStack_144;
  uint uStack_140;
  char ****ppppcStack_13c;
  char **ppcStack_138;
  uint uStack_134;
  char ***pppcStack_130;
  int ***pppiStack_12c;
  uint uStack_128;
  uint ***pppuStack_124;
  uint *puStack_120;
  uint uStack_11c;
  char **ppcStack_118;
  int ***pppiStack_114;
  undefined4 uStack_110;
  char ***pppcStack_10c;
  uint *puStack_108;
  char *pcStack_104;
  char *pcStack_100;
  int ***pppiStack_fc;
  int ***pppiStack_f8;
  char **ppcStack_f4;
  int ***pppiStack_e4;
  undefined4 *local_e0;
  int ***local_dc;
  int iStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint local_cc;
  int *local_c8;
  int *piStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  uint uStack_b8;
  int iStack_b4;
  uint uStack_b0;
  void *pvStack_a8;
  char acStack_a0 [28];
  int *local_84;
  undefined1 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_44;
  undefined4 uStack_38;
  undefined4 uStack_2c;
  undefined4 uStack_20;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00baca66;
  pvStack_14 = ExceptionList;
  local_c0 = 0;
  ppcStack_f4 = (char **)0xd;
  pppiStack_f8 = (int ***)0xe10374;
  local_c8 = (int *)0xf;
  local_cc = 0;
  local_dc = (int ***)((uint)local_dc & 0xffffff00);
  pppiStack_fc = (int ***)0x73dabe;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  local_c = 0;
  local_84 = DAT_01258a80;
  local_e0 = (undefined4 *)(*DAT_01258a80 + 0x2c);
  ppcStack_f4 = (char **)0x73dae9;
  ppcStack_f4 = (char **)(**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
  pppiStack_f8 = (int ***)&local_dc;
  pppiStack_fc = (int ***)0x73dafb;
  uVar2 = (*(code *)*local_e0)();
  pvStack_14 = (void *)0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  if (0xf < uStack_d0) {
    pppiStack_fc = pppiStack_e4;
                    /* WARNING: Subroutine does not return */
    pcStack_100 = &UNK_0073db1a;
    FUN_00aae91b();
  }
  pppiStack_fc = (int ***)0xd;
  pcStack_100 = "province_view";
  uStack_d0 = 0xf;
  uStack_d4 = 0;
  pppiStack_e4 = (int ***)((uint)pppiStack_e4 & 0xffffff00);
  pcStack_104 = (char *)0x73db39;
  FUN_00409350();
  pvStack_14 = (void *)0x1;
  pppiStack_fc = (int ***)&pppiStack_e4;
  pcStack_100 = (char *)0x73db57;
  (**(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0x18) + 0x78))();
  uStack_18 = 0xffffffff;
  if (0xf < uStack_d4) {
                    /* WARNING: Subroutine does not return */
    pcStack_104 = &UNK_0073db73;
    FUN_00aae91b();
  }
  pcStack_100 = (char *)0xc;
  pcStack_104 = "close_button";
  uStack_d4 = 0xf;
  iStack_d8 = 0;
  puStack_108 = (uint *)0x73db92;
  FUN_00409350();
  uStack_18 = 2;
  pcStack_100 = &stack0xffffff18;
  pcStack_104 = (char *)0x73dbac;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x34))();
  pcStack_104 = (char *)(param_1 + 0x30);
  puStack_108 = (uint *)0x73dbba;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  uStack_20 = 0xffffffff;
  if ((int ***)0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
    pppcStack_10c = (char ***)&UNK_0073dbd6;
    FUN_00aae91b();
  }
  puStack_108 = (uint *)0xe;
  pppcStack_10c = (char ***)0xe08a30;
  local_dc = (int ***)0xf;
  local_e0 = (undefined4 *)0x0;
  uStack_110 = 0x73dbf5;
  FUN_00409350();
  uStack_20 = 3;
  puStack_108 = (uint *)0x14;
  pppcStack_10c = (char ***)0xe12c78;
  uStack_bc = 0xf;
  local_c0 = 0;
  uStack_d0 = uStack_d0 & 0xffffff00;
  uStack_110 = 0x73dc1c;
  FUN_00409350();
  uStack_20 = CONCAT31(uStack_20._1_3_,4);
  puStack_108 = &uStack_d0;
  pppcStack_10c = (char ***)0x73dc33;
  piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x6c))();
  pppcStack_10c = &ppcStack_f4;
  uStack_110 = 0x73dc41;
  iVar3 = (**(code **)(*piVar4 + 0x34))();
  uStack_110 = param_1 + 0xe0;
  pppiStack_114 = (int ***)0x73dc52;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  if ((int *)0xf < local_c8) {
    pppiStack_114 = local_dc;
                    /* WARNING: Subroutine does not return */
    ppcStack_118 = (char **)&UNK_0073dc63;
    FUN_00aae91b();
  }
  uStack_2c = 0xffffffff;
  local_c8 = (int *)0xf;
  local_cc = 0;
  local_dc = (int ***)((uint)local_dc & 0xffffff00);
  if (0xf < (unaff_EBX & 0xffffff00)) {
    pppiStack_114 = pppiStack_fc;
                    /* WARNING: Subroutine does not return */
    ppcStack_118 = (char **)&UNK_0073dc8e;
    FUN_00aae91b();
  }
  pppiStack_114 = (int ***)0xd;
  ppcStack_118 = (char **)0xe12c90;
  pppiStack_fc = (int ***)((uint)pppiStack_fc & 0xffffff00);
  uStack_11c = 0x73dcad;
  FUN_00409350();
  uStack_2c = 5;
  pppiStack_114 = (int ***)0x14;
  ppcStack_118 = (char **)0xe12c78;
  local_c8 = (int *)0xf;
  local_cc = 0;
  local_dc = (int ***)((uint)local_dc & 0xffffff00);
  uStack_11c = 0x73dcd4;
  FUN_00409350();
  uStack_2c = CONCAT31(uStack_2c._1_3_,6);
  pppiStack_114 = (int ***)&local_dc;
  ppcStack_118 = (char **)0x73dceb;
  piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x6c))();
  ppcStack_118 = &pcStack_100;
  uStack_11c = 0x73dcf9;
  iVar3 = (**(code **)(*piVar4 + 0x34))();
  uStack_11c = param_1 + 0x138;
  puStack_120 = (uint *)0x73dd0a;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  if (0xf < uStack_d4) {
    puStack_120 = (uint *)0xf;
                    /* WARNING: Subroutine does not return */
    pppuStack_124 = (uint ***)&UNK_0073dd1b;
    FUN_00aae91b();
  }
  uStack_38 = 0xffffffff;
  uStack_d4 = 0xf;
  iStack_d8 = 0;
  if ((char **)0xf < ppcStack_f4) {
    puStack_120 = puStack_108;
                    /* WARNING: Subroutine does not return */
    pppuStack_124 = (uint ***)&UNK_0073dd46;
    FUN_00aae91b();
  }
  puStack_120 = (uint *)0xc;
  pppuStack_124 = (uint ***)0xdedd1c;
  ppcStack_f4 = (char **)0xf;
  pppiStack_f8 = (int ***)0x0;
  puStack_108 = (uint *)((uint)puStack_108 & 0xffffff00);
  uStack_128 = 0x73dd65;
  FUN_00409350();
  uStack_38 = 7;
  puStack_120 = (uint *)0x15;
  pppuStack_124 = (uint ***)0xe12c60;
  uStack_d4 = 0xf;
  iStack_d8 = 0;
  uStack_128 = 0x73dd8c;
  FUN_00409350();
  uStack_38 = CONCAT31(uStack_38._1_3_,8);
  puStack_120 = (uint *)&stack0xffffff18;
  pppuStack_124 = (uint ***)0x73dda3;
  piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x6c))();
  pppuStack_124 = (uint ***)&pppcStack_10c;
  uStack_128 = 0x73ddb1;
  iVar3 = (**(code **)(*piVar4 + 0x34))();
  uStack_128 = param_1 + 0x10c;
  pppiStack_12c = (int ***)0x73ddc2;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  if (0xf < local_e0) {
    pppiStack_12c = (int ***)ppcStack_f4;
                    /* WARNING: Subroutine does not return */
    pppcStack_130 = (char ***)&UNK_0073ddd3;
    FUN_00aae91b();
  }
  uStack_44 = 0xffffffff;
  local_e0 = (undefined4 *)0xf;
  pppiStack_e4 = (int ***)0x0;
  ppcStack_f4 = (char **)((uint)ppcStack_f4 & 0xffffff00);
  if ((char *)0xf < pcStack_100) {
    pppiStack_12c = pppiStack_114;
                    /* WARNING: Subroutine does not return */
    pppcStack_130 = (char ***)&UNK_0073ddfe;
    FUN_00aae91b();
  }
  pppiStack_12c = (int ***)0xe;
  pppcStack_130 = (char ***)0xe08a30;
  pcStack_100 = (char *)0xf;
  pcStack_104 = (char *)0x0;
  pppiStack_114 = (int ***)((uint)pppiStack_114 & 0xffffff00);
  uStack_134 = 0x73de1d;
  FUN_00409350();
  uStack_44 = 9;
  pppiStack_12c = (int ***)0x14;
  pppcStack_130 = (char ***)0xe12c78;
  local_e0 = (undefined4 *)0xf;
  pppiStack_e4 = (int ***)0x0;
  ppcStack_f4 = (char **)((uint)ppcStack_f4 & 0xffffff00);
  uStack_134 = 0x73de44;
  FUN_00409350();
  uStack_44 = CONCAT31(uStack_44._1_3_,10);
  pppiStack_12c = (int ***)&ppcStack_f4;
  pppcStack_130 = (char ***)0x73de5b;
  piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x6c))();
  pppcStack_130 = &ppcStack_118;
  uStack_134 = 0x73de69;
  piVar4 = (int *)(**(code **)(*piVar4 + 0x34))();
  uStack_134 = 0x73de75;
  piVar4 = (int *)(**(code **)(*piVar4 + 0xec))();
  uStack_134 = 0;
  ppcStack_138 = (char **)0x73de7f;
  (**(code **)(*piVar4 + 0x60))();
  uStack_50 = 0xffffffff;
  pcStack_100 = (char *)((uint)pcStack_100 & 0xffffff00);
  if ((char ***)0xf < pppcStack_10c) {
    ppcStack_138 = (char **)puStack_120;
                    /* WARNING: Subroutine does not return */
    ppppcStack_13c = (char ****)&UNK_0073debb;
    FUN_00aae91b();
  }
  ppcStack_138 = (char **)0xa;
  ppppcStack_13c = (char ****)0xe12cb4;
  pppcStack_10c = (char ***)0xf;
  uStack_110 = 0;
  puStack_120 = (uint *)((uint)puStack_120 & 0xffffff00);
  uStack_140 = 0x73deda;
  FUN_00409350();
  uStack_50 = 0xb;
  ppcStack_138 = (char **)0x12;
  ppppcStack_13c = (char ****)0xe12ca0;
  pcStack_100 = (char *)((uint)pcStack_100 & 0xffffff00);
  uStack_140 = 0x73df01;
  FUN_00409350();
  uStack_50 = CONCAT31(uStack_50._1_3_,0xc);
  ppcStack_138 = &pcStack_100;
  ppppcStack_13c = (char ****)0x73df18;
  piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x6c))();
  ppppcStack_13c = (char ****)&pppuStack_124;
  uStack_140 = 0x73df26;
  iVar3 = (**(code **)(*piVar4 + 0x34))();
  uStack_140 = param_1 + 0x88;
  pppuStack_144 = (uint ***)0x73df37;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  if (0xf < pppiStack_f8) {
    pppuStack_144 = (uint ***)pppcStack_10c;
                    /* WARNING: Subroutine does not return */
    ppppcStack_148 = (char ****)&UNK_0073df48;
    FUN_00aae91b();
  }
  uStack_5c = 0xffffffff;
  pppiStack_f8 = (int ***)0xf;
  pppiStack_fc = (int ***)0x0;
  pppcStack_10c = (char ***)((uint)pppcStack_10c & 0xffffff00);
  if ((char **)0xf < ppcStack_118) {
    pppuStack_144 = (uint ***)pppiStack_12c;
                    /* WARNING: Subroutine does not return */
    ppppcStack_148 = (char ****)&UNK_0073df73;
    FUN_00aae91b();
  }
  pppuStack_144 = (uint ***)0xa;
  ppppcStack_148 = (char ****)0xe12cc0;
  ppcStack_118 = (char **)0xf;
  uStack_11c = 0;
  pppiStack_12c = (int ***)((uint)pppiStack_12c & 0xffffff00);
  uStack_14c = 0x73df92;
  FUN_00409350();
  uStack_5c = 0xd;
  pppuStack_144 = (uint ***)0x12;
  ppppcStack_148 = (char ****)0xe12ca0;
  pppiStack_f8 = (int ***)0xf;
  pppiStack_fc = (int ***)0x0;
  pppcStack_10c = (char ***)((uint)pppcStack_10c & 0xffffff00);
  uStack_14c = 0x73dfb9;
  FUN_00409350();
  uStack_5c = CONCAT31(uStack_5c._1_3_,0xe);
  pppuStack_144 = (uint ***)&pppcStack_10c;
  ppppcStack_148 = (char ****)0x73dfd0;
  piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x6c))();
  ppppcStack_148 = &pppcStack_130;
  uStack_14c = 0x73dfde;
  iVar3 = (**(code **)(*piVar4 + 0x34))();
  uStack_14c = param_1 + 0xb4;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  if ((char *)0xf < pcStack_104) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_68 = 0xffffffff;
  pcStack_104 = (char *)0xf;
  puStack_108 = (uint *)0x0;
  ppcStack_118 = (char **)((uint)ppcStack_118 & 0xffffff00);
  if ((char ****)0xf < pppuStack_124) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ppppcStack_13c = *(char *****)(param_1 + 0x28);
  if (ppppcStack_13c != (char ****)0x0) {
    FUN_00748c40();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_e0 = (undefined4 *)FUN_00aae9af();
  uStack_68 = 0xf;
  if (local_e0 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    pppuStack_124 = (uint ***)0xf;
    uStack_128 = 0;
    ppcStack_138 = (char **)((uint)ppcStack_138 & 0xffffff00);
    FUN_00409350();
    uStack_68 = CONCAT31(uStack_68._1_3_,0x10);
    uStack_11c = 1;
    (**(code **)(**(int **)(param_1 + 0x20) + 0x6c))();
    uVar2 = FUN_00748b20();
  }
  uStack_68 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  if (((uStack_11c & 1) != 0) &&
     (uStack_11c = uStack_11c & 0xfffffffe, (char ****)0xf < pppuStack_124)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (DAT_0125ce80 == 0) {
    local_dc = (int ***)FUN_00aae9af();
    uStack_68 = 0x12;
    if (local_dc != (int ***)0x0) {
      FUN_004dada0();
    }
    uStack_68 = 0xffffffff;
    FUN_004dc340();
  }
  iStack_b4 = DAT_0125ce80 + 0x1c;
  local_dc = (int ***)(*(int *)(DAT_0125ce80 + 0x20) - *(int *)(DAT_0125ce80 + 0x1c) >> 2);
  ppppcStack_13c = (char ****)0x0;
  if (0 < (int)local_dc) {
    local_e0 = (undefined4 *)((uint)local_e0 & 0xffff0000);
    do {
      pcStack_104 = (char *)0xf;
      puStack_108 = (uint *)0x0;
      ppcStack_118 = (char **)((uint)ppcStack_118 & 0xffffff00);
      FUN_00409350();
      uStack_68 = 0x13;
      iVar3 = *DAT_01258a80;
      iVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
      piVar4 = (int *)(**(code **)(iVar3 + 0x2c))();
      uStack_70 = 0xffffffff;
      if ((char ***)0xf < pppcStack_10c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      pppcStack_10c = (char ***)0xf;
      uStack_110 = 0;
      puStack_120 = (uint *)((uint)puStack_120 & 0xffffff00);
      ppcStack_f4 = (char **)0x0;
      pcStack_104 = (char *)((uint)pcStack_104 & 0xffffff00);
      FUN_00409350();
      uStack_70 = 0x14;
      piStack_c4 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x6c))();
      pppcStack_130 = (char ***)0xf;
      uStack_134 = 0;
      pppuStack_144 = (uint ***)((uint)pppuStack_144 & 0xffffff00);
      uStack_74._0_1_ = 0x15;
      pcVar6 = __itoa((int)ppppcStack_148,acStack_a0,10);
      pcVar8 = pcVar6;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar6);
      uStack_74._0_1_ = 0x16;
      local_cc = 0xf;
      uStack_d0 = 0;
      local_e0 = (undefined4 *)((uint)local_e0 & 0xffffff00);
      FUN_00409350("building");
      uStack_74._0_1_ = 0x17;
      uVar2 = FUN_00988f20();
      uStack_74 = CONCAT31(uStack_74._1_3_,0x18);
      (**(code **)(*piStack_c4 + 0xbc))(uVar2);
      if (0xf < uStack_b0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piStack_c4);
      }
      uStack_b0 = 0xf;
      iStack_b4 = 0;
      piStack_c4 = (int *)((uint)piStack_c4 & 0xffffff00);
      if (0xf < uStack_d4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(0);
      }
      uStack_d4 = 0xf;
      iStack_d8 = 0;
      if ((char **)0xf < ppcStack_138) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_14c);
      }
      uStack_7c = 0xffffffff;
      ppcStack_138 = (char **)0xf;
      ppppcStack_13c = (char ****)0x0;
      uStack_14c = uStack_14c & 0xffffff00;
      if ((int ***)0xf < pppiStack_fc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_110);
      }
      pppiStack_fc = (int ***)0xf;
      pcStack_100 = (char *)0x0;
      uStack_110 = uStack_110 & 0xffffff00;
      FUN_00409350("description",0xb);
      uStack_7c = 0x19;
      ppiVar12 = &piStack_c4;
      uVar2 = (**(code **)(**(int **)(*local_c8 + iVar5 * 4) + 0x18))();
      uStack_80 = 0x1a;
      uStack_d4 = (**(code **)(*piVar4 + 0x3c))(&pppiStack_114);
      FUN_00408ed0(uVar2,0,0xffffffff);
      FUN_00a5ecc0(uVar2,0);
      if (0xf < uStack_b8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_cc);
      }
      local_84 = (int *)0xffffffff;
      uStack_b8 = 0xf;
      uStack_bc = 0;
      local_cc = local_cc & 0xffffff00;
      if ((char *)0xf < pcStack_104) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(ppcStack_118);
      }
      pcStack_104 = (char *)0xf;
      puStack_108 = (uint *)0x0;
      ppcStack_118 = (char **)((uint)ppcStack_118 & 0xffffff00);
      FUN_00409350("expand",6);
      local_84 = (int *)0x1b;
      iVar3 = (**(code **)(*piVar4 + 0x34))(&ppcStack_118);
      (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x5c);
      acStack_a0[0x14] = -1;
      acStack_a0[0x15] = -1;
      acStack_a0[0x16] = -1;
      acStack_a0[0x17] = -1;
      if ((char ***)0xf < pppcStack_10c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puStack_120);
      }
      pppcStack_10c = (char ***)0xf;
      uStack_110 = 0;
      puStack_120 = (uint *)((uint)puStack_120 & 0xffffff00);
      FUN_00409350("expand",6);
      acStack_a0[0x14] = '\x1c';
      acStack_a0[0x15] = '\0';
      acStack_a0[0x16] = '\0';
      acStack_a0[0x17] = '\0';
      piVar7 = (int *)(**(code **)(*piVar4 + 0x34))(&puStack_120);
      (**(code **)(*piVar7 + 0xd4))(ppiVar12);
      acStack_a0[0xc] = -1;
      acStack_a0[0xd] = -1;
      acStack_a0[0xe] = -1;
      acStack_a0[0xf] = -1;
      if ((int ***)0xf < pppiStack_114) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_128);
      }
      iVar3 = (**(code **)(*piVar4 + 0x60))(&pcStack_104);
      uStack_110 = CONCAT22(*(short *)(iVar3 + 2) * (short)ppiVar12,(undefined2)uStack_110);
      (**(code **)(*piVar4 + 0x18))(uStack_110);
      (**(code **)(*(int *)piVar4[0x125] + 0xb0))();
      uStack_11c = 0xf;
      puStack_120 = (uint *)0x0;
      pppcStack_130 = (char ***)((uint)pppcStack_130 & 0xffffff00);
      FUN_00409350("province_view",0xd);
      acStack_a0[4] = '\x1d';
      acStack_a0[5] = '\0';
      acStack_a0[6] = '\0';
      acStack_a0[7] = '\0';
      (**(code **)(piVar4[6] + 0x78))(&pppcStack_130);
      uStack_68 = 0xffffffff;
      ppppcStack_13c = (char ****)((int)ppiVar12 + 1);
    } while ((int)ppppcStack_13c < (int)local_dc);
  }
  ppppcVar10 = (char ****)0x0;
  ppppcStack_13c = (char ****)0x0;
  if (DAT_0131bb34 == 0) {
    iStack_d8 = FUN_00aae9af();
    uStack_68 = 0x1e;
    if (iStack_d8 != 0) {
      FUN_0041a160();
    }
    uStack_68 = 0xffffffff;
    FUN_00423700();
  }
  pppiVar9 = (int ***)(*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2);
  iVar3 = DAT_0131bb34;
  local_dc = pppiVar9;
  if (0 < (int)pppiVar9) {
    do {
      if (iVar3 == 0) {
        iStack_d8 = FUN_00aae9af();
        uStack_68 = 0x1f;
        if (iStack_d8 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_0041a160();
        }
        uStack_68 = 0x20;
        iStack_d8 = 0;
        if ((iVar3 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
          FUN_0096dd80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_68 = 0xffffffff;
        pppiVar9 = local_dc;
        ppppcVar10 = ppppcStack_13c;
        DAT_0131bb34 = iVar3;
      }
      if (*(int *)(iVar3 + 0x10) - *(int *)(iVar3 + 0xc) >> 2 < (int)ppppcVar10) {
        iVar5 = FUN_0096bb70();
        iVar3 = DAT_0131bb34;
      }
      else {
        iVar5 = *(int *)(*(int *)(iVar3 + 0xc) + (int)ppppcVar10 * 4);
      }
      if (*(int *)(iVar5 + 0x3c0) != 0 || *(int *)(iVar5 + 0x3c4) != 0) {
        pppiStack_fc = (int ***)((uint)pppiStack_fc & 0xffffff00);
        FUN_00409350();
        uStack_68 = 0x21;
        pppuStack_124 = (uint ***)0xf;
        uStack_128 = 0;
        ppcStack_138 = (char **)((uint)ppcStack_138 & 0xffffff00);
        FUN_00409350();
        uStack_68 = CONCAT31(uStack_68._1_3_,0x22);
        piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x6c))();
        pppiVar9 = (int ***)(**(code **)(*piVar4 + 0x44))();
        pppiStack_e4 = pppiVar9;
        if (DAT_0131bb34 == 0) {
          local_e0 = (undefined4 *)FUN_00aae9af();
          uStack_70._0_1_ = 0x23;
          if (local_e0 != (undefined4 *)0x0) {
            FUN_0041a160();
            pppiVar9 = pppiStack_e4;
          }
          uStack_70 = CONCAT31(uStack_70._1_3_,0x22);
          FUN_00423700();
        }
        if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 < (int)pppuStack_144)
        {
          FUN_0096bb70();
        }
        (*(code *)(*pppiVar9)[0x12])();
        if ((uint ***)0xf < pppuStack_124) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_68 = 0xffffffff;
        ppcStack_138 = (char **)((uint)ppcStack_138 & 0xffffff00);
        break;
      }
      ppppcVar10 = (char ****)((int)ppppcVar10 + 1);
      ppppcStack_13c = ppppcVar10;
    } while ((int)ppppcVar10 < (int)pppiVar9);
  }
  pppuStack_124 = (uint ***)0xf;
  uStack_128 = 0;
  ppcStack_138 = (char **)((uint)ppcStack_138 & 0xffffff00);
  FUN_00409350();
  uStack_68 = 0x24;
  piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x6c))();
  uStack_6c = 0xffffffff;
  if (0xf < uStack_128) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_128 = 0xf;
  pppiStack_12c = (int ***)0x0;
  ppppcStack_13c = (char ****)((uint)ppppcStack_13c & 0xffffff00);
  pcStack_100 = (char *)((uint)pcStack_100 & 0xffffff00);
  FUN_00409350();
  uStack_6c = 0x25;
  iVar3 = (**(code **)(*piVar4 + 0x34))();
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  uStack_74 = 0xffffffff;
  if ((char **)0xf < ppcStack_f4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ppcStack_f4 = (char **)0xf;
  pppiStack_f8 = (int ***)0x0;
  puStack_108 = (uint *)((uint)puStack_108 & 0xffffff00);
  FUN_00409350("build_factory_button");
  uStack_74 = 0x26;
  iVar5 = (**(code **)(*piVar4 + 0x34))();
  iVar3 = param_1 + 0x210;
  (**(code **)(*(int *)(iVar5 + 0x54) + 4))(iVar3);
  uStack_7c = 0xffffffff;
  if ((int ***)0xf < pppiStack_fc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_110);
  }
  iVar5 = FUN_00aae9af(0x138);
  uStack_7c = 0x27;
  if (iVar5 == 0) {
    uVar2 = 0;
  }
  else {
    pppiStack_fc = (int ***)0xf;
    pcStack_100 = (char *)0x0;
    uStack_110 = uStack_110 & 0xffffff00;
    FUN_00409350("province_other",0xe);
    uStack_7c = CONCAT31(uStack_7c._1_3_,0x28);
    pppcStack_130 = (char ***)((uint)pppcStack_130 | 2);
    uVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x6c))(&uStack_110);
    uVar2 = FUN_00749e20(uVar2);
  }
  uStack_7c = 0xffffffff;
  *(undefined4 *)(param_1 + 0x240) = uVar2;
  if ((((uint)pppcStack_130 & 2) != 0) &&
     (pppcStack_130 = (char ***)((uint)pppcStack_130 & 0xfffffffd), (int ***)0xf < pppiStack_fc)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_110);
  }
  FUN_0074a240();
  iVar5 = FUN_00aae9af(0xe0);
  uStack_7c = 0x2a;
  if (iVar5 == 0) {
    uVar2 = 0;
  }
  else {
    pppiStack_fc = (int ***)0xf;
    pcStack_100 = (char *)0x0;
    uStack_110 = uStack_110 & 0xffffff00;
    FUN_00409350("province_colony",0xf);
    uStack_7c = CONCAT31(uStack_7c._1_3_,0x2b);
    pppcStack_130 = (char ***)((uint)pppcStack_130 | 4);
    uVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x6c))(&uStack_110);
    uVar2 = FUN_007500c0(uVar2);
  }
  uStack_7c = 0xffffffff;
  *(undefined4 *)(param_1 + 0x244) = uVar2;
  if ((((uint)pppcStack_130 & 4) != 0) && ((int ***)0xf < pppiStack_fc)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_110);
  }
  FUN_007501f0();
  ppcStack_138 = (char **)0xf;
  ppppcStack_13c = (char ****)0x0;
  uStack_14c = uStack_14c & 0xffffff00;
  FUN_00409350("build_unit_view",0xf);
  uStack_7c = 0x2d;
  iVar5 = *DAT_01258a80;
  uVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
  piVar4 = (int *)(**(code **)(iVar5 + 0x2c))(&uStack_14c,uVar2);
  local_84 = (int *)0xffffffff;
  if (0xf < uStack_140) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(&pcStack_100);
  }
  uStack_140 = 0xf;
  pppuStack_144 = (uint ***)0x0;
  pcStack_104 = (char *)0xf;
  puStack_108 = (uint *)0x0;
  ppcStack_118 = (char **)((uint)ppcStack_118 & 0xffffff00);
  FUN_00409350("build_window",0xc);
  local_84 = (int *)0x2e;
  piVar7 = piVar4;
  (**(code **)(**(int **)(param_1 + 0x20) + 0xbc))(&ppcStack_118);
  acStack_a0[0x14] = -1;
  acStack_a0[0x15] = -1;
  acStack_a0[0x16] = -1;
  acStack_a0[0x17] = -1;
  if (pppcStack_10c < (char ***)0x10) {
    pppiStack_fc = (int ***)FUN_00aae9af(400);
    acStack_a0[0x14] = '/';
    acStack_a0[0x15] = '\0';
    acStack_a0[0x16] = '\0';
    acStack_a0[0x17] = '\0';
    if (pppiStack_fc == (int ***)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00733b80(pppiStack_fc,piVar4);
    }
    acStack_a0[0x14] = -1;
    acStack_a0[0x15] = -1;
    acStack_a0[0x16] = -1;
    acStack_a0[0x17] = -1;
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    FUN_00737260();
    (**(code **)(*piVar4 + 0x24))();
    ppppcStack_148 = (char ****)0xf;
    uStack_14c = 0;
    FUN_00409350("province_buildings",0x12);
    acStack_a0[0x14] = '0';
    acStack_a0[0x15] = '\0';
    acStack_a0[0x16] = '\0';
    acStack_a0[0x17] = '\0';
    puVar11 = &stack0xfffffea4;
    piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x6c))();
    acStack_a0[0x10] = -1;
    acStack_a0[0x11] = -1;
    acStack_a0[0x12] = -1;
    acStack_a0[0x13] = -1;
    if (0xf < uStack_14c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar3);
    }
    uStack_14c = 0xf;
    pppiStack_fc = (int ***)((uint)pppiStack_fc & 0xffffff00);
    FUN_00409350("rallypoint_checkbox",0x13);
    acStack_a0[0x10] = '1';
    acStack_a0[0x11] = '\0';
    acStack_a0[0x12] = '\0';
    acStack_a0[0x13] = '\0';
    (**(code **)(*piVar4 + 0x48))(&pppiStack_fc);
    acStack_a0[0xc] = -1;
    acStack_a0[0xd] = -1;
    acStack_a0[0xe] = -1;
    acStack_a0[0xf] = -1;
    pcStack_100 = (char *)((uint)pcStack_100 & 0xffffff00);
    pppcStack_130 = (char ***)0xf;
    uStack_134 = 0;
    pppuStack_144 = (uint ***)((uint)pppuStack_144 & 0xffffff00);
    FUN_00409350("rallypoint_merge_checkbox",0x19);
    acStack_a0[0xc] = '2';
    acStack_a0[0xd] = '\0';
    acStack_a0[0xe] = '\0';
    acStack_a0[0xf] = '\0';
    uStack_110 = (**(code **)(*piVar4 + 0x48))(&pppuStack_144);
    acStack_a0[8] = -1;
    acStack_a0[9] = -1;
    acStack_a0[10] = -1;
    acStack_a0[0xb] = -1;
    if (0xf < uStack_134) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(ppppcStack_148);
    }
    uStack_134 = 0xf;
    ppcStack_138 = (char **)0x0;
    ppppcStack_148 = (char ****)((uint)ppppcStack_148 & 0xffffff00);
    if (piVar7 != (int *)0x0) {
      if (((char)piVar7[0x39] == '\0') || (*(char *)((int)piVar7 + 0x142) != '\0')) {
        piVar7[0x1b] = 0;
        piVar7[0x43] = 0;
      }
      (**(code **)(piVar7[0x15] + 4))(param_1 + 400);
    }
    if (uStack_110 != 0) {
      *(undefined4 *)(uStack_110 + 0x6c) = 1;
      *(undefined4 *)(uStack_110 + 0x10c) = 1;
      (**(code **)(*(int *)(uStack_110 + 0x54) + 4))(param_1 + 0x1b0);
    }
    ppcStack_f4 = (char **)0x0;
    pcStack_104 = (char *)((uint)pcStack_104 & 0xffffff00);
    FUN_00409350("rallypoint_checkbox_naval",0x19);
    acStack_a0[8] = '3';
    acStack_a0[9] = '\0';
    acStack_a0[10] = '\0';
    acStack_a0[0xb] = '\0';
    (**(code **)(*piVar4 + 0x48))(&pcStack_104);
    acStack_a0[4] = -1;
    acStack_a0[5] = -1;
    acStack_a0[6] = -1;
    acStack_a0[7] = -1;
    if (ppcStack_f4 < (char **)0x10) {
      ppcStack_f4 = (char **)0xf;
      pppiStack_f8 = (int ***)0x0;
      puStack_108 = (uint *)((uint)puStack_108 & 0xffffff00);
      iStack_b4 = 0xf;
      uStack_b8 = 0;
      local_c8 = (int *)((uint)local_c8 & 0xffffff00);
      FUN_00409350("rallypoint_merge_checkbox_naval",0x1f);
      acStack_a0[4] = '4';
      acStack_a0[5] = '\0';
      acStack_a0[6] = '\0';
      acStack_a0[7] = '\0';
      iVar3 = (**(code **)(*piVar4 + 0x48))(&local_c8);
      acStack_a0[0] = -1;
      acStack_a0[1] = -1;
      acStack_a0[2] = -1;
      acStack_a0[3] = -1;
      if (uStack_b8 < 0x10) {
        uStack_b8 = 0xf;
        uStack_bc = 0;
        local_cc = local_cc & 0xffffff00;
        if (puVar11 != (undefined1 *)0x0) {
          if ((puVar11[0xe4] == '\0') || (puVar11[0x142] != '\0')) {
            *(undefined4 *)(puVar11 + 0x6c) = 0;
            *(undefined4 *)(puVar11 + 0x10c) = 0;
          }
          (**(code **)(*(int *)(puVar11 + 0x54) + 4))(param_1 + 0x1d0);
        }
        if (iVar3 != 0) {
          *(undefined4 *)(iVar3 + 0x6c) = 1;
          *(undefined4 *)(iVar3 + 0x10c) = 1;
          (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x1f0);
        }
        FUN_0073ef10();
        ExceptionList = pvStack_a8;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_cc);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(puStack_108);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(puStack_120);
}

