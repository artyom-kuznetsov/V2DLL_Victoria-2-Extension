// FUN_009b1f40 @ 009b1f40 body=[[009b1f40, 009b1f69]]


undefined4 * FUN_009b1f40(undefined4 *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    (**(code **)(**(int **)(in_ECX + 4) + 0x60))(param_1);
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}

