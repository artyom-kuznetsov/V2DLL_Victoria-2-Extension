// FUN_008b88a0 @ 008b88a0 body=[[008b88a0, 008b88e2]]


undefined4 FUN_008b88a0(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
  if (0 < iVar3) {
    do {
      cVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar2 * 4) + 0x18))(param_1);
      if (cVar1 == '\x01') {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  return 0;
}

