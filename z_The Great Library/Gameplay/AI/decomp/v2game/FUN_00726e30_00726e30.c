// FUN_00726e30 @ 00726e30 body=[[00726e30, 00726e5a] [00726e60, 00726efb]]


void FUN_00726e30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  
  iVar5 = param_1 - in_ECX >> 2;
  iVar6 = iVar5 - (param_1 - in_ECX >> 0x1f) >> 1;
  if (0 < iVar6) {
    iVar3 = iVar6 * 2 + 2;
    do {
      iVar2 = *(int *)(in_ECX + -4 + iVar6 * 4);
      iVar6 = iVar6 + -1;
      iVar3 = iVar3 + -2;
      iVar1 = iVar6;
      for (iVar4 = iVar3; iVar4 < iVar5; iVar4 = iVar4 * 2 + 2) {
        if (*(int *)(*(int *)(*(int *)(in_ECX + -4 + iVar4 * 4) + 0x28) + 8) <
            *(int *)(*(int *)(*(int *)(in_ECX + iVar4 * 4) + 0x28) + 8)) {
          iVar4 = iVar4 + -1;
        }
        *(undefined4 *)(in_ECX + iVar1 * 4) = *(undefined4 *)(in_ECX + iVar4 * 4);
        iVar1 = iVar4;
      }
      if (iVar4 == iVar5) {
        *(undefined4 *)(in_ECX + iVar1 * 4) = *(undefined4 *)(in_ECX + -4 + iVar5 * 4);
        iVar1 = iVar5 + -1;
      }
      while ((iVar6 < iVar1 &&
             (iVar4 = (iVar1 + -1) / 2,
             *(int *)(*(int *)(iVar2 + 0x28) + 8) <
             *(int *)(*(int *)(*(int *)(in_ECX + iVar4 * 4) + 0x28) + 8)))) {
        *(undefined4 *)(in_ECX + iVar1 * 4) = *(undefined4 *)(in_ECX + iVar4 * 4);
        iVar1 = iVar4;
      }
      *(int *)(in_ECX + iVar1 * 4) = iVar2;
    } while (0 < iVar6);
  }
  return;
}

