// FUN_00952f10 @ 00952f10 body=[[00952f10, 00952fb2]]


uint FUN_00952f10(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int unaff_ESI;
  
  if (((*(int *)(unaff_ESI + 0x1c) == 0) || (*(int *)(unaff_ESI + 0x24) == 0)) ||
     (uVar4 = *(uint *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                         *(int *)(unaff_ESI + 0x1c) * 4) + 0xbe8) +
                       *(int *)(unaff_ESI + 0x24) * 4), *(int *)(uVar4 + 0x34) != 0)) {
    uVar4 = 0;
    if (*(int *)(unaff_ESI + 0xc) != 0) {
      piVar1 = *(int **)(*(int *)(unaff_ESI + 0xc) + 0x120);
      for (piVar2 = piVar1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
        if (*piVar2 == 0x8a3) {
          return 1;
        }
      }
      for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
        if (*piVar1 == 0x8a7) {
          return 1;
        }
      }
      cVar3 = FUN_0090a800();
      if ((cVar3 == '\0') && (*(int *)(*(int *)(unaff_ESI + 0xc) + 0x1d8) == 0)) {
        return 0;
      }
      return 1;
    }
  }
  return uVar4 & 0xffffff00;
}

