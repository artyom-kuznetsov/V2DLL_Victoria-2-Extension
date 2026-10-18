// FUN_00b1a210 @ 00b1a210 body=[[00b1a210, 00b1a499]]


/* WARNING: Removing unreachable block (ram,0x00b1a340) */
/* WARNING: Removing unreachable block (ram,0x00b1a363) */
/* WARNING: Removing unreachable block (ram,0x00b1a3d7) */
/* WARNING: Removing unreachable block (ram,0x00b1a3f8) */
/* WARNING: Removing unreachable block (ram,0x00b1a418) */

void FUN_00b1a210(float *param_1,uint param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  
  uVar5 = 1;
  uVar7 = param_2 - 2;
  if (1 < uVar7) {
    do {
      uVar6 = uVar5 + 2;
      param_1[uVar5] = param_1[uVar5] - (param_1[uVar5 - 1] + param_1[uVar5 + 1]) * 1.5861343;
      uVar5 = uVar6;
    } while (uVar6 < uVar7);
  }
  uVar5 = 2;
  param_1[param_2 - 1] = param_1[param_2 - 1] - param_1[param_2 - 2] * 3.1722686;
  if (2 < param_2) {
    do {
      uVar6 = uVar5 + 2;
      param_1[uVar5] = param_1[uVar5] - (param_1[uVar5 - 1] + param_1[uVar5 + 1]) * 0.052980117;
      uVar5 = uVar6;
    } while (uVar6 < param_2);
  }
  uVar5 = 1;
  *param_1 = *param_1 - param_1[1] * 0.105960235;
  if (1 < uVar7) {
    do {
      uVar6 = uVar5 + 2;
      param_1[uVar5] = (param_1[uVar5 - 1] + param_1[uVar5 + 1]) * 0.8829111 + param_1[uVar5];
      uVar5 = uVar6;
    } while (uVar6 < uVar7);
  }
  uVar7 = 2;
  param_1[param_2 - 1] = param_1[param_2 - 2] * 1.7658222 + param_1[param_2 - 1];
  if (2 < param_2) {
    do {
      uVar5 = uVar7 + 2;
      param_1[uVar7] = (param_1[uVar7 - 1] + param_1[uVar7 + 1]) * 0.44350687 + param_1[uVar7];
      uVar7 = uVar5;
    } while (uVar5 < param_2);
  }
  uVar7 = 0;
  *param_1 = param_1[1] * 0.88701373 + *param_1;
  fVar3 = 0.86986446;
  fVar2 = 1.1496044;
  if (3 < (int)param_2) {
    pfVar8 = param_1 + 2;
    do {
      pfVar8[-2] = pfVar8[-2] * 1.1496044;
      uVar5 = uVar7 - 1 & 1;
      fVar4 = fVar2;
      if (uVar5 != 0) {
        fVar4 = fVar3;
      }
      pfVar8[-1] = pfVar8[-1] * fVar4;
      *pfVar8 = *pfVar8 * 1.1496044;
      fVar4 = fVar2;
      if (uVar5 != 0) {
        fVar4 = fVar3;
      }
      pfVar8[1] = pfVar8[1] * fVar4;
      uVar7 = uVar7 + 4;
      pfVar8 = pfVar8 + 4;
    } while (uVar7 < param_2 - 3);
  }
  for (; uVar7 < param_2; uVar7 = uVar7 + 1) {
    fVar4 = fVar2;
    if ((uVar7 & 1) != 0) {
      fVar4 = fVar3;
    }
    param_1[uVar7] = param_1[uVar7] * fVar4;
  }
  uVar7 = 0;
  if (3 < (int)param_2) {
    iVar1 = *(int *)(in_ECX + 4);
    uVar5 = 2;
    pfVar8 = param_1 + 2;
    do {
      *(float *)(iVar1 + (uVar7 >> 1) * 4) = pfVar8[-2];
      *(float *)(iVar1 + ((uVar5 - 1 >> 1) + (param_2 >> 1)) * 4) = pfVar8[-1];
      *(float *)(iVar1 + (uVar5 >> 1) * 4) = *pfVar8;
      *(float *)(iVar1 + ((uVar5 + 1 >> 1) + (param_2 >> 1)) * 4) = pfVar8[1];
      uVar7 = uVar7 + 4;
      pfVar8 = pfVar8 + 4;
      uVar5 = uVar5 + 4;
    } while (uVar7 < param_2 - 3);
  }
  if (uVar7 < param_2) {
    iVar1 = *(int *)(in_ECX + 4);
    do {
      pfVar8 = param_1 + uVar7;
      uVar5 = uVar7 >> 1;
      if ((uVar7 & 1) != 0) {
        uVar5 = uVar5 + (param_2 >> 1);
      }
      uVar7 = uVar7 + 1;
      *(float *)(iVar1 + uVar5 * 4) = *pfVar8;
    } while (uVar7 < param_2);
  }
  FID_conflict__memcpy(param_1,*(void **)(in_ECX + 4),param_2 * 4);
  return;
}

