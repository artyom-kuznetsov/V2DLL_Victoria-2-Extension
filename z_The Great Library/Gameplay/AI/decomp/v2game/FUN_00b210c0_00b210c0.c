// PHYSFS_setWriteDir @ 00b210c0 body=[[00b210c0, 00b21140]]


bool PHYSFS_setWriteDir(int param_1)

{
  int iVar1;
  bool bVar2;
  
                    /* 0x7210c0  53  PHYSFS_setWriteDir */
  bVar2 = true;
  FUN_00b2a660(DAT_00f20aa0);
  if (DAT_00f20a84 != 0) {
    iVar1 = FUN_00b1fcc0();
    if (iVar1 == 0) {
      FUN_00b2a680(DAT_00f20aa0);
      return false;
    }
    DAT_00f20a84 = 0;
  }
  if (param_1 != 0) {
    DAT_00f20a84 = FUN_00b20b00(0,1);
    bVar2 = DAT_00f20a84 != 0;
  }
  FUN_00b2a680(DAT_00f20aa0);
  return bVar2;
}

