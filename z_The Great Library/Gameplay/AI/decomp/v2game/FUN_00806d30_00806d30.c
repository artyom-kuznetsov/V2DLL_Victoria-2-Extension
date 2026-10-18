// FUN_00806d30 @ 00806d30 body=[[00806d30, 00806ed3]]


void FUN_00806d30(undefined4 param_1,undefined4 param_2,double param_3,double param_4)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  int *unaff_EDI;
  float10 fVar3;
  float fVar4;
  undefined4 local_1c;
  
  if (*in_EAX == in_EAX[1]) {
    local_1c = (undefined4)(longlong)ROUND((param_4 + 1.0) * 8.0);
    FUN_00808c90(local_1c);
    iVar1 = 0;
    if (-1 < (int)param_4) {
      do {
        fVar3 = (float10)FUN_00b319b0();
        *(double *)(*in_EAX + iVar1 * 8) = (double)fVar3;
        iVar1 = iVar1 + 1;
      } while (iVar1 <= (int)param_4);
    }
  }
  iVar1 = (int)param_4;
  iVar2 = 0;
  if (0 < iVar1) {
    fVar4 = (float)param_3;
    do {
      FUN_00a2e8b0(unaff_EDI);
      *(float *)*unaff_EDI = *(float *)*unaff_EDI * fVar4;
      *(float *)(*unaff_EDI + 4) = *(float *)(*unaff_EDI + 4) * fVar4;
      iVar2 = iVar2 + 1;
      *(float *)(*unaff_EDI + 8) = fVar4 * *(float *)(*unaff_EDI + 8);
    } while (iVar2 < iVar1);
  }
  if (param_4 - (double)iVar1 != 0.0) {
    FUN_00a2e8b0(unaff_EDI);
  }
  return;
}

