// PHYSFS_writeSLE64 @ 00b2af80 body=[[00b2af80, 00b2afc7]]


undefined4 PHYSFS_writeSLE64(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x72af80  80  PHYSFS_writeSLE64
                       0x72af80  86  PHYSFS_writeULE64 */
  local_c = param_2;
  local_8 = param_3;
  lVar1 = PHYSFS_write(param_1,&local_c,8,1);
  if (lVar1 != 1) {
    FUN_00b1f840(0);
    return 0;
  }
  return 1;
}

