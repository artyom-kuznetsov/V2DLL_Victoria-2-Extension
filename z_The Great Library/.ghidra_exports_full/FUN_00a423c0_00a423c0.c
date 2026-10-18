// FUN_00a423c0 @ 00a423c0 body=[[00a423c0, 00a42435] [00a42439, 00a4244b]]


/* WARNING: Removing unreachable block (ram,0x00a42430) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00a423c0(void)

{
  undefined *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41148;
  local_10 = ExceptionList;
  local_8 = 0;
  puVar1 = &DAT_013f0400;
  ExceptionList = &local_10;
  do {
    FUN_009c0fb0();
    puVar1 = puVar1 + 0x10;
  } while ((int)puVar1 < 0x13f0430);
  ExceptionList = local_10;
  return (DAT_013f0404 - _DAT_013f0400) / 0x14 + -1;
}

