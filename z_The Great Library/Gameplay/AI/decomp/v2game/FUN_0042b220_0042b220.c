// FUN_0042b220 @ 0042b220 body=[[0042b220, 0042b26d]]


bool FUN_0042b220(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if ((*(int *)(unaff_ESI + 0x18) != iVar1) && (*(int *)(unaff_ESI + 0x20) != iVar1)) {
    iVar2 = *(int *)(unaff_ESI + 0x30);
    iVar4 = *(int *)(unaff_ESI + 0x2c);
    if (iVar4 != iVar2) {
      do {
        if (*(int *)(iVar4 + 4) == iVar1) break;
        iVar4 = iVar4 + 8;
      } while (iVar4 != iVar2);
      if (iVar4 != iVar2) {
        return true;
      }
    }
    cVar3 = FUN_0042bb00();
    if (cVar3 == '\0') {
      cVar3 = FUN_0042bb00();
      return cVar3 != '\0';
    }
  }
  return true;
}

