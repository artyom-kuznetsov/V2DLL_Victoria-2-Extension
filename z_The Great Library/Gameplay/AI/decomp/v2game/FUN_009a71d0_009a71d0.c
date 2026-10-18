// FUN_009a71d0 @ 009a71d0 body=[[009a71d0, 009a71fa]]


void FUN_009a71d0(void)

{
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 != (undefined4 *)0x0) {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
      return;
    }
    DAT_00f20c18 = (undefined4 *)0x0;
  }
  return;
}

