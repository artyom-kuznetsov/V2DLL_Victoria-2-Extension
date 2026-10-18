// PHYSFS_getWriteDir @ 00b1ff30 body=[[00b1ff30, 00b1ff5f]]


undefined4 PHYSFS_getWriteDir(void)

{
  undefined4 uVar1;
  
                    /* 0x71ff30  24  PHYSFS_getWriteDir */
  uVar1 = 0;
  FUN_00b2a660(DAT_00f20aa0);
  if (DAT_00f20a84 != 0) {
    uVar1 = *(undefined4 *)(DAT_00f20a84 + 4);
  }
  FUN_00b2a680(DAT_00f20aa0);
  return uVar1;
}

