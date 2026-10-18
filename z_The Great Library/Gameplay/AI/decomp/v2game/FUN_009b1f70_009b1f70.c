// FUN_009b1f70 @ 009b1f70 body=[[009b1f70, 009b1f9d]]


undefined4 * FUN_009b1f70(undefined4 *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x3c))(param_1);
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}

