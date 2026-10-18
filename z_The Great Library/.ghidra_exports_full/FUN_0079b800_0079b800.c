// FUN_0079b800 @ 0079b800 body=[[0079b800, 0079b8aa] [0079b8ae, 0079b93a] [0079b93e, 0079b999] [0079b99d, 0079baf5] [0079bafb, 0079bd17] [0079bd1b, 0079bd40] [0079bd44, 0079bd70] [0079bd74, 0079bda0] [0079bda4, 0079bdcd] [0079bdd1, 0079bebd] [0079bec1, 0079bee6] [0079beea, 0079bf13] [0079bf17, 0079bffd] [0079c001, 0079c036] [0079c03a, 0079c0c7] [0079c0cb, 0079c0f7] [0079c0fb, 0079c263] [0079c267, 0079c29e] [0079c2a2, 0079c2d0] [0079c2d4, 0079c3b1] [0079c3b5, 0079c436] [0079c43a, 0079c568] [0079c56c, 0079c59a] [0079c59e, 0079c5d2] [0079c5d6, 0079c67d] [0079c681, 0079c743] [0079c747, 0079c7a8] [0079c7ac, 0079c7da] [0079c7de, 0079c809] [0079c80d, 0079c90c] [0079c910, 0079ca04] [0079ca08, 0079ca96] [0079ca9a, 0079cac9] [0079cacd, 0079cd0f] [0079cd13, 0079ce2a] [0079ce2e, 0079d40e]]


/* WARNING: Removing unreachable block (ram,0x0079bdfa) */
/* WARNING: Removing unreachable block (ram,0x0079bf40) */

void FUN_0079b800(void)

{
  float ***pppfVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint ***pppuVar7;
  uint ****ppppuVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  code *pcVar13;
  int in_ECX;
  uint unaff_ESI;
  float ***pppfVar14;
  undefined4 **ppuStack_1ac;
  int iStack_1a8;
  uint *puStack_1a4;
  undefined8 *puStack_1a0;
  int iStack_19c;
  char *pcStack_198;
  undefined *puStack_194;
  undefined4 *****pppppuStack_190;
  undefined4 ****ppppuStack_18c;
  undefined4 ****ppppuStack_188;
  char *pcStack_184;
  undefined *puStack_180;
  undefined4 **ppuStack_17c;
  uint ***pppuStack_178;
  undefined8 uStack_174;
  undefined8 uStack_16c;
  undefined8 uStack_164;
  uint ****ppppuStack_15c;
  float ***pppfStack_158;
  uint ***pppuStack_154;
  uint *puStack_150;
  undefined4 ****ppppuStack_14c;
  char ***pppcStack_148;
  undefined4 **ppuStack_144;
  char *pcStack_140;
  uint ***pppuStack_13c;
  uint **ppuStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  char ***pppcStack_108;
  int *piStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined1 *puStack_e8;
  char ***pppcStack_e4;
  undefined4 ***pppuStack_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  char ***pppcStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  undefined1 uStack_bc;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  uint auStack_a4 [2];
  uint auStack_9c [2];
  undefined4 uStack_94;
  uint uStack_90;
  char ***pppcStack_8c;
  undefined4 ***pppuStack_88;
  void *pvStack_84;
  void *pvStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  char ***pppcStack_6c;
  undefined4 ***pppuStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b6c048;
  pvStack_14 = ExceptionList;
  local_54 = 0;
  pppuStack_13c = (uint ***)0x79b844;
  ExceptionList = &pvStack_14;
  iVar4 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 200))();
  pppuStack_13c = (uint ***)0x1f;
  uStack_118 = 0xf;
  uStack_11c = 0;
  ppuStack_12c = (uint **)((uint)ppuStack_12c & 0xffffff00);
  pcStack_140 = "only_unit_from_selection_button";
  if (iVar4 == 1) {
    ppuStack_144 = (undefined4 **)0x79b86e;
    FUN_00409350();
    uStack_c = 0;
    pppuStack_13c = &ppuStack_12c;
    pcStack_140 = (char *)0x79b884;
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
    pcStack_140 = (char *)0x79b890;
    (**(code **)(*piVar5 + 0xbc))();
    puStack_10 = (undefined1 *)0xffffffff;
    if (0xf < uStack_11c) {
                    /* WARNING: Subroutine does not return */
      ppuStack_144 = (undefined4 **)&UNK_0079b8ab;
      FUN_00aae91b();
    }
    pcStack_140 = (char *)0x1f;
    ppuStack_144 = (undefined4 **)0xe16588;
    uStack_11c = 0xf;
    uStack_120 = 0;
    pppcStack_148 = (char ***)0x79b8cf;
    FUN_00409350();
    puStack_10 = (undefined1 *)0x1;
    pcStack_140 = &stack0xfffffed0;
    ppuStack_144 = (undefined4 **)0x79b8e9;
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
    pcVar13 = *(code **)(*piVar5 + 0x38);
  }
  else {
    ppuStack_144 = (undefined4 **)0x79b8fa;
    FUN_00409350();
    uStack_c = 2;
    pppuStack_13c = &ppuStack_12c;
    pcStack_140 = (char *)0x79b914;
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
    pcStack_140 = (char *)0x79b920;
    (**(code **)(*piVar5 + 0xb8))();
    puStack_10 = (undefined1 *)0xffffffff;
    if (0xf < uStack_11c) {
                    /* WARNING: Subroutine does not return */
      ppuStack_144 = (undefined4 **)&UNK_0079b93b;
      FUN_00aae91b();
    }
    pcStack_140 = (char *)0x1f;
    ppuStack_144 = (undefined4 **)0xe16588;
    uStack_11c = 0xf;
    uStack_120 = 0;
    pppcStack_148 = (char ***)0x79b95f;
    FUN_00409350();
    puStack_10 = (undefined1 *)0x3;
    pcStack_140 = &stack0xfffffed0;
    ppuStack_144 = (undefined4 **)0x79b979;
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
    pcVar13 = *(code **)(*piVar5 + 0x34);
  }
  ppuStack_144 = (undefined4 **)0x79b982;
  (*pcVar13)();
  pvStack_14 = (void *)0xffffffff;
  if (0xf < uStack_120) {
                    /* WARNING: Subroutine does not return */
    pppcStack_148 = (char ***)&UNK_0079b99a;
    FUN_00aae91b();
  }
  iVar4 = *(int *)(in_ECX + 0x28);
  if (*(int *)(iVar4 + 0x74) == 0) {
    if (*(char *)(iVar4 + 0x104) != '\0') {
      ppuStack_144 = (undefined4 **)0xd;
      pppcStack_148 = (char ***)0xe166dc;
      uStack_120 = 0xf;
      uStack_124 = 0;
      ppppuStack_14c = (undefined4 ****)0x79ba6e;
      FUN_00409350();
      pvStack_14 = (void *)0x6;
      ppuStack_144 = (undefined4 **)&stack0xfffffecc;
      pppcStack_148 = (char ***)0x79ba88;
      piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))();
      pppcStack_148 = (char ***)0x2;
