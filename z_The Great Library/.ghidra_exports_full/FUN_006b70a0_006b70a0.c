// FUN_006b70a0 @ 006b70a0 body=[[006b70a0, 006b84e4] [006b84e8, 006b8540] [006b8544, 006b859c] [006b85a0, 006b85f8] [006b85fc, 006b8654] [006b8658, 006b86b0] [006b86b4, 006b870c] [006b8710, 006b8878] [006b8882, 006b88bd]]


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006b70a0(void)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  undefined1 **in_ECX;
  undefined1 *puVar8;
  char *pcVar9;
  undefined1 **ppuVar10;
  float10 fVar11;
  int *piStack_1ac;
  int *piStack_1a8;
  uint uStack_1a4;
  undefined1 *puStack_1a0;
  int **ppiStack_19c;
  undefined1 **ppuStack_198;
  char *pcStack_194;
  undefined1 **ppuStack_190;
  undefined4 uStack_18c;
  int iStack_188;
  int aiStack_184 [2];
  undefined1 auStack_17c [4];
  int *piStack_178;
  undefined1 *puStack_174;
  undefined4 uStack_170;
  char acStack_16c [16];
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [16];
  undefined4 uStack_140;
  undefined *puStack_13c;
  char *pcStack_138;
  char ***pppcStack_134;
  uint *puStack_130;
  uint *puStack_12c;
  uint *puStack_128;
  undefined1 **ppuStack_124;
  undefined1 **ppuStack_120;
  undefined ***pppuStack_11c;
  int *piStack_10c;
  undefined1 *puStack_108;
  int *piStack_104;
  undefined1 *puStack_100;
  undefined1 *puStack_fc;
  char *pcStack_f8;
  uint **ppuStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  undefined1 *puStack_e4;
  undefined1 *puStack_e0;
  undefined1 *puStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined1 *puStack_c4;
  undefined1 *puStack_c0;
  undefined1 uStack_bc;
  float fStack_b8;
  char *pcStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  undefined1 *puStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  undefined1 *puStack_94;
  uint uStack_90;
  undefined1 auStack_8c [4];
  undefined1 uStack_88;
  undefined1 uStack_84;
  undefined1 uStack_80;
  float fStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined **ppuStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 uStack_20;
  undefined1 uStack_1c;
  undefined1 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  uint uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b9f09b;
  pvStack_14 = ExceptionList;
  puVar8 = in_ECX[0x2d];
  pppuStack_11c = *(undefined ****)(puVar8 + 300);
  DAT_01258a66 = 0;
  ExceptionList = &pvStack_14;
  if (pppuStack_11c != (undefined ***)0x0) {
    ppuStack_120 = (undefined1 **)0x6b70e5;
    ExceptionList = &pvStack_14;
    FUN_009af9f0();
  }
  pppuStack_11c = *(undefined ****)(puVar8 + 0x130);
  DAT_01258a66 = 1;
  if (pppuStack_11c != (undefined ***)0x0) {
    ppuStack_120 = (undefined1 **)0x6b70fc;
    FUN_009af9f0();
  }
  puVar8 = in_ECX[0x10b];
  pppuStack_11c = (undefined ***)0x6b710b;
  iVar3 = (**(code **)(*in_ECX + 0x40))();
  *(undefined1 **)(iVar3 + 0x6bc88) = puVar8;
  fStack_b8 = 0.0;
  if (0.0 < (float)in_ECX[0x2a]) {
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      pppuStack_11c = (undefined ***)0x4;
      ppuStack_120 = (undefined1 **)0x6b7136;
      DAT_00f20c18 = (undefined4 *)FUN_00aae9af();
      if (DAT_00f20c18 == (undefined4 *)0x0) {
        DAT_00f20c18 = (undefined4 *)0x0;
      }
      else {
        *DAT_00f20c18 = &PTR_FUN_00e38b28;
      }
    }
    pppuStack_11c = (undefined ***)0x6b715d;
    fVar11 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
    fStack_b8 = (float)(fVar11 - (float10)(float)in_ECX[0x2a]);
  }
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    pppuStack_11c = (undefined ***)0x4;
    ppuStack_120 = (undefined1 **)0x6b7176;
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af();
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  pppuStack_11c = (undefined ***)0x6b719d;
  fVar11 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  in_ECX[0x2a] = (undefined1 *)(float)fVar11;
  pppuStack_11c = (undefined ***)0x6b71b0;
  cVar2 = (**(code **)(*(int *)in_ECX[0x16b] + 0x20))();
  if (cVar2 != '\0') {
    puStack_a4 = in_ECX[0x16b];
    puVar8 = in_ECX[0x16e];
    pppuStack_11c = (undefined ***)0x28;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    uStack_a0 = 1;
    uStack_9c = 1;
    uStack_98 = uStack_98 & 0xffff0000;
    ppuStack_120 = (undefined1 **)0x6b71f3;
    puVar4 = (undefined8 *)FUN_00aae9af();
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      *puVar4 = CONCAT44(uStack_ac,uStack_b0);
      puVar4[1] = CONCAT44(puStack_a4,uStack_a8);
      puVar4[2] = CONCAT44(uStack_9c,uStack_a0);
      *(uint *)(puVar4 + 3) = uStack_98;
      *(undefined1 **)((int)puVar4 + 0x1c) = puVar8;
      *(undefined4 *)(puVar4 + 4) = 0;
      *(undefined1 *)((int)puVar4 + 0x24) = 0;
    }
    puVar1 = in_ECX[0x16f];
    in_ECX[0x16e] = (undefined1 *)puVar4;
    in_ECX[0x16f] = puVar1 + 1;
    if (puVar1 == (undefined1 *)0x0) {
      in_ECX[0x16d] = (undefined1 *)puVar4;
    }
    else {
      *(undefined8 **)(puVar8 + 0x20) = puVar4;
    }
  }
  pppuStack_11c = (undefined ***)0x6b7263;
  cVar2 = (**(code **)(*(int *)in_ECX[0x16b] + 0x58))();
  if (cVar2 != '\0') {
    puStack_a4 = in_ECX[0x16b];
    puVar8 = in_ECX[0x16e];
    pppuStack_11c = (undefined ***)0x28;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    uStack_a0 = 2;
    uStack_9c = 1;
    uStack_98 = uStack_98 & 0xffff0000;
    ppuStack_120 = (undefined1 **)0x6b72a9;
    puVar4 = (undefined8 *)FUN_00aae9af();
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      *puVar4 = CONCAT44(uStack_ac,uStack_b0);
      puVar4[1] = CONCAT44(puStack_a4,uStack_a8);
      puVar4[2] = CONCAT44(uStack_9c,uStack_a0);
      *(uint *)(puVar4 + 3) = uStack_98;
      *(undefined1 **)((int)puVar4 + 0x1c) = puVar8;
      *(undefined4 *)(puVar4 + 4) = 0;
      *(undefined1 *)((int)puVar4 + 0x24) = 0;
    }
    puVar1 = in_ECX[0x16f];
    in_ECX[0x16e] = (undefined1 *)puVar4;
    in_ECX[0x16f] = puVar1 + 1;
    if (puVar1 == (undefined1 *)0x0) {
      in_ECX[0x16d] = (undefined1 *)puVar4;
    }
    else {
      *(undefined8 **)(puVar8 + 0x20) = puVar4;
    }
  }
  pppuStack_11c = (undefined ***)0x6b731f;
  iVar3 = (**(code **)(**(int **)(in_ECX[0x2d] + 0xe4) + 0x14))();
  if (iVar3 == 1) {
    pppuStack_11c = (undefined ***)0x6b732f;
    FUN_004a2940();
  }
  else {
    pppuStack_11c = (undefined ***)(in_ECX + 0x16d);
    ppuStack_120 = (undefined1 **)in_ECX[0x16c];
    ppuStack_124 = (undefined1 **)in_ECX[0x16b];
    puStack_128 = (uint *)0x6b7353;
    (**(code **)(*(int *)in_ECX[0x2c] + 4))();
  }
  puStack_128 = *(uint **)(*(int *)(in_ECX[0x2d] + 0x124) + 0x3a20);
  pppuStack_11c = (undefined ***)0x1;
  puStack_12c = (uint *)in_ECX[0x16c];
  ppuStack_120 = (undefined1 **)fStack_b8;
  ppuStack_124 = (undefined1 **)0x0;
  puStack_130 = (uint *)0x6b738e;
  FUN_0063f870();
  pcVar9 = in_ECX[0x16d];
  do {
    pcStack_b4 = pcVar9;
    if (pcVar9 == (char *)0x0) {
      pppuStack_11c = (undefined ***)0x0;
      puStack_12c = (uint *)in_ECX[0x16c];
      ppuStack_124 = in_ECX + 0x16d;
      puStack_128 = *(uint **)(*(int *)(in_ECX[0x2d] + 0x124) + 0x3a20);
      puStack_130 = (uint *)0x6b8805;
      ppuStack_120 = (undefined1 **)fStack_b8;
      FUN_0063f870();
      if (*(char *)((int)in_ECX + 0x419) != '\0') {
        pppuStack_11c = (undefined ***)(in_ECX + 0xeb);
        ppuStack_120 = (undefined1 **)0x6b8829;
        (**(code **)(in_ECX[0x2e] + 0x180))();
        ppuStack_120 = in_ECX + 0xe8;
        ppuStack_124 = (undefined1 **)0x6b8844;
        (**(code **)(in_ECX[0x2e] + 0x17c))();
        *(undefined1 *)((int)in_ECX + 0x419) = 0;
      }
      pppuStack_11c = (undefined ***)(in_ECX + 0x2e);
      ppuStack_120 = (undefined1 **)(in_ECX[0x10b] + 0x1c);
      ppuStack_124 = (undefined1 **)0x6b8861;
      FUN_009eb690();
      pppuStack_11c = (undefined ***)in_ECX[0x16d];
      if (pppuStack_11c != (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
        ppuStack_120 = (undefined1 **)&UNK_006b8879;
        FUN_00aae91b();
      }
      in_ECX[0x16d] = (undefined1 *)0x0;
      in_ECX[0x16e] = (undefined1 *)0x0;
      in_ECX[0x16f] = (undefined1 *)0x0;
      pppuStack_11c = (undefined ***)0x6b88a1;
      (**(code **)(*(int *)in_ECX[0x16c] + 0x14))();
      ppuStack_120 = (undefined1 **)0x6b88a7;
      FUN_006ba220();
      ExceptionList = pvStack_14;
      return;
    }
    pppuStack_11c = (undefined ***)auStack_28;
    ppuStack_120 = (undefined1 **)0x6b73b7;
    iVar3 = (**(code **)(*(int *)in_ECX[0x16b] + 0x4c))();
    iVar3 = *(int *)(iVar3 + 4);
    ppuStack_120 = (undefined1 **)auStack_24;
    ppuStack_124 = (undefined1 **)0x6b73cf;
    piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x16b] + 0x4c))();
    iVar6 = *(int *)(pcVar9 + 8);
    fStack_70 = (float)*piVar5;
    fStack_6c = (float)iVar3;
    if ((iVar6 == 0) && (*(int *)(pcVar9 + 0x10) == 3)) {
      if (*(int *)(pcVar9 + 0x14) == 1) {
        *(undefined1 *)(in_ECX + 0x172) = 1;
      }
    }
    else if ((iVar6 == 0) && (*(int *)(pcVar9 + 0x10) == 4)) {
      if ((*(int *)(pcVar9 + 0x14) == 1) && (*(char *)(in_ECX + 0x172) == '\x01')) {
        *(undefined1 *)(in_ECX + 0x172) = 0;
        uStack_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_c = 0;
        iVar3 = *(int *)(in_ECX[0x2d] + 0x124);
        pppuStack_11c = (undefined ***)in_ECX[0x10b];
        piVar5 = (int *)0x0;
        piStack_104 = (int *)0x0;
        if (*(int *)(iVar3 + 0x20cc) == 0) {
          iVar6 = 0;
        }
        else {
          ppuStack_120 = (undefined1 **)&fStack_70;
          puStack_128 = (uint *)0x6b749c;
          ppuStack_124 = (undefined1 **)(iVar3 + 0x20bc);
          iVar6 = FUN_007f15e0();
        }
        *(int *)(iVar3 + 0x3a1c) = iVar6;
        if (iVar6 != 0) {
          if (*(int *)(DAT_0125870c[0x88e] + *(int *)(*(int *)(iVar6 + 8) + 0xb4) * 4) == 0) {
            piVar5 = (int *)0x0;
            piStack_104 = piVar5;
          }
          else {
            piVar5 = (int *)(*(int *)(DAT_0125870c[0x88e] + *(int *)(*(int *)(iVar6 + 8) + 0xb4) * 4
                                     ) + 8);
            piStack_104 = piVar5;
          }
        }
        if (((in_ECX[0x266] == (undefined1 *)0x6) &&
            (puVar8 = in_ECX[0x173], puVar8 != (undefined1 *)0x0)) &&
           (in_ECX[0x2aa] != (undefined1 *)0x0)) {
          pppuStack_11c = (undefined ***)0x6b7503;
          cVar2 = FUN_0040b360();
          if (cVar2 == '\0') goto LAB_006b7741;
          piStack_104 = (int *)(puVar8 + -8);
          puStack_108 = *(undefined1 **)(puVar8 + 0x54);
          pppuStack_11c = (undefined ***)&fStack_70;
          ppuStack_120 = &puStack_94;
          ppuStack_124 = DAT_0125870c;
          puStack_128 = (uint *)0x6b7534;
          FUN_004a1900();
          puVar8 = puStack_94;
          if ((0 < (int)puStack_94) && (0 < (int)uStack_90)) {
            pppuStack_11c = (undefined ***)DAT_0125870c;
            ppuStack_120 = (undefined1 **)0x6b7566;
            FUN_004a0c40();
            pppuStack_11c = (undefined ***)0x6b7571;
            cVar2 = FUN_004946b0();
            if (cVar2 != '\0') goto LAB_006b846e;
            pppuStack_11c = (undefined ***)0x6b7587;
            FUN_009885d0();
            uStack_c = CONCAT31(uStack_c._1_3_,1);
            ppuStack_120 = (undefined1 **)0x6b759f;
            pppuStack_11c = (undefined ***)&pcStack_f8;
            piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x174] + 0x38))();
            ppuStack_120 = (undefined1 **)0x6b75a8;
            (**(code **)(*piVar5 + 0x38))();
            puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
            ppuStack_120 = (undefined1 **)0x6b75b7;
            FUN_00408ad0();
            ppuStack_120 = (undefined1 **)puStack_108;
            puStack_128 = (uint *)0x6b75c2;
            FUN_006b6e70();
            ppuVar10 = DAT_0125870c;
            iVar3 = *(int *)(in_ECX[0x2aa] + 0x58) * 0x10 + piStack_10c[0xcc];
            puVar1 = DAT_0125870c[0x84b];
            *(float *)(iVar3 + 8) = (float)(int)puVar8;
            *(float *)(iVar3 + 0xc) = (float)(int)puStack_94;
            puStack_108 = puVar8;
            if (*(int *)(puVar1 + 4) + -1 < (int)puVar8) {
              puStack_108 = (undefined1 *)(*(int *)(puVar1 + 4) + -1);
            }
            puVar8 = puStack_94;
            if (*(int *)(puVar1 + 8) + -1 < (int)puStack_94) {
              puVar8 = (undefined1 *)(*(int *)(puVar1 + 8) + -1);
            }
            piStack_10c[0x37] =
                 *(int *)(*(int *)(ppuVar10[0xaa9] +
                                  (uint)*(ushort *)
                                         (*(int *)(puVar1 + 0x18) * (int)puVar8 +
                                          *(int *)(puVar1 + 0xc) * (int)puStack_108 +
                                         *(int *)(puVar1 + 0x20)) * 4) + 0xb4);
            *(undefined1 *)(piStack_10c + 10) = 1;
            *(undefined1 *)(*(int *)(in_ECX[0x2d] + 0x124) + 0x3a28) = 1;
            ppuStack_120 = (undefined1 **)0x6b7685;
            FUN_009885d0();
            ppuStack_120 = (undefined1 **)&uStack_90;
            puStack_10._0_1_ = 2;
            ppuStack_124 = (undefined1 **)0x6b769c;
            FUN_009888f0();
            puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,3);
            ppuStack_124 = (undefined1 **)0x6b76b6;
            ppuStack_120 = &puStack_fc;
            (**(code **)(*(int *)in_ECX[0x174] + 0x38))();
            ppuStack_124 = (undefined1 **)0x6b76bd;
            FUN_009e7500();
            ppuStack_124 = (undefined1 **)0x6b76c9;
            FUN_00408ad0();
            pvStack_14 = (void *)((uint)pvStack_14 & 0xffffff00);
            ppuStack_124 = (undefined1 **)0x6b76da;
            FUN_00408ad0();
            ppuStack_124 = (undefined1 **)0x6b76e8;
            FUN_009885d0();
            ppuStack_124 = &puStack_94;
            pvStack_14._0_1_ = 4;
            puStack_128 = (uint *)0x6b7704;
            FUN_009888f0();
            pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,5);
