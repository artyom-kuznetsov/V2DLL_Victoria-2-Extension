// FUN_0042b440 @ 0042b440 body=[[0042b440, 0042b467]]


undefined4 FUN_0042b440(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(DAT_012588e8 + 0xb3c);
  do {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
  } while (*(char *)(iVar2 + 0xfd) == '\0');
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}

