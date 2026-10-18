// FUN_004121d0 @ 004121d0 body=[[004121d0, 00412237] [0041223b, 00412257]]


/* WARNING: Removing unreachable block (ram,0x00412232) */

void FUN_004121d0(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5c168;
  local_10 = ExceptionList;
  iVar1 = *DAT_012587e4;
  ExceptionList = &local_10;
  FUN_0068eef0(iVar1);
  if (0 < iVar1) {
    do {
      local_8 = 0;
      FUN_00413960();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  ExceptionList = local_10;
  return;
}

