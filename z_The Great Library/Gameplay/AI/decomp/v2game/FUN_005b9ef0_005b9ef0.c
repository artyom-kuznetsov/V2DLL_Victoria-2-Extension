// FUN_005b9ef0 @ 005b9ef0 body=[[005b9ef0, 005b9f1e]]


int FUN_005b9ef0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 8) != 0) && (iVar2 = FUN_005ba0a0(), iVar2 != 0)) {
    if (*(int *)(in_ECX + 4) == 0) {
      return iVar2;
    }
    iVar1 = **(int **)(in_ECX + 4);
    FUN_005ba1d0(iVar2);
    return iVar1;
  }
  return 0;
}

