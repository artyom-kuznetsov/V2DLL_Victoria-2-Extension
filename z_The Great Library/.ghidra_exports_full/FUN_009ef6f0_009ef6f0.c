// FUN_009ef6f0 @ 009ef6f0 body=[[009ef6f0, 009ef72b]]


undefined4 * FUN_009ef6f0(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xa0) != 0) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0xa0) + 0x15c))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(**(int **)(in_ECX + 0xa0) + 0x15c))();
      return (undefined4 *)(iVar1 + 8);
    }
  }
  return &DAT_00f0f90c;
}