LAB_0079bad1:
      ppppuStack_14c = (undefined4 ****)0x79bada;
      (**(code **)(*piVar5 + 0x48))();
      goto LAB_0079bae1;
    }
    if (0 < *(int *)(iVar4 + 0xec)) {
      ppuStack_144 = (undefined4 **)0xd;
      pppcStack_148 = (char ***)0xe166dc;
      uStack_120 = 0xf;
      uStack_124 = 0;
      ppppuStack_14c = (undefined4 ****)0x79bab5;
      FUN_00409350();
      pvStack_14 = (void *)0x7;
      ppuStack_144 = (undefined4 **)&stack0xfffffecc;
      pppcStack_148 = (char ***)0x79bacf;
      piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))();
      pppcStack_148 = (char ***)0x5;
      goto LAB_0079bad1;
    }
    ppuStack_144 = (undefined4 **)0x79bb00;
    cVar3 = FUN_005cf180();
    if (cVar3 == '\0') {
      ppuStack_144 = (undefined4 **)0x79bb12;
      FUN_009885d0();
      pvStack_14 = (void *)0x8;
      pppcStack_148 = (char ***)0x79bb2a;
      ppuStack_144 = (undefined4 **)&uStack_110;
      piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))();
      pppcStack_148 = (char ***)0x6;
    }
    else {
      ppuStack_144 = (undefined4 **)0x79bb33;
      FUN_009885d0();
      pvStack_14 = (void *)0x9;
      ppuStack_144 = (undefined4 **)&uStack_110;
      pppcStack_148 = (char ***)0x79bb4d;
      piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))();
      pppcStack_148 = (char ***)0x1;
    }
    ppppuStack_14c = (undefined4 ****)0x79bb58;
    (**(code **)(*piVar5 + 0x48))();
    uStack_1c = 0xffffffff;
    ppppuStack_14c = (undefined4 ****)0x79bb6c;
    FUN_00408ad0();
  }
  else {
    ppuStack_144 = (undefined4 **)0x79b9b0;
    cVar3 = FUN_005cf260();
    ppuStack_144 = (undefined4 **)0xd;
    uStack_120 = 0xf;
    uStack_124 = 0;
    pppcStack_148 = (char ***)0xe166dc;
    if (cVar3 == '\0') {
      ppppuStack_14c = (undefined4 ****)0x79ba0f;
      FUN_00409350();
      pvStack_14 = (void *)0x5;
      ppuStack_144 = (undefined4 **)&stack0xfffffecc;
      pppcStack_148 = (char ***)0x79ba29;
      piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))();
      pppcStack_148 = (char ***)0x3;
      ppppuStack_14c = (undefined4 ****)0x79ba34;
      (**(code **)(*piVar5 + 0x48))();
    }
    else {
      ppppuStack_14c = (undefined4 ****)0x79b9d5;
      FUN_00409350();
      pvStack_14 = (void *)0x4;
      ppuStack_144 = (undefined4 **)&stack0xfffffecc;
      pppcStack_148 = (char ***)0x79b9ef;
      piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))();
      pppcStack_148 = (char ***)0x4;
      ppppuStack_14c = (undefined4 ****)0x79b9fa;
      (**(code **)(*piVar5 + 0x48))();
    }
