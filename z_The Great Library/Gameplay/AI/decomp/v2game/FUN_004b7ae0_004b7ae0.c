// FUN_004b7ae0 @ 004b7ae0 body=[[004b7ae0, 004b7bdc]]


int FUN_004b7ae0(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int unaff_ESI;
  int iVar4;
  
  iVar4 = 1;
  if ((*(int *)(unaff_ESI + 300) != 0) &&
     (iVar1 = *(int *)(unaff_ESI + 0x188), *(int *)(iVar1 + 0x84) < 1)) {
    iVar3 = *(int *)(*(int *)(unaff_ESI + 0x118) + DAT_01258720 * 4);
    if (0 < *(int *)(iVar3 + 0x20)) {
      iVar4 = *(int *)(iVar3 + 0x24) / 1000 + 1;
    }
    if ((*(int *)(iVar1 + 0x4c) - *(int *)(iVar1 + 0x48) & 0xfffffffcU) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int **)(iVar1 + 0x48);
    }
    if (iVar3 == *(int *)(unaff_ESI + 0x58)) {
      iVar4 = iVar4 + *(int *)(iVar1 + 0x68);
    }
    iVar4 = iVar4 + *(int *)(*(int *)(unaff_ESI + 0x9c) + 0x30) / 1000;
    cVar2 = FUN_004b8c00();
    if (cVar2 == '\0') {
      cVar2 = FUN_004b64e0();
      if (cVar2 != '\0') {
        iVar4 = iVar4 * 2;
      }
      if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                           *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                            *(int *)(unaff_ESI + 300) * 4) + 0xbe4) * 4) + 0x58) ==
          *(int *)(unaff_ESI + 0x58)) {
        iVar4 = iVar4 * 3;
      }
    }
    if (iVar4 < 1) {
      return 1;
    }
  }
  return iVar4;
}

