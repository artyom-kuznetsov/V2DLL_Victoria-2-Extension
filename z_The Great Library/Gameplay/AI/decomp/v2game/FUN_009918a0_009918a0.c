// FUN_009918a0 @ 009918a0 body=[[009918a0, 00991905] [00991909, 00991923]]


/* WARNING: Removing unreachable block (ram,0x009918f2) */

bool FUN_009918a0(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b41d88;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_01258a68 != 0) {
    ExceptionList = &local_10;
    PHYSFS_freeList(DAT_01258a68);
    DAT_01258a68 = 0;
  }
  local_8 = 0;
  FUN_00993b80();
  iVar1 = PHYSFS_deinit();
  ExceptionList = local_10;
  return iVar1 != 0;
}