LAB_0079bae1:
    unaff_ESI = unaff_ESI & 0xffffff00;
    uStack_1c = 0xffffffff;
    if (0xf < uStack_128) {
      ppppuStack_14c = (undefined4 ****)pppuStack_13c;
                    /* WARNING: Subroutine does not return */
      puStack_150 = (uint *)&UNK_0079baf6;
      FUN_00aae91b();
    }
  }
  ppppuStack_14c = *(undefined4 *****)(in_ECX + 0x34);
  if (ppppuStack_14c != (undefined4 ****)0x0) {
    puStack_150 = (uint *)0x79bb79;
    FUN_00798280();
    ppppuStack_14c = *(undefined4 *****)(in_ECX + 0x34);
    if ((*ppppuStack_14c != (undefined4 ***)0x0) && (*(char *)((int)*ppppuStack_14c + 0x67) == '\0')
       ) {
      if (ppppuStack_14c != (undefined4 ****)0x0) {
        puStack_150 = (uint *)0x79bb93;
        FUN_0079d410();
      }
      *(undefined4 *)(in_ECX + 0x34) = 0;
    }
  }
  piVar5 = *(int **)(in_ECX + 0x28);
  if (piVar5 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = piVar5 + 0xe;
  }
  if (piVar6[2] == 0) {
    ppppuStack_14c = (undefined4 ****)0xd;
    puStack_150 = (uint *)0xe16620;
    uStack_128 = 0xf;
    ppuStack_12c = (uint **)0x0;
    pppuStack_13c = (uint ***)((uint)pppuStack_13c & 0xffffff00);
    pppuStack_154 = (uint ***)0x79bf6e;
    FUN_00409350();
    uStack_1c = 0x14;
    ppppuStack_14c = (undefined4 ****)0x2;
    puStack_150 = (uint *)&DAT_00e16848;
    uStack_a8 = 0xf;
    uStack_ac = 0;
    uStack_bc = 0;
    pppuStack_154 = (uint ***)0x79bfa2;
    FUN_00409350();
    uStack_1c = CONCAT31(uStack_1c._1_3_,0x15);
    ppppuStack_14c = &pppuStack_13c;
    puStack_150 = (uint *)0x79bfb9;
    (**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))();
    pppfStack_158 = (float ***)0xffffffff;
    ppppuStack_15c = (uint ****)0x0;
    uStack_164 = CONCAT44(&pppcStack_c8,0x79bfd2);
    FUN_00408ed0();
    pppfStack_158 = (float ***)0x0;
    ppppuStack_15c = (uint ****)&pppcStack_c8;
    uStack_164 = CONCAT44(0x79bfe7,(undefined4 *)uStack_164);
    FUN_00a5ecc0();
    if (0xf < uStack_b4) {
      pppfStack_158 = (float ***)pppcStack_c8;
                    /* WARNING: Subroutine does not return */
      ppppuStack_15c = (uint ****)&UNK_0079bffe;
      FUN_00aae91b();
    }
    uStack_b4 = 0xf;
    uStack_b8 = 0;
    pppcStack_c8 = (char ***)((uint)pppcStack_c8 & 0xffffff00);
    if (0xf < unaff_ESI) {
      uStack_28 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      ppppuStack_15c = (uint ****)&UNK_0079c037;
      pppfStack_158 = (float ***)pppcStack_148;
      FUN_00aae91b();
    }
  }
  else {
    ppppuStack_14c = &pppuStack_e0;
    puStack_150 = (uint *)0x79bbbf;
    piVar5 = (int *)(**(code **)(*piVar5 + 0x7c))();
    puStack_150 = auStack_a4;
    pppuStack_154 = (uint ***)0x79bbd3;
    piVar6 = (int *)(**(code **)(**(int **)(in_ECX + 0x28) + 0x78))();
    pppuStack_154 = (uint ***)0xd;
    pppfStack_158 = (float ***)0xe16620;
    pppfVar14 = (float ***)(*piVar5 + *piVar6);
    ppuStack_144 = (undefined4 **)((uint)ppuStack_144 & 0xffffff00);
    ppppuStack_15c = (uint ****)0x79bbff;
    FUN_00409350();
    if ((int)pppfVar14 < 1000) {
      uStack_24 = 0x10;
      pppuStack_154 = (uint ***)0x1;
      pppfStack_158 = (float ***)&DAT_00df9644;
      uStack_cc = 0xf;
      uStack_d0 = 0;
      pppuStack_e0 = (undefined4 ***)((uint)pppuStack_e0._1_3_ << 8);
      ppppuStack_15c = (uint ****)0x79be36;
      FUN_00409350();
      pppuStack_154 = (uint ***)0x1;
      puStack_e8 = (undefined1 *)&pppfStack_158;
      uStack_24._0_1_ = 0x11;
      ppppuStack_15c = &pppuStack_88;
      uStack_164 = CONCAT44(0x79be56,(undefined4 *)uStack_164);
      pppfStack_158 = pppfVar14;
      FUN_00988a50();
      pppuStack_154 = (uint ***)&pppuStack_e0;
      uStack_24._0_1_ = 0x12;
      pppfStack_158 = (float ***)0x79be6e;
      ppppuVar8 = (uint ****)FUN_00988f20();
      uStack_24 = CONCAT31(uStack_24._1_3_,0x13);
      pppuStack_154 = &ppuStack_144;
      pppfStack_158 = (float ***)0x79be87;
      ppuStack_12c = (uint **)(**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))();
      pppfStack_158 = (float ***)0xffffffff;
      ppppuStack_15c = (uint ****)0x0;
      uStack_164 = CONCAT44(ppppuVar8,0x79be9b);
      FUN_00408ed0();
      pppfStack_158 = (float ***)0x0;
      uStack_164 = CONCAT44(0x79bead,(undefined4 *)uStack_164);
      ppppuStack_15c = ppppuVar8;
      FUN_00a5ecc0();
      if (0xf < uStack_f4) {
        pppfStack_158 = (float ***)pppcStack_108;
                    /* WARNING: Subroutine does not return */
        ppppuStack_15c = (uint ****)&UNK_0079bebe;
        FUN_00aae91b();
      }
      uStack_f4 = 0xf;
      uStack_f8 = 0;
      pppcStack_108 = (char ***)((uint)pppcStack_108 & 0xffffff00);
      if (0xf < uStack_78) {
        pppfStack_158 = (float ***)pppcStack_8c;
                    /* WARNING: Subroutine does not return */
        ppppuStack_15c = (uint ****)&UNK_0079bee7;
        FUN_00aae91b();
      }
      uStack_78 = 0xf;
      uStack_7c = 0;
      pppcStack_8c = (char ***)((uint)pppcStack_8c & 0xffffff00);
      if (0xf < uStack_d0) {
        pppfStack_158 = (float ***)pppcStack_e4;
                    /* WARNING: Subroutine does not return */
        ppppuStack_15c = (uint ****)&UNK_0079bf14;
        FUN_00aae91b();
      }
      uStack_d0 = 0xf;
      uStack_d4 = 0;
      pppcStack_e4 = (char ***)((uint)pppcStack_e4 & 0xffffff00);
    }
    else {
      uStack_24 = 10;
      pppuStack_154 = (uint ***)0x3;
      pppfStack_158 = (float ***)&DAT_00e025cc;
      uStack_cc = 0xf;
      uStack_d0 = 0;
      pppuStack_e0 = (undefined4 ***)((uint)pppuStack_e0._1_3_ << 8);
      ppppuStack_15c = (uint ****)0x79bc3d;
      FUN_00409350();
      pppuStack_154 = (uint ***)0x1;
      puStack_e8 = (undefined1 *)&pppfStack_158;
      uStack_24._0_1_ = 0xb;
      ppppuStack_15c = &pppuStack_68;
      uStack_164 = CONCAT44(0x79bc5d,(undefined4 *)uStack_164);
      pppfStack_158 = pppfVar14;
      pppuVar7 = (uint ***)FUN_00988a50();
      uStack_24._0_1_ = 0xc;
      pppuStack_154 = (uint ***)0x2;
      pppfStack_158 = (float ***)&DAT_00df8510;
      uStack_b0 = 0xf;
      uStack_b4 = 0;
      uStack_c4 = uStack_c4 & 0xffffff00;
      ppppuStack_15c = (uint ****)0x79bc94;
      FUN_00409350();
      uStack_24._0_1_ = 0xd;
      pppfStack_158 = (float ***)0x79bcb0;
      pppuStack_154 = pppuVar7;
      FUN_00988f20();
      pppuStack_154 = (uint ***)&pppuStack_e0;
      uStack_24._0_1_ = 0xe;
      pppfStack_158 = (float ***)0x79bcc8;
      ppppuVar8 = (uint ****)FUN_00988f20();
      uStack_24 = CONCAT31(uStack_24._1_3_,0xf);
      pppuStack_154 = &ppuStack_144;
      pppfStack_158 = (float ***)0x79bce1;
      ppuStack_12c = (uint **)(**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))();
      pppfStack_158 = (float ***)0xffffffff;
      ppppuStack_15c = (uint ****)0x0;
      uStack_164 = CONCAT44(ppppuVar8,0x79bcf5);
      FUN_00408ed0();
      pppfStack_158 = (float ***)0x0;
      uStack_164 = CONCAT44(0x79bd07,(undefined4 *)uStack_164);
      ppppuStack_15c = ppppuVar8;
      FUN_00a5ecc0();
      if (0xf < uStack_f4) {
        pppfStack_158 = (float ***)pppcStack_108;
                    /* WARNING: Subroutine does not return */
        ppppuStack_15c = (uint ****)&UNK_0079bd18;
        FUN_00aae91b();
      }
      uStack_f4 = 0xf;
      uStack_f8 = 0;
      pppcStack_108 = (char ***)((uint)pppcStack_108 & 0xffffff00);
      if (0xf < uStack_78) {
        pppfStack_158 = (float ***)pppcStack_8c;
                    /* WARNING: Subroutine does not return */
        ppppuStack_15c = (uint ****)&UNK_0079bd41;
        FUN_00aae91b();
      }
      uStack_78 = 0xf;
      uStack_7c = 0;
      pppcStack_8c = (char ***)((uint)pppcStack_8c & 0xffffff00);
      if (0xf < uStack_b4) {
        pppfStack_158 = (float ***)pppcStack_c8;
                    /* WARNING: Subroutine does not return */
        ppppuStack_15c = (uint ****)&UNK_0079bd71;
        FUN_00aae91b();
      }
      uStack_b4 = 0xf;
      uStack_b8 = 0;
      pppcStack_c8 = (char ***)((uint)pppcStack_c8 & 0xffffff00);
      if (0xf < uStack_58) {
        pppfStack_158 = (float ***)pppcStack_6c;
                    /* WARNING: Subroutine does not return */
        ppppuStack_15c = (uint ****)&UNK_0079bda1;
        FUN_00aae91b();
      }
      uStack_58 = 0xf;
      uStack_5c = 0;
      pppcStack_6c = (char ***)((uint)pppcStack_6c & 0xffffff00);
      if (0xf < uStack_d0) {
        pppfStack_158 = (float ***)pppcStack_e4;
                    /* WARNING: Subroutine does not return */
        ppppuStack_15c = (uint ****)&UNK_0079bdce;
        FUN_00aae91b();
      }
      uStack_d0 = 0xf;
      uStack_d4 = 0;
      pppcStack_e4 = (char ***)((uint)pppcStack_e4 & 0xffffff00);
    }
  }
  uStack_28 = 0xffffffff;
  pppfStack_158 = (float ***)0xc;
  ppppuStack_15c = (uint ****)0xe167d4;
  pppcStack_148 = (char ***)((uint)pppcStack_148 & 0xffffff00);
  uStack_164 = CONCAT44(0x79c05b,(undefined4 *)uStack_164);
  FUN_00409350();
  uStack_28 = 0x16;
  pppfStack_158 = (float ***)&pppcStack_108;
  ppppuStack_15c = (uint ****)0x79c078;
  uVar9 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x90))();
  uStack_2c = 0x17;
  ppppuStack_15c = (uint ****)&ppppuStack_14c;
  uStack_164 = CONCAT44(0x79c091,(undefined4 *)uStack_164);
  (**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))();
  uStack_164 = 0xffffffff00000000;
  uStack_16c = CONCAT44(uVar9,0x79c0a5);
  FUN_00408ed0();
  uStack_164 = (ulonglong)uVar9;
  uStack_16c = CONCAT44(0x79c0b7,(uint *)uStack_16c);
  FUN_00a5ecc0();
  if (0xf < uStack_fc) {
    uStack_164 = CONCAT44(uStack_110,&UNK_0079c0c8);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_30 = 0xffffffff;
  uStack_fc = 0xf;
  uStack_100 = 0;
  uStack_110 = uStack_110 & 0xffffff00;
  if ((undefined4 ****)0xf < pppuStack_13c) {
    uStack_164 = CONCAT44(puStack_150,&UNK_0079c0f8);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_164 = CONCAT44(0x79c10b,(undefined4 *)uStack_164);
  cVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x28) + 0xd8) + 0x20))();
  pppuStack_13c = (uint ***)0xf;
  puStack_150 = (uint *)((uint)puStack_150 & 0xffffff00);
  if (cVar3 == '\0') {
    uStack_164 = 0x900e02578;
    pcStack_140 = (char *)0x0;
    uStack_16c = CONCAT44(0x79c196,(uint *)uStack_16c);
    FUN_00409350();
    uStack_30 = 0x19;
    uStack_164 = 0xa00e103c0;
    uStack_d8 = 0xf;
    uStack_dc = 0;
    uStack_ec = uStack_ec & 0xffffff00;
    uStack_16c = CONCAT44(0x79c1c4,(uint *)uStack_16c);
    FUN_00409350();
    uStack_164 = CONCAT44(&puStack_150,&uStack_d0);
    uStack_30._0_1_ = 0x1a;
    uStack_16c = CONCAT44(0x79c1de,(uint *)uStack_16c);
    FUN_009a8ee0();
    uStack_30._0_1_ = 0x1b;
    uStack_164 = CONCAT44(0x79c1ef,(undefined4 *)uStack_164);
    iVar4 = FUN_00475500();
    uStack_16c = *(undefined8 *)(iVar4 + 0x6c);
    uStack_164 = *(undefined8 *)(iVar4 + 0x74);
    uStack_174 = CONCAT44(0x79c214,(undefined4)uStack_174);
    uVar9 = FUN_009a9880();
    uStack_30 = CONCAT31(uStack_30._1_3_,0x1c);
    uStack_164._4_4_ = (uint **)&uStack_ec;
    uStack_164._0_4_ = (undefined4 *)0x79c22d;
    uVar10 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))();
    uStack_164._0_4_ = (undefined4 *)0xffffffff;
    uStack_16c = (ulonglong)uVar9;
    uStack_174 = CONCAT44(0x79c241,(undefined4)uStack_174);
    FUN_00408ed0();
    uStack_164 = ZEXT48(uStack_164._4_4_) << 0x20;
    uStack_16c = CONCAT44(uVar9,0x79c253);
    FUN_00a5ecc0();
    if (0xf < uStack_100) {
      uStack_164 = CONCAT44(uStack_164._4_4_,uStack_114);
      uStack_16c = CONCAT44(&UNK_0079c264,(uint *)uStack_16c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_164._0_4_ = &uStack_d4;
    uStack_100 = 0xf;
    piStack_104 = (int *)0x0;
    uStack_114 = uStack_114 & 0xffffff00;
    uStack_34 = CONCAT31(uStack_34._1_3_,0x1a);
    uStack_16c = CONCAT44(0x79c28b,(uint *)uStack_16c);
    FUN_009a9740();
    if (0xf < uStack_dc) {
      uStack_164 = CONCAT44(uStack_164._4_4_,uStack_f0);
      uStack_16c = CONCAT44(&UNK_0079c29f,(uint *)uStack_16c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_dc = 0xf;
    pppuStack_e0 = (uint ***)0x0;
    uStack_f0 = uStack_f0 & 0xffffff00;
  }
  else {
    uStack_164 = 0xa00e103c0;
    pcStack_140 = (char *)0x0;
    uStack_16c = CONCAT44(0x79c130,(uint *)uStack_16c);
    FUN_00409350();
    uStack_30 = 0x18;
    uStack_164._4_4_ = &puStack_150;
    uVar9 = *(int *)(*(int *)(in_ECX + 0x28) + 0xd8) + 0x94;
    uStack_164._0_4_ = (undefined4 *)0x79c159;
    uVar10 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))();
    uStack_164._0_4_ = (undefined4 *)0xffffffff;
    uStack_16c = (ulonglong)uVar9;
    uStack_174 = CONCAT44(0x79c16d,(undefined4)uStack_174);
    FUN_00408ed0();
    uStack_164._0_4_ = (undefined4 *)0x0;
    uStack_16c = CONCAT44(uVar9,0x79c17f);
    FUN_00a5ecc0();
  }
  uStack_34 = 0xffffffff;
  if (0xf < pcStack_140) {
    uStack_164 = CONCAT44(uStack_164._4_4_,pppuStack_154);
    uStack_16c = CONCAT44(&UNK_0079c2d1,(uint *)uStack_16c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_164._0_4_ = (undefined4 *)0x13;
  pcStack_140 = (char *)0xf;
  ppuStack_144 = (undefined4 **)0x0;
  pppuStack_154 = (uint ***)((uint)pppuStack_154 & 0xffffff00);
  uStack_16c = 0xe0c5500079c2f5;
  FUN_00409350();
  uStack_34 = 0x1d;
  uStack_164 = CONCAT44(uStack_164._4_4_,&pppuStack_154);
  uStack_16c = CONCAT44(0x79c30f,(uint *)uStack_16c);
  iVar4 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x44))();
  piVar5 = *(int **)(iVar4 + 0x94);
  pppuStack_13c = *(uint ****)(*(int *)(*(int *)(in_ECX + 0x28) + 0xd8) + 0xd8);
  uStack_16c = 0x47c350400079c33b;
  FUN_00401000();
  uStack_16c = CONCAT44(0x79c343,(uint *)uStack_16c);
  iVar4 = FUN_00b31c00();
  uStack_174 = (longlong)iVar4 * (longlong)(int)pppuStack_13c;
  uStack_16c = 1000;
  pppuStack_178 = (uint ***)0x79c355;
  pppuStack_13c = (uint ***)__alldiv();
  uStack_16c = 0x43fa40010079c36c;
  FUN_00401000();
  uStack_16c = CONCAT44(0x79c374,(uint *)uStack_16c);
  iVar4 = FUN_00b31c00();
  uStack_16c._4_4_ = (iVar4 + (int)pppuStack_13c) / 1000;
  uStack_16c._0_4_ = (uint *)0x79c396;
  (**(code **)(*piVar5 + 0x5c))();
  uStack_3c = 0xffffffff;
  if (0xf < pppcStack_148) {
    uStack_16c = CONCAT44(uStack_16c._4_4_,ppppuStack_15c);
    uStack_174 = CONCAT44(&UNK_0079c3b2,(undefined4)uStack_174);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if ((*(int *)(in_ECX + 0x2c4) == 0) ||
     (*(int *)(*(int *)(in_ECX + 0x28) + 0xd8) != *(int *)(in_ECX + 0x2c4))) {
    uStack_16c._0_4_ = (uint *)0xc;
    pppcStack_e4 = (char ***)0xf;
    puStack_e8 = (undefined1 *)0x0;
    uStack_f8 = uStack_f8 & 0xffffff00;
    uStack_174 = 0xe168180079c3fa;
    FUN_00409350();
    uStack_3c = 0x1e;
    uStack_16c._0_4_ = &uStack_f8;
    uStack_174 = CONCAT44(0x79c414,(undefined4)uStack_174);
    piStack_104 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))();
    uStack_40 = 0xffffffff;
    if (0xf < puStack_e8) {
      uStack_174 = CONCAT44(uStack_fc,&UNK_0079c437);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_e8 = (undefined1 *)0xf;
    uStack_ec = 0;
    uStack_fc = uStack_fc & 0xffffff00;
    uStack_174 = CONCAT44(0x79c465,(undefined4)uStack_174);
    FUN_00436780();
    uStack_40 = 0x1f;
    uStack_174 = CONCAT44(0x79c484,(undefined4)uStack_174);
    FUN_004367c0();
    uStack_40._0_1_ = 0x20;
    ppuStack_144 = *(undefined4 ***)(DAT_012586e0 + 0x4c);
    if (ppuStack_144 == (undefined4 **)0x1) {
      uStack_174 = 0xffffffff00000000;
      ppuStack_17c = (undefined4 **)0x79c4ae;
      pppuStack_178 = (uint ***)((int)&uStack_164 + 4);
      FUN_00408ed0();
    }
    uStack_174 = 0x400df2c9c;
    uStack_90 = 0xf;
    uStack_94 = 0;
    auStack_a4[0] = auStack_a4[0] & 0xffffff00;
    pppuStack_178 = (uint ***)0x79c4d9;
    FUN_00409350();
    uStack_40._0_1_ = 0x21;
    uStack_174 = 0x1300df2c88;
    uStack_70 = 0xf;
    uStack_74 = 0;
    pvStack_84 = (void *)((uint)pvStack_84 & 0xffffff00);
    pppuStack_178 = (uint ***)0x79c50a;
    FUN_00409350();
    uStack_40._0_1_ = 0x22;
    uStack_174 = CONCAT44(*(int *)(*(int *)(in_ECX + 0x28) + 0xd8) + 0xb4,0x79c534);
    FUN_00988f20();
    uStack_40._0_1_ = 0x23;
    uStack_174 = CONCAT44(auStack_a4,0x79c552);
    FUN_00988f20();
    if (0xf < uStack_ac) {
      uStack_174 = CONCAT44(uStack_c0,&UNK_0079c569);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_ac = 0xf;
    uStack_b0 = 0;
    uStack_c0 = uStack_c0 & 0xffffff00;
    if (0xf < uStack_70) {
      uStack_174 = CONCAT44(pvStack_84,&UNK_0079c59b);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_70 = 0xf;
    uStack_74 = 0;
    pvStack_84 = (void *)((uint)pvStack_84 & 0xffffff00);
    uStack_40._0_1_ = 0x27;
    uVar2 = (undefined1)uStack_40;
    uStack_40._0_1_ = 0x27;
    if (0xf < uStack_90) {
      uStack_174 = CONCAT44(auStack_a4[0],&UNK_0079c5d3);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_90 = 0xf;
    uStack_94 = 0;
    auStack_a4[0] = auStack_a4[0] & 0xffffff00;
    if (ppuStack_144 == (undefined4 **)0x2) {
      uStack_174 = CONCAT44(&pppuStack_13c,(int)&uStack_164 + 4);
      pppuStack_178 = (uint ***)&uStack_120;
      ppuStack_17c = (undefined4 **)0x79c64e;
      uStack_40._0_1_ = uVar2;
      pppuStack_178 = (uint ***)FUN_00436de0();
      uStack_174 = 0xffffffff00000000;
      uStack_40._0_1_ = 0x29;
      ppuStack_17c = (undefined4 **)0x79c665;
      FUN_00408ed0();
    }
    else {
      uStack_174 = CONCAT44(&pppuStack_e0,0x79c608);
      pppuStack_178 = (uint ***)FUN_00988f20();
      uStack_174 = 0xffffffff00000000;
      uStack_40._0_1_ = 0x28;
      ppuStack_17c = (undefined4 **)0x79c621;
      FUN_00408ed0();
    }
    if (0xf < uStack_10c) {
      uStack_40._0_1_ = 0x27;
      uStack_174 = CONCAT44(uStack_120,&UNK_0079c67e);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_40._0_1_ = 0x27;
    uStack_174 = CONCAT44(0x79c68b,(undefined4)uStack_174);
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0x40))();
    uStack_174 = 0x1ac0079c697;
    uStack_c4 = FUN_00aae9af();
    uStack_40._0_1_ = 0x2a;
    if (uStack_c4 == 0) {
      uVar11 = 0;
    }
    else {
      uStack_174 = CONCAT44(0x79c6bb,(undefined4)uStack_174);
      FUN_009885d0();
      uStack_40 = CONCAT31(uStack_40._1_3_,0x2b);
      pppuStack_88 = (undefined4 ***)0x1;
      uStack_174 = CONCAT44(&uStack_120,0x79c6dc);
      uVar11 = FUN_005c2ad0();
      pcStack_140 = *(char **)(iVar4 + 0x6b9c0);
      uStack_174 = CONCAT44(iVar4,uVar11);
      pppuStack_178 = (uint ***)&pppuStack_e0;
      ppuStack_17c = (undefined4 **)
                     CONCAT22((short)pcStack_140,(short)*(undefined4 *)(iVar4 + 0x6b9bc));
      puStack_180 = (undefined *)uStack_c4;
      pcStack_184 = (char *)0x79c718;
      ppuStack_144 = ppuStack_17c;
      uVar11 = FUN_009c4b50();
    }
    piVar5 = piStack_104;
    uStack_40 = 0x27;
    if (((uint)pppuStack_88 & 1) != 0) {
      if (0xf < uStack_10c) {
        uStack_174 = CONCAT44(uStack_120,&UNK_0079c744);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_10c = 0xf;
      uStack_110 = 0;
      uStack_120 = uStack_120 & 0xffffff00;
    }
    uStack_174 = CONCAT44(uVar11,0x79c76d);
    (**(code **)(*piStack_104 + 0xe0))();
    if (*(char *)(*(int *)(in_ECX + 0x20) + 0x67) != '\0') {
      uStack_16c._0_4_ = (uint *)0x79c77f;
      (**(code **)(*piVar5 + 0x34))();
    }
    *(undefined4 *)(in_ECX + 0x2c4) = *(undefined4 *)(*(int *)(in_ECX + 0x28) + 0xd8);
    if ((float ***)0xf < pppcStack_c8) {
      uStack_16c = CONCAT44(uStack_16c._4_4_,uStack_dc);
      uStack_174 = CONCAT44(&UNK_0079c7a9,(undefined4)uStack_174);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pppcStack_c8 = (char ***)0xf;
    uStack_cc = 0;
    uStack_dc = uStack_dc & 0xffffff00;
    if (0xf < pppcStack_148) {
      uStack_16c = CONCAT44(uStack_16c._4_4_,ppppuStack_15c);
      uStack_174 = CONCAT44(&UNK_0079c7db,(undefined4)uStack_174);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_3c = 0xffffffff;
    pppcStack_148 = (char ***)0xf;
    ppppuStack_14c = (uint ****)0x0;
    ppppuStack_15c = (uint ****)((uint)ppppuStack_15c & 0xffffff00);
    if (0xf < uStack_124) {
      uStack_16c = CONCAT44(uStack_16c._4_4_,uVar10);
      uStack_174 = CONCAT44(&UNK_0079c80a,(undefined4)uStack_174);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  uStack_3c = 0xffffffff;
  uStack_16c = CONCAT44(uStack_16c._4_4_,&uStack_100);
  uStack_174 = CONCAT44(0x79c81f,(undefined4)uStack_174);
  piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x28) + 0x94))();
  piStack_104 = (int *)((float)*piVar5 / 1000.0);
  uStack_174._4_4_ = &uStack_c4;
  uStack_174._0_4_ = 0x79c84e;
  piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x28) + 0x44))();
  pppfVar1 = (float ***)((float)*piVar5 / 1000.0);
  pppfVar14 = (float ***)pppcStack_108;
  if ((float)pppcStack_108 < (float)pppfVar1) {
    pppfVar14 = pppfVar1;
  }
  uStack_174._0_4_ = 7;
  pppcStack_148 = (char ***)(((float)pppfVar1 * 100.0) / (float)pppfVar14);
  pppuStack_178 = (uint ***)0xe15e68;
  uStack_110 = 0xf;
  uStack_114 = 0;
  uStack_124 = uStack_124 & 0xffffff00;
  ppuStack_17c = (undefined4 **)0x79c8c8;
  FUN_00409350();
  uStack_44 = 0x2d;
  uStack_174 = CONCAT44(uStack_174._4_4_,&uStack_124);
  pppuStack_178 = (uint ***)0x79c8e2;
  piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))();
  pppuStack_178 = (uint ***)(int)(float)ppppuStack_14c;
  ppuStack_17c = (undefined4 **)0x79c8f2;
  (**(code **)(*piVar5 + 0x48))();
  uStack_4c = 0xffffffff;
  if (0xf < uStack_118) {
    ppuStack_17c = ppuStack_12c;
                    /* WARNING: Subroutine does not return */
    puStack_180 = &UNK_0079c90d;
    FUN_00aae91b();
  }
  ppuStack_17c = *(undefined4 ***)(in_ECX + 0x28);
  puStack_180 = (undefined *)0x79c91d;
  piVar5 = (int *)FUN_005cd690();
  puStack_150 = (uint *)((float)*piVar5 / 1000.0);
  ppuStack_17c = (undefined4 **)&uStack_110;
  puStack_180 = (undefined *)0x79c949;
  piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x28) + 0x50))();
  pppuVar7 = (uint ***)((float)*piVar5 / 1000.0);
  if ((float)*piVar5 / 1000.0 < (float)pppuStack_154) {
    pppuVar7 = pppuStack_154;
  }
  puStack_180 = (undefined *)0x7;
  pppuStack_154 = (uint ***)(((float)pppuStack_154 * 100.0) / (float)pppuVar7);
  pcStack_184 = "str_bar";
  uStack_11c = 0xf;
  uStack_120 = 0;
  ppppuStack_188 = (undefined4 ****)0x79c9c3;
  FUN_00409350();
  uStack_50 = 0x2e;
  puStack_180 = &stack0xfffffed0;
  pcStack_184 = (char *)0x79c9dd;
  piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x44))();
  pcStack_184 = (char *)(int)(float)pppfStack_158;
  ppppuStack_188 = (undefined4 ****)0x79c9ed;
  (**(code **)(*piVar5 + 0x48))();
  uStack_58 = 0xffffffff;
  if (0xf < uStack_124) {
                    /* WARNING: Subroutine does not return */
    ppppuStack_18c = (undefined4 ****)&UNK_0079ca05;
    ppppuStack_188 = (undefined4 ****)uVar10;
    FUN_00aae91b();
  }
  ppppuStack_188 = (undefined4 ****)0xc;
  ppppuStack_18c = (undefined4 ****)0xe166c0;
  uStack_124 = 0xf;
  uStack_128 = 0;
  pppppuStack_190 = (undefined4 *****)0x79ca2d;
  FUN_00409350();
  uStack_58 = 0x2f;
  ppppuStack_188 = &pppuStack_154;
  ppppuStack_18c = (undefined4 ****)0x79ca4d;
  uVar10 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x28) + 0xdc) + 0x1c))();
  uStack_5c = CONCAT31(uStack_5c._1_3_,0x30);
  ppppuStack_18c = &pppuStack_13c;
  pppppuStack_190 = (undefined4 *****)0x79ca66;
  (**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))();
  pppppuStack_190 = (undefined4 *****)0xffffffff;
  puStack_194 = (undefined *)0x0;
  iStack_19c = 0x79ca78;
  pcStack_198 = (char *)uVar10;
  FUN_00408ed0();
  pppppuStack_190 = (undefined4 *****)0x0;
  pcStack_198 = (char *)0x79ca86;
  puStack_194 = (undefined *)uVar10;
  FUN_00a5ecc0();
  if (0xf < pppcStack_148) {
    pppppuStack_190 = (undefined4 *****)ppppuStack_15c;
                    /* WARNING: Subroutine does not return */
    puStack_194 = &UNK_0079ca97;
    FUN_00aae91b();
  }
  uStack_60 = 0xffffffff;
  pppcStack_148 = (char ***)0xf;
  ppppuStack_14c = (undefined4 ****)0x0;
  ppppuStack_15c = (uint ****)((uint)ppppuStack_15c & 0xffffff00);
  if ((uint **)0xf < ppuStack_12c) {
    pppppuStack_190 = (undefined4 *****)pcStack_140;
                    /* WARNING: Subroutine does not return */
    puStack_194 = &UNK_0079caca;
    FUN_00aae91b();
  }
  if (*(int *)(*(int *)(in_ECX + 0x28) + 0x194) == 0) {
    pppppuStack_190 = (undefined4 *****)0x79cae2;
    cVar3 = FUN_005cc390();
    if (cVar3 != '\0') goto LAB_0079ccc4;
    piVar5 = *(int **)(in_ECX + 0x28);
    if ((char)piVar5[0x41] == '\0') {
      if (piVar5[0x1d] != 0) {
        pppppuStack_190 = (undefined4 *****)0x79cb34;
        FUN_009885d0();
        uStack_60 = 0x33;
LAB_0079cc50:
        pppppuStack_190 = &ppppuStack_15c;
        puStack_194 = (undefined *)0x79cc5f;
        piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
        goto LAB_0079cc5f;
      }
      pppppuStack_190 = (undefined4 *****)0x79cb4b;
      cVar3 = (**(code **)(*piVar5 + 0x3c))();
      if ((cVar3 != '\0') &&
         (*(char *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x28) + 0xdc) + 0x5c) + 0x2a) == '\0')) {
        pppppuStack_190 = (undefined4 *****)0x79cb6f;
        FUN_009885d0();
        uStack_60 = 0x34;
        goto LAB_0079cc50;
      }
      piVar5 = *(int **)(in_ECX + 0x28);
      iVar4 = piVar5[0x37];
      uStack_124 = *(uint *)(iVar4 + 0x130);
      iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar4 + 0x134) * 4);
      if (*(int *)(DAT_012588e8 + 0xb60) != *(int *)(iVar4 + 0x20)) {
        if ((*(int *)(*(int *)(*(int *)(iVar4 + 0xbe8) + *(int *)(DAT_012588e8 + 0xb60) * 4) + 0x34)
             == 0) &&
           (((*(char *)(DAT_012588e8 + 0xb5c) != 'R' || (*(char *)(DAT_012588e8 + 0xb5d) != 'E')) ||
            (*(char *)(DAT_012588e8 + 0xb5e) != 'B')))) {
          pppppuStack_190 = (undefined4 *****)0x79cbeb;
          cVar3 = FUN_00416e40();
          if (cVar3 == '\0') goto LAB_0079cc17;
        }
        pppppuStack_190 = (undefined4 *****)0x79cbfd;
        FUN_009885d0();
        uStack_60 = 0x35;
        puStack_194 = (undefined *)0x79cc15;
        pppppuStack_190 = &ppppuStack_15c;
        piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
        goto LAB_0079cc5f;
      }
