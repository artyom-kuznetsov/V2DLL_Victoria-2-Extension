// FUN_009bbe30 @ 009bbe30 body=[[009bbe30, 009bbedf]]


void FUN_009bbe30(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x40) != 0) {
    return;
  }
  iVar1 = (*(int *)(unaff_EDI + 0x10) - *(int *)(unaff_EDI + 0xc)) / 0x18;
  iVar3 = 0;
  if (iVar1 < 1) {
    return;
  }
  piVar2 = (int *)(*(int *)(unaff_EDI + 0xc) + 4);
  while (*piVar2 != *(int *)(unaff_EDI + 0x3c)) {
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 6;
    if (iVar1 <= iVar3) {
      return;
    }
  }
  if (iVar3 < 0) {
    return;
  }
  iVar3 = iVar3 * 0x18;
  FUN_009bbdb0(unaff_EDI,iVar3 + *(int *)(unaff_EDI + 0xc));
  if (*(int *)(unaff_EDI + 0x40) != 0) {
    return;
  }
  iVar1 = *(int *)(unaff_EDI + 0xc);
  iVar5 = 1000;
  iVar4 = *(int *)(iVar1 + 0xc + iVar3) - *(int *)(iVar1 + 8 + iVar3) >> 2;
  if (0 < iVar4) {
    piVar2 = *(int **)(iVar1 + 8 + iVar3);
    do {
      if (*piVar2 < iVar5) {
        iVar5 = *piVar2;
      }
      piVar2 = piVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (iVar5 != 1000) goto LAB_009bbecc;
  }
  iVar5 = 0x3c;
LAB_009bbecc:
  *(int *)(unaff_EDI + 0x40) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)(unaff_EDI + 0x40) = 0x3c;
  }
  return;
}

