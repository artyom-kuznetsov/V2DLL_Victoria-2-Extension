// FUN_00ae7300 @ 00ae7300 body=[[00ae7300, 00ae76c2]]


void FUN_00ae7300(int param_1,float param_2,int param_3,int param_4,float *param_5)

{
  float *pfVar1;
  short *psVar2;
  short *psVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ushort uVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  int iVar14;
  float fVar15;
  int iVar16;
  float *pfVar17;
  int iVar18;
  int *in_ECX;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined1 local_10 [16];
  
  iVar18 = *(int *)(in_ECX[6] + 100);
  iVar14 = *(int *)(*(int *)(in_ECX[6] + 0x44) + param_1 * 4);
  uVar10 = *(ushort *)(iVar18 + param_1 * 8);
  iVar18 = iVar18 + param_1 * 8;
  if (uVar10 == 0xffff) {
    param_5[0xb] = *(float *)(iVar14 + 0x10);
    param_5[0xc] = *(float *)(iVar14 + 0x14);
    fVar7 = *(float *)(iVar14 + 0x18);
  }
  else {
    iVar16 = (uint)uVar10 * in_ECX[4];
    pfVar17 = (float *)(in_ECX[1] + (iVar16 + param_4) * 0xc);
    pfVar1 = (float *)(in_ECX[1] + (param_3 + iVar16) * 0xc);
    fVar4 = pfVar17[1];
    fVar8 = 1.0 - param_2;
    fVar5 = pfVar1[1];
    fVar6 = *(float *)(iVar14 + 0x14);
    fVar7 = pfVar1[2] * fVar8 + pfVar17[2] * param_2 + *(float *)(iVar14 + 0x18);
    param_5[0xb] = *(float *)(iVar14 + 0x10) + *pfVar1 * fVar8 + *pfVar17 * param_2;
    param_5[0xc] = fVar6 + fVar5 * fVar8 + fVar4 * param_2;
  }
  param_5[0xd] = fVar7;
  if (*(ushort *)(iVar18 + 2) == 0xffff) {
    sVar11 = *(short *)(iVar14 + 10);
    sVar12 = *(short *)(iVar14 + 0xc);
    sVar13 = *(short *)(iVar14 + 0xe);
    *param_5 = (float)(int)*(short *)(iVar14 + 8) * 3.051851e-05;
    param_5[1] = (float)(int)sVar11 * 3.051851e-05;
    param_5[2] = (float)(int)sVar12 * 3.051851e-05;
    param_5[3] = (float)(int)sVar13 * 3.051851e-05;
  }
  else {
    iVar16 = (uint)*(ushort *)(iVar18 + 2) * in_ECX[4];
    psVar2 = (short *)(*in_ECX + (param_3 + iVar16) * 8);
    local_20 = (float)(int)*psVar2 * 3.051851e-05;
    local_1c = (float)(int)psVar2[1] * 3.051851e-05;
    psVar3 = (short *)(*in_ECX + (iVar16 + param_4) * 8);
    local_18 = (float)(int)psVar2[2] * 3.051851e-05;
    local_14 = (float)(int)psVar2[3] * 3.051851e-05;
    local_30 = (float)(int)*psVar3 * 3.051851e-05;
    local_2c = (float)(int)psVar3[1] * 3.051851e-05;
    local_28 = (float)(int)psVar3[2] * 3.051851e-05;
    local_24 = (float)(int)psVar3[3] * 3.051851e-05;
    pfVar17 = (float *)FUN_00adff20(local_10,&local_30,param_2);
    *param_5 = *pfVar17;
    param_5[1] = pfVar17[1];
    param_5[2] = pfVar17[2];
    param_5[3] = pfVar17[3];
  }
  if (*(ushort *)(iVar18 + 4) == 0xffff) {
    sVar11 = *(short *)(iVar14 + 0x32);
    sVar12 = *(short *)(iVar14 + 0x34);
    sVar13 = *(short *)(iVar14 + 0x36);
    param_5[4] = (float)(int)*(short *)(iVar14 + 0x30) * 3.051851e-05;
    param_5[5] = (float)(int)sVar11 * 3.051851e-05;
    param_5[6] = (float)(int)sVar12 * 3.051851e-05;
    param_5[7] = (float)(int)sVar13 * 3.051851e-05;
  }
  else {
    iVar16 = (uint)*(ushort *)(iVar18 + 4) * in_ECX[4];
    psVar2 = (short *)(in_ECX[7] + (param_3 + iVar16) * 8);
    local_30 = (float)(int)*psVar2 * 3.051851e-05;
    local_2c = (float)(int)psVar2[1] * 3.051851e-05;
    psVar3 = (short *)(in_ECX[7] + (iVar16 + param_4) * 8);
    local_28 = (float)(int)psVar2[2] * 3.051851e-05;
    local_24 = (float)(int)psVar2[3] * 3.051851e-05;
    local_20 = (float)(int)*psVar3 * 3.051851e-05;
    local_1c = (float)(int)psVar3[1] * 3.051851e-05;
    local_18 = (float)(int)psVar3[2] * 3.051851e-05;
    local_14 = (float)(int)psVar3[3] * 3.051851e-05;
    pfVar17 = (float *)FUN_00adff20(local_10,&local_20,param_2);
    param_5[4] = *pfVar17;
    param_5[5] = pfVar17[1];
    param_5[6] = pfVar17[2];
    param_5[7] = pfVar17[3];
  }
  if (*(ushort *)(iVar18 + 6) != 0xffff) {
    iVar18 = (uint)*(ushort *)(iVar18 + 6) * in_ECX[4];
    pfVar17 = (float *)(in_ECX[8] + (iVar18 + param_4) * 0xc);
    pfVar1 = (float *)(in_ECX[8] + (param_3 + iVar18) * 0xc);
    fVar7 = pfVar17[1];
    fVar4 = pfVar17[2];
    fVar15 = 1.0 - param_2;
    fVar5 = pfVar1[1];
    fVar6 = pfVar1[2];
    fVar8 = *(float *)(iVar14 + 0x44);
    fVar9 = *(float *)(iVar14 + 0x48);
    param_5[8] = *pfVar1 * fVar15 + *pfVar17 * param_2 + *(float *)(iVar14 + 0x40);
    param_5[9] = fVar8 + fVar5 * fVar15 + fVar7 * param_2;
    param_5[10] = fVar9 + fVar4 * param_2 + fVar6 * fVar15;
    return;
  }
  param_5[8] = *(float *)(iVar14 + 0x40);
  param_5[9] = *(float *)(iVar14 + 0x44);
  param_5[10] = *(float *)(iVar14 + 0x48);
  return;
}

