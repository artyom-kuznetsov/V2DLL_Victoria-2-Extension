// FUN_00727770 @ 00727770 body=[[00727770, 0072779c] [007277a0, 0072789f]]


void FUN_00727770(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int unaff_EDI;
  
  iVar6 = DAT_012588e8;
  iVar7 = in_ECX - unaff_EDI >> 2;
  iVar10 = iVar7 - (in_ECX - unaff_EDI >> 0x1f) >> 1;
  if (0 < iVar10) {
    iVar8 = iVar10 * 2 + 2;
    do {
      iVar10 = iVar10 + -1;
      iVar8 = iVar8 + -2;
      iVar5 = iVar10;
      for (iVar9 = iVar8; iVar9 < iVar7; iVar9 = iVar9 * 2 + 2) {
        iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar6 + 0xb60) * 4);
        iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar6 + 0xb60) * 4);
        uVar11 = (uint)*(byte *)(*(int *)(*(int *)(*(int *)(unaff_EDI + -4 + iVar9 * 4) + 0x28) + 8)
                                 + 0x118c + iVar1);
        iVar3 = *(int *)(iVar1 + 0x11cc);
        uVar12 = (uint)*(byte *)(*(int *)(*(int *)(*(int *)(unaff_EDI + iVar9 * 4) + 0x28) + 8) +
                                 0x118c + iVar2);
        iVar2 = *(int *)(iVar2 + 0x11cc);
        iVar4 = *(int *)(iVar3 + 4 + uVar11 * 8);
        iVar1 = *(int *)(iVar2 + 4 + uVar12 * 8);
        if ((iVar4 <= iVar1) &&
           ((iVar4 < iVar1 || (*(uint *)(iVar3 + uVar11 * 8) < *(uint *)(iVar2 + uVar12 * 8))))) {
          iVar9 = iVar9 + -1;
        }
        *(undefined4 *)(unaff_EDI + iVar5 * 4) = *(undefined4 *)(unaff_EDI + iVar9 * 4);
        iVar5 = iVar9;
      }
      if (iVar9 == iVar7) {
        *(undefined4 *)(unaff_EDI + iVar5 * 4) = *(undefined4 *)(unaff_EDI + -4 + iVar7 * 4);
      }
      FUN_00729300();
    } while (0 < iVar10);
  }
  return;
}

