// PHYSFS_exists @ 00b21820 body=[[00b21820, 00b21836]]


bool PHYSFS_exists(undefined4 param_1)

{
  int iVar1;
  
                    /* 0x721820  8  PHYSFS_exists */
  iVar1 = PHYSFS_getRealDir(param_1);
  return iVar1 != 0;
}

