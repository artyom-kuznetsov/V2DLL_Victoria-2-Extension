// FUN_00414e20 @ 00414e20 body=[[00414e20, 00414e67]]


undefined1 * FUN_00414e20(undefined1 *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1c) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1c))(param_1);
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00409350(&DAT_00ded94d,0);
  return param_1;
}