LAB_006b770e:
            ppuStack_124 = &puStack_100;
            puStack_128 = (uint *)0x6b7720;
            (**(code **)(*(int *)in_ECX[0x174] + 0x38))();
            pppuStack_11c = (undefined ***)0x6b7727;
            FUN_009e7500();
            pppuStack_11c = (undefined ***)0x6b7733;
            FUN_00408ad0();
            pppuStack_11c = (undefined ***)0x6b773c;
            FUN_00408ad0();
            goto LAB_006b8733;
          }
LAB_006b846e:
          if ((in_ECX[0x173] != (undefined1 *)0x0) &&
             (pppuStack_11c = (undefined ***)(in_ECX[0x173] + -8),
             pppuStack_11c != (undefined ***)0x0)) {
            ppuStack_120 = (undefined1 **)0x6b8487;
            FUN_006b6cd0();
          }
          pppuStack_11c = (undefined ***)0xd;
          ppuStack_120 = (undefined1 **)0xe0c9b0;
          uStack_c8 = 0xf;
          uStack_cc = 0;
          puStack_dc = (undefined1 *)((uint)puStack_dc & 0xffffff00);
          ppuStack_124 = (undefined1 **)0x6b84a9;
          FUN_00409350();
          uStack_c = CONCAT31(uStack_c._1_3_,0x23);
          pppuStack_11c = (undefined ***)&puStack_dc;
          ppuStack_120 = (undefined1 **)0x6b84c3;
          piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x174] + 0x38))();
          ppuStack_120 = (undefined1 **)0x6b84cc;
          (**(code **)(*piVar5 + 0x38))();
          puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
          if (0xf < uStack_cc) {
            ppuStack_120 = (undefined1 **)puStack_e0;
                    /* WARNING: Subroutine does not return */
            ppuStack_124 = (undefined1 **)&UNK_006b84e5;
            FUN_00aae91b();
          }
          ppuStack_120 = (undefined1 **)0x14;
          ppuStack_124 = (undefined1 **)0xe0ca74;
          uStack_cc = 0xf;
          uStack_d0 = 0;
          puStack_e0 = (undefined1 *)((uint)puStack_e0 & 0xffffff00);
          puStack_128 = (uint *)0x6b8505;
          FUN_00409350();
          puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x24);
          ppuStack_120 = &puStack_e0;
          ppuStack_124 = (undefined1 **)0x6b851f;
          piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x174] + 0x38))();
          ppuStack_124 = (undefined1 **)0x6b8528;
          (**(code **)(*piVar5 + 0x38))();
          pvStack_14 = (void *)((uint)pvStack_14 & 0xffffff00);
          if (0xf < uStack_d0) {
            ppuStack_124 = (undefined1 **)puStack_e4;
                    /* WARNING: Subroutine does not return */
            puStack_128 = (uint *)&UNK_006b8541;
            FUN_00aae91b();
          }
          ppuStack_124 = (undefined1 **)0xe;
          puStack_128 = (uint *)0xe0ca8c;
          uStack_d0 = 0xf;
          uStack_d4 = 0;
          puStack_e4 = (undefined1 *)((uint)puStack_e4 & 0xffffff00);
          puStack_12c = (uint *)0x6b8561;
          FUN_00409350();
          pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x25);
          ppuStack_124 = &puStack_e4;
          puStack_128 = (uint *)0x6b857b;
          piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x174] + 0x38))();
          puStack_128 = (uint *)0x6b8584;
          (**(code **)(*piVar5 + 0x38))();
          uStack_18 = 0;
          if (0xf < uStack_d4) {
            puStack_128 = (uint *)uStack_e8;
                    /* WARNING: Subroutine does not return */
            puStack_12c = (uint *)&UNK_006b859d;
            FUN_00aae91b();
          }
          puStack_128 = (uint *)0x13;
          puStack_12c = (uint *)0xe0ca9c;
          uStack_d4 = 0xf;
          uStack_d8 = 0;
          uStack_e8 = uStack_e8 & 0xffffff00;
          puStack_130 = (uint *)0x6b85bd;
          FUN_00409350();
          uStack_18 = 0x26;
          puStack_128 = &uStack_e8;
          puStack_12c = (uint *)0x6b85d7;
          piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x174] + 0x34))();
          puStack_12c = (uint *)0x6b85e0;
          (**(code **)(*piVar5 + 0x38))();
          uStack_1c = 0;
          if (0xf < uStack_d8) {
            puStack_12c = (uint *)uStack_ec;
                    /* WARNING: Subroutine does not return */
            puStack_130 = (uint *)&UNK_006b85f9;
            FUN_00aae91b();
          }
          puStack_12c = (uint *)0x18;
          puStack_130 = (uint *)0xe0cab0;
          uStack_d8 = 0xf;
          puStack_dc = (undefined1 *)0x0;
          uStack_ec = uStack_ec & 0xffffff00;
          pppcStack_134 = (char ***)0x6b8619;
          FUN_00409350();
          uStack_1c = 0x27;
          puStack_12c = &uStack_ec;
          puStack_130 = (uint *)0x6b8633;
          piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x174] + 0x34))();
          puStack_130 = (uint *)0x6b863c;
          (**(code **)(*piVar5 + 0x38))();
          uStack_20 = 0;
          if ((undefined1 *)0xf < puStack_dc) {
            puStack_130 = (uint *)uStack_f0;
                    /* WARNING: Subroutine does not return */
            pppcStack_134 = (char ***)&UNK_006b8655;
            FUN_00aae91b();
          }
          puStack_130 = (uint *)0x14;
          pppcStack_134 = (char ***)0xe0cacc;
          puStack_dc = (undefined1 *)0xf;
          puStack_e0 = (undefined1 *)0x0;
          uStack_f0 = uStack_f0 & 0xffffff00;
          pcStack_138 = (char *)0x6b8675;
          FUN_00409350();
          uStack_20 = 0x28;
          puStack_130 = &uStack_f0;
          pppcStack_134 = (char ***)0x6b868f;
          piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x174] + 0x34))();
          pppcStack_134 = (char ***)0x6b8698;
          (**(code **)(*piVar5 + 0x38))();
          auStack_24[0] = 0;
          if ((undefined1 *)0xf < puStack_e0) {
            pppcStack_134 = (char ***)ppuStack_f4;
                    /* WARNING: Subroutine does not return */
            pcStack_138 = &UNK_006b86b1;
            FUN_00aae91b();
          }
          pppcStack_134 = (char ***)0x1a;
          pcStack_138 = "nudge_rotation_minus_minus";
          puStack_e0 = (undefined1 *)0xf;
          puStack_e4 = (undefined1 *)0x0;
          ppuStack_f4 = (uint **)((uint)ppuStack_f4 & 0xffffff00);
          puStack_13c = (undefined *)0x6b86d1;
          FUN_00409350();
          auStack_24[0] = 0x29;
          pppcStack_134 = (char ***)&ppuStack_f4;
          pcStack_138 = (char *)0x6b86eb;
          piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x174] + 0x34))();
          pcStack_138 = (char *)0x6b86f4;
          (**(code **)(*piVar5 + 0x38))();
          auStack_28[0] = 0;
          if ((undefined1 *)0xf < puStack_e4) {
            pcStack_138 = pcStack_f8;
                    /* WARNING: Subroutine does not return */
            puStack_13c = &UNK_006b870d;
            FUN_00aae91b();
          }
          in_ECX[0x173] = (undefined1 *)0x0;
          puStack_e4 = (undefined1 *)0xf;
          uStack_e8 = 0;
          pcStack_f8 = (char *)((uint)pcStack_f8 & 0xffffff00);
          pcStack_138 = (char *)0x6b8733;
          (**(code **)(*(int *)(in_ECX[0x174] + 0x18) + 0x38))();
        }
        else {
LAB_006b7741:
          if (piVar5 == (int *)0x0) goto LAB_006b846e;
          if (piVar5 != (int *)in_ECX[0x173]) {
            pppuStack_11c = (undefined ***)0x6b7b4f;
            cVar2 = (**(code **)(*piVar5 + 8))();
            if (cVar2 != '\0') {
              if ((in_ECX[0x173] != (undefined1 *)0x0) &&
                 (pppuStack_11c = (undefined ***)(in_ECX[0x173] + -8),
                 pppuStack_11c != (undefined ***)0x0)) {
                ppuStack_120 = (undefined1 **)0x6b7b6c;
                FUN_006b6cd0();
              }
              pppuStack_11c = (undefined ***)0x6b7b75;
              iVar3 = (**(code **)(*piVar5 + 4))();
              if ((iVar3 == 3) && (piVar5 + -2 != (int *)0x0)) {
                puStack_108 = (undefined1 *)piVar5[0x15];
                if (puStack_108[0x2a] == '\0') {
                  if (in_ECX[0x266] == (undefined1 *)0x0) {
                    puStack_c0 = (undefined1 *)&pppcStack_134;
                    in_ECX[0x266] = (undefined1 *)0x5;
                    pcStack_138 = (char *)0x6b8179;
                    FUN_009885d0();
                    pcStack_138 = (char *)0x6b8184;
                    FUN_009fa4c0();
                  }
                  pppuStack_11c = (undefined ***)0x6b8195;
                  (**(code **)(*(int *)(in_ECX[0x174] + 0x18) + 0x34))();
                  pppuStack_11c = (undefined ***)0x6b81a3;
                  FUN_009885d0();
                  uStack_c = CONCAT31(uStack_c._1_3_,0x1a);
                  ppuStack_120 = (undefined1 **)0x6b81bb;
                  pppuStack_11c = (undefined ***)&pcStack_f8;
                  piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x174] + 0x38))();
                  ppuStack_120 = (undefined1 **)0x6b81c4;
                  (**(code **)(*piVar5 + 0x38))();
                  puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
                  ppuStack_120 = (undefined1 **)0x6b81d3;
                  FUN_00408ad0();
                  puStack_c4 = (undefined1 *)&pcStack_138;
                  in_ECX[0x173] = puStack_108;
                  puStack_13c = (undefined *)0x6b81f0;
                  FUN_009885d0();
                  puStack_13c = (undefined *)0x6b8200;
                  puStack_13c = (undefined *)(**(code **)in_ECX[0x27c])();
                  puStack_13c[0x142] = 0;
                  uStack_140 = 0x6b820d;
                  FUN_009a8550();
                  puStack_e0 = (undefined1 *)&uStack_154;
                  iStack_158 = 0x6b8220;
                  FUN_009885d0();
                  iStack_158 = 0x6b8230;
                  iStack_158 = (**(code **)in_ECX[0x27c])();
                  *(undefined1 *)(iStack_158 + 0x142) = 0;
                  uStack_15c = 0x6b823d;
                  FUN_009a8550();
                  puStack_fc = (undefined1 *)&uStack_170;
                  puStack_174 = (undefined1 *)0x6b8250;
                  FUN_009885d0();
                  puStack_174 = (undefined1 *)0x6b8260;
                  puStack_174 = (undefined1 *)(**(code **)in_ECX[0x27c])();
                  puStack_174[0x142] = 0;
                  piStack_178 = (int *)0x6b826d;
                  FUN_009a8550();
                  ppuStack_190 = (undefined1 **)0x6b8280;
                  FUN_009885d0();
                  ppuStack_190 = (undefined1 **)0x6b8290;
                  ppuStack_190 = (undefined1 **)(**(code **)in_ECX[0x27c])();
                  *(undefined1 *)((int)ppuStack_190 + 0x142) = 0;
                  pcStack_194 = (char *)0x6b829d;
                  FUN_009a8550();
                  ppuStack_190 = (undefined1 **)0x6b82ab;
                  FUN_009885d0();
                  uStack_80 = 0x1b;
                  ppuStack_190 = &puStack_100;
                  pcStack_194 = (char *)0x6b82c6;
                  (**(code **)(*piStack_178 + 0x1c))();
                  uStack_84 = 0x1c;
                  ppuStack_198 = (undefined1 **)0x6b82e0;
                  pcStack_194 = acStack_16c;
                  (**(code **)(*(int *)in_ECX[0x174] + 0x38))();
                  ppuStack_198 = (undefined1 **)0x6b82e7;
                  FUN_009e7500();
                  ppuStack_198 = (undefined1 **)0x6b82f3;
                  FUN_00408ad0();
                  uStack_88 = 0;
                  ppuStack_198 = (undefined1 **)0x6b8304;
                  FUN_00408ad0();
                  ppuStack_124 = *(undefined1 ***)(aiStack_184[0] + 0x44);
                  ppuStack_120 = *(undefined1 ***)(aiStack_184[0] + 0x48);
                  ppuStack_198 = (undefined1 **)0x6b832c;
                  FUN_009885d0();
                  ppuStack_198 = &puStack_108;
                  uStack_88 = 0x1d;
                  ppiStack_19c = (int **)0x6b8347;
                  FUN_00988c70();
                  uStack_88 = 0x1e;
                  ppiStack_19c = (int **)0x6b8361;
                  ppuStack_198 = &puStack_174;
                  (**(code **)(*(int *)in_ECX[0x174] + 0x38))();
                  ppiStack_19c = (int **)0x6b8368;
                  FUN_009e7500();
                  ppiStack_19c = (int **)0x6b8374;
                  FUN_00408ad0();
                  auStack_8c[0] = 0;
                  ppiStack_19c = (int **)0x6b8385;
                  FUN_00408ad0();
                  ppiStack_19c = (int **)0x6b8393;
                  FUN_009885d0();
                  ppiStack_19c = &piStack_10c;
                  auStack_8c[0] = 0x1f;
                  puStack_1a0 = (undefined1 *)0x6b83ae;
                  FUN_00988c70();
                  auStack_8c[0] = 0x20;
                  puStack_1a0 = (undefined1 *)0x6b83c8;
                  ppiStack_19c = &piStack_178;
                  (**(code **)(*(int *)in_ECX[0x174] + 0x38))();
                  puStack_1a0 = (undefined1 *)0x6b83cf;
                  FUN_009e7500();
                  puStack_1a0 = (undefined1 *)0x6b83db;
                  FUN_00408ad0();
                  uStack_90 = uStack_90 & 0xffffff00;
                  puStack_1a0 = (undefined1 *)0x6b83ec;
                  FUN_00408ad0();
                  puStack_1a0 = (undefined1 *)0x6b83fa;
                  FUN_009885d0();
                  uStack_90._0_1_ = 0x21;
                  puStack_1a0 = &stack0xfffffef0;
                  uStack_1a4 = 0x6b8418;
                  FUN_00988c70();
                  uStack_90 = CONCAT31(uStack_90._1_3_,0x22);
                  uStack_1a4 = 0x6b8432;
                  puStack_1a0 = auStack_17c;
                  (**(code **)(*(int *)in_ECX[0x174] + 0x38))();
                  pppuStack_11c = (undefined ***)0x6b8439;
                  FUN_009e7500();
                  pppuStack_11c = (undefined ***)0x6b8445;
                  FUN_00408ad0();
                  pppuStack_11c = (undefined ***)0x6b844e;
                  FUN_00408ad0();
                  puStack_108[0x28] = 1;
                  *(undefined1 *)(*(int *)(in_ECX[0x2d] + 0x124) + 0x3a28) = 1;
                }
                else {
                  ppuStack_120 = (undefined1 **)0x6b7ba6;
                  pppuStack_11c = (undefined ***)(piVar5 + -2);
                  FUN_005cb2c0();
                  if (in_ECX[0x266] == (undefined1 *)0x0) {
                    puStack_c0 = (undefined1 *)&pppcStack_134;
                    in_ECX[0x266] = (undefined1 *)0x5;
                    pcStack_138 = (char *)0x6b7bcc;
                    FUN_009885d0();
                    pcStack_138 = (char *)0x6b7bd7;
                    FUN_009fa4c0();
                    piVar5 = piStack_104;
                  }
                  puStack_c0 = (undefined1 *)&pppcStack_134;
                  if (*(int **)(*(int *)(DAT_012588e8 + 0xacc) +
                               *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + piVar5[0x49] * 4) +
                                       0xbe4) * 4) == piVar5 + -2) {
                    pcStack_138 = (char *)0x6b7c24;
                    puStack_c0 = (undefined1 *)&pppcStack_134;
                    FUN_009885d0();
                    pcStack_138 = (char *)0x6b7c36;
                    (**(code **)in_ECX[0x27c])();
                    pcStack_138 = (char *)0x6b7c3b;
                    FUN_009a8c50();
                  }
                  else {
                    pcStack_138 = (char *)0x6b7c42;
                    FUN_009885d0();
                    pcStack_138 = (char *)0x6b7c54;
                    pcStack_138 = (char *)(**(code **)in_ECX[0x27c])();
                    pcStack_138[0x142] = '\0';
                    puStack_13c = (undefined *)0x6b7c61;
                    FUN_009a8550();
                  }
                  ppuVar10 = in_ECX + 0x27c;
                  puStack_dc = auStack_150;
                  uStack_154 = 0x6b7c74;
                  FUN_009885d0();
                  uStack_154 = 0x6b7c7c;
                  (**(code **)*ppuVar10)();
                  uStack_154 = 0x6b7c81;
                  FUN_009a8c50();
                  pcStack_f8 = acStack_16c;
                  uStack_170 = 0x6b7c94;
                  FUN_009885d0();
                  uStack_170 = 0x6b7c9c;
                  (**(code **)*ppuVar10)();
                  uStack_170 = 0x6b7ca1;
                  FUN_009a8c50();
                  uStack_18c = 0x6b7cb4;
                  FUN_009885d0();
                  uStack_18c = 0x6b7cbc;
                  (**(code **)*ppuVar10)();
                  uStack_18c = 0x6b7cc1;
                  FUN_009a8c50();
                  puStack_130 = &uStack_1a4;
                  piStack_1a8 = (int *)0x6b7cd4;
                  FUN_009885d0();
                  piStack_1a8 = (int *)0x6b7cdc;
                  (**(code **)*ppuVar10)();
                  piStack_1a8 = (int *)0x6b7ce1;
                  FUN_009a8c50();
                  piStack_1a8 = (int *)0x6b7cf2;
                  (**(code **)(*(int *)(in_ECX[0x174] + 0x18) + 0x34))();
                  piStack_1a8 = (int *)0x6b7d00;
                  FUN_009885d0();
                  uStack_98 = CONCAT31(uStack_98._1_3_,0xc);
                  piStack_1ac = (int *)0x6b7d18;
                  piStack_1a8 = aiStack_184;
                  piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x174] + 0x38))();
                  piStack_1ac = (int *)0x6b7d21;
                  (**(code **)(*piVar5 + 0x38))();
                  uStack_9c = uStack_9c & 0xffffff00;
                  piStack_1ac = (int *)0x6b7d30;
                  FUN_00408ad0();
                  piStack_1ac = (int *)0x6b7d3e;
                  FUN_009885d0();
                  uStack_9c = CONCAT31(uStack_9c._1_3_,0xd);
                  piStack_1ac = &iStack_188;
                  piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x174] + 0x38))();
                  (**(code **)(*piVar5 + 0x38))();
                  uStack_a0 = uStack_a0 & 0xffffff00;
                  FUN_00408ad0();
                  FUN_009885d0();
                  uStack_a0 = CONCAT31(uStack_a0._1_3_,0xe);
                  piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x174] + 0x38))();
                  (**(code **)(*piVar5 + 0x38))();
                  puStack_a4 = (undefined1 *)((uint)puStack_a4 & 0xffffff00);
                  FUN_00408ad0();
                  FUN_009885d0();
                  puStack_a4 = (undefined1 *)CONCAT31(puStack_a4._1_3_,0xf);
                  piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x174] + 0x34))(&ppuStack_190);
                  (**(code **)(*piVar5 + 0x38))();
                  uStack_a8 = uStack_a8 & 0xffffff00;
                  FUN_00408ad0();
                  FUN_009885d0();
                  uStack_a8 = CONCAT31(uStack_a8._1_3_,0x10);
                  piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x174] + 0x34))();
                  (**(code **)(*piVar5 + 0x38))();
                  uStack_ac = uStack_ac & 0xffffff00;
                  FUN_00408ad0();
                  FUN_009885d0();
                  uStack_ac = CONCAT31(uStack_ac._1_3_,0x11);
                  piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x174] + 0x34))(&ppuStack_198);
                  (**(code **)(*piVar5 + 0x38))();
                  uStack_b0 = uStack_b0 & 0xffffff00;
                  FUN_00408ad0();
                  FUN_009885d0();
                  uStack_b0 = CONCAT31(uStack_b0._1_3_,0x12);
                  piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x174] + 0x34))(&ppiStack_19c);
                  (**(code **)(*piVar5 + 0x38))();
                  pcStack_b4 = (char *)((uint)pcStack_b4 & 0xffffff00);
                  FUN_00408ad0();
                  in_ECX[0x173] = (undefined1 *)piStack_1ac;
                  if ((char)pcStack_b4 != '\0') {
                    FUN_004c4570(&uStack_18c);
                    FUN_004a0c40(DAT_0125870c);
                    cVar2 = FUN_004946b0();
                    if (cVar2 == '\0') {
                      FUN_009885d0();
                      piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x174] + 0x38))(&puStack_1a0);
                      (**(code **)(*piVar5 + 0x34))();
                      pcStack_b4 = (char *)((uint)pcStack_b4 & 0xffffff00);
                      FUN_00408ad0();
                    }
                  }
                  FUN_009885d0();
                  pcStack_b4 = (char *)CONCAT31(pcStack_b4._1_3_,0x14);
                  (**(code **)(*piStack_1ac + 0x1c))(&pppcStack_134);
                  fStack_b8 = (float)CONCAT31(fStack_b8._1_3_,0x15);
                  (**(code **)(*(int *)in_ECX[0x174] + 0x38))(&puStack_1a0);
                  FUN_009e7500();
                  FUN_00408ad0();
                  uStack_bc = 0;
                  FUN_00408ad0();
                  puStack_e0 = (undefined1 *)(float)(int)ppuStack_120;
                  puStack_dc = (undefined1 *)(float)(int)pppuStack_11c;
                  FUN_009885d0();
                  uStack_bc = 0x16;
                  FUN_00988c70(&puStack_13c);
                  uStack_bc = 0x17;
                  (**(code **)(*(int *)in_ECX[0x174] + 0x38))(&piStack_1a8);
                  FUN_009e7500();
                  FUN_00408ad0();
                  puStack_c0 = (undefined1 *)((uint)puStack_c0 & 0xffffff00);
                  FUN_00408ad0();
                  FUN_009885d0();
                  puStack_c0._0_1_ = 0x18;
                  FUN_00988c70(&uStack_140);
                  puStack_c0 = (undefined1 *)CONCAT31(puStack_c0._1_3_,0x19);
                  (**(code **)(*(int *)in_ECX[0x174] + 0x38))(&piStack_1ac);
                  pppuStack_11c = (undefined ***)0x6b8066;
                  FUN_009e7500();
                  pppuStack_11c = (undefined ***)0x6b8072;
                  FUN_00408ad0();
                  uStack_c = uStack_c & 0xffffff00;
                  pppuStack_11c = (undefined ***)0x6b8083;
                  FUN_00408ad0();
                  pppuStack_11c = (undefined ***)0x6b808a;
                  FUN_006bcef0();
                  puStack_108[0x28] = 1;
                  *(undefined1 *)(*(int *)(in_ECX[0x2d] + 0x124) + 0x3a28) = 1;
                  if (in_ECX[0x266] == (undefined1 *)0x8) {
                    pppuStack_11c = (undefined ***)0x6b80bc;
                    FUN_004959b0();
                    puVar8 = puStack_108;
                    uStack_5c = *(undefined4 *)(puStack_108 + 0x78);
                    uStack_60 = *(undefined4 *)(puStack_108 + 0x74);
                    pppuStack_11c = (undefined ***)0x6b80e0;
                    FUN_0044ed90();
                    if ((DAT_012589a8 < 0) ||
                       (iVar3 = DAT_012589a8,
                       (*(int *)(puVar8 + 0xcc) - *(int *)(puVar8 + 200)) / 0x24 <= DAT_012589a8)) {
                      iVar3 = 0;
                    }
                    uStack_68 = *(undefined4 *)
                                 (*(int *)(DAT_0125870c[0xaa9] +
                                          *(int *)(*(int *)(puVar8 + 200) + 4 + iVar3 * 0x24) * 4) +
                                 0x74);
                    uStack_64 = *(undefined4 *)
                                 (*(int *)(DAT_0125870c[0xaa9] +
                                          *(int *)(*(int *)(puVar8 + 200) + 4 + iVar3 * 0x24) * 4) +
                                 0x78);
                    pppuStack_11c = (undefined ***)0x6b814e;
                    FUN_0044ed90();
                  }
                }
                goto LAB_006b8733;
              }
            }
            goto LAB_006b846e;
          }
          piStack_104 = piVar5 + -2;
          puStack_108 = (undefined1 *)piVar5[0x15];
          pppuStack_11c = (undefined ***)&fStack_70;
          ppuStack_120 = &puStack_100;
          ppuStack_124 = DAT_0125870c;
          puStack_128 = (uint *)0x6b777b;
          FUN_004a1900();
          if ((0 < (int)puStack_100) && (0 < (int)puStack_fc)) {
            puVar8 = in_ECX[0x266];
            if (puVar8 == (undefined1 *)0x1) {
              *(float *)(puStack_108 + 0x54) = (float)(int)puStack_100;
              *(float *)(puStack_108 + 0x58) = (float)(int)puStack_fc;
            }
            else if (puVar8 == (undefined1 *)0x9) {
              *(float *)(puStack_108 + 100) = (float)(int)puStack_100;
              *(float *)(puStack_108 + 0x68) = (float)(int)puStack_fc;
              DAT_012586da = 1;
            }
            else if (puVar8 == (undefined1 *)0x2) {
              *(undefined1 **)(puStack_108 + 0x7c) = puStack_100;
              *(undefined1 **)(puStack_108 + 0x80) = puStack_fc;
              pppuStack_11c = (undefined ***)0x6b7811;
              FUN_004c6ad0();
              pppuStack_11c = (undefined ***)piStack_104;
              ppuStack_120 = (undefined1 **)0x6b7821;
              FUN_005cb2c0();
            }
            else if (puVar8 == (undefined1 *)0x5) {
              *(float *)(puStack_108 + 0x44) = (float)(int)puStack_100;
              *(float *)(puStack_108 + 0x48) = (float)(int)puStack_fc;
              pppuStack_11c = (undefined ***)0x6b785a;
              (**(code **)(*in_ECX + 0x38))();
              pppuStack_11c = (undefined ***)0x6b7863;
              FUN_00645da0();
            }
            else if (puVar8 == (undefined1 *)0x6) {
              iVar3 = *(int *)(in_ECX[0x2aa] + 0x58) * 0x10 + *(int *)(puStack_108 + 0x330);
              *(float *)(iVar3 + 8) = (float)(int)puStack_100;
              *(float *)(iVar3 + 0xc) = (float)(int)puStack_fc;
              pppuStack_11c = (undefined ***)0x6b78ba;
              cVar2 = FUN_0040b360();
              if (cVar2 != '\0') {
                pppuStack_11c = (undefined ***)DAT_0125870c;
                ppuStack_120 = (undefined1 **)0x6b78d0;
                FUN_004a0c40();
                pppuStack_11c = (undefined ***)0x6b78db;
                cVar2 = FUN_004946b0();
                if (cVar2 == '\0') {
                  pppuStack_11c = (undefined ***)0x6b78ed;
                  FUN_009885d0();
                  uStack_c = CONCAT31(uStack_c._1_3_,6);
                  ppuStack_120 = (undefined1 **)0x6b7905;
                  pppuStack_11c = (undefined ***)&pcStack_f8;
                  piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x174] + 0x38))();
                  pcVar7 = *(code **)(*piVar5 + 0x34);
                }
                else {
                  pppuStack_11c = (undefined ***)0x6b7913;
                  FUN_009885d0();
                  uStack_c = CONCAT31(uStack_c._1_3_,7);
                  pppuStack_11c = (undefined ***)&pcStack_f8;
                  ppuStack_120 = (undefined1 **)0x6b792d;
                  piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x174] + 0x38))();
                  pcVar7 = *(code **)(*piVar5 + 0x38);
                }
                ppuStack_120 = (undefined1 **)0x6b7936;
                (*pcVar7)();
                uStack_c = uStack_c & 0xffffff00;
                pppuStack_11c = (undefined ***)0x6b7947;
                FUN_00408ad0();
              }
              pppuStack_11c = (undefined ***)piStack_104;
              ppuStack_124 = (undefined1 **)0x6b7952;
              ppuStack_120 = in_ECX;
              FUN_006b6e70();
            }
            else if (puVar8 == (undefined1 *)0x7) {
              pppuStack_11c = (undefined ***)piStack_104;
              *(float *)(puStack_108 + 0x1d4) = (float)(int)puStack_100;
              *(float *)(puStack_108 + 0x1d8) = (float)(int)puStack_fc;
              ppuStack_124 = (undefined1 **)0x6b798d;
              ppuStack_120 = in_ECX;
              FUN_006bea70();
            }
            else if (puVar8 == (undefined1 *)0x3) {
              *(float *)(puStack_108 + 0x1b4) = (float)(int)puStack_100;
              *(float *)(puStack_108 + 0x1b8) = (float)(int)puStack_fc;
              pppuStack_11c = (undefined ***)piStack_104;
              ppuStack_120 = (undefined1 **)0x6b79c9;
              FUN_006be8a0();
            }
            else if (puVar8 == (undefined1 *)0x4) {
              *(float *)(puStack_108 + 0x1c4) = (float)(int)puStack_100;
              *(float *)(puStack_108 + 0x1c8) = (float)(int)puStack_fc;
              pppuStack_11c = (undefined ***)piStack_104;
              ppuStack_120 = (undefined1 **)0x6b7a05;
              FUN_006be9d0();
            }
            else if (puVar8 == (undefined1 *)0x8) {
              pppuStack_11c = *(undefined ****)(puStack_108 + 0xb4);
              if ((int)pppuStack_11c <
                  *(int *)(*(int *)(puStack_108 + 200) + 4 + DAT_012589a8 * 0x24)) {
                ppuStack_120 = (undefined1 **)0x6b7a47;
                FUN_004c3f30();
              }
              fStack_40 = (float)(int)puStack_100;
              pppuStack_11c = &ppuStack_48;
              fStack_3c = (float)(int)puStack_fc;
              uStack_44 = 0x18d;
              ppuStack_48 = CMapPoint::vftable;
              ppuStack_120 = (undefined1 **)0x6b7a90;
              FUN_004c8bb0();
            }
            puStack_108[0x28] = 1;
            *(undefined1 *)(*(int *)(in_ECX[0x2d] + 0x124) + 0x3a28) = 1;
            pppuStack_11c = (undefined ***)0x6b7ab9;
            FUN_009885d0();
            pppuStack_11c = (undefined ***)auStack_8c;
            uStack_c._0_1_ = 8;
            ppuStack_120 = (undefined1 **)0x6b7ad2;
            FUN_009888f0();
            uStack_c = CONCAT31(uStack_c._1_3_,9);
            ppuStack_120 = (undefined1 **)0x6b7aec;
            pppuStack_11c = (undefined ***)&pcStack_f8;
            (**(code **)(*(int *)in_ECX[0x174] + 0x38))();
            ppuStack_124 = (undefined1 **)0x6b7af3;
            FUN_009e7500();
            ppuStack_124 = (undefined1 **)0x6b7aff;
            FUN_00408ad0();
            pvStack_14 = (void *)((uint)pvStack_14 & 0xffffff00);
            ppuStack_124 = (undefined1 **)0x6b7b10;
            FUN_00408ad0();
            ppuStack_124 = (undefined1 **)0x6b7b1e;
            FUN_009885d0();
            ppuStack_124 = &puStack_94;
            pvStack_14._0_1_ = 10;
            puStack_128 = (uint *)0x6b7b37;
            FUN_009888f0();
            pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0xb);
            goto LAB_006b770e;
          }
        }
