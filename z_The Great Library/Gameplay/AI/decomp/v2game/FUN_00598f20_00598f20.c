// FUN_00598f20 @ 00598f20 body=[[00598f20, 00598fa9]]


undefined4 FUN_00598f20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  
  if (0 < (int)(*(int *)(unaff_EDI + 0x70) - *(int *)(unaff_EDI + 0x6c) & 0xfffffffcU)) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(*(int *)(unaff_EDI + 0x6c) + iVar3 * 4);
      iVar2 = DAT_01258a94;
      if (*(uint *)(iVar1 + 0xc) < 0x1269) {
        iVar2 = DAT_01258a98;
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_009c1d40();
      }
      *(int *)(iVar1 + 8) = iVar2;
      if ((iVar2 != 0) && (iVar2 == param_1)) {
        return *(undefined4 *)(*(int *)(unaff_EDI + 0x6c) + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(unaff_EDI + 0x70) - *(int *)(unaff_EDI + 0x6c) >> 2);
  }
  return 0;
}

