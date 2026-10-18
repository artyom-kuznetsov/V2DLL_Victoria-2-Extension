// FUN_008b8260 @ 008b8260  (requested 008B8260, first bytes: 55 8B EC 53 56 8B D9 8B)


undefined4 FUN_008b8260(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      cVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar3 * 4) + 0x18))(param_1);
      if (cVar1 == '\0') {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return 1;
}

