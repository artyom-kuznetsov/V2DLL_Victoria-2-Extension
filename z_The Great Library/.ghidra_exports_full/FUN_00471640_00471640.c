// FUN_00471640 @ 00471640 body=[[00471640, 004716d6]]


void FUN_00471640(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  
  iVar2 = *(int *)(unaff_EDI + 0x10);
  iVar4 = 0;
  iVar3 = DAT_01258a94;
  if (0 < (int)(*(int *)(unaff_EDI + 0x14) - iVar2 & 0xfffffff8U)) {
    do {
      iVar1 = DAT_01258a98;
      if (0x1268 < *(uint *)(iVar2 + iVar4 * 8)) {
        iVar1 = iVar3;
      }
      if ((((iVar1 != 0) && (iVar2 = FUN_009c1d40(), iVar2 != 0)) && (iVar2 != 8)) &&
         ((0 < *(int *)(iVar2 + 0xe4) && (**(int **)(iVar2 + 0xe0) == *(int *)(unaff_EDI + 8))))) {
        FUN_005d1890();
        iVar3 = DAT_01258a94;
      }
      iVar2 = *(int *)(unaff_EDI + 0x10);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(unaff_EDI + 0x14) - iVar2 >> 3);
  }
  return;
}

