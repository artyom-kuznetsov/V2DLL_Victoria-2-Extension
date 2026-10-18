// PHYSFS_close @ 00b221e0 body=[[00b221e0, 00b22276]]


undefined4 PHYSFS_close(void)

{
  int iVar1;
  
                    /* 0x7221e0  2  PHYSFS_close */
  FUN_00b2a660(DAT_00f20aa0);
  iVar1 = FUN_00b22120(&DAT_00f20a8c);
  if (iVar1 == -1) {
    FUN_00b2a680(DAT_00f20aa0);
    return 0;
  }
  if (iVar1 == 0) {
    iVar1 = FUN_00b22120(&DAT_00f20a88);
    if (iVar1 == -1) {
      FUN_00b2a680(DAT_00f20aa0);
      return 0;
    }
  }
  FUN_00b2a680(DAT_00f20aa0);
  if (iVar1 == 0) {
    FUN_00b1f840("Not a file handle");
    return 0;
  }
  return 1;
}

