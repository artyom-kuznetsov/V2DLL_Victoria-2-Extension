// FUN_00967a80 @ 00967a80 body=[[00967a80, 00967b01]]


void FUN_00967a80(void)

{
  int iVar1;
  int unaff_EDI;
  undefined4 local_10;
  int local_c;
  
  if (*(char *)(unaff_EDI + 0x38) != '\0') {
    *(undefined4 *)(unaff_EDI + 0x274) = 0;
    *(undefined4 *)(unaff_EDI + 0x30) = 0;
    *(undefined4 *)(unaff_EDI + 0x34) = 0;
    *(undefined1 *)(unaff_EDI + 0x38) = 0;
    return;
  }
  if (*(int *)(unaff_EDI + 0x30) != 0) {
    FUN_009677a0(unaff_EDI);
    *(undefined4 *)(unaff_EDI + 0x30) = 0;
    *(undefined4 *)(unaff_EDI + 0x34) = 0;
    *(undefined1 *)(unaff_EDI + 0x38) = 0;
    return;
  }
  if (*(int *)(unaff_EDI + 0x34) != 0) {
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0x34) * 4);
    local_10 = *(undefined4 *)(iVar1 + 0x1c);
    local_c = *(int *)(iVar1 + 0x20);
    if (local_c != 0) {
      FUN_00967880(unaff_EDI,&local_10);
    }
  }
  *(undefined4 *)(unaff_EDI + 0x30) = 0;
  *(undefined4 *)(unaff_EDI + 0x34) = 0;
  *(undefined1 *)(unaff_EDI + 0x38) = 0;
  return;
}

