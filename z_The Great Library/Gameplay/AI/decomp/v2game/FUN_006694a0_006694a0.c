// FUN_006694a0 @ 006694a0 body=[[006694a0, 006694fe]]


undefined4 FUN_006694a0(void)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xd7c) < *(int *)(in_ECX + 0xd84) - *(int *)(in_ECX + 0xd80) >> 2) {
    cVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0xd80) + *(int *)(in_ECX + 0xd7c) * 4) + 0x1c)
            )();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0xd80) + *(int *)(in_ECX + 0xd7c) * 4) + 0x2c))();
    }
  }
  iVar1 = *(int *)(in_ECX + 0x1d08);
  if ((iVar1 != 0) && (*(char *)(*(int *)(iVar1 + 0x20) + 0x67) != '\0')) {
    FUN_00740050(iVar1);
  }
  return 1;
}

