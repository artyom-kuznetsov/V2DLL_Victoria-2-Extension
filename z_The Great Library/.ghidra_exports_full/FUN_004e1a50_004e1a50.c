// FUN_004e1a50 @ 004e1a50 body=[[004e1a50, 004e1b16]]


undefined4 FUN_004e1a50(void)

{
  int iVar1;
  char cVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar1 = *(int *)(*(int *)(unaff_EDI + 0x30) + 0xf8);
  if (iVar1 == 1) {
    if (*(int *)(*(int *)(unaff_ESI + 0x1f0) + *(int *)(*(int *)(unaff_EDI + 0x4c) + 8) * 4) == 0) {
      return 0;
    }
    goto LAB_004e1add;
  }
  if (iVar1 != 5) {
    if (iVar1 == 0) {
      if (*(int *)(unaff_ESI + 300) != *(int *)(unaff_EDI + 0x3c)) {
        return 0;
      }
      goto LAB_004e1add;
    }
    if (iVar1 == 3) {
      if (*(int *)(unaff_ESI + 300) != *(int *)(unaff_EDI + 0x3c)) {
        return 0;
      }
      if (*(int *)(*(int *)(unaff_ESI + 0x1f0) + *(int *)(*(int *)(unaff_EDI + 0x4c) + 8) * 4) == 0)
      {
        return 0;
      }
      goto LAB_004e1add;
    }
    if (iVar1 != 4) goto LAB_004e1add;
    if (*(int *)(unaff_ESI + 300) != *(int *)(unaff_EDI + 0x3c)) {
      return 0;
    }
  }
  if (*(int *)(*(int *)(unaff_ESI + 0x1ec) + *(int *)(*(int *)(unaff_EDI + 0x50) + 8) * 4) == 0) {
    return 0;
  }
LAB_004e1add:
  cVar2 = FUN_004e19d0(*(undefined4 *)(unaff_ESI + 0x128),*(undefined4 *)(unaff_ESI + 300));
  if ((cVar2 != '\0') &&
     (cVar2 = FUN_004e19d0(*(undefined4 *)(unaff_ESI + 0x130),*(undefined4 *)(unaff_ESI + 0x134)),
     cVar2 != '\0')) {
    return 0;
  }
  return 1;
}