LAB_0079cc17:
      pppppuStack_190 = (undefined4 *****)0x79cc20;
      cVar3 = (**(code **)(*piVar5 + 0x38))();
      if (cVar3 != '\0') {
        pppppuStack_190 = (undefined4 *****)0x79cc2e;
        iVar4 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x2c))();
        if (*(int *)(iVar4 + 0x1b4) != 0) {
          pppppuStack_190 = (undefined4 *****)0x79cc45;
          FUN_009885d0();
          uStack_60 = 0x36;
          goto LAB_0079cc50;
        }
      }
      pppppuStack_190 = (undefined4 *****)0x79cc8e;
      FUN_009885d0();
      uStack_60 = 0x37;
      puStack_194 = (undefined *)0x79cca6;
      pppppuStack_190 = &ppppuStack_15c;
      piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
      puStack_194 = (undefined *)0x79ccb2;
      (**(code **)(*piVar5 + 0xb8))();
      uStack_64 = 0xffffffff;
      puStack_194 = (undefined *)0x79ccc2;
      FUN_00408ad0();
    }
    else {
      pppppuStack_190 = (undefined4 *****)0x79cb03;
      FUN_009885d0();
      uStack_60 = 0x32;
      puStack_194 = (undefined *)0x79cb1b;
      pppppuStack_190 = &ppppuStack_15c;
      piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
LAB_0079cc5f:
      puStack_194 = (undefined *)0x79cc6b;
      (**(code **)(*piVar5 + 0xbc))();
      uStack_64 = 0xffffffff;
      puStack_194 = (undefined *)0x79cc7b;
      FUN_00408ad0();
    }
  }
  else {
LAB_0079ccc4:
    pppppuStack_190 = (undefined4 *****)0xe16464;
    puStack_194 = (undefined *)0x79ccd2;
    FUN_004471e0();
    uStack_60 = 0x31;
    pppppuStack_190 = &ppppuStack_15c;
    puStack_194 = (undefined *)0x79ccec;
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
    puStack_194 = (undefined *)0x79ccf8;
    (**(code **)(*piVar5 + 0xbc))();
    uStack_64 = 0xffffffff;
    if ((undefined4 ****)0xf < ppppuStack_14c) {
      puStack_194 = (undefined *)uStack_164._4_4_;
                    /* WARNING: Subroutine does not return */
      pcStack_198 = &UNK_0079cd10;
      FUN_00aae91b();
    }
  }
  puStack_194 = (undefined *)0x79cd1d;
  cVar3 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x38))();
  if (cVar3 == '\0') {
LAB_0079cd4f:
    if (*(int *)(*(int *)(in_ECX + 0x28) + 0x194) != 0) {
      puStack_194 = (undefined *)0x79cd69;
      FUN_009885d0();
      uStack_64 = 0x39;
      goto LAB_0079cdb7;
    }
    if (*(int *)(*(int *)(in_ECX + 0x28) + 0x74) != 0) {
      puStack_194 = (undefined *)0x79cdac;
      FUN_009885d0();
      uStack_64 = 0x3b;
      goto LAB_0079cdb7;
    }
    puStack_194 = (undefined *)0x79cd81;
    FUN_009885d0();
    uStack_64 = 0x3a;
    puStack_194 = (undefined *)((int)&uStack_164 + 4);
    pcStack_198 = (char *)0x79cd9b;
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
    pcVar13 = *(code **)(*piVar5 + 0xb8);
  }
  else {
    puStack_194 = (undefined *)0x79cd2b;
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x2c))();
    if (*(int *)(iVar4 + 0x1b4) == 0) goto LAB_0079cd4f;
    puStack_194 = (undefined *)0x79cd42;
    FUN_009885d0();
    uStack_64 = 0x38;
