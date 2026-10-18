// PHYSFS_readSLE32 @ 00b2abe0 body=[[00b2abe0, 00b2ac35]]


undefined4 PHYSFS_readSLE32(undefined4 param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  
                    /* 0x72abe0  40  PHYSFS_readSLE32
                       0x72abe0  46  PHYSFS_readULE32 */
  piVar1 = param_2;
  if (param_2 == (int *)0x0) {
    FUN_00b1f840("Invalid argument");
    return 0;
  }
  lVar2 = PHYSFS_read(param_1,&param_2,4,1);
  if (lVar2 != 1) {
    FUN_00b1f840(0);
    return 0;
  }
  *piVar1 = (int)param_2;
  return 1;
}

