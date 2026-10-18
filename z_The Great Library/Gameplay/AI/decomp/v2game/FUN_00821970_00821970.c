// FUN_00821970 @ 00821970 body=[[00821970, 00821a0a]]


void FUN_00821970(void)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_EDI;
  
  iVar3 = in_ECX - unaff_EDI >> 2;
  iVar4 = iVar3 - (in_ECX - unaff_EDI >> 0x1f) >> 1;
  if (0 < iVar4) {
    iVar5 = iVar4 * 2 + 2;
    do {
      iVar4 = iVar4 + -1;
      iVar5 = iVar5 + -2;
      iVar1 = iVar4;
      for (iVar6 = iVar5; iVar6 < iVar3; iVar6 = iVar6 * 2 + 2) {
        cVar2 = FUN_0081dec0();
        if (cVar2 != '\0') {
          iVar6 = iVar6 + -1;
        }
        *(undefined4 *)(unaff_EDI + iVar1 * 4) = *(undefined4 *)(unaff_EDI + iVar6 * 4);
        iVar1 = iVar6;
      }
      if (iVar6 == iVar3) {
        *(undefined4 *)(unaff_EDI + iVar1 * 4) = *(undefined4 *)(unaff_EDI + -4 + iVar3 * 4);
      }
      FUN_00821bf0();
    } while (0 < iVar4);
  }
  return;
}

