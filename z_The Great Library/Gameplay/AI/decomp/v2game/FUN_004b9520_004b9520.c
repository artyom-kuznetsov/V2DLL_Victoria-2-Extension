// FUN_004b9520 @ 004b9520 body=[[004b9520, 004b9570]]


undefined4 FUN_004b9520(int param_1)

{
  if (DAT_01258728 == (int *)0x0) {
    DAT_01258728 = (int *)FUN_00aae9af(0x14);
    if (DAT_01258728 == (int *)0x0) {
      DAT_01258728 = (int *)0x0;
    }
    else {
      *DAT_01258728 = 0;
      DAT_01258728[1] = 0;
      DAT_01258728[2] = 0;
      *(undefined1 *)(DAT_01258728 + 4) = 0;
    }
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x58) * 0xb0 + 0xc + *DAT_01258728);
}

