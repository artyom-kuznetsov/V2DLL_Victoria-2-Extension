// FUN_00490d40 @ 00490d40 body=[[00490d40, 00490d5c] [00490d60, 00490db2]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00490d40(void)

{
  char *pcVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int unaff_EDI;
  
  if (*(uint *)(unaff_EDI + 0x44) < 0x10) {
    iVar5 = unaff_EDI + 0x30;
  }
  else {
    iVar5 = *(int *)(unaff_EDI + 0x30);
  }
  uVar2 = 0;
  iVar4 = 0;
  if (0 < *(int *)(unaff_EDI + 0x40)) {
    do {
      pcVar1 = (char *)(iVar4 + iVar5);
      iVar4 = iVar4 + 1;
      uVar2 = (uVar2 + (int)*pcVar1) * 0x3d;
    } while (iVar4 < *(int *)(unaff_EDI + 0x40));
  }
  uVar2 = uVar2 % DAT_0125bc5c;
  piVar3 = (int *)FUN_00aae9af(8);
  if (piVar3 == (int *)0x0) {
    *(undefined4 *)(DAT_0125bc60 + uVar2 * 4) = 0;
    _DAT_0125bc58 = _DAT_0125bc58 + 1;
    return;
  }
  iVar5 = *(int *)(DAT_0125bc60 + uVar2 * 4);
  *piVar3 = unaff_EDI;
  piVar3[1] = iVar5;
  *(int **)(DAT_0125bc60 + uVar2 * 4) = piVar3;
  _DAT_0125bc58 = _DAT_0125bc58 + 1;
  return;
}

