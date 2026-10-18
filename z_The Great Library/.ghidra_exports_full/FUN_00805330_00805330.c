// FUN_00805330 @ 00805330 body=[[00805330, 008053ca]]


void FUN_00805330(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  
  iVar3 = in_EAX - in_ECX >> 2;
  iVar7 = iVar3 - (in_EAX - in_ECX >> 0x1f) >> 1;
  if (0 < iVar7) {
    iVar4 = iVar7 * 2 + 2;
    do {
      iVar2 = *(int *)(in_ECX + -4 + iVar7 * 4);
      iVar7 = iVar7 + -1;
      iVar4 = iVar4 + -2;
      iVar1 = iVar7;
      for (iVar5 = iVar4; iVar5 < iVar3; iVar5 = iVar5 * 2 + 2) {
        if (*(int *)(in_ECX + iVar5 * 4) < *(int *)(in_ECX + -4 + iVar5 * 4)) {
          iVar5 = iVar5 + -1;
        }
        *(undefined4 *)(in_ECX + iVar1 * 4) = *(undefined4 *)(in_ECX + iVar5 * 4);
        iVar1 = iVar5;
      }
      if (iVar5 == iVar3) {
        *(undefined4 *)(in_ECX + iVar1 * 4) = *(undefined4 *)(in_ECX + -4 + iVar3 * 4);
        iVar1 = iVar3 + -1;
      }
      while (iVar7 < iVar1) {
        iVar6 = (iVar1 + -1) / 2;
        iVar5 = *(int *)(in_ECX + iVar6 * 4);
        if (iVar2 <= iVar5) break;
        *(int *)(in_ECX + iVar1 * 4) = iVar5;
        iVar1 = iVar6;
      }
      *(int *)(in_ECX + iVar1 * 4) = iVar2;
    } while (0 < iVar7);
  }
  return;
}

