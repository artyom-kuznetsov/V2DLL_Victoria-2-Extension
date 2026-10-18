// FUN_009e5330 @ 009e5330 body=[[009e5330, 009e5372]]


undefined2 * FUN_009e5330(undefined2 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x248) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x248) + 0xf4))(param_1);
    return param_1;
  }
  uVar1 = *(undefined4 *)(in_ECX + 0x4a4);
  *param_1 = *(undefined2 *)(in_ECX + 0x4a0);
  param_1[1] = (short)uVar1;
  return param_1;
}

