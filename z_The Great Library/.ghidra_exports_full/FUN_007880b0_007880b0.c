// FUN_007880b0 @ 007880b0 body=[[007880b0, 007880d8] [007880e0, 0078816b]]


void FUN_007880b0(char param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_ESI;
  int iVar8;
  
  iVar8 = in_EAX - unaff_ESI >> 2;
  iVar7 = iVar8 - (in_EAX - unaff_ESI >> 0x1f) >> 1;
  if (0 < iVar7) {
    iVar5 = iVar7 * 2 + 2;
    do {
      iVar7 = iVar7 + -1;
      iVar5 = iVar5 + -2;
      iVar4 = iVar7;
      for (iVar6 = iVar5; iVar6 < iVar8; iVar6 = iVar6 * 2 + 2) {
        iVar1 = *(int *)(*(int *)(unaff_ESI + iVar6 * 4) + 0x5c);
        iVar2 = *(int *)(unaff_ESI + -4 + iVar6 * 4);
        if (param_1 == '\0') {
          bVar3 = iVar1 < *(int *)(iVar2 + 0x5c);
        }
        else {
          bVar3 = *(int *)(iVar2 + 0x5c) < iVar1;
        }
        if (bVar3) {
          iVar6 = iVar6 + -1;
        }
        *(undefined4 *)(unaff_ESI + iVar4 * 4) = *(undefined4 *)(unaff_ESI + iVar6 * 4);
        iVar4 = iVar6;
      }
      if (iVar6 == iVar8) {
        *(undefined4 *)(unaff_ESI + iVar4 * 4) = *(undefined4 *)(unaff_ESI + -4 + iVar8 * 4);
      }
      FUN_00788920();
    } while (0 < iVar7);
  }
  return;
}

