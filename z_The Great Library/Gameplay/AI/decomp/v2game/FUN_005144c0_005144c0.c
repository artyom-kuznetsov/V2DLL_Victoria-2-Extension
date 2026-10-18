// FUN_005144c0 @ 005144c0 body=[[005144c0, 00514542]]


uint FUN_005144c0(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  uVar2 = (*(int *)(unaff_ESI + 0x664) + -43800000) / 0x18;
  if ((int)((double)(int)uVar2 / 365.0) < 6) {
    for (piVar1 = *(int **)(*(int *)(unaff_ESI + 0xbd0) + 0x10); uVar2 = 0, piVar1 != (int *)0x0;
        piVar1 = (int *)piVar1[2]) {
      if (*piVar1 == *(int *)(unaff_EDI + 0x54)) {
        uVar2 = DAT_012588e8;
        if (*(int *)(unaff_ESI + 0x4bc) + 0x2238 <= *(int *)(DAT_012588e8 + 0xb0c)) {
          if ((*(int *)(unaff_ESI + 0x84c) != unaff_EDI) &&
             (*(char *)(*(int *)(unaff_ESI + 0xbd0) + 0xc) != '\0')) {
            return 1;
          }
          return 0;
        }
        break;
      }
    }
  }
  return uVar2 & 0xffffff00;
}

