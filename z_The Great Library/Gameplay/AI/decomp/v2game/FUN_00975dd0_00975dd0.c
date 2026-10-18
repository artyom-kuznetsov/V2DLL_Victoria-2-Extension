// FUN_00975dd0 @ 00975dd0 body=[[00975dd0, 00975e00] [00975e0f, 00975e57]]


void FUN_00975dd0(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = DAT_01258a48;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (DAT_01258a48 != 0) {
    ExceptionList = &local_10;
    FUN_00974de0(DAT_01258a48);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x90);
  local_8 = 0;
  if (iVar1 != 0) {
    DAT_01258a48 = FUN_00974cf0(iVar1);
    ExceptionList = local_10;
    return;
  }
  DAT_01258a48 = 0;
  ExceptionList = local_10;
  return;
}

