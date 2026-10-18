// FUN_00b18c30 @ 00b18c30 body=[[00b18c30, 00b18e22]]


void FUN_00b18c30(float *param_1,uint param_2)

{
  float fVar1;
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
  float *pfVar12;
  float *in_ECX;
  int iVar13;
  uint uVar14;
  
  if (*(char *)(in_ECX + 0x23) == '\0') {
    uVar14 = 0;
    if (3 < (int)param_2) {
      iVar13 = (param_2 - 4 >> 2) + 1;
      uVar14 = iVar13 * 4;
      pfVar12 = param_1;
      do {
        fVar1 = in_ECX[1];
        fVar2 = *pfVar12;
        fVar3 = in_ECX[5];
        fVar4 = in_ECX[9];
        fVar5 = in_ECX[0xd];
        fVar6 = *pfVar12;
        fVar7 = in_ECX[2];
        fVar8 = pfVar12[1];
        fVar9 = in_ECX[6];
        fVar10 = in_ECX[10];
        fVar11 = in_ECX[0xe];
        *pfVar12 = pfVar12[2] * in_ECX[8] + pfVar12[1] * in_ECX[4] + *pfVar12 * *in_ECX +
                   in_ECX[0xc];
        pfVar12[1] = fVar4 * pfVar12[2] + fVar3 * pfVar12[1] + fVar1 * fVar2 + fVar5;
        pfVar12[2] = pfVar12[2] * fVar10 + fVar8 * fVar9 + fVar6 * fVar7 + fVar11;
        fVar1 = in_ECX[5];
        fVar2 = pfVar12[3];
        fVar3 = in_ECX[1];
        fVar4 = in_ECX[9];
        fVar5 = in_ECX[0xd];
        fVar6 = pfVar12[4];
        fVar7 = in_ECX[6];
        fVar8 = pfVar12[3];
        fVar9 = in_ECX[2];
        fVar10 = in_ECX[10];
        fVar11 = in_ECX[0xe];
        pfVar12[3] = pfVar12[5] * in_ECX[8] + pfVar12[4] * in_ECX[4] + pfVar12[3] * *in_ECX +
                     in_ECX[0xc];
        pfVar12[4] = pfVar12[5] * fVar4 + fVar2 * fVar3 + pfVar12[4] * fVar1 + fVar5;
        pfVar12[5] = pfVar12[5] * fVar10 + fVar8 * fVar9 + fVar6 * fVar7 + fVar11;
        fVar1 = in_ECX[5];
        fVar2 = in_ECX[1];
        fVar3 = pfVar12[6];
        fVar4 = in_ECX[9];
        fVar5 = in_ECX[0xd];
        fVar6 = pfVar12[7];
        fVar7 = in_ECX[6];
        param_1 = pfVar12 + 0xc;
        iVar13 = iVar13 + -1;
        fVar8 = pfVar12[6];
        fVar9 = in_ECX[2];
        fVar10 = in_ECX[10];
        fVar11 = in_ECX[0xe];
        pfVar12[6] = pfVar12[8] * in_ECX[8] + pfVar12[7] * in_ECX[4] + pfVar12[6] * *in_ECX +
                     in_ECX[0xc];
        pfVar12[7] = fVar4 * pfVar12[8] + fVar2 * fVar3 + fVar1 * pfVar12[7] + fVar5;
        pfVar12[8] = pfVar12[8] * fVar10 + fVar8 * fVar9 + fVar6 * fVar7 + fVar11;
        fVar1 = in_ECX[5];
        fVar2 = in_ECX[1];
        fVar3 = pfVar12[9];
        fVar4 = in_ECX[9];
        fVar5 = in_ECX[0xd];
        fVar6 = pfVar12[10];
        fVar7 = in_ECX[6];
        fVar8 = pfVar12[9];
        fVar9 = in_ECX[2];
        fVar10 = in_ECX[10];
        fVar11 = in_ECX[0xe];
        pfVar12[9] = pfVar12[0xb] * in_ECX[8] + pfVar12[10] * in_ECX[4] + *in_ECX * pfVar12[9] +
                     in_ECX[0xc];
        pfVar12[10] = fVar4 * pfVar12[0xb] + fVar2 * fVar3 + fVar1 * pfVar12[10] + fVar5;
        pfVar12[0xb] = pfVar12[0xb] * fVar10 + fVar8 * fVar9 + fVar6 * fVar7 + fVar11;
        pfVar12 = param_1;
      } while (iVar13 != 0);
    }
    if (uVar14 < param_2) {
      iVar13 = param_2 - uVar14;
      pfVar12 = param_1 + 2;
      do {
        iVar13 = iVar13 + -1;
        fVar1 = in_ECX[1];
        fVar2 = pfVar12[-2];
        fVar3 = in_ECX[5];
        fVar4 = in_ECX[9];
        fVar5 = in_ECX[0xd];
        fVar6 = pfVar12[-2];
        fVar7 = in_ECX[2];
        fVar8 = pfVar12[-1];
        fVar9 = in_ECX[6];
        fVar10 = in_ECX[10];
        fVar11 = in_ECX[0xe];
        pfVar12[-2] = in_ECX[8] * *pfVar12 + pfVar12[-1] * in_ECX[4] + pfVar12[-2] * *in_ECX +
                      in_ECX[0xc];
        pfVar12[-1] = fVar4 * *pfVar12 + fVar3 * pfVar12[-1] + fVar1 * fVar2 + fVar5;
        *pfVar12 = fVar10 * *pfVar12 + fVar8 * fVar9 + fVar6 * fVar7 + fVar11;
        pfVar12 = pfVar12 + 3;
      } while (iVar13 != 0);
    }
  }
  return;
}

