// FUN_00b1c3f0 @ 00b1c3f0 body=[[00b1c3f0, 00b1c4b6]]


void FUN_00b1c3f0(int param_1,uint param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  float local_8;
  float local_4;
  
  FUN_00b1c1f0(param_1,param_2,&local_8,&local_4);
  local_8 = ABS(local_8);
  if (local_8 < ABS(local_4)) {
    local_8 = ABS(local_4);
  }
  if (local_8 <= 1e-05) {
    *param_3 = local_8;
    return;
  }
  uVar3 = 0;
  fVar1 = 1.0 / local_8;
  if (3 < (int)param_2) {
    iVar4 = (param_2 - 4 >> 2) + 1;
    uVar3 = iVar4 * 4;
    pfVar2 = (float *)(param_1 + 8);
    do {
      iVar4 = iVar4 + -1;
      pfVar2[-2] = pfVar2[-2] * fVar1;
      pfVar2[-1] = pfVar2[-1] * fVar1;
      *pfVar2 = *pfVar2 * fVar1;
      pfVar2[1] = pfVar2[1] * fVar1;
      pfVar2 = pfVar2 + 4;
    } while (iVar4 != 0);
  }
  if (param_2 <= uVar3) {
    *param_3 = local_8;
    return;
  }
  do {
    iVar4 = uVar3 * 4;
    uVar3 = uVar3 + 1;
    *(float *)(param_1 + -4 + uVar3 * 4) = *(float *)(param_1 + iVar4) * fVar1;
  } while (uVar3 < param_2);
  *param_3 = local_8;
  return;
}

