// PHYSFS_readSBE64 @ 00b2ad30 body=[[00b2ad30, 00b2ade8]]


undefined4 PHYSFS_readSBE64(undefined4 param_1,uint *param_2)

{
  longlong lVar1;
  uint local_c;
  uint local_8;
  
                    /* 0x72ad30  38  PHYSFS_readSBE64
                       0x72ad30  44  PHYSFS_readUBE64 */
  if (param_2 == (uint *)0x0) {
    FUN_00b1f840("Invalid argument");
    return 0;
  }
  lVar1 = PHYSFS_read(param_1,&local_c,8,1);
  if (lVar1 != 1) {
    FUN_00b1f840(0);
    return 0;
  }
  *param_2 = (local_8 & 0xff0000 | local_8 >> 0x10) >> 8 | (local_8 & 0xff00 | local_8 << 0x10) << 8
  ;
  param_2[1] = (local_c & 0xff0000 | local_c >> 0x10) >> 8 |
               (local_c & 0xff00 | local_c << 0x10) << 8;
  return 1;
}

