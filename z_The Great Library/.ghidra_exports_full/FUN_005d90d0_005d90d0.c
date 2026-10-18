// FUN_005d90d0 @ 005d90d0 body=[[005d90d0, 005d9112]]


undefined4 FUN_005d90d0(void)

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
      if ((*(int *)(iVar1 + 0x3c) < iVar2) || (*(int *)(iVar1 + 0x40) < 1000)) {
        return 0;
      }
    } while (piVar3 != (int *)0x0);
  }
  return 1;
}

