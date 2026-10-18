// FUN_00598ed0 @ 00598ed0 body=[[00598ed0, 00598f1f]]


undefined4 FUN_00598ed0(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = 0;
  if (0 < (int)(*(int *)(unaff_EDI + 0x70) - *(int *)(unaff_EDI + 0x6c) & 0xfffffffcU)) {
    do {
      iVar1 = FUN_00967f50();
      if ((iVar1 != 0) && (iVar1 == param_1)) {
        return *(undefined4 *)(*(int *)(unaff_EDI + 0x6c) + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(unaff_EDI + 0x70) - *(int *)(unaff_EDI + 0x6c) >> 2);
  }
  return 0;
}

