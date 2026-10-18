// FUN_00b138b0 @ 00b138b0 body=[[00b138b0, 00b138db]]


int FUN_00b138b0(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  if ((*in_ECX != 0) && (param_1 != 0)) {
    iVar1 = FUN_00aafe90(*in_ECX,param_1);
    if (iVar1 != 0) {
      return iVar1 - *in_ECX;
    }
  }
  return -1;
}