LAB_0079cdb7:
    puStack_194 = (undefined *)((int)&uStack_164 + 4);
    pcStack_198 = (char *)0x79cdc6;
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
    pcVar13 = *(code **)(*piVar5 + 0xbc);
  }
  pcStack_198 = (char *)0x79cdd2;
  (*pcVar13)();
  pppuStack_68 = (undefined4 ***)0xffffffff;
  pcStack_198 = (char *)0x79cde2;
  FUN_00408ad0();
  pcStack_198 = "disbandtoosmallbutton";
  iStack_19c = 0x79cdf0;
  FUN_004471e0();
  pppuStack_68 = (undefined4 ***)0x3c;
  pcStack_198 = (char *)&uStack_164;
  iStack_19c = 0x79ce0a;
  piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
  iStack_19c = 0x79ce13;
  (**(code **)(*piVar5 + 0x38))();
  pppcStack_6c = (char ***)0xffffffff;
  if ((uint ***)0xf < pppuStack_154) {
    iStack_19c = uStack_16c._4_4_;
                    /* WARNING: Subroutine does not return */
    puStack_1a0 = (undefined8 *)&UNK_0079ce2b;
    FUN_00aae91b();
  }
  iStack_19c = 0x79ce38;
  cVar3 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x38))();
  if ((cVar3 != '\0') && (iVar4 = *(int *)(in_ECX + 0x28), 0 < *(int *)(iVar4 + 0x40))) {
    if (iVar4 == 0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      puVar12 = (undefined4 *)(iVar4 + 0x38);
    }
    piVar5 = (int *)*puVar12;
    do {
      if (piVar5 == (int *)0x0) goto LAB_0079ced3;
      iVar4 = *piVar5;
      piVar5 = (int *)piVar5[2];
    } while ((*(int *)(iVar4 + 0x30) == 0) ||
            (*(int *)(*(int *)(DAT_012586dc + 0x20) + 0x10) / 1000 <=
             *(int *)(*(int *)(iVar4 + 0x30) + 0x58)));
    iStack_19c = 0x79cea4;
    FUN_009885d0();
    pppcStack_6c = (char ***)0x3d;
    puStack_1a0 = (undefined8 *)0x79cebc;
    iStack_19c = (int)&uStack_16c + 4;
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
    puStack_1a0 = (undefined8 *)0x79cec5;
    (**(code **)(*piVar5 + 0x34))();
    pppcStack_6c = (char ***)0xffffffff;
    iStack_19c = 0x79ced3;
    FUN_00408ad0();
  }
