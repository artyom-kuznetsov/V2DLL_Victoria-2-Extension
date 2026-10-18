// FUN_0045cb00 @ 0045cb00 body=[[0045cb00, 0045cb28] [0045cb30, 0045cbde]]


void FUN_0045cb00(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  int iVar9;
  
  iVar4 = in_EAX - in_ECX >> 3;
  iVar9 = iVar4 - (in_EAX - in_ECX >> 0x1f) >> 1;
  if (0 < iVar9) {
    iVar5 = iVar9 * 2 + 2;
    iVar8 = in_ECX + iVar9 * 8;
    do {
      uVar2 = *(undefined4 *)(iVar8 + -8);
      iVar3 = *(int *)(iVar8 + -4);
      iVar5 = iVar5 + -2;
      iVar9 = iVar9 + -1;
      iVar7 = iVar5;
      iVar1 = iVar9;
      while (iVar6 = iVar7, iVar6 < iVar4) {
        if (*(int *)(in_ECX + -4 + iVar6 * 8) < *(int *)(in_ECX + 4 + iVar6 * 8)) {
          iVar6 = iVar6 + -1;
        }
        *(undefined4 *)(in_ECX + iVar1 * 8) = *(undefined4 *)(in_ECX + iVar6 * 8);
        *(undefined4 *)(in_ECX + 4 + iVar1 * 8) = *(undefined4 *)(in_ECX + 4 + iVar6 * 8);
        iVar1 = iVar6;
        iVar7 = iVar6 * 2 + 2;
      }
      if (iVar6 == iVar4) {
        *(undefined4 *)(in_ECX + iVar1 * 8) = *(undefined4 *)(in_ECX + -8 + iVar4 * 8);
        *(undefined4 *)(in_ECX + 4 + iVar1 * 8) = *(undefined4 *)(in_ECX + -4 + iVar4 * 8);
        iVar1 = iVar4 + -1;
      }
      while ((iVar9 < iVar1 && (iVar7 = (iVar1 + -1) / 2, iVar3 < *(int *)(in_ECX + 4 + iVar7 * 8)))
            ) {
        *(undefined4 *)(in_ECX + iVar1 * 8) = *(undefined4 *)(in_ECX + iVar7 * 8);
        *(undefined4 *)(in_ECX + 4 + iVar1 * 8) = *(undefined4 *)(in_ECX + 4 + iVar7 * 8);
        iVar1 = iVar7;
      }
      *(undefined4 *)(in_ECX + iVar1 * 8) = uVar2;
      *(int *)(in_ECX + 4 + iVar1 * 8) = iVar3;
      iVar8 = iVar8 + -8;
    } while (0 < iVar9);
  }
  return;
}

