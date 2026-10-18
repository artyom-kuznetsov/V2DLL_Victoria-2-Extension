// PHYSFS_readSLE16 @ 00b2ab20 body=[[00b2ab20, 00b2ab77]]


undefined4 PHYSFS_readSLE16(undefined4 param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  longlong lVar2;
  
                    /* 0x72ab20  39  PHYSFS_readSLE16
                       0x72ab20  45  PHYSFS_readULE16 */
  puVar1 = param_2;
  if (param_2 == (undefined2 *)0x0) {
    FUN_00b1f840("Invalid argument");
    return 0;
  }
  lVar2 = PHYSFS_read(param_1,&param_2,2,1);
  if (lVar2 != 1) {
    FUN_00b1f840(0);
    return 0;
  }
  *puVar1 = param_2._0_2_;
  return 1;
}

