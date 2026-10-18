// FUN_005268b0 @ 005268b0 body=[[005268b0, 005268ee]]


int FUN_005268b0(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = *(int *)(in_ECX + 0x854) - *(int *)(in_ECX + 0x850) >> 2;
  if (1 < iVar3) {
    piVar2 = *(int **)(in_ECX + 0x850);
    iVar3 = iVar3 + -1;
    do {
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + (*(int *)(*piVar2 + 0x50) -
                      *(int *)(**(int **)(*(int *)(*piVar2 + 0x54) + 8) + 0x50));
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}

