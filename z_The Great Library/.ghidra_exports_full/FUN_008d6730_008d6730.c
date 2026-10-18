// FUN_008d6730 @ 008d6730 body=[[008d6730, 008d677a]]


undefined4 FUN_008d6730(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4) + 0xec)
  ;
  do {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    cVar3 = (**(code **)(**(int **)(iVar2 + 0xd8) + 0x20))();
  } while (cVar3 == '\0');
  return 1;
}

