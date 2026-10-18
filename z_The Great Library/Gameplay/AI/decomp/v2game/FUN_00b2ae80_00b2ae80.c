// PHYSFS_writeSLE32 @ 00b2ae80 body=[[00b2ae80, 00b2aeba]]


undefined4 PHYSFS_writeSLE32(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  
                    /* 0x72ae80  79  PHYSFS_writeSLE32
                       0x72ae80  85  PHYSFS_writeULE32 */
  lVar1 = PHYSFS_write(param_1,&param_2,4,1);
  if (lVar1 != 1) {
    FUN_00b1f840(0);
    return 0;
  }
  return 1;
}

