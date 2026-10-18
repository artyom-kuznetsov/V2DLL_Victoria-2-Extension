// FUN_0048cc90 @ 0048cc90 body=[[0048cc90, 0048cccc] [0048ccd0, 0048cd07] [0048cd10, 0048cdc5]]


void FUN_0048cc90(void)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_EAX;
  int iVar7;
  int iVar8;
  int iVar9;
  int unaff_ESI;
  bool bVar10;
  bool bVar11;
  
  iVar5 = (in_EAX - unaff_ESI) / 0x14;
  iVar9 = iVar5 / 2;
  if (0 < iVar9) {
    iVar7 = iVar9 * 2 + 2;
    do {
      iVar9 = iVar9 + -1;
      iVar7 = iVar7 + -2;
      iVar6 = iVar9;
      for (iVar8 = iVar7; iVar8 < iVar5; iVar8 = iVar8 * 2 + 2) {
        iVar3 = *(int *)(unaff_ESI + 4 + iVar8 * 0x14);
        iVar4 = *(int *)(unaff_ESI + -0x10 + iVar8 * 0x14);
        iVar1 = unaff_ESI + iVar8 * 0x14;
        if (iVar3 == iVar4) {
          bVar10 = *(uint *)(iVar1 + 8) < *(uint *)(iVar1 + -0xc);
          bVar11 = false;
          if (*(uint *)(iVar1 + 8) == *(uint *)(iVar1 + -0xc)) {
            bVar10 = *(uint *)(iVar1 + 0xc) < *(uint *)(iVar1 + -8);
            bVar11 = false;
            if (*(uint *)(iVar1 + 0xc) == *(uint *)(iVar1 + -8)) {
              bVar10 = *(uint *)(iVar1 + 0x10) < *(uint *)(iVar1 + -4);
              bVar11 = *(uint *)(iVar1 + 0x10) == *(uint *)(iVar1 + -4);
            }
          }
          bVar11 = !bVar10 && !bVar11;
        }
        else {
          bVar11 = iVar4 < iVar3;
        }
        if (bVar11) {
          iVar8 = iVar8 + -1;
        }
        iVar1 = unaff_ESI + iVar8 * 0x14;
        puVar2 = (undefined8 *)(unaff_ESI + iVar6 * 0x14);
        *puVar2 = *(undefined8 *)(unaff_ESI + iVar8 * 0x14);
        puVar2[1] = *(undefined8 *)(iVar1 + 8);
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(iVar1 + 0x10);
        iVar6 = iVar8;
      }
      if (iVar8 == iVar5) {
        iVar8 = unaff_ESI + -0x14 + iVar5 * 0x14;
        puVar2 = (undefined8 *)(unaff_ESI + iVar6 * 0x14);
        *puVar2 = *(undefined8 *)(unaff_ESI + -0x14 + iVar5 * 0x14);
        puVar2[1] = *(undefined8 *)(iVar8 + 8);
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(iVar8 + 0x10);
      }
      FUN_0048cfa0();
    } while (0 < iVar9);
  }
  return;
}

