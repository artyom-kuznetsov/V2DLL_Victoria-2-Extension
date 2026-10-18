// PHYSFS_enumerateFiles @ 00b22700 body=[[00b22700, 00b2275f]]


int PHYSFS_enumerateFiles(undefined4 param_1)

{
  int local_10;
  int local_c;
  undefined4 local_8;
  
                    /* 0x722700  5  PHYSFS_enumerateFiles */
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = (*DAT_013f3aa8)(4,0);
  if (local_10 == 0) {
    FUN_00b1f840("Out of memory");
    return 0;
  }
  PHYSFS_enumerateFilesCallback(param_1,FUN_00b20540,&local_10);
  *(undefined4 *)(local_10 + local_c * 4) = 0;
  return local_10;
}

