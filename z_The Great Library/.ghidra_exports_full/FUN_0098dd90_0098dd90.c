// FUN_0098dd90 @ 0098dd90 body=[[0098dd90, 0098e5be]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0098dd90(int param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int *piVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 *puVar15;
  int iVar16;
  float *pfVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  float *pfVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  int iVar24;
  float10 fVar25;
  int aiStack_c0 [7];
  int *piStack_a4;
  float local_94 [6];
  undefined4 *local_7c;
  double local_78;
  float local_6c;
  int local_68;
  float local_64 [4];
  int local_54;
  float local_50 [3];
  float *local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_34;
  float local_30;
  float *local_2c;
  undefined8 *local_28;
  int local_24;
  float local_20;
  float fStack_1c;
  float local_18;
  float *local_14;
  float local_10;
  float local_c;
  
  piStack_a4 = *(int **)(param_1 + 0x140);
  puVar1 = (undefined4 *)(param_1 + 0x140);
  local_7c = puVar1;
  if (piStack_a4 != (int *)0x0) {
    aiStack_c0[6] = 0x98ddba;
    (**(code **)(*piStack_a4 + 8))();
    *puVar1 = 0;
  }
  iVar7 = *(int *)(param_1 + 0x148);
  iVar18 = *(int *)(param_1 + 0x14c) - iVar7 >> 3;
  if (1 < iVar18) {
    iVar16 = *(int *)(param_1 + 0x14c) - iVar7 >> 3;
    fVar4 = *(float *)(iVar7 + -8 + iVar16 * 8) - *(float *)(iVar7 + -0x10 + iVar16 * 8);
    fVar3 = *(float *)(iVar7 + -4 + iVar16 * 8) - *(float *)(iVar7 + -0xc + iVar16 * 8);
    local_14 = (float *)0x1;
    if (fVar3 * fVar3 + fVar4 * fVar4 < 0.05) {
      local_14 = (float *)0x2;
    }
    pfVar21 = local_14;
    iVar7 = (iVar18 - (int)local_14) * 4;
    iVar18 = iVar7 + 1;
    if (4 < iVar18) {
      piStack_a4 = (int *)0x98de75;
      iVar10 = -(iVar18 * 8 + 8);
      *(undefined4 *)((int)&piStack_a4 + iVar10) = 0;
      *(undefined4 *)(&stack0xffffff60 + iVar10) = 0xa110ca7e;
      pfVar17 = (float *)(&stack0xffffff64 + iVar10);
      *(int *)((int)aiStack_c0 + iVar10 + 0x18) = param_1 + 0x148;
      *(float **)((int)aiStack_c0 + iVar10 + 0x14) = pfVar21;
      *(float **)((int)aiStack_c0 + iVar10 + 0x10) = pfVar17;
      local_2c = pfVar17;
      pfVar17[iVar18 * 2] = -4.9057094e-19;
      *(undefined4 *)((int)aiStack_c0 + iVar10 + 0xc) = 0x98de97;
      FUN_0098e5c0();
      local_34 = *(int *)(param_1 + 0x15c) * 4;
      local_54 = *(int *)(param_1 + 0x160) * 4;
      *(undefined4 *)((int)&piStack_a4 + iVar10) = 0x98dec3;
      iVar11 = -(iVar18 * 0x28 + 0x58);
      iVar16 = iVar7 + 5 + iVar18;
      *(undefined4 *)(&stack0xffffff60 + iVar11 + iVar10) = 0xa110ca7e;
      iVar20 = iVar16 * 0x14;
      pfVar21 = (float *)(&stack0xffffff64 + iVar11 + iVar10);
      pfVar21[iVar16 * 5] = -4.9057094e-19;
      iVar16 = *(int *)(param_1 + 0x13c);
      local_50[0] = *(float *)(iVar16 + 0xcc);
      local_94[5] = *(float *)(iVar16 + 0x98);
      iVar24 = 0;
      local_30 = 0.0;
      local_68 = iVar20;
      if (0 < iVar18) {
        local_28 = (undefined8 *)((int)local_94 + iVar11 + iVar10);
        local_64[0] = (float)(1 - local_34);
        local_78 = (double)*(float *)(iVar16 + 0x9c) - (double)local_94[5];
        local_94[1] = 0.0;
        local_94[2] = 0.0;
        fStack_1c = DAT_00f092fc;
        local_18 = 0.0;
        local_24 = 1;
        local_14 = local_2c;
        local_44 = pfVar21;
        do {
          uVar19 = ((int)(local_24 - 2U) < 0) - 1 & local_24 - 2U;
          iVar16 = local_24;
          if (iVar7 < local_24) {
            iVar16 = iVar7;
          }
          local_94[3] = local_2c[iVar16 * 2] - local_2c[uVar19 * 2];
          fVar3 = local_94[3] * local_94[3];
          local_94[4] = local_2c[iVar16 * 2 + 1] - local_2c[uVar19 * 2 + 1];
          fVar4 = local_94[4] * local_94[4];
          *(int *)((int)&piStack_a4 + iVar11 + iVar10) = iVar16;
          *(float *)((int)&piStack_a4 + iVar11 + iVar10) = fVar4 + fVar3;
          *(undefined4 *)((int)aiStack_c0 + iVar11 + iVar10 + 0x18) = 0x98dff0;
          fVar25 = (float10)FUN_00401030();
          local_38 = (float)((float10)1 / fVar25);
          local_64[2] = -(local_38 * local_94[3]);
          local_64[1] = local_94[4] * local_38;
          iVar16 = iVar7;
          if (*(int *)(param_1 + 0x15c) == -1) {
LAB_0098e0e9:
            fVar3 = (float)(local_24 + -1) / (float)iVar16;
          }
          else {
            if (local_24 + -1 < local_34) {
              iVar16 = local_54 + -1;
              goto LAB_0098e0e9;
            }
            fVar3 = (float)local_34 / (float)(local_54 + -1);
            fVar3 = ((float)(local_24 + -2 + (int)local_64[0]) / (float)((iVar18 - local_34) + -1))
                    * (1.0 - fVar3) + fVar3;
          }
          local_6c = (float)((double)fVar3 * local_78 + (double)local_94[5]);
          local_50[1] = local_64[1];
          local_50[2] = local_64[2];
          if (local_50[0] != 0.0) {
            iVar16 = local_24 + -1;
            if (iVar7 <= local_24 + -1) {
              iVar16 = iVar7;
            }
            iVar20 = local_24;
            if (iVar7 <= local_24) {
              iVar20 = iVar7;
            }
            fVar3 = local_2c[iVar20 * 2];
            fVar4 = local_2c[iVar16 * 2];
            fVar5 = local_2c[iVar16 * 2 + 1];
            fVar6 = local_2c[iVar20 * 2 + 1];
            *(int *)((int)&piStack_a4 + iVar11 + iVar10) = iVar16;
            *(float *)((int)&piStack_a4 + iVar11 + iVar10) =
                 (fVar6 - fVar5) * (fVar6 - fVar5) + (fVar3 - fVar4) * (fVar3 - fVar4);
            *(undefined4 *)((int)aiStack_c0 + iVar11 + iVar10 + 0x18) = 0x98e1a2;
            fVar25 = (float10)FUN_00401030();
            local_30 = (float)(fVar25 + (float10)local_30);
            fVar3 = local_30 / local_50[0];
            local_38 = fVar3;
          }
          fVar5 = local_50[1] * local_6c;
          fVar6 = local_50[2] * local_6c;
          local_40 = *local_14 + fVar5;
          fVar4 = local_14[1];
          *local_44 = local_40;
          local_3c = fVar4 + fVar6;
          local_44[1] = local_3c;
          fVar4 = local_94[2];
          local_94[0] = fVar3;
          *local_28 = CONCAT44(local_94[1],fVar3);
          *(float *)(local_28 + 1) = fVar4;
          local_10 = *local_14 - fVar5;
          fVar4 = local_14[1];
          local_14 = local_14 + 2;
          local_44[5] = local_10;
          local_c = fVar4 - fVar6;
          local_44[6] = local_c;
          fVar4 = local_18;
          iVar16 = local_24;
          local_44 = local_44 + 10;
          local_20 = fVar3;
          *(ulonglong *)((int)local_28 + 0x14) = CONCAT44(fStack_1c,fVar3);
          local_24 = local_24 + 1;
          *(float *)((int)local_28 + 0x1c) = fVar4;
          local_28 = local_28 + 5;
          iVar24 = iVar24 + 2;
        } while (iVar16 < iVar18);
      }
      fVar14 = local_64[2];
      fVar13 = DAT_00f092fc;
      fVar3 = *(float *)(*(int *)(param_1 + 0x13c) + 0xa4);
      fVar4 = *(float *)(*(int *)(param_1 + 0x13c) + 0xa0);
      *(int *)(param_1 + 0x144) = iVar18 * 2;
      fVar12 = local_64[1] * fVar3;
      fVar3 = local_64[2] * fVar3;
      pfVar2 = local_2c + iVar18 * 2 + -2;
      fVar5 = pfVar2[1];
      pfVar17 = pfVar21 + iVar24 * 5;
      *pfVar17 = *pfVar2 + fVar12;
      pfVar17[1] = fVar5 + fVar3;
      pfVar17[2] = 0.0;
      pfVar17[3] = 0.0;
      pfVar17[4] = fVar13;
      fVar5 = pfVar2[1];
      pfVar17[5] = *pfVar2 - fVar12;
      local_18 = fVar13;
      *(ulonglong *)(pfVar17 + 7) = (ulonglong)(uint)fVar13 << 0x20;
      pfVar17[6] = fVar5 - fVar3;
      pfVar17[9] = local_18;
      fVar5 = -fVar14 * fVar4;
      local_78 = (double)CONCAT44(local_78._4_4_,fVar5);
      local_28 = (undefined8 *)(local_64[1] * fVar4);
      fVar6 = pfVar2[1] + (float)local_28;
      fVar5 = fVar5 + *pfVar2 + fVar12;
      iVar7 = iVar24 * 5 + 10;
      local_40 = fVar5;
      *(ulonglong *)(pfVar17 + 0xc) = (ulonglong)(uint)fVar13;
      fVar6 = fVar6 + fVar3;
      pfVar21[iVar7] = fVar5;
      local_3c = fVar6;
      *(float *)(&stack0xffffff68 + iVar7 * 4 + iVar11 + iVar10) = fVar6;
      puVar15 = local_28;
      pfVar17[0xe] = fVar13;
      local_10 = (-fVar14 * fVar4 + *pfVar2) - fVar12;
      iVar7 = iVar24 * 5 + 0xf;
      fVar3 = (pfVar2[1] + (float)puVar15) - fVar3;
      local_18 = fVar13;
      local_c = fVar3;
      pfVar21[iVar7] = local_10;
      fVar4 = local_18;
      local_20 = fVar13;
      fStack_1c = fVar13;
      *(ulonglong *)(pfVar17 + 0x11) = CONCAT44(fVar13,fVar13);
      *(float *)(&stack0xffffff68 + iVar7 * 4 + iVar11 + iVar10) = fVar3;
      iVar18 = local_68;
      puVar1 = local_7c;
      pfVar17[0x13] = fVar4;
      piVar8 = *(int **)(*(int *)(*(int *)(param_1 + 0x13c) + 0x8c) + 100);
      iVar7 = *piVar8;
      *(undefined4 *)((int)&piStack_a4 + iVar11 + iVar10) = 0;
      *(undefined4 **)((int)aiStack_c0 + iVar11 + iVar10 + 0x18) = puVar1;
      *(undefined4 *)((int)aiStack_c0 + iVar11 + iVar10 + 0x14) = 1;
      *(undefined4 *)((int)aiStack_c0 + iVar11 + iVar10 + 0x10) = 0;
      *(undefined4 *)((int)aiStack_c0 + iVar11 + iVar10 + 0xc) = 8;
      *(int *)((int)aiStack_c0 + iVar11 + iVar10 + 8) = iVar18;
      *(int **)((int)aiStack_c0 + iVar11 + iVar10 + 4) = piVar8;
      pcVar9 = *(code **)(iVar7 + 0x68);
      puVar22 = (undefined1 *)((int)aiStack_c0 + iVar11 + iVar10);
      *(undefined4 *)((int)aiStack_c0 + iVar11 + iVar10) = 0x98e57e;
      (*pcVar9)();
      piVar8 = (int *)*puVar1;
      *(undefined4 *)(puVar22 + -4) = 0;
      *(float **)(puVar22 + -8) = local_64 + 3;
      *(int *)(puVar22 + -0xc) = iVar18;
      local_64[3] = 0.0;
      iVar7 = *piVar8;
      *(undefined4 *)(puVar22 + -0x10) = 0;
      *(int **)(puVar22 + -0x14) = piVar8;
      pcVar9 = *(code **)(iVar7 + 0x2c);
      puVar23 = puVar22 + -0x18;
      *(undefined4 *)(puVar22 + -0x18) = 0x98e598;
      (*pcVar9)();
      fVar3 = local_64[3];
      *(int *)(puVar23 + -4) = iVar18;
      *(float **)(puVar23 + -8) = pfVar21;
      *(float *)(puVar23 + -0xc) = fVar3;
      *(undefined4 *)(puVar23 + -0x10) = 0x98e5a3;
      FID_conflict__memcpy
                (*(void **)(puVar23 + -0xc),*(void **)(puVar23 + -8),*(size_t *)(puVar23 + -4));
      iVar7 = *(int *)*puVar1;
      *(int **)(puVar23 + -4) = (int *)*puVar1;
      pcVar9 = *(code **)(iVar7 + 0x30);
      *(undefined4 *)(puVar23 + -8) = 0x98e5b0;
      (*pcVar9)();
    }
  }
  return;
}

