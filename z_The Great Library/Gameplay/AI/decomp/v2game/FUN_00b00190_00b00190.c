// FUN_00b00190 @ 00b00190 body=[[00b00190, 00b00245]]


void FUN_00b00190(int param_1,int param_2,int param_3)

{
  float fVar1;
  float *pfVar2;
  
  if (param_2 == 1) {
    FUN_00ad8ea0(param_1,param_3 * 4);
  }
  FUN_00b18f80(param_1,param_3);
  if (param_3 != 0) {
    pfVar2 = (float *)(param_1 + 8);
    do {
      fVar1 = 1.0 / SQRT(*pfVar2 * *pfVar2 + pfVar2[-1] * pfVar2[-1] + pfVar2[-2] * pfVar2[-2] +
                         pfVar2[1] * pfVar2[1]);
      pfVar2[-2] = pfVar2[-2] * fVar1;
      pfVar2[-1] = fVar1 * pfVar2[-1];
      *pfVar2 = *pfVar2 * fVar1;
      pfVar2[1] = fVar1 * pfVar2[1];
      if (pfVar2[1] < 0.0) {
        pfVar2[-2] = -pfVar2[-2];
        pfVar2[-1] = -pfVar2[-1];
        *pfVar2 = -*pfVar2;
        pfVar2[1] = -pfVar2[1];
      }
      pfVar2 = pfVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

