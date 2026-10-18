// PHYSFS_eof @ 00b20740 body=[[00b20740, 00b20770]]


undefined4 PHYSFS_eof(undefined4 *param_1)

{
  int iVar1;
  
                    /* 0x720740  7  PHYSFS_eof */
  if ((*(char *)(param_1 + 1) != '\0') && (param_1[7] == param_1[6])) {
    iVar1 = (**(code **)(param_1[3] + 0x40))(*param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

