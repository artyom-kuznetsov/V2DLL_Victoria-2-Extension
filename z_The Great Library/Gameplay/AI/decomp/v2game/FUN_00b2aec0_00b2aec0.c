// PHYSFS_writeSBE32 @ 00b2aec0 body=[[00b2aec0, 00b2af1e]]


undefined4 PHYSFS_writeSBE32(undefined4 param_1,uint param_2)

{
  longlong lVar1;
  
                    /* 0x72aec0  76  PHYSFS_writeSBE32 */
  param_2 = (param_2 & 0xff0000 | param_2 >> 0x10) >> 8 | (param_2 & 0xff00 | param_2 << 0x10) << 8;
  lVar1 = PHYSFS_write(param_1,&param_2,4,1);
  if (lVar1 != 1) {
    FUN_00b1f840(0);
    return 0;
  }
  return 1;
}

