// FUN_00b17720 @ 00b17720 body=[[00b17720, 00b179b3]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b17720(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *local_20;
  float local_1c [4];
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_00ef259c ^ (uint)&local_20;
  *param_3 = _DAT_00f02b18;
  param_3[1] = _DAT_00f02b1c;
  param_3[2] = _DAT_00f02b20;
  param_3[3] = _DAT_00f02b24;
  local_20 = param_1;
  iVar9 = 0x14;
  param_3[4] = _DAT_00f02b28;
  param_3[5] = _DAT_00f02b2c;
  param_3[6] = _DAT_00f02b30;
  param_3[7] = _DAT_00f02b34;
  param_3[8] = _DAT_00f02b38;
  param_3[9] = _DAT_00f02b3c;
  param_3[10] = _DAT_00f02b40;
  param_3[0xb] = _DAT_00f02b44;
  param_3[0xc] = _DAT_00f02b48;
  param_3[0xd] = _DAT_00f02b4c;
  param_3[0xe] = _DAT_00f02b50;
  param_3[0xf] = _DAT_00f02b54;
  local_1c[3] = (float)*param_2;
  local_c = param_2[5];
  local_8 = param_2[10];
  local_1c[0] = (float)param_2[6];
  local_1c[1] = (float)param_2[8];
  local_1c[2] = (float)param_2[1];
  do {
    if (ABS(local_1c[2]) + ABS(local_1c[0]) + ABS(local_1c[1]) == 0.0) break;
    iVar8 = 2;
    do {
      iVar7 = (int)(char)(&DAT_00f02b58)[iVar8];
      iVar10 = (int)(char)(&DAT_00f02b58)[iVar7];
      if (0.0 < ABS(local_1c[iVar8])) {
        fVar4 = local_1c[iVar10 + 3] - local_1c[iVar7 + 3];
        if (ABS(local_1c[iVar8]) * 100.0 + ABS(fVar4) == ABS(fVar4)) {
          fVar4 = local_1c[iVar8] / fVar4;
        }
        else {
          fVar3 = (fVar4 * 0.5) / local_1c[iVar8];
          fVar4 = 1.0 / (ABS(fVar3) + SQRT(fVar3 * fVar3 + 1.0));
          if (fVar3 < 0.0) {
            fVar4 = -fVar4;
          }
        }
        pfVar1 = (float *)(param_3 + iVar7 + 4);
        pfVar2 = (float *)(param_3 + iVar10 + 4);
        fVar3 = 1.0 / SQRT(fVar4 * fVar4 + 1.0);
        fVar5 = fVar3 * fVar4;
        fVar6 = fVar5 / (fVar3 + 1.0);
        fVar3 = local_1c[iVar8];
        local_1c[iVar8] = 0.0;
        local_1c[iVar7 + 3] = local_1c[iVar7 + 3] - fVar3 * fVar4;
        local_1c[iVar10 + 3] = fVar3 * fVar4 + local_1c[iVar10 + 3];
        fVar4 = local_1c[iVar10];
        local_1c[iVar10] = local_1c[iVar10] - (local_1c[iVar10] * fVar6 + local_1c[iVar7]) * fVar5;
        local_1c[iVar7] = (fVar4 - local_1c[iVar7] * fVar6) * fVar5 + local_1c[iVar7];
        fVar4 = (float)param_3[iVar7 + 8];
        fVar3 = (float)param_3[iVar10 + 8];
        param_3[iVar7 + 8] = (float)param_3[iVar7 + 8] - (fVar4 * fVar6 + fVar3) * fVar5;
        param_3[iVar10 + 8] = (fVar4 - fVar3 * fVar6) * fVar5 + (float)param_3[iVar10 + 8];
        fVar4 = *pfVar1;
        fVar3 = *pfVar2;
        *pfVar1 = *pfVar1 - (fVar4 * fVar6 + fVar3) * fVar5;
        *pfVar2 = (fVar4 - fVar3 * fVar6) * fVar5 + *pfVar2;
        fVar4 = (float)param_3[iVar7];
        fVar3 = (float)param_3[iVar10];
        param_3[iVar7] = (float)param_3[iVar7] - (fVar4 * fVar6 + fVar3) * fVar5;
        param_3[iVar10] = fVar5 * (fVar4 - fVar3 * fVar6) + (float)param_3[iVar10];
      }
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
    iVar9 = iVar9 + -1;
  } while (0 < iVar9);
  *param_1 = local_1c[3];
  param_1[1] = local_c;
  param_1[2] = local_8;
  param_1[3] = 0x3f800000;
  __security_check_cookie(local_4 ^ (uint)&local_20);
  return;
}

