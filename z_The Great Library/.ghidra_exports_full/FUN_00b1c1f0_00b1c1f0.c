// FUN_00b1c1f0 @ 00b1c1f0 body=[[00b1c1f0, 00b1c2ed]]


void FUN_00b1c1f0(int param_1,uint param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  
  fVar1 = 3.4028235e+38;
  fVar2 = -3.4028235e+38;
  uVar5 = 0;
  if (3 < (int)param_2) {
    iVar4 = (param_2 - 4 >> 2) + 1;
    pfVar3 = (float *)(param_1 + 8);
    uVar5 = iVar4 * 4;
    do {
      if (pfVar3[-2] < fVar1) {
        fVar1 = pfVar3[-2];
      }
      if (fVar2 < pfVar3[-2]) {
        fVar2 = pfVar3[-2];
      }
      if (pfVar3[-1] < fVar1) {
        fVar1 = pfVar3[-1];
      }
      if (fVar2 < pfVar3[-1]) {
        fVar2 = pfVar3[-1];
      }
      if (*pfVar3 < fVar1) {
        fVar1 = *pfVar3;
      }
      if (fVar2 < *pfVar3) {
        fVar2 = *pfVar3;
      }
      if (pfVar3[1] < fVar1) {
        fVar1 = pfVar3[1];
      }
      if (fVar2 < pfVar3[1]) {
        fVar2 = pfVar3[1];
      }
      pfVar3 = pfVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  for (; uVar5 < param_2; uVar5 = uVar5 + 1) {
    if (*(float *)(param_1 + uVar5 * 4) < fVar1) {
      fVar1 = *(float *)(param_1 + uVar5 * 4);
    }
    if (fVar2 < *(float *)(param_1 + uVar5 * 4)) {
      fVar2 = *(float *)(param_1 + uVar5 * 4);
    }
  }
  *param_3 = fVar1;
  *param_4 = fVar2;
  return;
}

