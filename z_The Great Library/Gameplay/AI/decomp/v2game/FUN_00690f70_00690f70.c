// FUN_00690f70 @ 00690f70 body=[[00690f70, 00690f98] [00690fa0, 00690fb9] [00690fc0, 00691042]]


void FUN_00690f70(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_ESI;
  int iVar7;
  
  iVar7 = in_EAX - unaff_ESI >> 2;
  iVar6 = iVar7 - (in_EAX - unaff_ESI >> 0x1f) >> 1;
  if (0 < iVar6) {
    iVar4 = iVar6 * 2 + 2;
    do {
      iVar6 = iVar6 + -1;
      iVar4 = iVar4 + -2;
      iVar3 = iVar6;
      for (iVar5 = iVar4; iVar5 < iVar7; iVar5 = iVar5 * 2 + 2) {
        iVar1 = *(int *)(unaff_ESI + -4 + iVar5 * 4);
        iVar2 = *(int *)(unaff_ESI + iVar5 * 4);
        if (*(int *)(*(int *)(iVar1 + 0xbcc) + 0x28c) + *(int *)(iVar1 + 0xea0) <
            *(int *)(*(int *)(iVar2 + 0xbcc) + 0x28c) + *(int *)(iVar2 + 0xea0)) {
          iVar5 = iVar5 + -1;
        }
        *(undefined4 *)(unaff_ESI + iVar3 * 4) = *(undefined4 *)(unaff_ESI + iVar5 * 4);
        iVar3 = iVar5;
      }
      if (iVar5 == iVar7) {
        *(undefined4 *)(unaff_ESI + iVar3 * 4) = *(undefined4 *)(unaff_ESI + -4 + iVar7 * 4);
      }
      FUN_00691970();
    } while (0 < iVar6);
  }
  return;
}

