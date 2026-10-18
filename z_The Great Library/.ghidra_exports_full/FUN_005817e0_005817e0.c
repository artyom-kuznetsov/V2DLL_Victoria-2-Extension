// FUN_005817e0 @ 005817e0 body=[[005817e0, 00581866]]


void FUN_005817e0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x48) == '\0') {
    for (piVar2 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4) +
                           0xe54); (piVar2 != (int *)0x0 && (*piVar2 != *(int *)(in_ECX + 0x44)));
        piVar2 = (int *)piVar2[2]) {
    }
    FUN_005f2ae0(piVar2);
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
    iVar3 = *(int *)(in_ECX + 0x44);
    for (piVar2 = *(int **)(iVar1 + 0xe54); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      if (*piVar2 == iVar3) {
        return;
      }
    }
    if (iVar3 != *(int *)(iVar1 + 0xe64)) {
      FUN_00522310(iVar3);
      return;
    }
  }
  return;
}

