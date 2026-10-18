// FUN_00728290 @ 00728290 body=[[00728290, 007282bc] [007282c0, 0072838a]]


void FUN_00728290(void)

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
  uint uVar9;
  int unaff_ESI;
  int iVar10;
  uint uVar11;
  
  iVar7 = in_ECX - unaff_ESI >> 2;
  iVar10 = iVar7 - (in_ECX - unaff_ESI >> 0x1f) >> 1;
  if (0 < iVar10) {
    iVar5 = iVar10 * 2 + 2;
    iVar8 = DAT_012588e8;
    do {
      iVar10 = iVar10 + -1;
      iVar5 = iVar5 + -2;
      iVar3 = iVar10;
      iVar4 = DAT_012588e8;
      for (iVar6 = iVar5; DAT_012588e8 = iVar4, iVar6 < iVar7; iVar6 = iVar6 * 2 + 2) {
        iVar8 = *(int *)(iVar8 + 0xb60) * 0x58 + *(int *)(*(int *)(iVar8 + 0xbcc) + 0x3f4);
        uVar9 = (uint)*(byte *)(*(int *)(*(int *)(*(int *)(unaff_ESI + -4 + iVar6 * 4) + 0x28) + 8)
                                + 8 + iVar8);
        iVar1 = *(int *)(iVar8 + 0x48);
        uVar11 = (uint)*(byte *)(*(int *)(*(int *)(*(int *)(unaff_ESI + iVar6 * 4) + 0x28) + 8) + 8
                                + iVar8);
        iVar2 = *(int *)(iVar1 + 4 + uVar9 * 8);
        iVar8 = *(int *)(iVar1 + 4 + uVar11 * 8);
        if ((iVar2 <= iVar8) &&
           ((iVar2 < iVar8 || (*(uint *)(iVar1 + uVar9 * 8) < *(uint *)(iVar1 + uVar11 * 8))))) {
          iVar6 = iVar6 + -1;
        }
        *(undefined4 *)(unaff_ESI + iVar3 * 4) = *(undefined4 *)(unaff_ESI + iVar6 * 4);
        iVar3 = iVar6;
        iVar8 = iVar4;
        iVar4 = DAT_012588e8;
      }
      if (iVar6 == iVar7) {
        *(undefined4 *)(unaff_ESI + iVar3 * 4) = *(undefined4 *)(unaff_ESI + -4 + iVar7 * 4);
      }
      FUN_00729610();
    } while (0 < iVar10);
  }
  return;
}

