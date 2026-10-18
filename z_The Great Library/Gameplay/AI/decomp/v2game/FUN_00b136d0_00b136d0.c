// FUN_00b136d0 @ 00b136d0 body=[[00b136d0, 00b13713]]


void FUN_00b136d0(uint param_1)

{
  int iVar1;
  int *in_ECX;
  
  if (((uint)in_ECX[2] < param_1) || (*in_ECX == 0)) {
    in_ECX[2] = param_1;
    if (*in_ECX != 0) {
      iVar1 = (*(code *)PTR_FUN_00f01b0c)(*in_ECX);
      *in_ECX = iVar1;
      return;
    }
    iVar1 = (*(code *)PTR_FUN_00f01b08)(param_1,2,4,1,0,0xffffffff);
    *in_ECX = iVar1;
  }
  return;
}

