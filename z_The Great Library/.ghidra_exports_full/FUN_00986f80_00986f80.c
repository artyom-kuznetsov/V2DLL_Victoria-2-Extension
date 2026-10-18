// FUN_00986f80 @ 00986f80 body=[[00986f80, 009876e7]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_00986f80(float *param_1,int param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int *in_EAX;
  int iVar4;
  float *pfVar5;
  int iVar6;
  undefined4 extraout_ECX;
  float fVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int aiStack_74 [4];
  float fStack_64;
  float local_54 [4];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 *local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = *in_EAX;
  iVar4 = in_EAX[1] - iVar1 >> 3;
  if (1 < iVar4 - (int)param_3) {
    iVar6 = in_EAX[1] - iVar1 >> 3;
    fVar15 = *(float *)(iVar1 + -8 + iVar6 * 8) - *(float *)(iVar1 + -0x10 + iVar6 * 8);
    fVar14 = *(float *)(iVar1 + -4 + iVar6 * 8) - *(float *)(iVar1 + -0xc + iVar6 * 8);
    local_10 = (double)CONCAT44(1,(undefined4)local_10);
    if (fVar15 * fVar15 + fVar14 * fVar14 < 0.05) {
      local_10 = (double)CONCAT44(2,(undefined4)local_10);
    }
    iVar1 = (int)local_10._4_4_;
    fVar14 = (float)(((iVar4 - (int)local_10._4_4_) - (int)param_3) * 4 + 1);
    if ((4 < (int)fVar14) && (5 < param_2)) {
      local_34 = (param_1[0x11] + param_1[2]) * 0.5;
      fStack_64 = 1.3999335e-38;
      iVar4 = -((int)fVar14 * 8 + 8);
      local_1c = fVar14;
      *(float *)((int)&fStack_64 + iVar4) = param_3;
      *(undefined4 *)(&stack0xffffffa0 + iVar4) = 0xa110ca7e;
      *(int **)((int)aiStack_74 + iVar4 + 0xc) = in_EAX;
      puVar8 = &stack0xffffffa4 + iVar4;
      *(int *)((int)aiStack_74 + iVar4 + 8) = iVar1;
      *(undefined1 **)((int)aiStack_74 + iVar4 + 4) = puVar8;
      *(undefined4 *)(puVar8 + (int)fVar14 * 8) = 0xa110ca7e;
      *(undefined4 *)((int)aiStack_74 + iVar4) = 0x987094;
      FUN_0098e5c0();
      iVar6 = param_2 / 6;
      *(undefined4 *)((int)&fStack_64 + iVar4) = 0x9870b3;
      iVar1 = -(iVar6 * 0x10 + 8);
      fVar13 = 0.0;
      *(undefined4 *)(&stack0xffffffa0 + iVar1 + iVar4) = 0xa110ca7e;
      *(undefined4 *)(&stack0xffffffa4 + iVar1 + iVar4 + iVar6 * 0x10) = 0xa110ca7e;
      iVar9 = 0;
      local_30 = &stack0xffffffa4 + iVar1 + iVar4;
      param_3 = 0.0;
      local_2c = 0.0;
      fVar14 = local_38;
      fVar15 = local_3c;
      if (0 < iVar6) {
        do {
          if (local_2c == 0.0) {
            fVar7 = *param_1;
          }
          else {
            fVar7 = param_1[(int)local_2c * 0x1e + -0x19];
          }
          fVar7 = param_1[(int)local_2c * 0x1e + 5] - fVar7;
          local_18 = (double)CONCAT44(fVar7,(undefined4)local_18);
          if (param_3 < fVar7) {
            iVar9 = iVar9 + 1;
            if ((int)local_1c + -1 <= iVar9) {
              return;
            }
            pfVar5 = (float *)((int)local_54 + iVar9 * 8 + iVar4);
            local_10._4_4_ = pfVar5;
            while( true ) {
              fVar14 = *pfVar5 - pfVar5[-2];
              fVar15 = pfVar5[1] - pfVar5[-1];
              local_44 = fVar14;
              local_40 = fVar15;
              local_10._4_4_ = pfVar5;
              *(float *)((int)&fStack_64 + iVar1 + iVar4) = fVar14;
              local_3c = fVar14;
              local_38 = fVar15;
              *(float *)((int)&fStack_64 + iVar1 + iVar4) = fVar15 * fVar15 + fVar14 * fVar14;
              *(undefined4 *)((int)aiStack_74 + iVar1 + iVar4 + 0xc) = 0x9871b9;
              fVar11 = (float10)FUN_00401030();
              local_24 = (float)fVar11;
              param_3 = (float)fVar11 + param_3;
              if (local_18._4_4_ <= param_3) break;
              pfVar5 = local_10._4_4_ + 2;
              local_10._4_4_ = pfVar5;
              iVar9 = iVar9 + 1;
              if ((int)local_1c + -1 <= iVar9) {
                return;
              }
            }
            fVar14 = local_44 * local_44;
            fVar15 = local_40 * local_40;
            *(undefined4 *)((int)&fStack_64 + iVar1 + iVar4) = extraout_ECX;
            *(float *)((int)&fStack_64 + iVar1 + iVar4) = fVar15 + fVar14;
            *(undefined4 *)((int)aiStack_74 + iVar1 + iVar4 + 0xc) = 0x987235;
            fVar11 = (float10)FUN_00401030();
            fVar14 = (float)((float10)1 / fVar11);
            local_10 = (double)CONCAT44(fVar14,(undefined4)local_10);
            fVar15 = fVar14 * local_44;
            local_3c = fVar15;
            fVar14 = fVar14 * local_38;
            local_38 = fVar14;
            fVar13 = local_24;
            fVar7 = local_18._4_4_;
          }
          param_3 = param_3 - fVar7;
          local_54[0] = fVar15 * (fVar13 - param_3) + *(float *)(puVar8 + iVar9 * 8);
          local_54[1] = fVar14 * (fVar13 - param_3) +
                        *(float *)(&stack0xffffffa8 + iVar9 * 8 + iVar4);
          fVar7 = (float)((int)local_2c + 1);
          *(ulonglong *)(local_30 + (int)local_2c * 0x10) = CONCAT44(local_54[1],local_54[0]);
          local_54[2] = fVar15;
          local_54[3] = fVar14;
          *(ulonglong *)((int)(local_30 + (int)local_2c * 0x10) + 8) = CONCAT44(fVar14,fVar15);
          local_2c = fVar7;
        } while ((int)fVar7 < iVar6);
      }
      if (0 < param_2) {
        uVar10 = 0;
        fVar14 = local_2c;
        pfVar5 = param_1 + 6;
        do {
          fVar15 = pfVar5[1];
          fVar13 = pfVar5[-4];
          fVar7 = (fVar15 + pfVar5[0xb]) * 0.5 - local_34;
          fVar3 = pfVar5[-1] - pfVar5[-6];
          fVar2 = *pfVar5 - pfVar5[-5];
          local_54[3] = pfVar5[0xb] - fVar15;
          local_54[1] = pfVar5[9] - pfVar5[-1];
          local_54[2] = pfVar5[10] - *pfVar5;
          *(float *)((int)&fStack_64 + iVar1 + iVar4) = fVar14;
          *(float *)((int)&fStack_64 + iVar1 + iVar4) =
               fVar2 * fVar2 + fVar3 * fVar3 + (fVar15 - fVar13) * (fVar15 - fVar13);
          *(undefined4 *)((int)aiStack_74 + iVar1 + iVar4 + 0xc) = 0x987420;
          fVar11 = (float10)FUN_00401030();
          *(float *)((int)&fStack_64 + iVar1 + iVar4) =
               local_54[2] * local_54[2] + local_54[1] * local_54[1] + local_54[3] * local_54[3];
          *(undefined4 *)((int)aiStack_74 + iVar1 + iVar4 + 0xc) = 0x987466;
          fVar12 = (float10)FUN_00401030();
          iVar6 = (uVar10 / 6) * 0x10;
          local_44 = *(float *)(local_30 + iVar6);
          local_38 = *(float *)(local_30 + iVar6 + 8);
          local_40 = *(float *)(local_30 + iVar6 + 4);
          fVar14 = -*(float *)(local_30 + iVar6 + 0xc);
          local_24 = *(float *)(local_30 + iVar6 + 0xc) * (float)(fVar11 * (float10)0.5);
          local_28 = local_38 * (float)(fVar11 * (float10)0.5);
          fVar3 = local_38 * (float)(fVar12 * (float10)0.5);
          fVar13 = fVar14 * fVar7 - local_28;
          fVar2 = local_38 * fVar7 - local_24;
          fVar15 = fVar14 * (float)(fVar12 * (float10)0.5);
          pfVar5[-6] = ((local_44 - local_28) - fVar15) + fVar13;
          uVar10 = uVar10 + 6;
          pfVar5[-4] = ((local_40 - local_24) - fVar3) + fVar2;
          local_18 = (double)local_44 + (double)local_28;
          local_2c = (float)((local_18 - (double)fVar15) + (double)fVar13);
          pfVar5[-1] = local_2c;
          local_10 = (double)local_40 + (double)local_24;
          fVar7 = fVar15 + (local_44 - local_28) + fVar13;
          pfVar5[9] = (float)((double)fVar15 + local_18 + (double)fVar13);
          pfVar5[0xb] = (float)((double)fVar3 + local_10 + (double)fVar2);
          fVar15 = (float)((local_10 - (double)fVar3) + (double)fVar2);
          fVar2 = fVar3 + (local_40 - local_24) + fVar2;
          pfVar5[1] = fVar15;
          pfVar5[4] = fVar7;
          pfVar5[6] = fVar2;
          pfVar5[0xe] = local_2c;
          pfVar5[0x10] = fVar15;
          pfVar5[0x13] = fVar7;
          pfVar5[0x15] = fVar2;
          pfVar5 = pfVar5 + 0x1e;
          local_3c = fVar14;
          local_20 = fVar14;
          local_1c = local_38;
        } while ((int)uVar10 < param_2);
      }
    }
  }
  return;
}

