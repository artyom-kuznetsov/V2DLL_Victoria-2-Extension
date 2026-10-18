// FUN_00425b40 @ 00425b40 body=[[00425b40, 00425bb7]]


bool FUN_00425b40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4);
  if ((*(char *)(iVar2 + 0x31) != '\0') && (*(int *)(unaff_ESI + 0x18) != iVar1)) {
    iVar3 = *(int *)(unaff_ESI + 0x30);
    iVar5 = *(int *)(unaff_ESI + 0x2c);
    if (iVar5 != iVar3) {
      do {
        if (*(int *)(iVar5 + 4) == iVar1) break;
        iVar5 = iVar5 + 8;
      } while (iVar5 != iVar3);
      if (iVar5 != iVar3) {
        return false;
      }
    }
    if (((*(int *)(unaff_ESI + 0x20) != iVar1) && (cVar4 = FUN_0042bb00(), cVar4 == '\0')) &&
       (cVar4 = FUN_0042bb00(), cVar4 == '\0')) {
      return *(char *)(iVar2 + 0x67c) == '\0';
    }
  }
  return false;
}

