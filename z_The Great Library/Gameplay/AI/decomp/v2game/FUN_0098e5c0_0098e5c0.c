// FUN_0098e5c0 @ 0098e5c0 body=[[0098e5c0, 0098e93c]]


void FUN_0098e5c0(int param_1,int param_2,int *param_3,int param_4)

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
  uint uVar11;
  float fVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  float local_54;
  float local_3c;
  float local_38;
  
  param_2 = (param_3[1] - *param_3 >> 3) - param_2;
  iVar15 = 0;
  for (iVar14 = param_4; iVar14 < param_2; iVar14 = iVar14 + 1) {
    iVar1 = *param_3;
    fVar2 = *(float *)(iVar1 + iVar14 * 8);
    fVar3 = *(float *)(iVar1 + 4 + iVar14 * 8);
    fVar4 = *(float *)(iVar1 + 8 + iVar14 * 8);
    fVar5 = *(float *)(iVar1 + 0xc + iVar14 * 8);
    if (iVar14 == 0) {
      local_54 = fVar2 - (fVar4 - fVar2);
      fVar12 = fVar3 - (fVar5 - fVar3);
    }
    else {
      local_54 = *(float *)(iVar1 + -8 + iVar14 * 8);
      fVar12 = *(float *)(iVar1 + -4 + iVar14 * 8);
    }
    if (iVar14 == param_2 + -1) {
      local_38 = fVar5 - (fVar3 - fVar5);
      local_3c = fVar4 - (fVar2 - fVar4);
    }
    else {
      local_3c = *(float *)(iVar1 + 0x10 + iVar14 * 8);
      local_38 = *(float *)(iVar1 + 0x14 + iVar14 * 8);
    }
    uVar11 = (uint)(iVar14 != param_4);
    pfVar13 = (float *)(param_1 + iVar15 * 8);
    iVar15 = iVar15 + (5 - uVar11);
    do {
      fVar6 = (float)(int)uVar11 * 0.25;
      fVar10 = fVar6 * fVar6;
      fVar7 = fVar10 * fVar6;
      fVar8 = (fVar10 * 4.0 - fVar7 * 3.0) + fVar6;
      fVar9 = (fVar7 * 3.0 - fVar10 * 5.0) + 2.0;
      fVar6 = (fVar10 * 2.0 - fVar7) - fVar6;
      *pfVar13 = (local_54 * fVar6 + fVar2 * fVar9 + fVar4 * fVar8 + local_3c * (fVar7 - fVar10)) *
                 0.5;
      pfVar13[1] = (fVar12 * fVar6 + fVar3 * fVar9 + fVar5 * fVar8 + local_38 * (fVar7 - fVar10)) *
                   0.5;
      uVar11 = uVar11 + 1;
      pfVar13 = pfVar13 + 2;
    } while ((int)uVar11 < 5);
  }
  return;
}

