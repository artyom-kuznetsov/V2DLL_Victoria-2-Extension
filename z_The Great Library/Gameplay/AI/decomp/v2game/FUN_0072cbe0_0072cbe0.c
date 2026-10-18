// FUN_0072cbe0 @ 0072cbe0 body=[[0072cbe0, 0072cc5f]]


void FUN_0072cbe0(void)

{
  int in_ECX;
  
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  DAT_00f20c1c = *(undefined4 *)(in_ECX + 0x3c);
  DAT_00f20c14 = 0;
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  DAT_00f20c14 = *(undefined4 *)(in_ECX + 0x40);
  FUN_009b7c80();
  FUN_0068b3e0();
  return;
}

