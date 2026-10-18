// FUN_005c81e0 @ 005c81e0 body=[[005c81e0, 005c8326]]


void FUN_005c81e0(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *unaff_EDI;
  undefined1 local_5;
  
  cVar2 = (**(code **)(*unaff_EDI + 0x3c))();
  if (cVar2 != '\0') {
    return;
  }
  cVar2 = (**(code **)(*unaff_EDI + 0x38))();
  if ((cVar2 != '\0') && (iVar3 = (**(code **)(*unaff_EDI + 0x2c))(), *(int *)(iVar3 + 0x1b4) != 0))
  {
    *(undefined1 *)(unaff_EDI + 0x59) = 0;
    return;
  }
  if ((char)unaff_EDI[0x59] == '\0') {
    cVar2 = FUN_0051b040(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + unaff_EDI[0x31] * 4));
    if (cVar2 != '\0') {
      return;
    }
    FUN_005cf880();
    return;
  }
  iVar3 = unaff_EDI[0x37];
  iVar1 = unaff_EDI[0x31];
  if ((*(int *)(iVar3 + 0x134) != iVar1) &&
     (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar3 + 0x134) * 4)
                                + 0xbe8) + iVar1 * 4) + 0x34) == 0)) {
    local_5 = 1;
    cVar2 = FUN_0051b040(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4));
    if ((cVar2 == '\0') || (iVar3 = *(int *)(iVar3 + 0xe8), iVar3 == 0)) goto LAB_005c82c1;
    if (*(char *)(iVar3 + 0x38) != '\0') {
      iVar3 = *(int *)(iVar3 + 0x14);
      do {
        if (iVar3 == 0) goto LAB_005c82c1;
        iVar3 = *(int *)(iVar3 + 8);
        iVar4 = FUN_0048e120();
      } while (*(int *)(iVar4 + 4) != iVar1);
    }
  }
  local_5 = 0;
LAB_005c82c1:
  if ((((char)unaff_EDI[0x30] == 'R') && (*(char *)((int)unaff_EDI + 0xc1) == 'E')) &&
     (*(char *)((int)unaff_EDI + 0xc2) == 'B')) {
    local_5 = 0;
  }
  *(undefined1 *)(unaff_EDI + 0x59) = local_5;
  return;
}

