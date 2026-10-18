// FUN_0060e8a0 @ 0060e8a0 body=[[0060e8a0, 0060e955]]


void FUN_0060e8a0(int param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  int iVar5;
  
  iVar2 = in_EAX - unaff_ESI >> 2;
  iVar5 = iVar2 - (in_EAX - unaff_ESI >> 0x1f) >> 1;
  if (0 < iVar5) {
    iVar4 = iVar5 * 2 + 2;
    do {
      iVar5 = iVar5 + -1;
      iVar4 = iVar4 + -2;
      iVar1 = iVar5;
      for (iVar3 = iVar4; iVar3 < iVar2; iVar3 = iVar3 * 2 + 2) {
        if (*(int *)(*(int *)(*(int *)(param_2 + 0xbc) + *(int *)(unaff_ESI + -4 + iVar3 * 4) * 0x10
                             ) + param_1 * 4) <
            *(int *)(*(int *)(*(int *)(param_2 + 0xbc) + *(int *)(unaff_ESI + iVar3 * 4) * 0x10) +
                    param_1 * 4)) {
          iVar3 = iVar3 + -1;
        }
        *(undefined4 *)(unaff_ESI + iVar1 * 4) = *(undefined4 *)(unaff_ESI + iVar3 * 4);
        iVar1 = iVar3;
      }
      if (iVar3 == iVar2) {
        *(undefined4 *)(unaff_ESI + iVar1 * 4) = *(undefined4 *)(unaff_ESI + -4 + iVar2 * 4);
      }
      FUN_006122e0();
    } while (0 < iVar5);
  }
  return;
}

