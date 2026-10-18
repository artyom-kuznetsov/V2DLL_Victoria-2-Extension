// FUN_007cced0 @ 007cced0 body=[[007cced0, 007ccefa] [007ccf00, 007ccf8e]]


void FUN_007cced0(int param_1)

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
        if (*(int *)(*(int *)(in_ECX + iVar4 * 4) + 0x58) <
            *(int *)(*(int *)(in_ECX + -4 + iVar4 * 4) + 0x58)) {
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
             *(int *)(*(int *)(in_ECX + iVar4 * 4) + 0x58) < *(int *)(iVar2 + 0x58)))) {
        *(undefined4 *)(in_ECX + iVar1 * 4) = *(undefined4 *)(in_ECX + iVar4 * 4);
        iVar1 = iVar4;
      }
      *(int *)(in_ECX + iVar1 * 4) = iVar2;
    } while (0 < iVar6);
  }
  return;
}

