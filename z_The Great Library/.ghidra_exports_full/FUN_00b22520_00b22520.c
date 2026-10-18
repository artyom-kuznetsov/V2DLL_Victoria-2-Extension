// PHYSFS_deinit @ 00b22520 body=[[00b22520, 00b2262b]]


undefined4 PHYSFS_deinit(void)

{
  int iVar1;
  
                    /* 0x722520  3  PHYSFS_deinit */
  if (DAT_00f20a78 == 0) {
    FUN_00b1f840("Not initialized");
  }
  else {
    iVar1 = FUN_00b2a030();
    if (iVar1 != 0) {
      FUN_00b1fe00();
      FUN_00b2a660(DAT_00f20aa0);
      if (DAT_00f20a84 != 0) {
        iVar1 = FUN_00b1fcc0();
        if (iVar1 == 0) {
          FUN_00b2a680(DAT_00f20aa0);
          FUN_00b1f840("Files still open");
          return 0;
        }
        DAT_00f20a84 = 0;
      }
      FUN_00b2a680(DAT_00f20aa0);
      FUN_00b1fe50();
      FUN_00b1f900();
      if (DAT_00f20a90 != 0) {
        (*DAT_013f3ab0)(DAT_00f20a90);
        DAT_00f20a90 = 0;
      }
      if (DAT_00f20a94 != 0) {
        (*DAT_013f3ab0)(DAT_00f20a94);
        DAT_00f20a94 = 0;
      }
      DAT_00f20a98 = 0;
      DAT_00f20a78 = 0;
      FUN_00b2a640(DAT_00f20a9c);
      FUN_00b2a640(DAT_00f20aa0);
      if (DAT_013f3aa4 != (code *)0x0) {
        (*DAT_013f3aa4)();
      }
      DAT_00f20aa0 = 0;
      DAT_00f20a9c = 0;
      return 1;
    }
  }
  return 0;
}

