// FUN_00ae8b70 @ 00ae8b70 body=[[00ae8b70, 00ae8bad]]


undefined4 FUN_00ae8b70(void)

{
  int iVar1;
  int in_ECX;
  
  if ((*(int *)(*(int *)(in_ECX + 0x1c) + 4) != 0) &&
     (iVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x1c) + 4) + 0x10))(), iVar1 != 0)) {
    return 1;
  }
  if ((*(int *)(*(int *)(in_ECX + 0x1c) + 0xc) != 0) &&
     (iVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x1c) + 0xc) + 0x10))(), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

