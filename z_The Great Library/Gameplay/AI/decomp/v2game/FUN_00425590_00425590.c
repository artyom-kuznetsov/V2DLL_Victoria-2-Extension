// FUN_00425590 @ 00425590 body=[[00425590, 00425606]]


void FUN_00425590(void)

{
  int iVar1;
  int unaff_ESI;
  
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0x20) * 4) + 0x31) ==
      '\0') {
    FUN_004264d0(unaff_ESI,unaff_ESI + 0x1c);
  }
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0x18) * 4) + 0x31) ==
      '\0') {
    FUN_004264d0(unaff_ESI,unaff_ESI + 0x14);
  }
  iVar1 = DAT_012588e8;
  *(undefined4 *)(unaff_ESI + 0xa8) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  *(undefined4 *)(unaff_ESI + 0xac) = *(undefined4 *)(iVar1 + 0xb0c);
  return;
}

