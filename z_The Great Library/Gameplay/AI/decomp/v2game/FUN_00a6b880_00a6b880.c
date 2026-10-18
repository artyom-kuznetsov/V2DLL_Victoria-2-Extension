// FUN_00a6b880 @ 00a6b880 body=[[00a6b880, 00a6b928]]


int * FUN_00a6b880(int *param_1)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_00401000(DAT_00f141c8);
  iVar1 = FUN_00b31c00();
  if (in_ECX[2] != iVar1) {
    iVar1 = *in_ECX;
    iVar3 = *in_EAX - iVar1;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    iVar4 = iVar1;
    for (iVar5 = in_ECX[3]; iVar5 != 0; iVar5 = iVar5 + -1) {
      iVar2 = *in_EAX - iVar1;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if (iVar2 < iVar3) {
        iVar3 = iVar2;
        iVar4 = iVar1;
      }
      iVar1 = iVar1 + in_ECX[2];
    }
    *param_1 = iVar4;
    return param_1;
  }
  iVar1 = *in_EAX;
  if (iVar1 < in_ECX[1]) {
    if (*in_ECX < iVar1) {
      *param_1 = iVar1;
      return param_1;
    }
    *param_1 = *in_ECX;
    return param_1;
  }
  *param_1 = in_ECX[1];
  return param_1;
}

