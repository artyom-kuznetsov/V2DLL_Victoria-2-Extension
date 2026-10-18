// FUN_00b1c2f0 @ 00b1c2f0 body=[[00b1c2f0, 00b1c3a7]]


void FUN_00b1c2f0(int param_1,uint param_2,int param_3,float param_4,float param_5)

{
  short *psVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  
  param_4 = param_4 * 3.051851e-05;
  uVar4 = 0;
  if (3 < (int)param_2) {
    iVar3 = (param_2 - 4 >> 2) + 1;
    uVar4 = iVar3 * 4;
    psVar1 = (short *)(param_1 + 4);
    pfVar2 = (float *)(param_3 + 8);
    do {
      iVar3 = iVar3 + -1;
      pfVar2[-2] = (float)(int)psVar1[-2] * param_4 * param_5;
      pfVar2[-1] = (float)(int)psVar1[-1] * param_4 * param_5;
      *pfVar2 = (float)(int)*psVar1 * param_4 * param_5;
      pfVar2[1] = (float)(int)psVar1[1] * param_4 * param_5;
      psVar1 = psVar1 + 4;
      pfVar2 = pfVar2 + 4;
    } while (iVar3 != 0);
  }
  while (uVar4 < param_2) {
    iVar3 = uVar4 * 2;
    uVar4 = uVar4 + 1;
    *(float *)(param_3 + -4 + uVar4 * 4) =
         (float)(int)*(short *)(param_1 + iVar3) * param_4 * param_5;
  }
  return;
}

