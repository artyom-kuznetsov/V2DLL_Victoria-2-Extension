// FUN_00ae8af0 @ 00ae8af0 body=[[00ae8af0, 00ae8b6c]]


undefined4 FUN_00ae8af0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  param_1 = param_1 * 0x20;
  if ((((*(int *)(param_1 + 0xc + *(int *)(in_ECX + 0x1c)) != 0) &&
       (iVar1 = (**(code **)(**(int **)(param_1 + *(int *)(in_ECX + 0x1c) + 0xc) + 0x10))(),
       iVar1 != 0)) && (*(int *)(param_1 + 0x1c + *(int *)(in_ECX + 0x1c)) != 0)) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + *(int *)(in_ECX + 0x1c) + 0x1c) + 0x10))(),
     iVar1 != 0)) {
    if (*(int *)(param_1 + 0x1c + *(int *)(in_ECX + 0x1c)) != 0) {
      (**(code **)(**(int **)(param_1 + *(int *)(in_ECX + 0x1c) + 0x1c) + 0x10))();
    }
    iVar1 = FUN_00aeaf90();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

