// FUN_009b7d80 @ 009b7d80 body=[[009b7d80, 009b7dd9]]


uint FUN_009b7d80(void)

{
  uint uVar1;
  
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  DAT_00f20c14 = DAT_00f20c14 + 1;
  uVar1 = FUN_009b7610();
  return uVar1 & 0x7fffffff;
}

