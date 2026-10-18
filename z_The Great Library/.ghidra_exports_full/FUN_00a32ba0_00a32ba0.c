// FUN_00a32ba0 @ 00a32ba0 body=[[00a32ba0, 00a32c13]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00a32ba0(void)

{
  int iVar1;
  int iVar2;
  int in_EDX;
  int *piVar3;
  int unaff_EDI;
  
  iVar2 = 0;
  iVar1 = *(int *)(in_EDX + 0xbc) - *(int *)(in_EDX + 0xb8) >> 5;
  if (0 < iVar1) {
    piVar3 = *(int **)(in_EDX + 0xb8);
    do {
      if (*piVar3 == unaff_EDI) {
        return *(int **)(in_EDX + 0xb8) + iVar2 * 8 + 1;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 8;
    } while (iVar2 < iVar1);
  }
  if ((_DAT_013f1c18 & 1) == 0) {
    _DAT_013f1c18 = _DAT_013f1c18 | 1;
    DAT_013f1c10 = 0xf;
    _DAT_013f1c0c = 0;
    DAT_013f1bfc._0_1_ = 0;
    _atexit((_func_4879 *)&LAB_00c878e0);
  }
  return &DAT_013f1bfc;
}

