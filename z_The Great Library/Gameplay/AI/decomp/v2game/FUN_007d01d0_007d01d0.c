// FUN_007d01d0 @ 007d01d0 body=[[007d01d0, 007d01fa] [007d0200, 007d0278] [007d0280, 007d02c7]]


void FUN_007d01d0(int param_1)

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
  
  iVar7 = param_1 - in_ECX >> 2;
  iVar8 = iVar7 - (param_1 - in_ECX >> 0x1f) >> 1;
  if (0 < iVar8) {
    iVar4 = iVar8 * 2 + 2;
    do {
      iVar1 = *(int *)(in_ECX + -4 + iVar8 * 4);
      iVar8 = iVar8 + -1;
      iVar4 = iVar4 + -2;
      iVar9 = iVar8;
      for (iVar5 = iVar4; iVar5 < iVar7; iVar5 = iVar5 * 2 + 2) {
        iVar2 = *(int *)(in_ECX + -4 + iVar5 * 4);
        iVar3 = *(int *)(*(int *)(in_ECX + iVar5 * 4) + 300);
        iVar6 = *(int *)(iVar2 + 300);
        if ((iVar3 <= iVar6) &&
           ((iVar3 < iVar6 ||
            (*(uint *)(*(int *)(in_ECX + iVar5 * 4) + 0x128) < *(uint *)(iVar2 + 0x128))))) {
          iVar5 = iVar5 + -1;
        }
        *(undefined4 *)(in_ECX + iVar9 * 4) = *(undefined4 *)(in_ECX + iVar5 * 4);
        iVar9 = iVar5;
      }
      if (iVar5 == iVar7) {
        *(undefined4 *)(in_ECX + iVar9 * 4) = *(undefined4 *)(in_ECX + -4 + iVar7 * 4);
        iVar9 = iVar7 + -1;
      }
      if (iVar8 < iVar9) {
        while( true ) {
          iVar6 = (iVar9 + -1) / 2;
          iVar5 = *(int *)(*(int *)(in_ECX + iVar6 * 4) + 300);
          if (*(int *)(iVar1 + 300) < iVar5) break;
          if (((*(int *)(iVar1 + 300) <= iVar5) &&
              (*(uint *)(iVar1 + 0x128) <= *(uint *)(*(int *)(in_ECX + iVar6 * 4) + 0x128))) ||
             (*(undefined4 *)(in_ECX + iVar9 * 4) = *(undefined4 *)(in_ECX + iVar6 * 4),
             iVar9 = iVar6, iVar6 <= iVar8)) break;
        }
      }
      *(int *)(in_ECX + iVar9 * 4) = iVar1;
    } while (0 < iVar8);
  }
  return;
}

