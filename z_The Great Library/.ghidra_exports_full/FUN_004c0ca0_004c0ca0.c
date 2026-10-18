// FUN_004c0ca0 @ 004c0ca0 body=[[004c0ca0, 004c0cc8] [004c0cd0, 004c0d7a]]


void FUN_004c0ca0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  int iVar9;
  
  iVar5 = in_EAX - in_ECX >> 3;
  iVar9 = iVar5 - (in_EAX - in_ECX >> 0x1f) >> 1;
  if (0 < iVar9) {
    iVar6 = iVar9 * 2 + 2;
    iVar8 = in_ECX + iVar9 * 8;
    do {
      iVar2 = *(int *)(iVar8 + -8);
      uVar3 = *(undefined4 *)(iVar8 + -4);
      iVar6 = iVar6 + -2;
      iVar9 = iVar9 + -1;
      iVar4 = iVar6;
      iVar1 = iVar9;
      while (iVar7 = iVar4, iVar7 < iVar5) {
        if (*(int *)(in_ECX + -8 + iVar7 * 8) < *(int *)(in_ECX + iVar7 * 8)) {
          iVar7 = iVar7 + -1;
        }
        *(undefined4 *)(in_ECX + iVar1 * 8) = *(undefined4 *)(in_ECX + iVar7 * 8);
        *(undefined4 *)(in_ECX + 4 + iVar1 * 8) = *(undefined4 *)(in_ECX + 4 + iVar7 * 8);
        iVar1 = iVar7;
        iVar4 = iVar7 * 2 + 2;
      }
      if (iVar7 == iVar5) {
        *(undefined4 *)(in_ECX + iVar1 * 8) = *(undefined4 *)(in_ECX + -8 + iVar5 * 8);
        *(undefined4 *)(in_ECX + 4 + iVar1 * 8) = *(undefined4 *)(in_ECX + -4 + iVar5 * 8);
        iVar1 = iVar5 + -1;
      }
      while (iVar9 < iVar1) {
        iVar7 = (iVar1 + -1) / 2;
        iVar4 = *(int *)(in_ECX + iVar7 * 8);
        if (iVar4 <= iVar2) break;
        *(int *)(in_ECX + iVar1 * 8) = iVar4;
        *(undefined4 *)(in_ECX + 4 + iVar1 * 8) = *(undefined4 *)(in_ECX + 4 + iVar7 * 8);
        iVar1 = iVar7;
      }
      *(int *)(in_ECX + iVar1 * 8) = iVar2;
      *(undefined4 *)(in_ECX + 4 + iVar1 * 8) = uVar3;
      iVar8 = iVar8 + -8;
    } while (0 < iVar9);
  }
  return;
}

