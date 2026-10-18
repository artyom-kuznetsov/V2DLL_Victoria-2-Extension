// PHYSFS_readSLE64 @ 00b2acc0 body=[[00b2acc0, 00b2ad24]]


undefined4 PHYSFS_readSLE64(undefined4 param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x72acc0  41  PHYSFS_readSLE64
                       0x72acc0  47  PHYSFS_readULE64 */
  if (param_2 == (undefined4 *)0x0) {
    FUN_00b1f840("Invalid argument");
    return 0;
  }
  lVar1 = PHYSFS_read(param_1,&local_c,8,1);
  if (lVar1 != 1) {
    FUN_00b1f840(0);
    return 0;
  }
  param_2[1] = local_8;
  *param_2 = local_c;
  return 1;
}

