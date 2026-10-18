// FUN_00842a00 @ 00842a00  (requested 00842A00, first bytes: 55 8B EC A1 E4 87 25 01)


undefined4 FUN_00842a00(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_2 * 4);
  if (*(char *)(iVar1 + 0x67c) == '\0') {
    piVar2 = *(int **)(iVar1 + 0x4a4);
    while (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      piVar2 = (int *)piVar2[2];
      if (*(int *)(iVar1 + 0xc) == *(int *)(in_ECX + 0x14)) {
        return 100;
      }
    }
  }
  return 0;
}

