// FUN_00a41830 @ 00a41830 body=[[00a41830, 00a41e7a] [00a41e80, 00a41edb]]


void FUN_00a41830(float *param_1,float *param_2,float param_3,float param_4)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  int in_EAX;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float fVar11;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_94;
  float local_90;
  float local_8c;
  undefined1 local_68 [8];
  undefined4 local_60;
  float *local_58;
  undefined1 *local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28 [6];
  float local_10;
  float local_c;
  float local_8;
  
  if ((*(int *)(*(int *)(in_EAX + 0x13c) + 0x114) - *(int *)(*(int *)(in_EAX + 0x13c) + 0x110) &
      0xfffffffeU) == 0) {
    FUN_00a41f00();
    fVar11 = 1.0 / *param_2;
    fVar3 = 1.0 / param_2[1];
    fVar5 = 1.0 / param_2[2];
    local_28[5] = (float)local_60;
    fVar6 = (local_28[(uint)(fVar11 < 0.0) * 3] - *param_1) * fVar11;
    fVar11 = (local_28[(uint)(fVar11 < 0.0) * -3 + 3] - *param_1) * fVar11;
    fVar4 = (local_28[(uint)(fVar3 < 0.0) * 3 + 1] - param_1[1]) * fVar3;
    fVar3 = (local_28[(uint)(fVar3 < 0.0) * -3 + 4] - param_1[1]) * fVar3;
    if (fVar3 < fVar6) {
      return;
    }
    if (fVar11 < fVar4) {
      return;
    }
    if (fVar6 < fVar4) {
      fVar6 = fVar4;
    }
    if (fVar3 < fVar11) {
      fVar11 = fVar3;
    }
    fVar3 = (local_28[(uint)(fVar5 < 0.0) * 3 + 2] - param_1[2]) * fVar5;
    fVar5 = (local_28[(uint)(fVar5 < 0.0) * -3 + 5] - param_1[2]) * fVar5;
    if (fVar5 < fVar6) {
      return;
    }
    if (fVar11 < fVar3) {
      return;
    }
    if (fVar6 < fVar3) {
      fVar6 = fVar3;
    }
    if (fVar5 < fVar11) {
      fVar11 = fVar5;
    }
    if (param_4 <= fVar6) {
      return;
    }
    if (fVar11 <= param_3) {
      return;
    }
    return;
  }
  FUN_00a41100();
  local_4c = local_b4;
  local_48 = local_b0;
  local_44 = local_ac;
  local_40 = local_a4;
  local_3c = local_a0;
  local_38 = local_9c;
  local_34 = local_94;
  local_30 = local_90;
  local_2c = local_8c;
  local_54 = local_68;
  local_58 = param_1;
  iVar8 = FUN_00a424e0(&local_4c);
  if ((iVar8 == 0) || (iVar8 == -1)) {
    iVar8 = 0;
  }
  if ((((iVar8 == -1) || (iVar8 == 0)) || (iVar8 == -1)) || ((iVar8 == 0 || (iVar8 == -1)))) {
    iVar9 = 0;
  }
  else {
    iVar9 = iVar8;
    if ((iVar8 != 0) && (iVar8 != -1)) goto LAB_00a41bb6;
  }
  iVar8 = 0;
LAB_00a41bb6:
  pfVar1 = *(float **)(iVar8 + 4);
  local_10 = pfVar1[3] * *(float *)(iVar8 + 0xc) + *pfVar1 * *(float *)(iVar8 + 8) +
             pfVar1[6] * *(float *)(iVar8 + 0x10);
  if ((iVar9 == 0) || (iVar8 = iVar9, iVar9 == -1)) {
    iVar8 = 0;
  }
  iVar2 = *(int *)(iVar8 + 4);
  local_c = *(float *)(iVar2 + 0x10) * *(float *)(iVar8 + 0xc) +
            *(float *)(iVar2 + 4) * *(float *)(iVar8 + 8) +
            *(float *)(iVar2 + 0x1c) * *(float *)(iVar8 + 0x10);
  if ((iVar9 == 0) || (iVar9 == -1)) {
    iVar9 = 0;
  }
  iVar8 = *(int *)(iVar9 + 4);
  local_8 = *(float *)(iVar9 + 0xc) * *(float *)(iVar8 + 0x14) +
            *(float *)(iVar8 + 8) * *(float *)(iVar9 + 8) +
            *(float *)(iVar9 + 0x10) * *(float *)(iVar8 + 0x20);
  local_28[4] = local_48 * *param_2 + local_3c * param_2[1] + param_2[2] * local_30;
  local_28[3] = local_4c * *param_2 + local_40 * param_2[1] + param_2[2] * local_34;
  local_28[5] = local_44 * *param_2 + local_38 * param_2[1] + param_2[2] * local_2c;
  fVar10 = (float10)FUN_00a42090();
  iVar8 = *(int *)(in_EAX + 0x13c);
  param_2 = (float *)0x0;
  local_50 = (float)((float10)1 / fVar10);
  local_10 = local_50 * local_10;
  local_8 = local_50 * local_8;
  local_c = local_50 * local_c;
  iVar9 = *(int *)(iVar8 + 0x114) - *(int *)(iVar8 + 0x110) >> 1;
  if (0 < iVar9) {
    iVar2 = *(int *)(iVar8 + 0x100);
    iVar8 = *(int *)(iVar8 + 0x110) + 2;
    do {
      cVar7 = FUN_00a412c0(iVar2 + (uint)*(ushort *)(iVar8 + -2) * 0xc);
      if (cVar7 != '\0') {
        return;
      }
      iVar8 = iVar8 + 6;
      param_2 = (float *)((int)param_2 + 3);
    } while ((int)param_2 < iVar9);
  }
  return;
}

