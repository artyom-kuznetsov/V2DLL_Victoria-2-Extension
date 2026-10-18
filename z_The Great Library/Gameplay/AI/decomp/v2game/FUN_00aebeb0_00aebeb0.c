// FUN_00aebeb0 @ 00aebeb0 body=[[00aebeb0, 00aec494]]


void FUN_00aebeb0(int param_1,int *param_2,float *param_3,float *param_4,float param_5,
                 float *param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  undefined4 uVar15;
  float *pfVar16;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined1 local_10 [16];
  
  iVar1 = *param_2 * 0x38;
  local_30 = *(float *)(*(int *)(param_1 + 0x1c) + iVar1);
  iVar14 = *(int *)(param_1 + 0x1c) + iVar1;
  local_2c = *(float *)(iVar14 + 4);
  local_28 = *(float *)(iVar14 + 8);
  local_24 = *(float *)(iVar14 + 0xc);
  fVar2 = *(float *)(iVar14 + 0x10);
  fVar3 = *(float *)(iVar14 + 0x14);
  fVar4 = *(float *)(iVar14 + 0x18);
  fVar5 = *(float *)(iVar14 + 0x1c);
  if (1.0 <= param_5) {
    fVar6 = param_4[0xb];
    fVar7 = *(float *)(iVar1 + 0x2c + *(int *)(param_1 + 0x1c));
    iVar1 = iVar1 + *(int *)(param_1 + 0x1c);
    fVar8 = param_4[0xc];
    fVar9 = *(float *)(iVar1 + 0x30);
    fVar10 = param_4[0xd];
    fVar11 = *(float *)(iVar1 + 0x34);
    local_14 = 1.0 / (local_24 * local_24 +
                     local_28 * local_28 + local_2c * local_2c + local_30 * local_30);
    local_20 = -(local_14 * local_30);
    local_1c = -(local_2c * local_14);
    local_18 = -(local_28 * local_14);
    local_14 = local_24 * local_14;
    local_30 = *param_4;
    local_2c = param_4[1];
    local_28 = param_4[2];
    local_24 = param_4[3];
    uVar15 = FUN_00aed250(local_10,&local_20,&local_30);
    pfVar16 = (float *)FUN_00aed250(&local_20,param_3,uVar15);
    *param_6 = *pfVar16;
    param_6[1] = pfVar16[1];
    param_6[2] = pfVar16[2];
    param_6[3] = pfVar16[3];
    fVar12 = param_3[0xc];
    fVar13 = param_3[0xd];
    param_6[0xb] = param_3[0xb] + (fVar6 - fVar7) * param_5;
    param_6[0xc] = (fVar8 - fVar9) * param_5 + fVar12;
    param_6[0xd] = fVar13 + (fVar10 - fVar11) * param_5;
    fVar6 = 1.0 / SQRT(param_6[3] * param_6[3] +
                       param_6[2] * param_6[2] + *param_6 * *param_6 + param_6[1] * param_6[1]);
    *param_6 = *param_6 * fVar6;
    param_6[1] = fVar6 * param_6[1];
    param_6[2] = param_6[2] * fVar6;
    param_6[3] = fVar6 * param_6[3];
    fVar6 = param_4[8];
    fVar7 = *(float *)(iVar1 + 0x20);
    fVar8 = param_4[9];
    fVar9 = *(float *)(iVar1 + 0x24);
    fVar10 = param_4[10];
    fVar11 = *(float *)(iVar1 + 0x28);
    local_20 = param_4[4];
    local_1c = param_4[5];
    local_18 = param_4[6];
    local_14 = param_4[7];
    local_24 = 1.0 / (fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    local_30 = -(local_24 * fVar2);
    local_2c = -(fVar3 * local_24);
    local_28 = -(fVar4 * local_24);
    local_24 = local_24 * fVar5;
    uVar15 = FUN_00aed250(local_10,&local_30,&local_20);
    pfVar16 = (float *)FUN_00aed250(&local_20,param_3 + 4,uVar15);
    param_6[4] = *pfVar16;
    param_6[5] = pfVar16[1];
    param_6[6] = pfVar16[2];
    param_6[7] = pfVar16[3];
    fVar2 = param_3[9];
    fVar3 = param_3[10];
    param_6[8] = param_3[8] + (fVar6 - fVar7) * param_5;
    param_6[9] = (fVar8 - fVar9) * param_5 + fVar2;
    param_6[10] = fVar3 + (fVar10 - fVar11) * param_5;
    fVar2 = 1.0 / SQRT(param_6[7] * param_6[7] +
                       param_6[6] * param_6[6] + param_6[4] * param_6[4] + param_6[5] * param_6[5]);
    param_6[4] = fVar2 * param_6[4];
    param_6[5] = fVar2 * param_6[5];
    param_6[6] = fVar2 * param_6[6];
    param_6[7] = fVar2 * param_6[7];
    return;
  }
  if (0.0 < param_5) {
    fVar6 = param_4[0xb];
    fVar7 = *(float *)(iVar1 + 0x2c + *(int *)(param_1 + 0x1c));
    iVar1 = iVar1 + *(int *)(param_1 + 0x1c);
    fVar8 = param_4[0xc];
    fVar9 = *(float *)(iVar1 + 0x30);
    fVar10 = param_4[0xd];
    fVar11 = *(float *)(iVar1 + 0x34);
    FUN_00adff20(local_10,param_4,param_5);
    local_14 = 1.0 / (local_24 * local_24 +
                     local_28 * local_28 + local_2c * local_2c + local_30 * local_30);
    local_20 = -(local_14 * local_30);
    local_1c = -(local_2c * local_14);
    local_18 = -(local_28 * local_14);
    local_14 = local_14 * local_24;
    uVar15 = FUN_00aed250(&local_30,&local_20,local_10);
    pfVar16 = (float *)FUN_00aed250(local_10,param_3,uVar15);
    *param_6 = *pfVar16;
    param_6[1] = pfVar16[1];
    param_6[2] = pfVar16[2];
    fVar12 = pfVar16[3];
    param_6[3] = fVar12;
    fVar12 = 1.0 / SQRT(param_6[2] * param_6[2] + *param_6 * *param_6 + param_6[1] * param_6[1] +
                        fVar12 * fVar12);
    *param_6 = fVar12 * *param_6;
    param_6[1] = fVar12 * param_6[1];
    param_6[2] = fVar12 * param_6[2];
    param_6[3] = fVar12 * param_6[3];
    fVar12 = param_3[0xc];
    fVar13 = param_3[0xd];
    param_6[0xb] = (fVar6 - fVar7) * param_5 + param_3[0xb];
    param_6[0xc] = fVar12 + (fVar8 - fVar9) * param_5;
    param_6[0xd] = fVar13 + (fVar10 - fVar11) * param_5;
    fVar6 = param_4[8];
    fVar7 = *(float *)(iVar1 + 0x20);
    fVar8 = param_4[9];
    fVar9 = *(float *)(iVar1 + 0x24);
    fVar10 = param_4[10];
    fVar11 = *(float *)(iVar1 + 0x28);
    FUN_00adff20(local_10,param_4 + 4,param_5);
    local_14 = 1.0 / (fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    local_20 = -(local_14 * fVar2);
    local_1c = -(fVar3 * local_14);
    local_18 = -(fVar4 * local_14);
    local_14 = local_14 * fVar5;
    uVar15 = FUN_00aed250(&local_30,&local_20,local_10);
    pfVar16 = (float *)FUN_00aed250(local_10,param_3 + 4,uVar15);
    param_6[4] = *pfVar16;
    param_6[5] = pfVar16[1];
    param_6[6] = pfVar16[2];
    param_6[7] = pfVar16[3];
    fVar2 = param_3[9];
    fVar3 = param_3[10];
    param_6[8] = param_3[8] + (fVar6 - fVar7) * param_5;
    param_6[9] = (fVar8 - fVar9) * param_5 + fVar2;
    param_6[10] = fVar3 + (fVar10 - fVar11) * param_5;
    fVar2 = 1.0 / SQRT(param_6[7] * param_6[7] +
                       param_6[6] * param_6[6] + param_6[4] * param_6[4] + param_6[5] * param_6[5]);
    param_6[4] = fVar2 * param_6[4];
    param_6[5] = fVar2 * param_6[5];
    param_6[6] = fVar2 * param_6[6];
    param_6[7] = fVar2 * param_6[7];
    return;
  }
  *param_6 = *param_3;
  param_6[1] = param_3[1];
  param_6[2] = param_3[2];
  param_6[3] = param_3[3];
  param_6[0xb] = param_3[0xb];
  param_6[0xc] = param_3[0xc];
  param_6[0xd] = param_3[0xd];
  param_6[4] = param_3[4];
  param_6[5] = param_3[5];
  param_6[6] = param_3[6];
  param_6[7] = param_3[7];
  param_6[8] = param_3[8];
  param_6[9] = param_3[9];
  param_6[10] = param_3[10];
  return;
}

