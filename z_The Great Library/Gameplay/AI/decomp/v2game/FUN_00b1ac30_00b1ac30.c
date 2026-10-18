// FUN_00b1ac30 @ 00b1ac30 body=[[00b1ac30, 00b1ad2c]]


void FUN_00b1ac30(void *param_1,uint param_2)

{
  float *pfVar1;
  int in_ECX;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  
  uVar5 = param_2 >> 1;
  iVar7 = 0;
  uVar4 = 0;
  if (3 < uVar5) {
    iVar2 = (uVar5 - 4 >> 2) + 1;
    uVar4 = iVar2 * 4;
    pfVar1 = *(float **)(in_ECX + 4);
    pfVar3 = (float *)((int)param_1 + uVar5 * 4);
    pfVar6 = (float *)((int)param_1 + 8);
    do {
      iVar7 = iVar7 + 8;
      iVar2 = iVar2 + -1;
      *pfVar1 = *pfVar3 * 0.5 + pfVar6[-2];
      pfVar1[1] = pfVar6[-2] - *pfVar3 * 0.5;
      pfVar1[2] = pfVar3[1] * 0.5 + pfVar6[-1];
      pfVar1[3] = pfVar6[-1] - pfVar3[1] * 0.5;
      pfVar1[4] = pfVar3[2] * 0.5 + *pfVar6;
      pfVar1[5] = *pfVar6 - pfVar3[2] * 0.5;
      pfVar1[6] = pfVar3[3] * 0.5 + pfVar6[1];
      pfVar1[7] = pfVar6[1] - pfVar3[3] * 0.5;
      pfVar1 = pfVar1 + 8;
      pfVar3 = pfVar3 + 4;
      pfVar6 = pfVar6 + 4;
    } while (iVar2 != 0);
  }
  if (uVar4 < uVar5) {
    pfVar1 = (float *)((int)param_1 + (uVar4 + uVar5) * 4);
    pfVar3 = (float *)(*(int *)(in_ECX + 4) + iVar7 * 4);
    do {
      uVar4 = uVar4 + 1;
      *pfVar3 = *pfVar1 * 0.5 + *(float *)((int)param_1 + uVar4 * 4 + -4);
      pfVar3[1] = *(float *)((int)param_1 + uVar4 * 4 + -4) - *pfVar1 * 0.5;
      pfVar1 = pfVar1 + 1;
      pfVar3 = pfVar3 + 2;
    } while (uVar4 < uVar5);
  }
  FID_conflict__memcpy(param_1,*(void **)(in_ECX + 4),param_2 * 4);
  return;
}

