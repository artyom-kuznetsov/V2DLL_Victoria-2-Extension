// FUN_009d4e40 @ 009d4e40 body=[[009d4e40, 009d4e66] [009d4e70, 009d4e9c] [009d4ea0, 009d4f84]]


/* WARNING: Removing unreachable block (ram,0x009d4ed1) */

void FUN_009d4e40(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int unaff_EDI;
  bool bVar11;
  
  iVar7 = in_ECX - unaff_EDI >> 3;
  iVar8 = iVar7 - (in_ECX - unaff_EDI >> 0x1f) >> 1;
  if (0 < iVar8) {
    iVar9 = iVar8 * 2 + 2;
    do {
      iVar8 = iVar8 + -1;
      iVar9 = iVar9 + -2;
      iVar5 = iVar8;
      for (iVar10 = iVar9; iVar10 < iVar7; iVar10 = iVar10 * 2 + 2) {
        iVar1 = *(int *)(unaff_EDI + iVar10 * 8);
        iVar2 = *(int *)(unaff_EDI + -8 + iVar10 * 8);
        if (iVar1 == iVar2) {
          uVar3 = *(uint *)(*(int *)(unaff_EDI + 4 + iVar10 * 8) + 0x18);
          uVar4 = *(uint *)(*(int *)(unaff_EDI + -4 + iVar10 * 8) + 0x18);
          uVar6 = uVar3;
          if (uVar4 < uVar3) {
            uVar6 = uVar4;
          }
          uVar6 = FUN_00414bd0(uVar6);
          if (uVar6 == 0) {
            if (uVar4 < uVar3) {
              bVar11 = true;
              goto LAB_009d4f22;
            }
            uVar6 = (uint)(uVar4 != uVar3);
          }
          bVar11 = (int)uVar6 < 0;
        }
        else {
          bVar11 = iVar2 < iVar1;
        }
LAB_009d4f22:
        if (bVar11) {
          iVar10 = iVar10 + -1;
        }
        *(undefined4 *)(unaff_EDI + iVar5 * 8) = *(undefined4 *)(unaff_EDI + iVar10 * 8);
        *(undefined4 *)(unaff_EDI + 4 + iVar5 * 8) = *(undefined4 *)(unaff_EDI + 4 + iVar10 * 8);
        iVar5 = iVar10;
      }
      if (iVar10 == iVar7) {
        *(undefined4 *)(unaff_EDI + iVar5 * 8) = *(undefined4 *)(unaff_EDI + -8 + iVar7 * 8);
        *(undefined4 *)(unaff_EDI + 4 + iVar5 * 8) = *(undefined4 *)(unaff_EDI + -4 + iVar7 * 8);
      }
      FUN_009d5300();
    } while (0 < iVar8);
  }
  return;
}

