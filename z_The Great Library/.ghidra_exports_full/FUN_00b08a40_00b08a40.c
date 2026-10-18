// FUN_00b08a40 @ 00b08a40 body=[[00b08a40, 00b08edc]]


void FUN_00b08a40(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  int *in_ECX;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  
  fVar6 = 0.0;
  uVar5 = in_ECX[1];
  uVar12 = 0;
  fVar4 = fVar6;
  if (3 < (int)uVar5) {
    iVar10 = (uVar5 - 4 >> 2) + 1;
    uVar12 = iVar10 * 4;
    piVar13 = (int *)(*in_ECX + 8);
    do {
      iVar10 = iVar10 + -1;
      fVar4 = fVar4 + *(float *)(piVar13[-2] + 0x2c) + *(float *)(piVar13[-1] + 0x2c) +
              *(float *)(*piVar13 + 0x2c) + *(float *)(piVar13[1] + 0x2c);
      piVar13 = piVar13 + 4;
    } while (iVar10 != 0);
  }
  if (uVar12 < uVar5) {
    piVar13 = (int *)(*in_ECX + uVar12 * 4);
    iVar10 = uVar5 - uVar12;
    do {
      fVar4 = fVar4 + *(float *)(*piVar13 + 0x2c);
      piVar13 = piVar13 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (0.0001 <= fVar4) {
    fVar6 = 1.0 / fVar4;
  }
  iVar10 = *(int *)(*(int *)(in_ECX[4] + 0x90) + 0x1ac);
  piVar13 = (int *)(iVar10 + 0x50);
  if (*(int *)(iVar10 + 0x54) != *(int *)(param_1 + 4)) {
    FUN_00aecc00(*(int *)(param_1 + 4),1);
  }
  uVar12 = 0;
  if (uVar5 != 0) {
    do {
      iVar10 = *(int *)(*in_ECX + uVar12 * 4);
      fVar4 = *(float *)(iVar10 + 0x2c) * fVar6;
      (**(code **)(**(int **)(iVar10 + 0x8c) + 0x28))(param_1,piVar13,iVar10);
      if (uVar12 == 0) {
        iVar10 = param_2[1];
        if (iVar10 != 0) {
          iVar11 = 0;
          do {
            fVar1 = *(float *)(*piVar13 + 4 + iVar11);
            pfVar7 = (float *)(*piVar13 + iVar11);
            fVar1 = 1.0 / SQRT(pfVar7[3] * pfVar7[3] +
                               pfVar7[2] * pfVar7[2] + *pfVar7 * *pfVar7 + fVar1 * fVar1);
            *pfVar7 = *pfVar7 * fVar1;
            pfVar7[1] = pfVar7[1] * fVar1;
            pfVar7[2] = pfVar7[2] * fVar1;
            pfVar7[3] = fVar1 * pfVar7[3];
            fVar1 = *(float *)(iVar11 + 0x14 + *piVar13);
            pfVar7 = (float *)(iVar11 + 0x10 + *piVar13);
            fVar1 = 1.0 / SQRT(pfVar7[2] * pfVar7[2] + fVar1 * fVar1 + *pfVar7 * *pfVar7 +
                               pfVar7[3] * pfVar7[3]);
            *pfVar7 = *pfVar7 * fVar1;
            pfVar7[1] = fVar1 * pfVar7[1];
            pfVar7[2] = fVar1 * pfVar7[2];
            pfVar7[3] = fVar1 * pfVar7[3];
            iVar8 = iVar11 + 0x20 + *piVar13;
            fVar1 = *(float *)(iVar8 + 4);
            fVar2 = *(float *)(iVar8 + 8);
            pfVar7 = (float *)(iVar11 + 0x20 + *param_2);
            *pfVar7 = *(float *)(iVar11 + 0x20 + *piVar13) * fVar4;
            pfVar7[1] = fVar1 * fVar4;
            pfVar7[2] = fVar2 * fVar4;
            iVar8 = iVar11 + 0x10 + *piVar13;
            fVar1 = *(float *)(iVar8 + 4);
            fVar2 = *(float *)(iVar8 + 8);
            fVar3 = *(float *)(iVar8 + 0xc);
            pfVar7 = (float *)(iVar11 + 0x10 + *param_2);
            *pfVar7 = *(float *)(iVar11 + 0x10 + *piVar13) * fVar4;
            pfVar7[1] = fVar1 * fVar4;
            pfVar7[2] = fVar2 * fVar4;
            pfVar7[3] = fVar3 * fVar4;
            iVar8 = iVar11 + 0x2c + *piVar13;
            fVar1 = *(float *)(iVar8 + 4);
            fVar2 = *(float *)(iVar8 + 8);
            pfVar7 = (float *)(iVar11 + 0x2c + *param_2);
            *pfVar7 = *(float *)(iVar11 + 0x2c + *piVar13) * fVar4;
            pfVar7[1] = fVar1 * fVar4;
            pfVar7[2] = fVar2 * fVar4;
            pfVar7 = (float *)(*piVar13 + iVar11);
            iVar8 = *piVar13 + iVar11;
            fVar1 = *(float *)(iVar8 + 4);
            fVar2 = *(float *)(iVar8 + 8);
            fVar3 = *(float *)(iVar8 + 0xc);
            pfVar9 = (float *)(*param_2 + iVar11);
            iVar11 = iVar11 + 0x38;
            iVar10 = iVar10 + -1;
            *pfVar9 = *pfVar7 * fVar4;
            pfVar9[1] = fVar1 * fVar4;
            pfVar9[2] = fVar2 * fVar4;
            pfVar9[3] = fVar3 * fVar4;
          } while (iVar10 != 0);
        }
      }
      else {
        iVar10 = param_2[1];
        if (iVar10 != 0) {
          iVar11 = 0;
          do {
            iVar8 = iVar11 + 0x2c + *piVar13;
            fVar1 = *(float *)(iVar8 + 4);
            fVar2 = *(float *)(iVar8 + 8);
            pfVar7 = (float *)(iVar11 + 0x2c + *param_2);
            *pfVar7 = *pfVar7 + *(float *)(iVar11 + 0x2c + *piVar13) * fVar4;
            pfVar7[1] = fVar1 * fVar4 + pfVar7[1];
            pfVar7[2] = fVar2 * fVar4 + pfVar7[2];
            pfVar7 = (float *)(iVar11 + 0x20 + *piVar13);
            fVar1 = pfVar7[1];
            fVar2 = pfVar7[2];
            pfVar9 = (float *)(iVar11 + 0x20 + *param_2);
            *pfVar9 = fVar4 * *pfVar7 + *pfVar9;
            pfVar9[1] = fVar1 * fVar4 + pfVar9[1];
            pfVar9[2] = fVar2 * fVar4 + pfVar9[2];
            pfVar7 = (float *)(iVar11 + 0x10 + *piVar13);
            pfVar9 = (float *)(iVar11 + 0x10 + *param_2);
            if (pfVar7[3] * pfVar9[3] +
                pfVar7[2] * pfVar9[2] +
                *pfVar7 * *pfVar9 +
                *(float *)(iVar11 + 0x14 + *piVar13) * *(float *)(iVar11 + 0x14 + *param_2) < 0.0) {
              *pfVar7 = -*pfVar7;
              pfVar7[1] = -pfVar7[1];
              pfVar7[2] = -pfVar7[2];
              pfVar7[3] = -pfVar7[3];
            }
            iVar8 = iVar11 + 0x10 + *piVar13;
            fVar1 = *(float *)(iVar8 + 4);
            fVar2 = *(float *)(iVar8 + 8);
            fVar3 = *(float *)(iVar8 + 0xc);
            pfVar7 = (float *)(iVar11 + 0x10 + *param_2);
            *pfVar7 = *(float *)(iVar11 + 0x10 + *piVar13) * fVar4 + *pfVar7;
            pfVar7[1] = pfVar7[1] + fVar1 * fVar4;
            pfVar7[2] = fVar2 * fVar4 + pfVar7[2];
            pfVar7[3] = fVar3 * fVar4 + pfVar7[3];
            pfVar9 = (float *)(*piVar13 + iVar11);
            pfVar7 = (float *)(*param_2 + iVar11);
            if (pfVar9[3] * pfVar7[3] +
                pfVar9[2] * pfVar7[2] +
                *pfVar9 * *pfVar7 +
                *(float *)(*piVar13 + 4 + iVar11) * *(float *)(*param_2 + 4 + iVar11) < 0.0) {
              *pfVar9 = -*pfVar9;
              pfVar9[1] = -pfVar9[1];
              pfVar9[2] = -pfVar9[2];
              pfVar9[3] = -pfVar9[3];
            }
            pfVar7 = (float *)(*piVar13 + iVar11);
            iVar8 = *piVar13 + iVar11;
            fVar1 = *(float *)(iVar8 + 4);
            fVar2 = *(float *)(iVar8 + 8);
            fVar3 = *(float *)(iVar8 + 0xc);
            pfVar9 = (float *)(*param_2 + iVar11);
            iVar11 = iVar11 + 0x38;
            iVar10 = iVar10 + -1;
            *pfVar9 = *pfVar7 * fVar4 + *pfVar9;
            pfVar9[1] = pfVar9[1] + fVar1 * fVar4;
            pfVar9[2] = fVar2 * fVar4 + pfVar9[2];
            pfVar9[3] = fVar3 * fVar4 + pfVar9[3];
          } while (iVar10 != 0);
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar5);
  }
  iVar10 = param_2[1];
  if (iVar10 != 0) {
    iVar11 = 0;
    do {
      fVar4 = *(float *)(*param_2 + 4 + iVar11);
      pfVar7 = (float *)(*param_2 + iVar11);
      fVar4 = 1.0 / SQRT(pfVar7[3] * pfVar7[3] +
                         pfVar7[2] * pfVar7[2] + *pfVar7 * *pfVar7 + fVar4 * fVar4);
      *pfVar7 = *pfVar7 * fVar4;
      pfVar7[1] = pfVar7[1] * fVar4;
      pfVar7[2] = pfVar7[2] * fVar4;
      pfVar7[3] = fVar4 * pfVar7[3];
      fVar4 = *(float *)(iVar11 + 0x14 + *param_2);
      pfVar7 = (float *)(iVar11 + 0x10 + *param_2);
      iVar11 = iVar11 + 0x38;
      iVar10 = iVar10 + -1;
      fVar4 = 1.0 / SQRT(pfVar7[3] * pfVar7[3] +
                         pfVar7[2] * pfVar7[2] + *pfVar7 * *pfVar7 + fVar4 * fVar4);
      *pfVar7 = *pfVar7 * fVar4;
      pfVar7[1] = fVar4 * pfVar7[1];
      pfVar7[2] = fVar4 * pfVar7[2];
      pfVar7[3] = fVar4 * pfVar7[3];
    } while (iVar10 != 0);
  }
  return;
}

