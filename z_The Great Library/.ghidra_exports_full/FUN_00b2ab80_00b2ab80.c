// PHYSFS_readSBE16 @ 00b2ab80 body=[[00b2ab80, 00b2abdb]]


undefined4 PHYSFS_readSBE16(undefined4 param_1,ushort *param_2)

{
  ushort *puVar1;
  longlong lVar2;
  
                    /* 0x72ab80  36  PHYSFS_readSBE16
                       0x72ab80  42  PHYSFS_readUBE16 */
  puVar1 = param_2;
  if (param_2 == (ushort *)0x0) {
    FUN_00b1f840("Invalid argument");
    return 0;
  }
  lVar2 = PHYSFS_read(param_1,&param_2,2,1);
  if (lVar2 != 1) {
    FUN_00b1f840(0);
    return 0;
  }
  *puVar1 = (ushort)param_2 << 8 | (ushort)param_2 >> 8;
  return 1;
}

