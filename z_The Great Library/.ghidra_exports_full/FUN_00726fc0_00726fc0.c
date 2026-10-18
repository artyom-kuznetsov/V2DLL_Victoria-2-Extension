// FUN_00726fc0 @ 00726fc0 body=[[00726fc0, 00726fe9] [00726ff0, 007270a7]]


void FUN_00726fc0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int unaff_ESI;
  int iVar9;
  uint uVar10;
  
  iVar7 = param_1 - unaff_ESI >> 2;
  iVar9 = iVar7 - (param_1 - unaff_ESI >> 0x1f) >> 1;
  if (0 < iVar9) {
    iVar5 = iVar9 * 2 + 2;
    do {
      iVar9 = iVar9 + -1;
      iVar5 = iVar5 + -2;
      iVar4 = iVar9;
      for (iVar6 = iVar5; iVar6 < iVar7; iVar6 = iVar6 * 2 + 2) {
        iVar1 = *(int *)(DAT_012588e8 + 0xbcc);
        uVar8 = (uint)*(byte *)(*(int *)(*(int *)(*(int *)(unaff_ESI + -4 + iVar6 * 4) + 0x28) + 8)
                                + 0x5bc + iVar1);
        iVar2 = *(int *)(iVar1 + 0x5fc);
        uVar10 = (uint)*(byte *)(*(int *)(*(int *)(*(int *)(unaff_ESI + iVar6 * 4) + 0x28) + 8) +
                                 0x5bc + iVar1);
        iVar3 = *(int *)(iVar2 + 4 + uVar8 * 8);
        iVar1 = *(int *)(iVar2 + 4 + uVar10 * 8);
        if ((iVar3 <= iVar1) &&
           ((iVar3 < iVar1 || (*(uint *)(iVar2 + uVar8 * 8) < *(uint *)(iVar2 + uVar10 * 8))))) {
          iVar6 = iVar6 + -1;
        }
        *(undefined4 *)(unaff_ESI + iVar4 * 4) = *(undefined4 *)(unaff_ESI + iVar6 * 4);
        iVar4 = iVar6;
      }
      if (iVar6 == iVar7) {
        *(undefined4 *)(unaff_ESI + iVar4 * 4) = *(undefined4 *)(unaff_ESI + -4 + iVar7 * 4);
      }
      FUN_007290e0();
    } while (0 < iVar9);
  }
  return;
}

