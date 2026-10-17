// FUN_0050c6d0 @ 0050c6d0  (requested 0050C6D0, first bytes: 55 8B EC 83 E4 F8 64 A1)


int FUN_0050c6d0(int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *extraout_EDX;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_1d8 [108];
  undefined4 uStack_16c;
  undefined8 uStack_168;
  int *piStack_160;
  uint *puStack_15c;
  int iStack_14c;
  char cStack_125;
  uint auStack_124 [4];
  undefined4 uStack_114;
  uint uStack_110;
  undefined4 auStack_108 [5];
  uint uStack_f4;
  undefined1 auStack_e8 [64];
  undefined1 local_a8 [8];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 *local_84;
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 local_54;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00ba7556;
  local_14 = ExceptionList;
  if (*(int *)(param_1 + 0x156c) == 0) {
    return 0;
  }
  ExceptionList = &local_14;
  if (*(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8) != 0) {
    puStack_15c = (uint *)0x50c71f;
    ExceptionList = &local_14;
    iVar4 = FUN_0042b220();
    if ((char)iVar4 != '\0') {
      ExceptionList = local_14;
      return iVar4;
    }
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x156c) + 8);
  puStack_15c = (uint *)0x0;
  piStack_160 = (int *)0x50c742;
  FUN_008a8650();
  puStack_15c = (uint *)0x0;
  piStack_160 = (int *)0x50c750;
  FUN_008a8650();
  local_58 = *(undefined4 *)(param_1 + 0x1c);
  local_54 = *(undefined4 *)(param_1 + 0x20);
  local_84 = local_60;
  local_a0 = *(undefined4 *)(*(int *)(param_1 + 0x156c) + 0x10);
  local_9c = *(undefined4 *)(*(int *)(param_1 + 0x156c) + 0x14);
  puStack_15c = (uint *)local_a8;
  piStack_160 = (int *)0x50c7a0;
  cVar3 = (**(code **)(*piVar1 + 0x20))();
  if ((cVar3 == '\0') || (*(char *)((int)piVar1 + 0x1cd) == '\0')) {
LAB_0050c817:
    iVar4 = *(int *)(DAT_012588e8 + 0xb60);
    if (*(int *)(param_1 + 0x20) == iVar4) {
      puStack_15c = (uint *)param_1;
      piStack_160 = (int *)0x50c832;
      puVar5 = (undefined4 *)FUN_005061e0();
      puStack_15c = (uint *)0x50c842;
      FUN_009885d0();
      uStack_c = 0;
      piStack_160 = *(int **)(*(int *)(param_1 + 0x156c) + 8);
      puStack_15c = auStack_124;
      uStack_168 = CONCAT44(0x50c861,(undefined4)uStack_168);
      puStack_15c = (uint *)FUN_0090a830();
      uStack_c._0_1_ = 1;
      uStack_168 = CONCAT44(auStack_e8,0x50c877);
      piStack_160 = auStack_108;
      iVar6 = FUN_00424aa0();
      uStack_c._0_1_ = 2;
      iVar4 = puVar5[1];
      puStack_15c = (uint *)0x44;
      piStack_160 = (int *)0x50c891;
      puVar7 = (undefined1 *)FUN_00aae9af();
      uStack_c._0_1_ = 3;
      uVar2 = (undefined1)uStack_c;
      uStack_c._0_1_ = 3;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = (undefined1 *)0x0;
        uStack_c._0_1_ = uVar2;
      }
      else {
        puStack_15c = (uint *)0xffffffff;
        piStack_160 = (int *)0x0;
        *(undefined4 *)(puVar7 + 0x14) = 0xf;
        *(undefined4 *)(puVar7 + 0x10) = 0;
        *puVar7 = 0;
        uStack_168 = CONCAT44(iVar6,0x50c8c7);
        FUN_00408ed0();
        puStack_15c = (uint *)0xffffffff;
        uStack_c._0_1_ = 4;
        piStack_160 = (int *)0x0;
        *(undefined4 *)(puVar7 + 0x30) = 0xf;
        *(undefined4 *)(puVar7 + 0x2c) = 0;
        puVar7[0x1c] = 0;
        uStack_168 = CONCAT44(iVar6 + 0x1c,0x50c8f4);
        FUN_00408ed0();
        *(int *)(puVar7 + 0x38) = iVar4;
        *(undefined4 *)(puVar7 + 0x3c) = 0;
        puVar7[0x40] = 0;
      }
      iVar6 = puVar5[2];
      puVar5[1] = puVar7;
      puVar5[2] = iVar6 + 1;
      if (iVar6 == 0) {
        *puVar5 = puVar7;
      }
      else {
        *(undefined1 **)(iVar4 + 0x3c) = puVar7;
      }
      puStack_15c = (uint *)0x50c92e;
      FUN_00a39a80();
      if (0xf < uStack_110) {
        puStack_15c = (uint *)auStack_124[0];
                    /* WARNING: Subroutine does not return */
        piStack_160 = (int *)&UNK_0050c943;
        FUN_00aae91b();
      }
      uStack_c = 0xffffffff;
      uStack_110 = 0xf;
      uStack_114 = 0;
      auStack_124[0] = auStack_124[0] & 0xffffff00;
      if (0xf < uStack_f4) {
        puStack_15c = (uint *)auStack_108[0];
                    /* WARNING: Subroutine does not return */
        piStack_160 = (int *)&UNK_0050c976;
        FUN_00aae91b();
      }
      puStack_15c = (uint *)0x50c987;
      FUN_009885d0();
      uStack_c = 5;
      puStack_15c = (uint *)0x50c9a4;
      puStack_15c = (uint *)FUN_0055dd40();
      piStack_160 = auStack_108;
      uStack_c._0_1_ = 6;
      uStack_168 = CONCAT44(auStack_e8,0x50c9bc);
      iVar6 = FUN_00424aa0();
      uStack_c._0_1_ = 7;
      iVar4 = puVar5[1];
      puStack_15c = (uint *)0x44;
      piStack_160 = (int *)0x50c9d6;
      puVar7 = (undefined1 *)FUN_00aae9af();
      uStack_c._0_1_ = 8;
      uVar2 = (undefined1)uStack_c;
      uStack_c._0_1_ = 8;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = (undefined1 *)0x0;
        uStack_c._0_1_ = uVar2;
      }
      else {
        puStack_15c = (uint *)0xffffffff;
        piStack_160 = (int *)0x0;
        *(undefined4 *)(puVar7 + 0x14) = 0xf;
        *(undefined4 *)(puVar7 + 0x10) = 0;
        *puVar7 = 0;
        uStack_168 = CONCAT44(iVar6,0x50ca0c);
        FUN_00408ed0();
        puStack_15c = (uint *)0xffffffff;
        uStack_c._0_1_ = 9;
        piStack_160 = (int *)0x0;
        *(undefined4 *)(puVar7 + 0x30) = 0xf;
        *(undefined4 *)(puVar7 + 0x2c) = 0;
        puVar7[0x1c] = 0;
        uStack_168 = CONCAT44(iVar6 + 0x1c,0x50ca39);
        FUN_00408ed0();
        *(int *)(puVar7 + 0x38) = iVar4;
        *(undefined4 *)(puVar7 + 0x3c) = 0;
        puVar7[0x40] = 0;
      }
      iVar6 = puVar5[2];
      puVar5[1] = puVar7;
      puVar5[2] = iVar6 + 1;
      if (iVar6 == 0) {
        *puVar5 = puVar7;
      }
      else {
        *(undefined1 **)(iVar4 + 0x3c) = puVar7;
      }
      puStack_15c = (uint *)0x50ca73;
      FUN_00a39a80();
      if (0xf < uStack_110) {
        puStack_15c = (uint *)auStack_124[0];
                    /* WARNING: Subroutine does not return */
        piStack_160 = (int *)&UNK_0050ca88;
        FUN_00aae91b();
      }
      uStack_c = 0xffffffff;
      uStack_110 = 0xf;
      uStack_114 = 0;
      auStack_124[0] = auStack_124[0] & 0xffffff00;
      if (0xf < uStack_f4) {
        puStack_15c = (uint *)auStack_108[0];
                    /* WARNING: Subroutine does not return */
        piStack_160 = (int *)&UNK_0050cabb;
        FUN_00aae91b();
      }
      puStack_15c = (uint *)0x50cacc;
      FUN_009885d0();
      uStack_c = 10;
      puStack_15c = (uint *)0x50cae5;
      FUN_009885d0();
      uStack_c._0_1_ = 0xb;
      uVar19 = 0;
      uVar18 = 0x2d2d2d;
      uVar9 = *(undefined4 *)(param_1 + 0x20);
      uVar17 = *(undefined4 *)(param_1 + 0x1c);
      uVar16 = 0;
      puVar14 = auStack_108;
      uVar13 = 0;
      FUN_006a4f40(puVar5,0,puVar14,0,uVar17,uVar9,0x2d2d2d,0);
      uVar8 = FUN_006a55b0();
      FUN_006a7ed0(auStack_1d8,uVar8,puVar5,uVar13,puVar14,uVar16,uVar17,uVar9,uVar18,uVar19);
      uStack_c._0_1_ = 0xc;
      FUN_006a4f40();
      uVar9 = FUN_006a4f40();
      uStack_c = CONCAT31(uStack_c._1_3_,0xb);
      iVar4 = FUN_004e9540(uVar9);
      if (0xf < uStack_110) {
        puStack_15c = (uint *)auStack_124[0];
                    /* WARNING: Subroutine does not return */
        piStack_160 = (int *)&UNK_0050cb95;
        FUN_00aae91b();
      }
      uStack_c = 0xffffffff;
      uStack_110 = 0xf;
      uStack_114 = 0;
      auStack_124[0] = auStack_124[0] & 0xffffff00;
      if (0xf < uStack_f4) {
        puStack_15c = (uint *)auStack_108[0];
                    /* WARNING: Subroutine does not return */
        piStack_160 = (int *)&UNK_0050cbc8;
        FUN_00aae91b();
      }
    }
  }
  else {
    if ((int)(piVar1[0x39] - piVar1[0x38] & 0xfffffffcU) < 1) {
      if (0 < (int)(piVar1[0x2b] - piVar1[0x2a] & 0xfffffffcU)) {
        uStack_168 = CONCAT44(0x50c80f,(undefined4)uStack_168);
        piStack_160 = piVar1;
        puStack_15c = (uint *)(param_1 + 0x1c);
        cVar3 = FUN_0090cb00();
        goto LAB_0050c80f;
      }
    }
    else {
      puStack_15c = (uint *)(*(int *)(param_1 + 0x156c) + 0x10);
      uStack_168 = CONCAT44(piVar1,0x50c7d1);
      piStack_160 = (int *)(param_1 + 0x1c);
      cVar3 = FUN_0090c9e0();
LAB_0050c80f:
      if (cVar3 == '\0') goto LAB_0050c817;
    }
    if (*(int *)(*(int *)(*(int *)(param_1 + 0xbe8) +
                         *(int *)(*(int *)(param_1 + 0x156c) + 0x14) * 4) + 0x34) != 0) {
      puStack_15c = (uint *)0x50cbf3;
      iVar4 = FUN_0042bb00();
      if ((char)iVar4 != '\0') goto LAB_0050d4d1;
    }
    iStack_14c = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x46c);
    if (DAT_012586f3 != '\0') {
      puStack_15c = (uint *)0x47c35040;
      piStack_160 = (int *)0x50cc2a;
      FUN_00401000();
      puStack_15c = (uint *)0x50cc32;
      iStack_14c = FUN_00b31c00();
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0xbcc) + 0x58);
    iVar6 = *(int *)(*(int *)(param_1 + 0xa60) + 0x358);
    uStack_168 = (longlong)piVar1[0x74] * (longlong)iStack_14c;
    puStack_15c = (uint *)0x0;
    piStack_160 = (int *)0x3e8;
    uStack_16c = 0x50cc6a;
    iVar10 = __alldiv();
    uStack_168 = (longlong)iVar10 * (longlong)(iVar6 + 1000 + iVar4);
    puStack_15c = (uint *)0x0;
    piStack_160 = (int *)0x3e8;
    uStack_16c = 0x50cc7a;
    iVar4 = __alldiv();
    puStack_15c = (uint *)&cStack_125;
    piStack_160 = (int *)(*(int *)(param_1 + 0x156c) + 0x10);
    uStack_168 = CONCAT44(0x50cc92,(undefined4)uStack_168);
    iVar6 = FUN_00540ad0();
    if (iVar6 != 0) {
      uStack_168 = (longlong)(*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x470) + 1000) *
                   (longlong)iVar4;
      puStack_15c = (uint *)0x0;
      piStack_160 = (int *)0x3e8;
      uStack_16c = 0x50ccba;
      iVar4 = __alldiv();
      if (cStack_125 != '\0') {
        uStack_168 = (longlong)(*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x474) + 1000) *
                     (longlong)iVar4;
        puStack_15c = (uint *)0x0;
        piStack_160 = (int *)0x3e8;
        uStack_16c = 0x50cce6;
        iVar4 = __alldiv();
      }
    }
    puStack_15c = (uint *)0x50ccf3;
    piVar11 = (int *)FUN_0050d700();
    uStack_168 = (longlong)(*piVar11 + 1000) * (longlong)iVar4;
    puStack_15c = (uint *)0x0;
    piStack_160 = (int *)0x3e8;
    uStack_16c = 0x50cd0a;
    iVar6 = __alldiv();
    iVar4 = *(int *)(param_1 + 0x156c);
    piVar11 = (int *)(iVar4 + 0xc);
    *piVar11 = *piVar11 + iVar6;
    iVar6 = *(int *)(iVar4 + 0xc);
    if (*piVar11 < 0) {
      *(undefined4 *)(iVar4 + 0xc) = 0;
    }
    else if (100000 < iVar6) {
      *(undefined4 *)(iVar4 + 0xc) = 100000;
    }
    cVar3 = *(char *)(*(int *)(param_1 + 0x156c) + 0x18);
    iVar4 = CONCAT31((int3)((uint)iVar6 >> 8),cVar3);
    if (cVar3 == '\0') {
      iVar6 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x484);
      puStack_15c = (uint *)0x0;
      piStack_160 = (int *)0x45;
      uStack_168 = CONCAT44(0x50cd69,(undefined4)uStack_168);
      iVar10 = FUN_009b7950();
      iVar4 = iVar10 / 1000;
      if (iVar10 % 1000 < iVar6 / 1000) {
        *(undefined1 *)(*(int *)(param_1 + 0x156c) + 0x18) = 1;
        puStack_15c = *(uint **)(*(int *)(param_1 + 0x156c) + 0x14);
        piStack_160 = *(int **)(*(int *)(param_1 + 0x156c) + 0x10);
        uStack_168 = *(undefined8 *)(param_1 + 0x1c);
        uStack_16c = 0x50cda8;
        FUN_0094bdb0();
        iVar4 = *(int *)(*(int *)(param_1 + 0x156c) + 0xc);
        if (iVar4 + 0x189373U < 0x39580e) {
          iVar4 = (iVar4 * 1000) / 100000;
        }
        else {
          puStack_15c = (uint *)0x0;
          piStack_160 = (int *)0x3e8;
          uStack_168 = (longlong)iVar4;
          uStack_16c = 0x50cde9;
          uStack_168 = __allmul();
          puStack_15c = (uint *)0x0;
          piStack_160 = (int *)0x186a0;
          uStack_16c = 0x50cdf7;
          iVar4 = __alldiv();
        }
        puStack_15c = (uint *)auStack_e8;
        piStack_160 = (int *)0x50ce11;
        piVar11 = (int *)FUN_009500e0();
        uStack_168 = (longlong)*piVar11 * (longlong)(1000 - iVar4);
        puStack_15c = (uint *)0x0;
        piStack_160 = (int *)0x3e8;
        uStack_16c = 0x50ce23;
        iVar6 = __alldiv();
        iVar4 = DAT_012586dc;
        iVar10 = iVar6 + *(int *)(param_1 + 0x1430);
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        *(int *)(param_1 + 0x1430) = iVar10;
        puStack_15c = (uint *)(*(int *)(*(int *)(iVar4 + 0x30) + 0x490) +
                              *(int *)(*(int *)(*(int *)(param_1 + 0xbe8) +
                                               *(int *)(*(int *)(param_1 + 0x156c) + 0x14) * 4) +
                                      0x3c));
        piStack_160 = (int *)0x50ce6f;
        FUN_0092d750();
        iVar10 = *(int *)(param_1 + 0x156c);
        if ((*(int *)(iVar10 + 0x14) != 0) &&
           (0 < (int)(*(int *)(*(int *)(iVar10 + 8) + 0xac) - *(int *)(*(int *)(iVar10 + 8) + 0xa8)
                     & 0xfffffffcU))) {
          piVar11 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar10 + 0x14) * 4) +
                             0xe44);
          while (piVar11 != (int *)0x0) {
            iVar10 = *piVar11;
            piVar11 = (int *)piVar11[2];
            if (*(char *)(iVar10 + 0x27c) != '\0') {
              puStack_15c = *(uint **)(*(int *)(iVar4 + 0x30) + 0x4c4);
              piStack_160 = (int *)0x50ced7;
              FUN_004d5cd0();
              piVar11 = extraout_EDX;
            }
          }
        }
        iVar10 = DAT_012588e8;
        puStack_15c = (uint *)param_1;
        piStack_160 = (int *)0x50cef1;
        puVar5 = (undefined4 *)FUN_005061e0();
        puStack_15c = (uint *)0x50cf01;
        FUN_009885d0();
        uStack_c = 0xd;
        piStack_160 = *(int **)(*(int *)(param_1 + 0x156c) + 8);
        puStack_15c = auStack_124;
        uStack_168 = CONCAT44(0x50cf20,(undefined4)uStack_168);
        puStack_15c = (uint *)FUN_0090a830();
        uStack_c._0_1_ = 0xe;
        uStack_168 = CONCAT44(auStack_e8,0x50cf36);
        piStack_160 = auStack_108;
        iVar12 = FUN_00424aa0();
        uStack_c._0_1_ = 0xf;
        iVar4 = puVar5[1];
        puStack_15c = (uint *)0x44;
        piStack_160 = (int *)0x50cf50;
        puVar7 = (undefined1 *)FUN_00aae9af();
        uStack_c._0_1_ = 0x10;
        uVar2 = (undefined1)uStack_c;
        uStack_c._0_1_ = 0x10;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = (undefined1 *)0x0;
          uStack_c._0_1_ = uVar2;
        }
        else {
          puStack_15c = (uint *)0xffffffff;
          piStack_160 = (int *)0x0;
          *(undefined4 *)(puVar7 + 0x14) = 0xf;
          *(undefined4 *)(puVar7 + 0x10) = 0;
          *puVar7 = 0;
          uStack_168 = CONCAT44(iVar12,0x50cf86);
          FUN_00408ed0();
          puStack_15c = (uint *)0xffffffff;
          uStack_c._0_1_ = 0x11;
          piStack_160 = (int *)0x0;
          *(undefined4 *)(puVar7 + 0x30) = 0xf;
          *(undefined4 *)(puVar7 + 0x2c) = 0;
          puVar7[0x1c] = 0;
          uStack_168 = CONCAT44(iVar12 + 0x1c,0x50cfb3);
          FUN_00408ed0();
          *(int *)(puVar7 + 0x38) = iVar4;
          *(undefined4 *)(puVar7 + 0x3c) = 0;
          puVar7[0x40] = 0;
        }
        iVar12 = puVar5[2];
        puVar5[1] = puVar7;
        puVar5[2] = iVar12 + 1;
        if (iVar12 == 0) {
          *puVar5 = puVar7;
        }
        else {
          *(undefined1 **)(iVar4 + 0x3c) = puVar7;
        }
        puStack_15c = (uint *)0x50cfed;
        FUN_00a39a80();
        puStack_15c = (uint *)0x50cff6;
        FUN_00408ad0();
        uStack_c = 0xffffffff;
        puStack_15c = (uint *)0x50d00a;
        FUN_00408ad0();
        puStack_15c = (uint *)0x50d018;
        FUN_009885d0();
        uStack_c = 0x12;
        puStack_15c = (uint *)0x50d035;
        puStack_15c = (uint *)FUN_0055dd40();
        piStack_160 = auStack_108;
        uStack_c._0_1_ = 0x13;
        uStack_168 = CONCAT44(auStack_e8,0x50d04d);
        iVar12 = FUN_00424aa0();
        uStack_c._0_1_ = 0x14;
        iVar4 = puVar5[1];
        puStack_15c = (uint *)0x44;
        piStack_160 = (int *)0x50d067;
        puVar7 = (undefined1 *)FUN_00aae9af();
        uStack_c._0_1_ = 0x15;
        uVar2 = (undefined1)uStack_c;
        uStack_c._0_1_ = 0x15;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = (undefined1 *)0x0;
          uStack_c._0_1_ = uVar2;
        }
        else {
          puStack_15c = (uint *)0xffffffff;
          piStack_160 = (int *)0x0;
          *(undefined4 *)(puVar7 + 0x14) = 0xf;
          *(undefined4 *)(puVar7 + 0x10) = 0;
          *puVar7 = 0;
          uStack_168 = CONCAT44(iVar12,0x50d09d);
          FUN_00408ed0();
          puStack_15c = (uint *)0xffffffff;
          uStack_c._0_1_ = 0x16;
          piStack_160 = (int *)0x0;
          *(undefined4 *)(puVar7 + 0x30) = 0xf;
          *(undefined4 *)(puVar7 + 0x2c) = 0;
          puVar7[0x1c] = 0;
          uStack_168 = CONCAT44(iVar12 + 0x1c,0x50d0ca);
          FUN_00408ed0();
          *(int *)(puVar7 + 0x38) = iVar4;
          *(undefined4 *)(puVar7 + 0x3c) = 0;
          puVar7[0x40] = 0;
        }
        iVar12 = puVar5[2];
        puVar5[1] = puVar7;
        puVar5[2] = iVar12 + 1;
        if (iVar12 == 0) {
          *puVar5 = puVar7;
        }
        else {
          *(undefined1 **)(iVar4 + 0x3c) = puVar7;
        }
        puStack_15c = (uint *)0x50d104;
        FUN_00a39a80();
        puStack_15c = (uint *)0x50d10d;
        FUN_00408ad0();
        uStack_c = 0xffffffff;
        puStack_15c = (uint *)0x50d121;
        FUN_00408ad0();
        puStack_15c = (uint *)0x50d12f;
        FUN_009885d0();
        puStack_15c = (uint *)0x1;
        uStack_c = 0x17;
        uStack_168 = CONCAT44(auStack_124,0x50d153);
        piStack_160 = (int *)iVar6;
        puStack_15c = (uint *)FUN_00988a50();
        uStack_c._0_1_ = 0x18;
        uStack_168 = CONCAT44(auStack_e8,0x50d169);
        piStack_160 = auStack_108;
        iVar6 = FUN_00424aa0();
        uStack_c._0_1_ = 0x19;
        iVar4 = puVar5[1];
        puStack_15c = (uint *)0x44;
        piStack_160 = (int *)0x50d183;
        puVar7 = (undefined1 *)FUN_00aae9af();
        uStack_c._0_1_ = 0x1a;
        uVar2 = (undefined1)uStack_c;
        uStack_c._0_1_ = 0x1a;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = (undefined1 *)0x0;
          uStack_c._0_1_ = uVar2;
        }
        else {
          puStack_15c = (uint *)0xffffffff;
          piStack_160 = (int *)0x0;
          *(undefined4 *)(puVar7 + 0x14) = 0xf;
          *(undefined4 *)(puVar7 + 0x10) = 0;
          *puVar7 = 0;
          uStack_168 = CONCAT44(iVar6,0x50d1b9);
          FUN_00408ed0();
          puStack_15c = (uint *)0xffffffff;
          uStack_c._0_1_ = 0x1b;
          piStack_160 = (int *)0x0;
          *(undefined4 *)(puVar7 + 0x30) = 0xf;
          *(undefined4 *)(puVar7 + 0x2c) = 0;
          puVar7[0x1c] = 0;
          uStack_168 = CONCAT44(iVar6 + 0x1c,0x50d1e6);
          FUN_00408ed0();
          *(int *)(puVar7 + 0x38) = iVar4;
          *(undefined4 *)(puVar7 + 0x3c) = 0;
          puVar7[0x40] = 0;
        }
        iVar6 = puVar5[2];
        puVar5[1] = puVar7;
        puVar5[2] = iVar6 + 1;
        if (iVar6 == 0) {
          *puVar5 = puVar7;
        }
        else {
          *(undefined1 **)(iVar4 + 0x3c) = puVar7;
        }
        puStack_15c = (uint *)0x50d220;
        FUN_00a39a80();
        puStack_15c = (uint *)0x50d229;
        FUN_00408ad0();
        uStack_c = 0xffffffff;
        puStack_15c = (uint *)0x50d23d;
        FUN_00408ad0();
        if (*(int *)(param_1 + 0x20) == *(int *)(iVar10 + 0xb60)) {
          puStack_15c = (uint *)0x50d25b;
          FUN_009885d0();
          uStack_c = 0x1c;
          puStack_15c = (uint *)0x50d274;
          FUN_009885d0();
          uStack_c._0_1_ = 0x1d;
          uVar19 = 0;
          uVar9 = *(undefined4 *)(param_1 + 0x20);
          uVar17 = *(undefined4 *)(param_1 + 0x1c);
          uVar18 = 0x2d2d2d;
          uVar16 = 0;
          puVar15 = auStack_124;
          uVar13 = 0;
          FUN_006a4f40(puVar5,0,puVar15,0,uVar17,uVar9,0x2d2d2d,0);
          uVar8 = FUN_006a55b0();
          FUN_006a7ed0(auStack_1d8,uVar8,puVar5,uVar13,puVar15,uVar16,uVar17,uVar9,uVar18,uVar19);
          uStack_c._0_1_ = 0x1e;
          FUN_006a4f40();
          uVar9 = FUN_006a4f40();
          uStack_c = CONCAT31(uStack_c._1_3_,0x1d);
        }
        else if (*(int *)(*(int *)(param_1 + 0x156c) + 0x14) == *(int *)(iVar10 + 0xb60)) {
          puStack_15c = (uint *)0x50d31c;
          FUN_009885d0();
          uStack_c = 0x1f;
          puStack_15c = (uint *)0x50d335;
          FUN_009885d0();
          uStack_c._0_1_ = 0x20;
          uVar19 = 0;
          uVar9 = *(undefined4 *)(param_1 + 0x20);
          uVar17 = *(undefined4 *)(param_1 + 0x1c);
          uVar18 = 0x2d2d2d;
          uVar16 = 0;
          puVar15 = auStack_124;
          uVar13 = 0;
          FUN_006a4f40(puVar5,0,puVar15,0,uVar17,uVar9,0x2d2d2d,0);
          uVar8 = FUN_006a55b0();
          FUN_006a7ed0(auStack_1d8,uVar8,puVar5,uVar13,puVar15,uVar16,uVar17,uVar9,uVar18,uVar19);
          uStack_c._0_1_ = 0x21;
          FUN_006a4f40();
          uVar9 = FUN_006a4f40();
          uStack_c = CONCAT31(uStack_c._1_3_,0x20);
        }
        else {
          puStack_15c = (uint *)0x50d3c9;
          FUN_009885d0();
          uStack_c = 0x22;
          puStack_15c = (uint *)0x50d3e2;
          FUN_009885d0();
          uStack_c._0_1_ = 0x23;
          uVar19 = 0;
          uVar9 = *(undefined4 *)(param_1 + 0x20);
          uVar17 = *(undefined4 *)(param_1 + 0x1c);
          uVar18 = 0x2d2d2d;
          uVar16 = 0;
          puVar15 = auStack_124;
          uVar13 = 0;
          FUN_006a4f40(puVar5,0,puVar15,0,uVar17,uVar9,0x2d2d2d,0);
          uVar8 = FUN_006a55b0();
          FUN_006a7ed0(auStack_1d8,uVar8,puVar5,uVar13,puVar15,uVar16,uVar17,uVar9,uVar18,uVar19);
          uStack_c._0_1_ = 0x24;
          FUN_006a4f40();
          uVar9 = FUN_006a4f40();
          uStack_c = CONCAT31(uStack_c._1_3_,0x23);
        }
        FUN_004e9540(uVar9);
        puStack_15c = (uint *)0x50d47b;
        FUN_00408ad0();
        uStack_c = 0xffffffff;
        puStack_15c = (uint *)0x50d48f;
        iVar4 = FUN_00408ad0();
      }
    }
    if (*(int *)(*(int *)(param_1 + 0x156c) + 0xc) < 100000) {
      ExceptionList = local_14;
      return iVar4;
    }
    piStack_160 = (int *)(*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x7c) / 1000);
    puStack_15c = (uint *)0x1;
    uStack_168 = CONCAT44(piVar1 + 5,*(int *)(param_1 + 0x156c) + 0x10);
    uStack_16c = 0x50d4d1;
    iVar4 = FUN_00535fc0();
  }
LAB_0050d4d1:
  if (*(undefined4 **)(param_1 + 0x156c) != (undefined4 *)0x0) {
    puStack_15c = (uint *)0x1;
    piStack_160 = (int *)0x50d4e3;
    iVar4 = (**(code **)**(undefined4 **)(param_1 + 0x156c))();
  }
  *(undefined4 *)(param_1 + 0x156c) = 0;
  ExceptionList = local_14;
  return iVar4;
}

