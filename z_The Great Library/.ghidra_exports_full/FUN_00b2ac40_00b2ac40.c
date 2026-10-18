// PHYSFS_readSBE32 @ 00b2ac40 body=[[00b2ac40, 00b2acb9]]


undefined4 PHYSFS_readSBE32(undefined4 param_1,uint *param_2)

{
  uint *puVar1;
  longlong lVar2;
  
                    /* 0x72ac40  37  PHYSFS_readSBE32
                       0x72ac40  43  PHYSFS_readUBE32 */
  puVar1 = param_2;
  if (param_2 == (uint *)0x0) {
    FUN_00b1f840("Invalid argument");
    return 0;
  }
  lVar2 = PHYSFS_read(param_1,&param_2,4,1);
  if (lVar2 != 1) {
    FUN_00b1f840(0);
    return 0;
  }
  *puVar1 = ((uint)param_2 & 0xff0000 | (uint)param_2 >> 0x10) >> 8 |
            ((uint)param_2 & 0xff00 | (int)param_2 << 0x10) << 8;
  return 1;
}