LAB_0079ced3:
  iStack_19c = 0x79cedd;
  cVar3 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x38))();
  if (cVar3 == '\0') {
LAB_0079cf0f:
    if (*(int *)(*(int *)(in_ECX + 0x28) + 0x194) != 0) {
      iStack_19c = 0x79cf29;
      FUN_009885d0();
      pppcStack_6c = (char ***)0x3f;
      goto LAB_0079cf77;
    }
    if (*(int *)(*(int *)(in_ECX + 0x28) + 0x74) != 0) {
      iStack_19c = 0x79cf6c;
      FUN_009885d0();
      pppcStack_6c = (char ***)0x41;
      goto LAB_0079cf77;
    }
    iStack_19c = 0x79cf41;
    FUN_009885d0();
    pppcStack_6c = (char ***)0x40;
    iStack_19c = (int)&uStack_16c + 4;
    puStack_1a0 = (undefined8 *)0x79cf5b;
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
    pcVar13 = *(code **)(*piVar5 + 0xb8);
  }
  else {
    iStack_19c = 0x79ceeb;
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x2c))();
    if (*(int *)(iVar4 + 0x1b4) == 0) goto LAB_0079cf0f;
    iStack_19c = 0x79cf02;
    FUN_009885d0();
    pppcStack_6c = (char ***)0x3e;
