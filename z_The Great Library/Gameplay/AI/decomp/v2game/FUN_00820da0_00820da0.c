// FUN_00820da0 @ 00820da0 body=[[00820da0, 00820deb]]


void FUN_00820da0(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = 0;
  if (0 < (int)(DAT_0125a5b8 - DAT_0125a5b4 & 0xfffffffcU)) {
    FUN_00401000(0x447a1fff);
    uVar1 = FUN_00b31c00();
    do {
      *(undefined4 *)(*(int *)(unaff_EDI + 0x18) + iVar2 * 8) = uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_0125a5b8 - DAT_0125a5b4 >> 2);
  }
  return;
}

