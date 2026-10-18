// FUN_009b7d30 @ 009b7d30 body=[[009b7d30, 009b7d7b]]


void FUN_009b7d30(void)

{
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 != (undefined4 *)0x0) {
      DAT_00f20c14 = DAT_00f20c14 + 1;
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
      FUN_009b7610();
      return;
    }
    DAT_00f20c18 = (undefined4 *)0x0;
  }
  DAT_00f20c14 = DAT_00f20c14 + 1;
  FUN_009b7610();
  return;
}