LAB_0079cf77:
    iStack_19c = (int)&uStack_16c + 4;
    puStack_1a0 = (undefined8 *)0x79cf86;
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
    pcVar13 = *(code **)(*piVar5 + 0xbc);
  }
  puStack_1a0 = (undefined8 *)0x79cf92;
  (*pcVar13)();
  uStack_70 = 0xffffffff;
  puStack_1a0 = (undefined8 *)0x79cfa2;
  FUN_00408ad0();
  puStack_1a0 = (undefined8 *)0x79cfac;
  cVar3 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x38))();
  if ((cVar3 == '\0') || (1 < *(int *)(*(int *)(in_ECX + 0x28) + 0x40))) {
    piVar5 = *(int **)(in_ECX + 0x28);
    if (piVar5[0x1d] == 0) {
      if (piVar5[0x65] == 0) {
        puStack_1a0 = (undefined8 *)0x79d122;
        cVar3 = (**(code **)(*piVar5 + 0x3c))();
        if (cVar3 != '\0') {
          puStack_1a0 = (undefined8 *)0x79d130;
          iVar4 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x30))();
          if (0 < *(int *)(iVar4 + 0x1ac)) {
            puStack_1a0 = (undefined8 *)0x79d147;
            FUN_009885d0();
            uStack_70 = 0x48;
            puStack_1a4 = (uint *)0x79d15f;
            puStack_1a0 = &uStack_16c;
            piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
            puStack_1a4 = (uint *)0x79d16b;
            (**(code **)(*piVar5 + 0xbc))();
            uStack_74 = 0xffffffff;
            puStack_1a4 = (uint *)0x79d179;
            FUN_00408ad0();
            puStack_1a4 = (uint *)0x79d18a;
            FUN_009885d0();
            uStack_74 = 0x49;
            goto LAB_0079d01d;
          }
        }
        puStack_1a0 = (undefined8 *)0x79d1a4;
        cVar3 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x38))();
        if (cVar3 != '\0') {
          puStack_1a0 = (undefined8 *)0x79d1b2;
          iVar4 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x2c))();
          if (*(int *)(iVar4 + 0x1b4) != 0) {
            puStack_1a0 = (undefined8 *)0x79d1c9;
            FUN_009885d0();
            uStack_70 = 0x4a;
            puStack_1a4 = (uint *)0x79d1e1;
            puStack_1a0 = &uStack_16c;
            piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
            puStack_1a4 = (uint *)0x79d1ed;
            (**(code **)(*piVar5 + 0xbc))();
            uStack_74 = 0xffffffff;
            puStack_1a4 = (uint *)0x79d1fb;
            FUN_00408ad0();
            puStack_1a4 = (uint *)0x79d20c;
            FUN_009885d0();
            uStack_74 = 0x4b;
            goto LAB_0079d01d;
          }
        }
        puStack_1a0 = (undefined8 *)0x79d232;
        iVar4 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 200))();
        if ((iVar4 == 1) && (1 < *(int *)(*(int *)(in_ECX + 0x28) + 0x40))) {
          puStack_1a0 = (undefined8 *)0x79d251;
          FUN_009885d0();
          uStack_70 = 0x4c;
          puStack_1a4 = (uint *)0x79d269;
          puStack_1a0 = &uStack_16c;
          piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
          puStack_1a4 = (uint *)0x79d275;
          (**(code **)(*piVar5 + 0xb8))();
          uStack_74 = 0xffffffff;
          puStack_1a4 = (uint *)0x79d283;
          FUN_00408ad0();
          puStack_1a4 = (uint *)0x79d294;
          FUN_009885d0();
          uStack_74 = 0x4d;
          iStack_1a8 = 0x79d2ac;
          puStack_1a4 = &uStack_f4;
          piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
          iStack_1a8 = 0x79d2b8;
          (**(code **)(*piVar5 + 0xb8))();
        }
        else {
          puStack_1a0 = (undefined8 *)0x79d2cf;
          FUN_009885d0();
          uStack_70 = 0x4e;
          puStack_1a4 = (uint *)0x79d2e7;
          puStack_1a0 = &uStack_16c;
          piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
          puStack_1a4 = (uint *)0x79d2f3;
          (**(code **)(*piVar5 + 0xbc))();
          uStack_74 = 0xffffffff;
          puStack_1a4 = (uint *)0x79d301;
          FUN_00408ad0();
          puStack_1a4 = (uint *)0x79d312;
          FUN_009885d0();
          uStack_74 = 0x4f;
          iStack_1a8 = 0x79d32a;
          puStack_1a4 = auStack_9c;
          piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
          iStack_1a8 = 0x79d336;
          (**(code **)(*piVar5 + 0xbc))();
        }
        goto LAB_0079d338;
      }
      puStack_1a0 = (undefined8 *)0x79d0c8;
      FUN_009885d0();
      uStack_70 = 0x46;
      puStack_1a4 = (uint *)0x79d0e0;
      puStack_1a0 = &uStack_16c;
      piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
      puStack_1a4 = (uint *)0x79d0ec;
      (**(code **)(*piVar5 + 0xbc))();
      uStack_74 = 0xffffffff;
      puStack_1a4 = (uint *)0x79d0fa;
      FUN_00408ad0();
      puStack_1a4 = (uint *)0x79d10b;
      FUN_009885d0();
      uStack_74 = 0x47;
    }
    else {
      puStack_1a0 = (undefined8 *)0x79d05e;
      FUN_009885d0();
      uStack_70 = 0x44;
      puStack_1a4 = (uint *)0x79d076;
      puStack_1a0 = &uStack_16c;
      piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
      puStack_1a4 = (uint *)0x79d082;
      (**(code **)(*piVar5 + 0xbc))();
      uStack_74 = 0xffffffff;
      puStack_1a4 = (uint *)0x79d090;
      FUN_00408ad0();
      puStack_1a4 = (uint *)0x79d0a1;
      FUN_009885d0();
      uStack_74 = 0x45;
    }
  }
  else {
    puStack_1a0 = (undefined8 *)0x79cfcf;
    FUN_009885d0();
    uStack_70 = 0x42;
    puStack_1a4 = (uint *)0x79cfe7;
    puStack_1a0 = &uStack_16c;
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
    puStack_1a4 = (uint *)0x79cff3;
    (**(code **)(*piVar5 + 0xbc))();
    uStack_74 = 0xffffffff;
    puStack_1a4 = (uint *)0x79d001;
    FUN_00408ad0();
    puStack_1a4 = (uint *)0x79d012;
    FUN_009885d0();
    uStack_74 = 0x43;
  }
