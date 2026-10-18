// FUN_008d6430 @ 008d6430 body=[[008d6430, 008d647a]]


undefined4 FUN_008d6430(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
  piVar2 = *(int **)(iVar1 + 0xec);
  do {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iVar3 = *piVar2;
    piVar2 = (int *)piVar2[2];
  } while ((*(int *)(iVar3 + 0x74) == 0) || (*(int *)(iVar3 + 0xc4) != *(int *)(iVar1 + 300)));
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}

