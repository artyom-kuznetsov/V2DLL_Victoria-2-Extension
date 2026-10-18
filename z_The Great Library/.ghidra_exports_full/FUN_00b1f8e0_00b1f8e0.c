// PHYSFS_getLastError @ 00b1f8e0 body=[[00b1f8e0, 00b1f8fc]]


int PHYSFS_getLastError(void)

{
  int iVar1;
  
                    /* 0x71f8e0  16  PHYSFS_getLastError */
  iVar1 = FUN_00b1f7d0();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
    *(undefined4 *)(iVar1 + 8) = 0;
    return iVar1 + 0xc;
  }
  return 0;
}

