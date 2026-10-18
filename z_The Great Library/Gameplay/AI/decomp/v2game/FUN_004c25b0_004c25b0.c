// FUN_004c25b0 @ 004c25b0 body=[[004c25b0, 004c25ec]]


void FUN_004c25b0(void)

{
  if (DAT_01258728 == (undefined4 *)0x0) {
    DAT_01258728 = (undefined4 *)FUN_00aae9af(0x14);
    if (DAT_01258728 != (undefined4 *)0x0) {
      *DAT_01258728 = 0;
      DAT_01258728[1] = 0;
      DAT_01258728[2] = 0;
      *(undefined1 *)(DAT_01258728 + 4) = 0;
      return;
    }
    DAT_01258728 = (undefined4 *)0x0;
  }
  return;
}

