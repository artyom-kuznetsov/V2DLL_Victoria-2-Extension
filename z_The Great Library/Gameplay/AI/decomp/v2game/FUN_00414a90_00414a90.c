// FUN_00414a90 @ 00414a90 body=[[00414a90, 00414ac7] [00414ad0, 00414b9b]]


void FUN_00414a90(void)

{
  int iVar1;
  int unaff_ESI;
  undefined1 local_8 [4];
  
  FUN_009b69a0(&DAT_0131c9e4,local_8,DAT_0131c9e4,DAT_0131c9e8);
  iVar1 = 0;
  if (0 < (int)(*(int *)(unaff_ESI + 0x38) - *(int *)(unaff_ESI + 0x34) & 0xfffffffcU)) {
    do {
      FUN_009b68e0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(unaff_ESI + 0x38) - *(int *)(unaff_ESI + 0x34) >> 2);
  }
  return;
}

