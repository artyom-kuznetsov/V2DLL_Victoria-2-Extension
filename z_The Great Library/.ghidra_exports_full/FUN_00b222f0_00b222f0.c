// PHYSFS_write @ 00b222f0 body=[[00b222f0, 00b2235c]]


undefined8 PHYSFS_write(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  
                    /* 0x7222f0  74  PHYSFS_write */
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_00b1f840("File already open for reading");
    return 0xffffffffffffffff;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_1[4] != 0) {
    uVar1 = FUN_00b22280(param_2,param_3);
    return uVar1;
  }
  uVar1 = (**(code **)(param_1[3] + 0x3c))(*param_1,param_2,param_3,param_4);
  return uVar1;
}

