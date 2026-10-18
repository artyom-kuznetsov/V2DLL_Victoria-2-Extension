// FUN_00b2f980 @ 00b2f980 body=[[00b2f980, 00b2f9b0]]


bool FUN_00b2f980(int *param_1,int param_2,code *param_3)

{
  int iVar1;
  
  *param_1 = param_2;
  if (param_2 == 0) {
    param_1[1] = 0;
    return true;
  }
  iVar1 = (*param_3)(param_2);
  param_1[1] = iVar1;
  return iVar1 != 0;
}

