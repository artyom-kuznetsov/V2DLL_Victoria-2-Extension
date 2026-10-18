// PHYSFS_init @ 00b20fc0 body=[[00b20fc0, 00b210af]]


undefined4 PHYSFS_init(void)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* 0x720fc0  25  PHYSFS_init */
  if (DAT_00f20a78 == 0) {
    if (DAT_00f20aa4 == 0) {
      FUN_00b20930();
    }
    if ((DAT_013f3aa0 != (code *)0x0) && (iVar1 = (*DAT_013f3aa0)(), iVar1 == 0)) {
      return 0;
    }
    iVar1 = FUN_00b29fa0();
    if (((iVar1 != 0) && (iVar1 = FUN_00b1fda0(), iVar1 != 0)) &&
       (DAT_00f20a90 = FUN_00b20ef0(), DAT_00f20a90 != 0)) {
      iVar1 = FUN_00b29c40(DAT_00f20a90);
      (*DAT_013f3ab0)(DAT_00f20a90);
      if ((iVar1 != 0) && (DAT_00f20a90 = iVar1, iVar1 = FUN_00b20e00(&DAT_00f20a90), iVar1 != 0)) {
        DAT_00f20a94 = FUN_00b20d20();
        if ((DAT_00f20a94 != 0) && (iVar1 = FUN_00b20e00(&DAT_00f20a94), iVar1 != 0)) {
          DAT_00f20a78 = 1;
          uVar2 = PHYSFS_getLastError();
          FUN_00b1f840(uVar2);
          return 1;
        }
        (*DAT_013f3ab0)(DAT_00f20a90);
        DAT_00f20a90 = 0;
      }
      return 0;
    }
  }
  else {
    FUN_00b1f840("Already initialized");
  }
  return 0;
}

