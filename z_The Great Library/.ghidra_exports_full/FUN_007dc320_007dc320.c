// FUN_007dc320 @ 007dc320 body=[[007dc320, 007dc457] [007dc460, 007dcf17] [007dcf1b, 007dcf2f]]


void FUN_007dc320(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7,float param_8,float param_9,
                 float param_10,float param_11,float param_12,float param_13,int param_14,
                 int param_15)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  int **ppiVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  float *pfVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  int **local_114;
  undefined1 auStack_104 [8];
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  int **local_e0;
  float local_dc;
  double local_d8;
  double local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  double local_b8;
  float local_b0;
  float fStack_ac;
  double local_a8;
  undefined8 local_a0;
  float local_98;
  float local_94;
  float fStack_88;
  float fStack_84;
  int **local_80;
  int **local_7c;
  float local_78;
  double local_68;
  double local_60;
  double local_58;
  float fStack_44;
  int local_40;
  float local_3c;
  float local_38;
  float fStack_34;
  double local_30;
  float fStack_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &LAB_00b3ed58;
  local_1c = ExceptionList;
  local_80 = (int **)0x0;
  local_7c = (int **)0x0;
  local_78 = 0.0;
  local_14 = 0;
  if (0.1 < ABS(param_11 - param_9)) {
    local_dc = -((param_10 - param_8) / (param_11 - param_9));
    iVar11 = 0;
    local_60 = 0.0;
    local_d8 = 0.0;
    local_a0 = 0.0;
    local_b8 = 0.0;
    local_c0 = 0.0;
    local_a8 = 0.0;
    ExceptionList = &local_1c;
    if (0 < param_7) {
      local_e4 = (float)param_14;
      local_68 = (double)param_14 * (double)local_dc;
      local_e0 = (int **)(float)param_15;
      local_d0 = (double)param_15 * (double)local_dc;
      ExceptionList = &local_1c;
      do {
        iVar8 = iVar11 * 5 + 0xf;
        if (local_80 != local_7c) {
          local_7c = local_80;
        }
        local_114 = (int **)&local_80;
        FUN_007dbdd0((int)((double)(((*(float *)(param_6 + 8 + iVar8 * 4) +
                                     *(float *)(param_6 + iVar11 * 0x14 + 8)) * 0.5 + param_13) -
                                   ((*(float *)(param_6 + iVar8 * 4) +
                                    *(float *)(param_6 + iVar11 * 0x14)) * 0.5 + param_12) *
                                   local_dc) + local_68),(int)(float)local_e0);
        local_114 = (int **)(uint)DAT_013f08b5;
        FUN_007dbec0(param_1,&local_80,param_2,param_4,param_5);
        iVar8 = (int)local_7c - (int)local_80 >> 3;
        fVar1 = ((float)(int)local_80[iVar8 * 2 + -2] + (float)(int)*local_80) * 0.5;
        fVar2 = ((float)(int)local_80[iVar8 * 2 + -1] + (float)(int)local_80[1]) * 0.5;
        if (iVar11 == 0) {
          local_a0 = (double)fVar1;
          local_b8 = (double)fVar2;
        }
        else if (iVar11 == param_7 + -6) {
          local_c0 = (double)fVar1;
          local_a8 = (double)fVar2;
        }
        local_60 = (double)fVar1 + local_60;
        iVar11 = iVar11 + 6;
        local_d8 = (double)fVar2 + local_d8;
      } while (iVar11 < param_7);
    }
    ppiVar7 = local_80;
    dVar6 = local_b8;
    dVar19 = local_c0;
    if (0 < param_7 / 6) {
      dVar14 = (double)(param_7 / 6);
      local_60 = local_60 / dVar14;
      local_d8 = local_d8 / dVar14;
    }
    dVar15 = local_b8 - local_d8;
    dVar18 = local_d8 - local_a8;
    dVar14 = local_a0 - local_60;
    dVar17 = local_60 - local_c0;
    dVar16 = 1.0 / SQRT(dVar18 * dVar18 + dVar17 * dVar17);
    dVar18 = dVar16 * dVar18;
    dVar16 = dVar16 * dVar17;
    dVar17 = dVar15 * dVar18 + dVar14 * dVar16;
    dVar18 = dVar16 * dVar15 + -dVar18 * dVar14;
    dVar16 = 1.0 / SQRT(dVar15 * dVar15 + dVar14 * dVar14);
    dVar14 = dVar16 * dVar14;
    dVar16 = dVar16 * dVar15;
    local_58 = dVar14 * dVar17 + -dVar16 * dVar18 + local_a0;
    dVar15 = local_a8 - local_d8;
    local_30 = dVar16 * dVar17 + dVar18 * dVar14 + local_b8;
    dVar18 = local_d8 - local_b8;
    dVar16 = local_60 - local_a0;
    dVar14 = 1.0 / SQRT(dVar18 * dVar18 + dVar16 * dVar16);
    dVar16 = dVar14 * dVar16;
    dVar18 = dVar18 * dVar14;
    dVar14 = local_c0 - local_60;
    dVar17 = dVar15 * dVar18 + dVar14 * dVar16;
    dVar16 = dVar14 * dVar18 + -dVar16 * dVar15;
    dVar18 = 1.0 / SQRT(dVar15 * dVar15 + dVar14 * dVar14);
    dVar15 = dVar18 * dVar15;
    dVar18 = dVar18 * dVar14;
    uStack_c8._4_4_ = (undefined4)((ulonglong)-dVar18 >> 0x20);
    uStack_c8 = (double)CONCAT44(uStack_c8._4_4_,SUB84(dVar18,0));
    dVar14 = dVar18 * dVar17 + dVar15 * dVar16 + local_c0;
    dVar15 = dVar15 * dVar17 + dVar16 * uStack_c8 + local_a8;
    local_d0 = dVar15;
    local_68 = dVar14;
    if (dVar14 < local_58) {
      local_c0 = local_a0;
      local_a0 = dVar19;
      local_b8 = local_a8;
      local_a8 = dVar6;
      local_d0 = local_30;
      local_68 = local_58;
      local_58 = dVar14;
      local_30 = dVar15;
    }
    iVar11 = param_3[4];
    iVar8 = 0;
    local_40 = iVar11;
    if (0 < iVar11) {
      pfVar12 = (float *)(param_6 + 0x18);
      dVar19 = local_60;
      do {
        puVar9 = param_3;
        if (0xf < (uint)param_3[5]) {
          puVar9 = (undefined4 *)*param_3;
        }
        if (*(char *)(iVar8 + (int)puVar9) != ' ') {
          fVar1 = pfVar12[-1] - pfVar12[-6];
          fVar2 = *pfVar12 - pfVar12[-5];
          fVar5 = pfVar12[1] - pfVar12[-4];
          fVar13 = pfVar12[9] - pfVar12[-1];
          fVar3 = pfVar12[10] - *pfVar12;
          fVar4 = pfVar12[0xb] - pfVar12[1];
          local_dc = SQRT(fVar3 * fVar3 + fVar13 * fVar13 + fVar4 * fVar4) * 0.5;
          local_e4 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar5 * fVar5) * 0.5;
          fVar1 = (float)iVar8 / (float)(iVar11 + -1);
          local_fc = (float)local_c0;
          local_f8 = (float)local_a8;
          local_f4 = (float)dVar19;
          local_f0 = (float)local_d8;
          local_ec = (float)local_a0;
          local_e8 = (float)local_b8;
          local_98 = (float)local_58;
          local_94 = (float)local_30;
          if (DAT_00f17898 < fVar1) {
            local_fc = (float)local_68;
            local_f8 = (float)local_d0;
            fVar1 = fVar1 - 0.5;
            local_f4 = (float)local_c0;
            local_f0 = (float)local_a8;
            local_ec = (float)dVar19;
            local_e8 = (float)local_d8;
            local_98 = (float)local_a0;
            local_94 = (float)local_b8;
            local_3c = local_fc;
            local_38 = local_f8;
          }
          local_114 = (int **)(fVar1 * 2.0);
          local_e0 = local_114;
          D3DXVec2CatmullRom(&local_b0,&local_98,&local_ec,&local_f4,&local_fc);
          if (local_f8 <= DAT_00f17898) {
            D3DXVec2CatmullRom(&local_a8,&local_b0,auStack_104,&stack0xfffffef4,&local_114,
                               local_f8 + 0.01);
            local_b0 = (float)local_c0 - (float)local_e0;
            fStack_ac = local_c0._4_4_ - local_dc;
            local_c0 = (double)CONCAT44(fStack_ac,local_b0);
            puVar10 = &local_c0;
          }
          else {
            D3DXVec2CatmullRom(&fStack_88,&local_b0,auStack_104,&stack0xfffffef4,&local_114,
                               local_f8 - 0.01);
            local_7c = (int **)((float)local_e0 - (float)local_a0);
            local_78 = local_dc - local_a0._4_4_;
            local_a0 = (double)CONCAT44(local_78,local_7c);
            puVar10 = &local_a0;
          }
          D3DXVec2Normalize(&local_b8,puVar10);
          fVar13 = -fStack_84;
          fVar1 = fStack_88 * local_e4;
          fStack_84 = fStack_84 * local_e4;
          fVar13 = fVar13 * local_dc;
          fVar3 = fStack_88 * local_dc;
          fStack_44 = local_b0 - param_12;
          fStack_24 = fStack_ac - param_13;
          pfVar12[-6] = (fStack_44 - fVar1) - fVar13;
          pfVar12[-4] = (fStack_24 - fStack_84) - fVar3;
          fStack_34 = (fStack_44 + fVar1) - fVar13;
          pfVar12[-1] = fStack_34;
          fVar4 = (fStack_24 + fStack_84) - fVar3;
          fVar2 = fVar13 + (fStack_44 - fVar1);
          pfVar12[9] = fVar13 + fStack_44 + fVar1;
          fVar13 = fVar3 + (fStack_24 - fStack_84);
          pfVar12[0xb] = fVar3 + fStack_24 + fStack_84;
          pfVar12[1] = fVar4;
          pfVar12[4] = fVar2;
          pfVar12[6] = fVar13;
          pfVar12[0xe] = fStack_34;
          pfVar12[0x10] = fVar4;
          pfVar12[0x13] = fVar2;
          pfVar12[0x15] = fVar13;
          pfVar12 = pfVar12 + 0x1e;
          iVar11 = local_40;
          dVar19 = local_60;
          fStack_88 = fVar1;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar11);
    }
    if (ppiVar7 != (int **)0x0) {
      local_114 = ppiVar7;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_1c;
  return;
}

