// PHYSFS_writeSLE16 @ 00b2adf0 body=[[00b2adf0, 00b2ae2b]]


undefined4 PHYSFS_writeSLE16(undefined4 param_1,ushort param_2)

{
  longlong lVar1;
  
                    /* 0x72adf0  78  PHYSFS_writeSLE16
                       0x72adf0  84  PHYSFS_writeULE16 */
  _param_2 = (uint)param_2;
  lVar1 = PHYSFS_write(param_1,&param_2,2,1);
  if (lVar1 != 1) {
    FUN_00b1f840(0);
    return 0;
  }
  return 1;
}