LAB_0079d01d:
  puStack_1a4 = &uStack_f4;
  iStack_1a8 = 0x79d02f;
  piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
  iStack_1a8 = 0x79d03b;
  (**(code **)(*piVar5 + 0xbc))();
LAB_0079d338:
  uStack_78 = 0xffffffff;
  iStack_1a8 = 0x79d344;
  FUN_00408ad0();
  if ((*(int *)(in_ECX + 0x2b8) != 0) || (*(int *)(in_ECX + 700) != 0)) {
    ppuStack_1ac = *(undefined4 ***)(in_ECX + 0x2b8);
    pppuStack_13c = &ppuStack_1ac;
    iStack_1a8 = *(undefined4 *)(in_ECX + 700);
    iStack_1a8 = FUN_009c16d0();
    if ((iStack_1a8 != 0) && (iStack_1a8 = iStack_1a8 + -8, iStack_1a8 != 0)) {
      *(undefined4 *)(in_ECX + 0x2b8) = 0;
      iVar4 = DAT_012588e8;
      *(undefined4 *)(in_ECX + 700) = 0;
      ppuStack_1ac = (uint **)0x79d3ad;
      (**(code **)(**(int **)(iVar4 + 0xb24) + 0x88))();
      if (*(char *)(in_ECX + 0x2c0) != '\0') {
        ppuStack_1ac = (uint **)0x79d3cb;
        (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xb8))();
        ExceptionList = pvStack_84;
        return;
      }
      ppuStack_1ac = *(undefined4 ***)(in_ECX + 0x28);
      (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x9c))();
    }
  }
  ExceptionList = pvStack_80;
  return;
}

