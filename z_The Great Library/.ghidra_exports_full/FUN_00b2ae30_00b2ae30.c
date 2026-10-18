// PHYSFS_writeSBE16 @ 00b2ae30 body=[[00b2ae30, 00b2ae72]]


undefined4 PHYSFS_writeSBE16(undefined4 param_1,ushort param_2)

{
  longlong lVar1;
  
                    /* 0x72ae30  75  PHYSFS_writeSBE16
                       0x72ae30  81  PHYSFS_writeUBE16 */
  _param_2 = (uint)(ushort)(param_2 << 8 | param_2 >> 8);
  lVar1 = PHYSFS_write(param_1,&param_2,2,1);
  if (lVar1 != 1) {
    FUN_00b1f840(0);
    return 0;
  }
  return 1;
}

