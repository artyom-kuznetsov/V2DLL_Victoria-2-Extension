// FUN_007cf300 @ 007cf300 body=[[007cf300, 007cf32a] [007cf330, 007cf3a8] [007cf3b0, 007cf3f7]]


void FUN_007cf300(int param_1)

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
        iVar3 = *(int *)(*(int *)(in_ECX + iVar5 * 4) + 0x134);
        iVar6 = *(int *)(iVar2 + 0x134);
        if ((iVar3 <= iVar6) &&
           ((iVar3 < iVar6 ||
            (*(uint *)(*(int *)(in_ECX + iVar5 * 4) + 0x130) < *(uint *)(iVar2 + 0x130))))) {
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
          iVar5 = *(int *)(*(int *)(in_ECX + iVar6 * 4) + 0x134);
          if (*(int *)(iVar1 + 0x134) < iVar5) break;
          if (((*(int *)(iVar1 + 0x134) <= iVar5) &&
              (*(uint *)(iVar1 + 0x130) <= *(uint *)(*(int *)(in_ECX + iVar6 * 4) + 0x130))) ||
             (*(undefined4 *)(in_ECX + iVar9 * 4) = *(undefined4 *)(in_ECX + iVar6 * 4),
             iVar9 = iVar6, iVar6 <= iVar8)) break;
        }
      }
      *(int *)(in_ECX + iVar9 * 4) = iVar1;
    } while (0 < iVar8);
  }
  return;
}

