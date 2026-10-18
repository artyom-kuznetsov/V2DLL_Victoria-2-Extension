// FUN_00a8d6b0 @ 00a8d6b0 body=[[00a8d6b0, 00a8d70c]]


int * FUN_00a8d6b0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *(int *)(in_ECX[1] + param_2 * 0x18);
  param_3 = param_3 - iVar1;
  if (0 < param_3) {
    (**(code **)(*in_ECX + 0xc))(param_1,param_2,param_3);
    return param_1;
  }
  if (param_3 < 0) {
    (**(code **)(*in_ECX + 0x10))(param_1,param_2,-param_3);
    return param_1;
  }
  *param_1 = iVar1;
  return param_1;
}

