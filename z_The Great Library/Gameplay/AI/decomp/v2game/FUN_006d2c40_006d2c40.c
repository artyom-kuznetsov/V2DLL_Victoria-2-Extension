// FUN_006d2c40 @ 006d2c40 body=[[006d2c40, 006d2c79]]


void FUN_006d2c40(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x4c) + 0x24))();
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x18) + 0x38))();
  if (*(int **)(in_ECX + 0x2d0) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x2d0) + 4))(1);
  }
  *(undefined4 *)(in_ECX + 0x2d0) = 0;
  return;
}

