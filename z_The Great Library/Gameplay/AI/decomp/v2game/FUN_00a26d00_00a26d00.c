// FUN_00a26d00 @ 00a26d00 body=[[00a26d00, 00a26e5c] [00a26e60, 00a26eba] [00a26ec0, 00a27950] [00a27954, 00a27981] [00a27985, 00a2799f]]


int FUN_00a26d00(int param_1,int param_2,byte *param_3,float *param_4,float *param_5,float *param_6,
                float param_7,int param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  void **ppvVar12;
  undefined3 uVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  undefined4 ****ppppuVar19;
  int iVar20;
  bool bVar21;
  int local_320;
  int local_31c;
  uint *local_318;
  int local_314;
  uint *local_310;
  int local_2f8;
  undefined4 ***local_2dc [4];
  int local_2cc;
  uint local_2c8;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  int *local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  uint local_298 [4];
  undefined4 local_288;
  uint local_284;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float fStack_230;
  float local_22c;
  float local_228;
  float fStack_224;
  float local_220;
  float local_21c;
  float fStack_218;
  float local_214;
  float local_210;
  float fStack_20c;
  float local_208;
  float local_204;
  float fStack_200;
  float local_1fc;
  float local_1f8;
  float fStack_1f4;
  float local_1f0;
  uint local_1ec [4];
  undefined4 local_1dc;
  uint local_1d8;
  int local_1d0 [111];
  void *local_14;
  undefined1 *puStack_10;
  undefined1 local_c;
  undefined3 uStack_b;
  
  puStack_10 = &LAB_00b48e2c;
  local_14 = ExceptionList;
  pbVar14 = param_3;
  if (0xf < *(uint *)(param_3 + 0x14)) {
    pbVar14 = *(byte **)param_3;
  }
  pbVar17 = &DAT_00ded94d;
  do {
    bVar4 = *pbVar14;
    bVar21 = bVar4 < *pbVar17;
    if (bVar4 != *pbVar17) {
LAB_00a26d5a:
      iVar15 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
      goto LAB_00a26d61;
    }
    if (bVar4 == 0) break;
    bVar4 = pbVar14[1];
    bVar21 = bVar4 < pbVar17[1];
    if (bVar4 != pbVar17[1]) goto LAB_00a26d5a;
    pbVar14 = pbVar14 + 2;
    pbVar17 = pbVar17 + 2;
  } while (bVar4 != 0);
  iVar15 = 0;
LAB_00a26d61:
  if (iVar15 == 0) {
    return 0;
  }
  local_2c8 = 0xf;
  local_2cc = 0;
  local_2dc[0] = (undefined4 ***)((uint)local_2dc[0] & 0xffffff00);
  local_318 = (uint *)0x0;
  iVar20 = 0;
  local_31c = 0;
  local_284 = 0xf;
  local_288 = 0;
  local_298[0] = local_298[0] & 0xffffff00;
  iVar15 = 0;
  uStack_b = 0;
  uVar13 = uStack_b;
  local_c = 1;
  uStack_b = 0;
  local_314 = 0;
  local_320 = 0;
  ExceptionList = &local_14;
  ppvVar12 = &local_14;
  if (0 < *(int *)(param_3 + 0x10)) {
    do {
      pbVar14 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        pbVar14 = *(byte **)param_3;
      }
      local_1d8 = 0xf;
      local_1dc = 0;
      local_1ec[0] = local_1ec[0] & 0xffffff00;
      local_c = 2;
      FUN_00448860(1,pbVar14[local_320]);
      local_c = 3;
      FUN_00448aa0(local_1ec,0,0xffffffff);
      local_c = 1;
      if (0xf < local_1d8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_1ec[0]);
      }
      uVar5 = *(uint *)(param_3 + 0x14);
      pbVar14 = param_3;
      if (0xf < uVar5) {
        pbVar14 = *(byte **)param_3;
      }
      iVar6 = *(int *)(param_1 + 0x94 + (uint)pbVar14[local_320] * 4);
      if (iVar6 == 0) {
        pbVar14 = param_3;
        if (0xf < uVar5) {
          pbVar14 = *(byte **)param_3;
        }
        if (pbVar14[local_320] != 10) {
          pbVar14 = param_3;
          if (0xf < uVar5) {
            pbVar14 = *(byte **)param_3;
          }
          if (pbVar14[local_320] != 0xd) goto LAB_00a26f9c;
        }
        if ((int)local_318 < iVar20) {
          local_318 = (uint *)iVar20;
        }
        FUN_00448aa0(local_298,0,0xffffffff);
        FUN_00409350(&DAT_00ded94d,0);
        local_1d0[iVar15] = iVar20;
        iVar15 = iVar15 + 1;
        local_31c = 0;
        if (0x36 < iVar15) {
          local_320 = *(int *)(param_3 + 0x10);
        }
        iVar20 = 0;
        local_314 = iVar15;
      }
      else {
        iVar7 = *(int *)(iVar6 + 0x81c);
        local_31c = local_31c + *(int *)(iVar6 + 0x18);
        iVar20 = iVar20 + *(int *)(iVar6 + 0x18);
        if (((iVar7 != 0) && (local_320 + 1 < *(int *)(param_3 + 0x10))) && (iVar16 = 0, 0 < iVar7))
        {
          local_310 = (uint *)(iVar6 + 0x1c);
          do {
            pbVar14 = param_3;
            if (0xf < uVar5) {
              pbVar14 = *(byte **)param_3;
            }
            iVar15 = local_314;
            if (*local_310 == (uint)pbVar14[local_320 + 1]) {
              iVar7 = *(int *)(iVar6 + 0x20 + iVar16 * 8);
              iVar20 = iVar20 + iVar7;
              local_31c = local_31c + iVar7;
              break;
            }
            local_310 = local_310 + 2;
            iVar16 = iVar16 + 1;
          } while (iVar16 < iVar7);
        }
        if (*(int *)(iVar6 + 0xc) == 0) {
          if (param_8 < iVar20) {
            FUN_00448740(&DAT_00dee2cc,1);
            FUN_00448aa0(local_298,0,0xffffffff);
            FUN_00409350(&DAT_00ded94d,0);
            local_1d0[iVar15] = iVar20 - local_31c;
            iVar15 = iVar15 + 1;
            iVar20 = local_31c;
            local_314 = iVar15;
            if (0x36 < iVar15) {
              local_320 = *(int *)(param_3 + 0x10);
            }
          }
          else {
            FUN_00448aa0(local_298,0,0xffffffff);
            FUN_00409350(&DAT_00ded94d,0);
          }
          local_31c = 0;
          if ((int)local_318 < iVar20) {
            local_318 = (uint *)iVar20;
          }
        }
      }
LAB_00a26f9c:
      local_320 = local_320 + 1;
      ppvVar12 = ExceptionList;
      uVar13 = uStack_b;
    } while (local_320 < *(int *)(param_3 + 0x10));
  }
  uStack_b = uVar13;
  ExceptionList = ppvVar12;
  FUN_00448aa0(local_298,0,0xffffffff);
  local_1d0[iVar15] = iVar20;
  local_310 = (uint *)((iVar15 + 1) * *(int *)(param_1 + 0x494));
  iVar15 = -(local_1d0[0] / 2);
  local_2f8 = 0;
  local_320 = 0;
  if (0 < local_2cc) {
    local_2ac = local_1d0;
    puVar18 = (undefined8 *)(param_2 + 0x14);
    do {
      ppppuVar19 = (undefined4 ****)local_2dc[0];
      if (local_2c8 < 0x10) {
        ppppuVar19 = local_2dc;
      }
      piVar8 = *(int **)(param_1 + 0x94 + (uint)*(byte *)((int)ppppuVar19 + local_320) * 4);
      if (piVar8 == (int *)0x0) {
        ppppuVar19 = (undefined4 ****)local_2dc[0];
        if (local_2c8 < 0x10) {
          ppppuVar19 = local_2dc;
        }
        if (*(char *)((int)ppppuVar19 + local_320) != '\n') {
          ppppuVar19 = (undefined4 ****)local_2dc[0];
          if (local_2c8 < 0x10) {
            ppppuVar19 = local_2dc;
          }
          if (*(char *)((int)ppppuVar19 + local_320) != '\r') goto LAB_00a27927;
        }
        local_2ac = local_2ac + 1;
        iVar15 = -(*local_2ac / 2);
        local_310 = (uint *)((int)local_310 - *(int *)(param_1 + 0x494));
      }
      else if (piVar8[3] < 1) {
        iVar15 = iVar15 + piVar8[6];
      }
      else {
        local_23c = (float)*piVar8 / (float)*(int *)(param_1 + 0x4a0);
        local_27c = (float)(*piVar8 + piVar8[2]) / (float)*(int *)(param_1 + 0x4a0);
        local_238 = (float)(piVar8[3] + piVar8[1]) / (float)*(int *)(param_1 + 0x4a4);
        local_248 = (float)piVar8[1] / (float)*(int *)(param_1 + 0x4a4);
        fVar11 = (float)(piVar8[4] + iVar15) * 0.05 * param_7;
        fVar10 = (float)(piVar8[2] + piVar8[4] + iVar15) * 0.05 * param_7;
        local_270 = (float)(((int)local_310 - piVar8[5]) - piVar8[3]) * 0.05 * param_7;
        fVar9 = (float)((int)local_310 - piVar8[5]) * 0.05 * param_7;
        local_2b8 = *param_4;
        local_2b4 = param_4[1];
        local_2b0 = param_4[2];
        fVar1 = *param_6;
        fVar2 = param_6[1];
        fVar3 = param_6[2];
        local_2a4 = param_5[1];
        local_2a8 = *param_5;
        local_2a0 = param_5[2] * local_270;
        local_214 = param_5[2] * fVar9;
        local_2bc = fVar1 * fVar11 + local_2b8;
        local_29c = param_6[1] * fVar11 + local_2b4;
        local_2c0 = fVar3 * fVar11 + local_2b0;
        local_234 = local_2bc + local_2a8 * local_270;
        fStack_230 = local_2a4 * local_270 + local_29c;
        local_22c = local_2a0 + local_2c0;
        *(ulonglong *)((int)puVar18 + -0x14) = CONCAT44(fStack_230,local_234);
        local_21c = fVar1 * fVar10 + local_2b8;
        *(float *)((int)puVar18 + -0xc) = local_2a0 + local_2c0;
        *(float *)(puVar18 + -1) = local_23c;
        *(float *)((int)puVar18 + -4) = local_238;
        fStack_218 = fVar2 * fVar10 + local_2b4;
        fVar1 = fVar3 * fVar10 + local_2b0;
        local_228 = local_21c + local_2a8 * local_270;
        local_25c = local_2a4 * local_270 + fStack_218;
        fStack_224 = local_25c;
        local_220 = local_2a0 + fVar1;
        local_274 = local_220;
        *puVar18 = CONCAT44(local_25c,local_228);
        local_26c = local_2bc + local_2a8 * fVar9;
        local_210 = local_26c;
        local_260 = local_2a4 * fVar9 + local_29c;
        fStack_20c = local_260;
        *(float *)(puVar18 + 1) = local_220;
        *(float *)((int)puVar18 + 0xc) = local_27c;
        local_208 = local_214 + local_2c0;
        local_258 = local_208;
        local_278 = local_238;
        *(ulonglong *)((int)puVar18 + 0x14) = CONCAT44(local_260,local_26c);
        *(float *)(puVar18 + 2) = local_238;
        *(float *)((int)puVar18 + 0x1c) = local_208;
        local_24c = local_23c;
        local_21c = local_21c + local_2a8 * fVar9;
        *(float *)(puVar18 + 4) = local_23c;
        *(float *)((int)puVar18 + 0x24) = local_248;
        fStack_218 = local_2a4 * fVar9 + fStack_218;
        local_214 = local_214 + fVar1;
        puVar18[5] = CONCAT44(fStack_218,local_21c);
        *(float *)(puVar18 + 6) = local_214;
        local_2f8 = local_2f8 + 6;
        local_244 = local_27c;
        *(float *)((int)puVar18 + 0x34) = local_27c;
        local_240 = local_248;
        *(float *)(puVar18 + 7) = local_248;
        fStack_1f4 = local_25c;
        local_1f0 = local_220;
        local_268 = local_27c;
        local_1f8 = local_228;
        *(float *)((int)puVar18 + 0x3c) = local_228;
        *(float *)(puVar18 + 8) = local_25c;
        *(float *)((int)puVar18 + 0x44) = local_220;
        *(float *)(puVar18 + 9) = local_27c;
        local_204 = local_26c;
        local_264 = local_238;
        *(float *)((int)puVar18 + 0x4c) = local_238;
        fStack_200 = local_260;
        local_1fc = local_208;
        puVar18[10] = CONCAT44(local_260,local_26c);
        *(float *)(puVar18 + 0xb) = local_208;
        local_254 = local_23c;
        *(float *)((int)puVar18 + 0x5c) = local_23c;
        local_250 = local_248;
        *(float *)(puVar18 + 0xc) = local_248;
        iVar20 = piVar8[0x207];
        iVar15 = iVar15 + piVar8[6];
        puVar18 = puVar18 + 0xf;
        if (((iVar20 != 0) && (local_320 + 1 < local_2cc)) && (local_31c = 0, 0 < iVar20)) {
          local_318 = (uint *)(piVar8 + 7);
          do {
            ppppuVar19 = (undefined4 ****)local_2dc[0];
            if (local_2c8 < 0x10) {
              ppppuVar19 = local_2dc;
            }
            if (*local_318 == (uint)*(byte *)(local_320 + 1 + (int)ppppuVar19)) {
              iVar15 = iVar15 + piVar8[local_31c * 2 + 8];
              break;
            }
            local_318 = local_318 + 2;
            local_31c = local_31c + 1;
          } while (local_31c < iVar20);
        }
      }
LAB_00a27927:
      local_320 = local_320 + 1;
    } while (local_320 < local_2cc);
  }
  if (0xf < local_284) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_298[0]);
  }
  local_284 = 0xf;
  local_288 = 0;
  local_298[0] = local_298[0] & 0xffffff00;
  if (local_2c8 < 0x10) {
    ExceptionList = local_14;
    return local_2f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_2dc[0]);
}