LAB_006b8733:
        uStack_c = 0xffffffff;
        pppuStack_11c = (undefined ***)0x6b874a;
        FUN_009a63f0();
        pcVar9 = pcStack_b4;
      }
    }
    else if ((iVar6 == 1) && (*pcVar9 == -0x59)) {
      puVar8 = in_ECX[0x171];
      if (puVar8[0x30] == '\0') {
        pppuStack_11c = (undefined ***)0x6b877d;
        (**(code **)(*(int *)(*(int *)(puVar8 + 0x24) + 0x18) + 0x34))();
        *(undefined2 *)(*(int *)(puVar8 + 0x28) + 0x4c) = 1;
        pppuStack_11c = (undefined ***)0x6b8790;
        (**(code **)(**(int **)(puVar8 + 0x24) + 0x2c))();
        puVar8[0x30] = 1;
      }
      else {
        pppuStack_11c = (undefined ***)0x6b8772;
        (**(code **)(*(int *)(*(int *)(puVar8 + 0x24) + 0x18) + 0x38))();
        puVar8[0x30] = 0;
      }
    }
    if ((((pcVar9[0x18] == '\0') && (*(int *)(pcVar9 + 8) == 0)) && (*(int *)(pcVar9 + 0x14) == 4))
       && (*(char *)((int)in_ECX + 0x40d) == '\0')) {
      *(undefined1 *)(in_ECX + 0x103) = 1;
    }
    pcVar9 = *(char **)(pcVar9 + 0x20);
  } while( true );
}

