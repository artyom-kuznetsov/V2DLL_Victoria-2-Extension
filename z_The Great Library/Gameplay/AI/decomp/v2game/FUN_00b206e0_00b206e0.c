// PHYSFS_read @ 00b206e0 body=[[00b206e0, 00b2073e]]


undefined8 PHYSFS_read(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  
                    /* 0x7206e0  35  PHYSFS_read */
  if (*(char *)(param_1 + 1) == '\0') {
    FUN_00b1f840("File already open for writing");
    return 0xffffffffffffffff;
  }
  if ((param_3 != 0) && (param_4 != 0)) {
    if (param_1[4] != 0) {
      uVar1 = FUN_00b20600();
      return uVar1;
    }
    uVar1 = (**(code **)(param_1[3] + 0x38))(*param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}

