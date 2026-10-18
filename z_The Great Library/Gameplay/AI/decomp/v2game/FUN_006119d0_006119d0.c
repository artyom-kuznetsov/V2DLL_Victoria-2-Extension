// FUN_006119d0 @ 006119d0 body=[[006119d0, 006119fa] [00611a00, 00611acb]]


void FUN_006119d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar8 = param_1 - in_ECX >> 2;
  iVar10 = iVar8 - (param_1 - in_ECX >> 0x1f) >> 1;
  if (0 < iVar10) {
    iVar5 = iVar10 * 2 + 2;
    do {
      iVar2 = *(int *)(in_ECX + -4 + iVar10 * 4);
      iVar10 = iVar10 + -1;
      iVar5 = iVar5 + -2;
      iVar9 = iVar10;
      for (iVar6 = iVar5; iVar6 < iVar8; iVar6 = iVar6 * 2 + 2) {
        iVar3 = *(int *)(*(int *)(in_ECX + -4 + iVar6 * 4) + 0x30);
        iVar4 = *(int *)(*(int *)(in_ECX + iVar6 * 4) + 0x30);
        iVar7 = *(int *)(iVar3 + 0x1c);
        iVar1 = *(int *)(iVar4 + 0x1c);
        if ((iVar7 <= iVar1) &&
           ((iVar7 < iVar1 || (*(uint *)(iVar3 + 0x18) < *(uint *)(iVar4 + 0x18))))) {
          iVar6 = iVar6 + -1;
        }
        *(undefined4 *)(in_ECX + iVar9 * 4) = *(undefined4 *)(in_ECX + iVar6 * 4);
        iVar9 = iVar6;
      }
      if (iVar6 == iVar8) {
        *(undefined4 *)(in_ECX + iVar9 * 4) = *(undefined4 *)(in_ECX + -4 + iVar8 * 4);
        iVar9 = iVar8 + -1;
      }
      if (iVar10 < iVar9) {
        while( true ) {
          iVar7 = (iVar9 + -1) / 2;
          iVar1 = *(int *)(in_ECX + iVar7 * 4);
          iVar3 = *(int *)(iVar1 + 0x30);
          iVar4 = *(int *)(*(int *)(iVar2 + 0x30) + 0x1c);
          iVar6 = *(int *)(iVar3 + 0x1c);
          if (iVar6 < iVar4) break;
          if (((iVar6 <= iVar4) &&
              (*(uint *)(iVar3 + 0x18) <= *(uint *)(*(int *)(iVar2 + 0x30) + 0x18))) ||
             (*(int *)(in_ECX + iVar9 * 4) = iVar1, iVar9 = iVar7, iVar7 <= iVar10)) break;
        }
      }
      *(int *)(in_ECX + iVar9 * 4) = iVar2;
    } while (0 < iVar10);
  }
  return;
}

