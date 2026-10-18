// FUN_00867d60 @ 00867d60 body=[[00867d60, 00867dc5]]


undefined1 FUN_00867d60(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int unaff_EDI;
  
  if ((-1 < *(int *)(unaff_EDI + 0x38)) && (*(char *)(unaff_EDI + 0x3c) == '\0')) {
    FUN_008682f0();
    cVar4 = FUN_00867500();
    if (cVar4 != '\0') {
      iVar2 = *(int *)(unaff_EDI + 0x38);
      piVar5 = (int *)FUN_008682f0();
      iVar3 = *(int *)(*piVar5 + 0xa4);
      if ((iVar3 != 3) && (uVar1 = iVar2 + 1, uVar1 < *(uint *)(unaff_EDI + 0x30))) {
        *(uint *)(unaff_EDI + 0x38) = uVar1;
        FUN_00867dd0(unaff_EDI,uVar1,iVar3);
        return 0;
      }
      *(undefined1 *)(unaff_EDI + 0x3c) = 1;
      return 1;
    }
  }
  return *(undefined1 *)(unaff_EDI + 0x3c);
}

