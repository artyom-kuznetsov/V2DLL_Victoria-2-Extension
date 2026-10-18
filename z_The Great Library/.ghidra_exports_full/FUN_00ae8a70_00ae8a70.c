// FUN_00ae8a70 @ 00ae8a70 body=[[00ae8a70, 00ae8aeb]]


undefined4 FUN_00ae8a70(int param_1)

{
  int iVar1;
  int in_ECX;
  
  param_1 = param_1 * 0x20;
  if ((((*(int *)(*(int *)(in_ECX + 0x1c) + 4 + param_1) != 0) &&
       (iVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x1c) + 4 + param_1) + 0x10))(),
       iVar1 != 0)) && (*(int *)(*(int *)(in_ECX + 0x1c) + 0x14 + param_1) != 0)) &&
     (iVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x1c) + param_1 + 0x14) + 0x10))(),
     iVar1 != 0)) {
    if (*(int *)(*(int *)(in_ECX + 0x1c) + 0x14 + param_1) != 0) {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x1c) + param_1 + 0x14) + 0x10))();
    }
    iVar1 = FUN_00aeaf90();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

