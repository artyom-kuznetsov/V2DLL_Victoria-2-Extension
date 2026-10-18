// FUN_006fa0e0 @ 006fa0e0 body=[[006fa0e0, 006fa162]]


void FUN_006fa0e0(int *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(int **)(in_ECX + 0xb0) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0xb0) + 0x1c))(0);
    FUN_006f9370();
  }
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x34))();
  if (puVar1[2] == 0) {
    *(undefined4 *)(in_ECX + 0xb0) = 0;
  }
  else {
    *(undefined4 *)(in_ECX + 0xb0) = *(undefined4 *)*puVar1;
  }
  if (*(int *)(in_ECX + 0xb0) != 0) {
    FUN_006fa290(in_ECX + -0x24,*(undefined4 *)(*(int *)(in_ECX + 0xb0) + 0x2c));
    FUN_006fa170();
    return;
  }
  FUN_006fa290(in_ECX + -0x24,0);
  FUN_006fa170();
  return;
}

