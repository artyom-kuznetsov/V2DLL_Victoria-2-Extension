// FUN_00b1fda0 @ 00b1fda0 body=[[00b1fda0, 00b1fdfc]]


undefined4 FUN_00b1fda0(void)

{
  DAT_00f20a9c = FUN_00b2a610();
  if (DAT_00f20a9c != 0) {
    DAT_00f20aa0 = FUN_00b2a610();
    if (DAT_00f20aa0 != 0) {
      return 1;
    }
    if (DAT_00f20a9c == 0) {
      DAT_00f20a9c = 0;
      DAT_00f20aa0 = 0;
      return 0;
    }
    FUN_00b2a640(DAT_00f20a9c);
  }
  if (DAT_00f20aa0 != 0) {
    FUN_00b2a640(DAT_00f20aa0);
  }
  DAT_00f20aa0 = 0;
  DAT_00f20a9c = 0;
  return 0;
}

