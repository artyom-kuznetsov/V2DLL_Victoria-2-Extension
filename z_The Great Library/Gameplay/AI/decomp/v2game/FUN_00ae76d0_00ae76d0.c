// FUN_00ae76d0 @ 00ae76d0 body=[[00ae76d0, 00ae7b12]]


void FUN_00ae76d0(int param_1,float param_2,float *param_3)

{
  ushort *puVar1;
  float *pfVar2;
  short *psVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  int iVar15;
  float fVar16;
  int iVar17;
  float *pfVar18;
  int *in_ECX;
  uint uVar19;
  float10 fVar20;
  uint local_40;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined1 local_10 [16];
  
  fVar5 = *(float *)(in_ECX[6] + 0x90);
  fVar6 = (float)in_ECX[2];
  fVar20 = (float10)FUN_00b31840((double)((param_2 - fVar6) / fVar5));
  local_40 = (uint)(longlong)ROUND(fVar20);
  uVar19 = local_40 + 1;
  if (in_ECX[4] - 1U < local_40 + 1) {
    uVar19 = local_40;
  }
  puVar1 = (ushort *)(*(int *)(in_ECX[6] + 100) + param_1 * 8);
  fVar7 = (float)(int)local_40;
  if ((int)local_40 < 0) {
    fVar7 = fVar7 + 4.2949673e+09;
  }
  iVar15 = *(int *)(*(int *)(in_ECX[6] + 0x44) + param_1 * 4);
  fVar5 = ((param_2 - fVar6) - fVar7 * fVar5) / fVar5;
  if (*puVar1 == 0xffff) {
    param_3[0xb] = *(float *)(iVar15 + 0x10);
    param_3[0xc] = *(float *)(iVar15 + 0x14);
    fVar6 = *(float *)(iVar15 + 0x18);
  }
  else {
    iVar17 = (uint)*puVar1 * in_ECX[4];
    pfVar18 = (float *)(in_ECX[1] + (iVar17 + uVar19) * 0xc);
    pfVar2 = (float *)(in_ECX[1] + (iVar17 + local_40) * 0xc);
    fVar7 = pfVar18[1];
    fVar10 = 1.0 - fVar5;
    fVar8 = pfVar2[1];
    fVar9 = *(float *)(iVar15 + 0x14);
    fVar6 = pfVar2[2] * fVar10 + pfVar18[2] * fVar5 + *(float *)(iVar15 + 0x18);
    param_3[0xb] = *(float *)(iVar15 + 0x10) + *pfVar2 * fVar10 + *pfVar18 * fVar5;
    param_3[0xc] = fVar9 + fVar8 * fVar10 + fVar7 * fVar5;
  }
  param_3[0xd] = fVar6;
  if (puVar1[1] == 0xffff) {
    sVar12 = *(short *)(iVar15 + 10);
    sVar13 = *(short *)(iVar15 + 0xc);
    sVar14 = *(short *)(iVar15 + 0xe);
    *param_3 = (float)(int)*(short *)(iVar15 + 8) * 3.051851e-05;
    param_3[1] = (float)(int)sVar12 * 3.051851e-05;
    param_3[2] = (float)(int)sVar13 * 3.051851e-05;
    param_3[3] = (float)(int)sVar14 * 3.051851e-05;
  }
  else {
    iVar17 = (uint)puVar1[1] * in_ECX[4];
    psVar3 = (short *)(*in_ECX + (iVar17 + local_40) * 8);
    local_20 = (float)(int)*psVar3 * 3.051851e-05;
    local_1c = (float)(int)psVar3[1] * 3.051851e-05;
    iVar17 = iVar17 + uVar19;
    local_18 = (float)(int)psVar3[2] * 3.051851e-05;
    iVar4 = *in_ECX + iVar17 * 8;
    local_14 = (float)(int)psVar3[3] * 3.051851e-05;
    local_30 = (float)(int)*(short *)(*in_ECX + iVar17 * 8) * 3.051851e-05;
    local_2c = (float)(int)*(short *)(iVar4 + 2) * 3.051851e-05;
    local_28 = (float)(int)*(short *)(iVar4 + 4) * 3.051851e-05;
    local_24 = (float)(int)*(short *)(iVar4 + 6) * 3.051851e-05;
    pfVar18 = (float *)FUN_00adff20(local_10,&local_30,fVar5);
    *param_3 = *pfVar18;
    param_3[1] = pfVar18[1];
    param_3[2] = pfVar18[2];
    param_3[3] = pfVar18[3];
  }
  if (puVar1[2] == 0xffff) {
    sVar12 = *(short *)(iVar15 + 0x32);
    sVar13 = *(short *)(iVar15 + 0x34);
    sVar14 = *(short *)(iVar15 + 0x36);
    param_3[4] = (float)(int)*(short *)(iVar15 + 0x30) * 3.051851e-05;
    param_3[5] = (float)(int)sVar12 * 3.051851e-05;
    param_3[6] = (float)(int)sVar13 * 3.051851e-05;
    param_3[7] = (float)(int)sVar14 * 3.051851e-05;
  }
  else {
    iVar17 = (uint)puVar1[2] * in_ECX[4];
    psVar3 = (short *)(in_ECX[7] + (iVar17 + local_40) * 8);
    local_30 = (float)(int)*psVar3 * 3.051851e-05;
    local_2c = (float)(int)psVar3[1] * 3.051851e-05;
    iVar17 = iVar17 + uVar19;
    local_28 = (float)(int)psVar3[2] * 3.051851e-05;
    iVar4 = in_ECX[7] + iVar17 * 8;
    local_24 = (float)(int)psVar3[3] * 3.051851e-05;
    local_20 = (float)(int)*(short *)(in_ECX[7] + iVar17 * 8) * 3.051851e-05;
    local_1c = (float)(int)*(short *)(iVar4 + 2) * 3.051851e-05;
    local_18 = (float)(int)*(short *)(iVar4 + 4) * 3.051851e-05;
    local_14 = (float)(int)*(short *)(iVar4 + 6) * 3.051851e-05;
    pfVar18 = (float *)FUN_00adff20(local_10,&local_20,fVar5);
    param_3[4] = *pfVar18;
    param_3[5] = pfVar18[1];
    param_3[6] = pfVar18[2];
    param_3[7] = pfVar18[3];
  }
  if (puVar1[3] != 0xffff) {
    iVar17 = (uint)puVar1[3] * in_ECX[4];
    pfVar18 = (float *)(in_ECX[8] + (iVar17 + uVar19) * 0xc);
    pfVar2 = (float *)(in_ECX[8] + (local_40 + iVar17) * 0xc);
    fVar6 = pfVar18[1];
    fVar7 = pfVar18[2];
    fVar16 = 1.0 - fVar5;
    fVar8 = pfVar2[1];
    fVar9 = pfVar2[2];
    fVar10 = *(float *)(iVar15 + 0x44);
    fVar11 = *(float *)(iVar15 + 0x48);
    param_3[8] = *(float *)(iVar15 + 0x40) + *pfVar2 * fVar16 + *pfVar18 * fVar5;
    param_3[9] = fVar8 * fVar16 + fVar6 * fVar5 + fVar10;
    param_3[10] = fVar11 + fVar7 * fVar5 + fVar9 * fVar16;
    return;
  }
  param_3[8] = *(float *)(iVar15 + 0x40);
  param_3[9] = *(float *)(iVar15 + 0x44);
  param_3[10] = *(float *)(iVar15 + 0x48);
  return;
}

