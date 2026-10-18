// FUN_007cfef0 @ 007cfef0 body=[[007cfef0, 007cff16] [007cff20, 007d0009]]


void FUN_007cfef0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_EDI;
  
  iVar4 = in_ECX - unaff_EDI >> 2;
  iVar5 = iVar4 - (in_ECX - unaff_EDI >> 0x1f) >> 1;
  if (0 < iVar5) {
    iVar6 = iVar5 * 2 + 2;
    do {
      iVar5 = iVar5 + -1;
      iVar6 = iVar6 + -2;
      iVar3 = iVar5;
      for (iVar7 = iVar6; iVar7 < iVar4; iVar7 = iVar7 * 2 + 2) {
        iVar1 = *(int *)(unaff_EDI + iVar7 * 4);
        iVar2 = *(int *)(unaff_EDI + -4 + iVar7 * 4);
        if (*(int *)(iVar1 + 0x178) + *(int *)(iVar1 + 0x174) + *(int *)(iVar1 + 0x170) +
            *(int *)(iVar1 + 0x16c) + *(int *)(iVar1 + 0x168) + *(int *)(iVar1 + 0x164) +
            *(int *)(iVar1 + 0x160) + *(int *)(iVar1 + 0x15c) + *(int *)(iVar1 + 0x158) <
            *(int *)(iVar2 + 0x178) + *(int *)(iVar2 + 0x174) + *(int *)(iVar2 + 0x170) +
            *(int *)(iVar2 + 0x16c) + *(int *)(iVar2 + 0x168) + *(int *)(iVar2 + 0x164) +
            *(int *)(iVar2 + 0x160) + *(int *)(iVar2 + 0x15c) + *(int *)(iVar2 + 0x158)) {
          iVar7 = iVar7 + -1;
        }
        *(undefined4 *)(unaff_EDI + iVar3 * 4) = *(undefined4 *)(unaff_EDI + iVar7 * 4);
        iVar3 = iVar7;
      }
      if (iVar7 == iVar4) {
        *(undefined4 *)(unaff_EDI + iVar3 * 4) = *(undefined4 *)(unaff_EDI + -4 + iVar4 * 4);
      }
      FUN_007d21d0();
    } while (0 < iVar5);
  }
  return;
}

