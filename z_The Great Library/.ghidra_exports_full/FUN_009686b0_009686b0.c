// FUN_009686b0 @ 009686b0 body=[[009686b0, 009686da] [009686e0, 00968778]]


void FUN_009686b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  
  iVar6 = param_1 - in_ECX >> 2;
  iVar7 = iVar6 - (param_1 - in_ECX >> 0x1f) >> 1;
  if (0 < iVar7) {
    iVar3 = iVar7 * 2 + 2;
    do {
      iVar2 = *(int *)(in_ECX + -4 + iVar7 * 4);
      iVar7 = iVar7 + -1;
      iVar3 = iVar3 + -2;
      iVar1 = iVar7;
      for (iVar4 = iVar3; iVar4 < iVar6; iVar4 = iVar4 * 2 + 2) {
        if (*(int *)(*(int *)(in_ECX + -4 + iVar4 * 4) + 0x1438) <
            *(int *)(*(int *)(in_ECX + iVar4 * 4) + 0x1438)) {
          iVar4 = iVar4 + -1;
        }
        *(undefined4 *)(in_ECX + iVar1 * 4) = *(undefined4 *)(in_ECX + iVar4 * 4);
        iVar1 = iVar4;
      }
      if (iVar4 == iVar6) {
        *(undefined4 *)(in_ECX + iVar1 * 4) = *(undefined4 *)(in_ECX + -4 + iVar6 * 4);
        iVar1 = iVar6 + -1;
      }
      while (iVar7 < iVar1) {
        iVar5 = (iVar1 + -1) / 2;
        iVar4 = *(int *)(in_ECX + iVar5 * 4);
        if (*(int *)(iVar4 + 0x1438) <= *(int *)(iVar2 + 0x1438)) break;
        *(int *)(in_ECX + iVar1 * 4) = iVar4;
        iVar1 = iVar5;
      }
      *(int *)(in_ECX + iVar1 * 4) = iVar2;
    } while (0 < iVar7);
  }
  return;
}

