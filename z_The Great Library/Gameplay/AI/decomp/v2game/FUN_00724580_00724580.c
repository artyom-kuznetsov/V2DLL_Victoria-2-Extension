// FUN_00724580 @ 00724580 body=[[00724580, 007245f1]]


void FUN_00724580(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  
  iVar2 = 0;
  iVar4 = 2;
  iVar3 = iVar2;
  if (2 < param_1) {
    do {
      cVar1 = FUN_00719d30(*(undefined4 *)(unaff_EDI + -4 + iVar4 * 4));
      iVar2 = iVar4;
      if (cVar1 != '\0') {
        iVar2 = iVar4 + -1;
      }
      *(undefined4 *)(unaff_EDI + iVar3 * 4) = *(undefined4 *)(unaff_EDI + iVar2 * 4);
      iVar4 = iVar2 * 2 + 2;
      iVar3 = iVar2;
    } while (iVar4 < param_1);
  }
  if (iVar4 == param_1) {
    *(undefined4 *)(unaff_EDI + iVar2 * 4) = *(undefined4 *)(unaff_EDI + -4 + param_1 * 4);
  }
  FUN_00724de0();
  return;
}

