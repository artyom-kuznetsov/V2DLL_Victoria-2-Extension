// FUN_00b08780 @ 00b08780 body=[[00b08780, 00b087ed]]


void FUN_00b08780(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  if (param_1 == 0) {
    in_ECX[1] = 0;
    in_ECX[2] = 0;
    if (iVar1 != 0) {
      (*(code *)PTR__free_00f01b10)(iVar1);
      *in_ECX = 0;
      return;
    }
  }
  else {
    if (iVar1 != 0) {
      iVar1 = (*(code *)PTR_FUN_00f01b0c)(iVar1,param_1 * 2,(short)in_ECX[3]);
      in_ECX[2] = param_1;
      *in_ECX = iVar1;
      return;
    }
    iVar1 = (*(code *)PTR_FUN_00f01b08)(param_1 * 2,(short)in_ECX[3],4,2,0,0xffffffff);
    *in_ECX = iVar1;
    in_ECX[2] = param_1;
  }
  return;
}

