// FUN_00595b90 @ 00595b90  (requested 00595B90, first bytes: 55 8B EC 51 53 56 8B 71)


int FUN_00595b90(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x20);
  iVar4 = 0;
  iVar5 = -0xf3e58;
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    cVar6 = (**(code **)(**(int **)(iVar2 + 0xd8) + 0x20))();
    if (cVar6 != '\0') {
      iVar2 = *(int *)(iVar2 + 0xd8);
      iVar3 = *(int *)(iVar2 + 0xd0);
      if (iVar5 < iVar3) {
        iVar4 = iVar2;
        iVar5 = iVar3;
      }
    }
  }
  return iVar4;
}

