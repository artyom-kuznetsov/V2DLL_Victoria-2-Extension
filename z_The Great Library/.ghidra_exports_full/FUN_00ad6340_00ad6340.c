// FUN_00ad6340 @ 00ad6340 body=[[00ad6340, 00ad67ac] [00ad67b0, 00ad6e8c]]


void FUN_00ad6340(int *param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  float *pfVar12;
  int in_ECX;
  int iVar13;
  uint uVar14;
  void *pvVar15;
  void *_Dst;
  void *_Dst_00;
  void *pvStack_264;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  uint uStack_214;
  int iStack_210;
  int iStack_20c;
  int iStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1f8;
  float fStack_1f4;
  int iStack_1ec;
  int local_1e8;
  uint uStack_1e4;
  int local_1e0 [3];
  undefined2 local_1d4;
  uint uStack_1d0;
  int local_1cc;
  uint uStack_1c8;
  uint local_1c4;
  int iStack_1c0;
  void *local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined2 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined1 auStack_10c [64];
  undefined1 auStack_cc [64];
  undefined1 auStack_8c [64];
  undefined1 auStack_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00b3706f;
  local_c = ExceptionList;
  uVar7 = DAT_00ef259c ^ (uint)&stack0xfffffd78;
  ExceptionList = &local_c;
  local_1bc = (void *)0x0;
  local_1b8 = 0;
  local_1b4 = 0;
  local_1b0 = 1;
  local_1e0[0] = 0;
  local_1e0[1] = 0;
  local_1e0[2] = 0;
  local_1d4 = 1;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  local_1e8 = in_ECX;
  FUN_00ad61b0(local_1e0);
  FUN_00ad6210(local_1e0,&local_1bc);
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_1e0[0] != 0) {
    (*(code *)PTR__free_00f01b10)(local_1e0[0],uVar7);
  }
  uVar7 = *(uint *)(in_ECX + 0x84);
  uVar14 = param_1[1];
  iVar9 = *(int *)(in_ECX + 0xc);
  local_1cc = iVar9;
  local_1c4 = uVar7;
  if (((uVar7 != uVar14) && (param_1[1] = uVar7, uVar14 < uVar7)) && ((uint)param_1[2] < uVar7)) {
    FUN_00ad8720(uVar7);
  }
  uStack_214 = 0;
  if (uVar7 != 0) {
    iStack_1c0 = iVar9 - (int)local_1bc;
    iStack_210 = 0;
    iStack_208 = 0;
    pvStack_264 = local_1bc;
    do {
      iVar9 = *(int *)(*(int *)(in_ECX + 0x80) + uStack_214 * 4);
      _Dst_00 = (void *)(iStack_1c0 + (int)pvStack_264);
      iStack_1ec = iVar9;
      if ((*(byte *)(iVar9 + 0xa4) & 2) == 0) {
        uStack_1ac = *(undefined4 *)((int)pvStack_264 + 0x30);
        uStack_1a8 = *(undefined4 *)((int)pvStack_264 + 0x34);
        uStack_1a4 = *(undefined4 *)((int)pvStack_264 + 0x38);
        local_1e0[0] = 0x3f800000;
        local_1e0[1] = 0x3f800000;
        local_1e0[2] = 0x3f800000;
        uStack_184 = 0x3f800000;
        uStack_194 = 0x3f800000;
        uStack_190 = 0;
        uStack_18c = 0;
        uStack_188 = 0;
        uStack_1a0 = 0;
        uStack_19c = 0;
        uStack_198 = 0;
        FUN_00ad1fe0(&uStack_1a0,&uStack_190,local_1e0,&uStack_1ac);
      }
      else {
        FID_conflict__memcpy(_Dst_00,pvStack_264,0x40);
      }
      iVar9 = *(int *)(iVar9 + 4);
      pvVar15 = (void *)(iStack_210 + *(int *)(in_ECX + 0x10));
      FID_conflict__memcpy(pvVar15,_Dst_00,0x40);
      if (iVar9 != -1) {
        FID_conflict__memcpy(auStack_10c,(void *)(iVar9 * 0x40 + local_1cc),0x40);
        FUN_00ad29c0();
        FUN_00ad8510(auStack_10c);
      }
      FUN_00b16d90();
      FUN_00b184a0(pvVar15);
      puVar8 = (undefined4 *)(*(int *)(in_ECX + 0x1c) + iStack_208);
      uStack_140 = uStack_17c;
      uStack_13c = uStack_178;
      uStack_138 = uStack_174;
      uStack_118 = uStack_154;
      uStack_114 = uStack_150;
      uStack_110 = uStack_14c;
      *puVar8 = uStack_180;
      puVar8[1] = uStack_17c;
      puVar8[2] = uStack_178;
      puVar8[3] = uStack_174;
      puVar8[4] = uStack_170;
      puVar8[5] = uStack_16c;
      puVar8[6] = uStack_168;
      puVar8[7] = uStack_164;
      puVar8[8] = uStack_160;
      puVar8[9] = uStack_15c;
      puVar8[10] = uStack_158;
      puVar8[0xb] = uStack_154;
      puVar8[0xc] = uStack_150;
      puVar8[0xd] = uStack_14c;
      puVar1 = (uint *)(*(int *)(in_ECX + 0x20) + uStack_214 * 4);
      *puVar1 = *puVar1 & 0xfffffffe;
      FID_conflict__memcpy(auStack_8c,pvStack_264,0x40);
      FUN_00ad29c0();
      iVar9 = iStack_210;
      _Dst = (void *)(*param_1 + iStack_210);
      pvVar15 = (void *)FUN_00ad83e0(&fStack_254,auStack_8c);
      FID_conflict__memcpy(_Dst,pvVar15,0x40);
      FID_conflict__memcpy(auStack_cc,_Dst_00,0x40);
      FUN_00ad29c0();
      FID_conflict__memcpy((void *)(iVar9 + *(int *)(in_ECX + 0x14)),auStack_cc,0x40);
      iVar9 = iStack_1ec;
      cVar6 = FUN_00ae8b70();
      if (cVar6 == '\x01') {
        FID_conflict__memcpy(auStack_4c,_Dst_00,0x40);
        FUN_00ad29c0();
        FUN_00ad83e0(&fStack_254,auStack_4c);
        uStack_1d0 = *(uint *)(in_ECX + 0xfc);
        uStack_1e4 = 0;
        if (uStack_1d0 != 0) {
          iStack_20c = 0;
          do {
            uVar7 = uStack_1e4;
            cVar6 = FUN_00ae8a70(uStack_1e4);
            if (((cVar6 == '\0') &&
                (iVar9 = *(int *)(iVar9 + 0x1c) + iStack_20c, *(int *)(iVar9 + 4) != 0)) &&
               (iVar9 = (**(code **)(**(int **)(iVar9 + 4) + 0x10))(), iVar9 != 0)) {
              uStack_1c8 = FUN_00add2f0();
              uVar14 = 0;
              in_ECX = local_1e8;
              if (uStack_1c8 != 0) {
                do {
                  piVar10 = (int *)FUN_00add300(uVar14);
                  iVar11 = (**(code **)(*piVar10 + 4))();
                  if ((iVar11 == 0) || (iVar11 == 1)) {
                    piVar10 = (int *)FUN_00add300(uVar14);
                    iVar11 = (**(code **)(*piVar10 + 0x14))();
                    uVar5 = *(uint *)(iVar9 + 0x18);
                    uVar7 = 0;
                    if (3 < (int)uVar5) {
                      iVar13 = (uVar5 - 4 >> 2) + 1;
                      uVar7 = iVar13 * 4;
                      pfVar12 = (float *)(iVar11 + 0x14);
                      do {
                        fVar2 = pfVar12[-5];
                        fVar3 = pfVar12[-5];
                        fVar4 = pfVar12[-4];
                        pfVar12[-5] = pfVar12[-3] * fStack_234 +
                                      pfVar12[-4] * fStack_244 + pfVar12[-5] * fStack_254 +
                                      fStack_224;
                        pfVar12[-4] = pfVar12[-3] * fStack_230 +
                                      pfVar12[-4] * fStack_240 + fVar2 * fStack_250 + fStack_220;
                        pfVar12[-3] = pfVar12[-3] * fStack_22c +
                                      fVar4 * fStack_23c + fVar3 * fStack_24c + fStack_21c;
                        fVar2 = pfVar12[-2];
                        fVar3 = pfVar12[-1];
                        fVar4 = pfVar12[-2];
                        pfVar12[-2] = *pfVar12 * fStack_234 +
                                      fStack_254 * pfVar12[-2] + fStack_244 * pfVar12[-1] +
                                      fStack_224;
                        pfVar12[-1] = *pfVar12 * fStack_230 +
                                      fStack_250 * fVar2 + fStack_240 * pfVar12[-1] + fStack_220;
                        *pfVar12 = *pfVar12 * fStack_22c + fStack_24c * fVar4 + fStack_23c * fVar3 +
                                   fStack_21c;
                        fStack_1f8 = pfVar12[3] * fStack_234 +
                                     pfVar12[2] * fStack_244 + pfVar12[1] * fStack_254 + fStack_224;
                        iVar13 = iVar13 + -1;
                        fStack_1f4 = pfVar12[3] * fStack_230 +
                                     pfVar12[2] * fStack_240 + pfVar12[1] * fStack_250 + fStack_220;
                        fVar2 = pfVar12[1];
                        fVar3 = pfVar12[2];
                        pfVar12[1] = fStack_1f8;
                        pfVar12[2] = fStack_1f4;
                        pfVar12[3] = pfVar12[3] * fStack_22c +
                                     fVar2 * fStack_24c + fVar3 * fStack_23c + fStack_21c;
                        fVar2 = pfVar12[4];
                        fVar3 = pfVar12[4];
                        fVar4 = pfVar12[5];
                        pfVar12[4] = fStack_234 * pfVar12[6] +
                                     fStack_254 * pfVar12[4] + fStack_244 * pfVar12[5] + fStack_224;
                        pfVar12[5] = fStack_230 * pfVar12[6] +
                                     fStack_240 * pfVar12[5] + fStack_250 * fVar2 + fStack_220;
                        pfVar12[6] = fStack_22c * pfVar12[6] +
                                     fStack_23c * fVar4 + fStack_24c * fVar3 + fStack_21c;
                        pfVar12 = pfVar12 + 0xc;
                      } while (iVar13 != 0);
                    }
                    if (uVar7 < uVar5) {
                      iVar13 = uVar5 - uVar7;
                      pfVar12 = (float *)(iVar11 + 8 + uVar7 * 0xc);
                      do {
                        iVar13 = iVar13 + -1;
                        fVar2 = pfVar12[-2];
                        fVar3 = pfVar12[-1];
                        fVar4 = pfVar12[-2];
                        pfVar12[-2] = *pfVar12 * fStack_234 +
                                      pfVar12[-2] * fStack_254 + fStack_244 * pfVar12[-1] +
                                      fStack_224;
                        pfVar12[-1] = *pfVar12 * fStack_230 +
                                      fVar2 * fStack_250 + fStack_240 * pfVar12[-1] + fStack_220;
                        *pfVar12 = *pfVar12 * fStack_22c + fVar4 * fStack_24c + fStack_23c * fVar3 +
                                   fStack_21c;
                        pfVar12 = pfVar12 + 3;
                      } while (iVar13 != 0);
                    }
                  }
                  else if (iVar11 == 2) {
                    piVar10 = (int *)FUN_00add300(uVar14);
                    iVar11 = (**(code **)(*piVar10 + 0x14))();
                    uVar5 = *(uint *)(iVar9 + 0x18);
                    uVar7 = 0;
                    if (3 < (int)uVar5) {
                      iVar13 = (uVar5 - 4 >> 2) + 1;
                      uVar7 = iVar13 * 4;
                      pfVar12 = (float *)(iVar11 + 0x18);
                      do {
                        fVar2 = pfVar12[-6];
                        fVar3 = pfVar12[-5];
                        fVar4 = pfVar12[-4];
                        pfVar12[-6] = fVar4 * fStack_234 + fVar2 * fStack_254 + fVar3 * fStack_244 +
                                      fStack_224;
                        pfVar12[-5] = fVar4 * fStack_230 + fVar3 * fStack_240 + fStack_250 * fVar2 +
                                      fStack_220;
                        pfVar12[-4] = fVar4 * fStack_22c + fVar3 * fStack_23c + fStack_24c * fVar2 +
                                      fStack_21c;
                        pfVar12[-3] = pfVar12[-3];
                        fVar2 = pfVar12[-2];
                        fVar3 = pfVar12[-1];
                        fVar4 = *pfVar12;
                        pfVar12[-2] = fVar4 * fStack_234 + fVar2 * fStack_254 + fVar3 * fStack_244 +
                                      fStack_224;
                        pfVar12[-1] = fVar4 * fStack_230 + fVar3 * fStack_240 + fStack_250 * fVar2 +
                                      fStack_220;
                        *pfVar12 = fVar4 * fStack_22c + fVar3 * fStack_23c + fStack_24c * fVar2 +
                                   fStack_21c;
                        pfVar12[1] = pfVar12[1];
                        fVar2 = pfVar12[2];
                        fVar3 = pfVar12[3];
                        fVar4 = pfVar12[4];
                        fStack_204 = fVar4 * fStack_234 + fVar2 * fStack_254 + fVar3 * fStack_244 +
                                     fStack_224;
                        fStack_200 = fVar4 * fStack_230 + fVar3 * fStack_240 + fStack_250 * fVar2 +
                                     fStack_220;
                        pfVar12[2] = fStack_204;
                        pfVar12[3] = fStack_200;
                        pfVar12[4] = fVar4 * fStack_22c + fVar3 * fStack_23c + fStack_24c * fVar2 +
                                     fStack_21c;
                        pfVar12[5] = pfVar12[5];
                        fVar2 = pfVar12[6];
                        fVar3 = pfVar12[7];
                        fVar4 = pfVar12[8];
                        iVar13 = iVar13 + -1;
                        pfVar12[6] = fStack_234 * fVar4 + fVar2 * fStack_254 + fVar3 * fStack_244 +
                                     fStack_224;
                        pfVar12[7] = fStack_230 * fVar4 + fStack_240 * fVar3 + fStack_250 * fVar2 +
                                     fStack_220;
                        pfVar12[8] = fStack_22c * fVar4 + fStack_23c * fVar3 + fStack_24c * fVar2 +
                                     fStack_21c;
                        pfVar12[9] = pfVar12[9];
                        pfVar12 = pfVar12 + 0x10;
                      } while (iVar13 != 0);
                    }
                    if (uVar7 < uVar5) {
                      iVar13 = uVar5 - uVar7;
                      pfVar12 = (float *)(iVar11 + 8 + uVar7 * 0x10);
                      do {
                        fVar2 = pfVar12[-2];
                        iVar13 = iVar13 + -1;
                        fVar3 = pfVar12[-1];
                        fVar4 = *pfVar12;
                        pfVar12[-2] = fStack_234 * fVar4 + fVar2 * fStack_254 + fVar3 * fStack_244 +
                                      fStack_224;
                        pfVar12[-1] = fStack_230 * fVar4 + fStack_240 * fVar3 + fStack_250 * fVar2 +
                                      fStack_220;
                        *pfVar12 = fStack_22c * fVar4 + fStack_23c * fVar3 + fStack_24c * fVar2 +
                                   fStack_21c;
                        pfVar12[1] = pfVar12[1];
                        pfVar12 = pfVar12 + 4;
                      } while (iVar13 != 0);
                    }
                  }
                  uVar14 = uVar14 + 1;
                  in_ECX = local_1e8;
                  uVar7 = uStack_1e4;
                } while (uVar14 < uStack_1c8);
              }
            }
            iStack_20c = iStack_20c + 0x20;
            uStack_1e4 = uVar7 + 1;
            iVar9 = iStack_1ec;
          } while (uStack_1e4 < uStack_1d0);
        }
      }
      iStack_208 = iStack_208 + 0x38;
      iStack_210 = iStack_210 + 0x40;
      pvStack_264 = (void *)((int)pvStack_264 + 0x40);
      uStack_214 = uStack_214 + 1;
    } while (uStack_214 < local_1c4);
  }
  local_4 = 0xffffffff;
  if (local_1bc != (void *)0x0) {
    (*(code *)PTR__free_00f01b10)(local_1bc);
  }
  ExceptionList = local_c;
  return;
}

