// FUN_004cb480 @ 004cb480 body=[[004cb480, 004cb497] [004cb4a0, 004cb4c2]]


void FUN_004cb480(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  piVar3 = *(int **)(in_ECX + 8);
  iVar2 = 0;
  if (piVar3 != (int *)0x0) {
    do {
      iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar3 * 4);
      piVar3 = (int *)piVar3[2];
      if ((*(int *)(iVar1 + 300) == 0) && (iVar1 = *(int *)(iVar1 + 0x1a4), iVar2 < iVar1)) {
        iVar2 = iVar1;
      }
    } while (piVar3 != (int *)0x0);
  }
  return;
}

