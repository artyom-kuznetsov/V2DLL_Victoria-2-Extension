// FUN_005d59e0 @ 005d59e0 body=[[005d59e0, 005d5a22]]


undefined4 FUN_005d59e0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  piVar3 = *(int **)(in_ECX + 0x38);
  if (piVar3 != (int *)0x0) {
    FUN_00401000(0x42c90000);
    iVar2 = FUN_00b31c00();
    do {
      iVar1 = *piVar3;
      piVar3 = (int *)piVar3[2];
      if ((iVar2 <= *(int *)(iVar1 + 0x3c)) && (999 < *(int *)(iVar1 + 0x40))) {
        return 1;
      }
    } while (piVar3 != (int *)0x0);
  }
  return 0;
}

