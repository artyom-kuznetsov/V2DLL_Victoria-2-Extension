// PHYSFS_writeUBE32 @ 00b2af20 body=[[00b2af20, 00b2af7e]]


undefined4 PHYSFS_writeUBE32(undefined4 param_1,uint param_2)

{
  longlong lVar1;
  
                    /* 0x72af20  82  PHYSFS_writeUBE32 */
  param_2 = (param_2 & 0xff00 | param_2 << 0x10) << 8 | (param_2 & 0xff0000 | param_2 >> 0x10) >> 8;
  lVar1 = PHYSFS_write(param_1,&param_2,4,1);
  if (lVar1 != 1) {
    FUN_00b1f840(0);
    return 0;
  }
  return 1;
}

