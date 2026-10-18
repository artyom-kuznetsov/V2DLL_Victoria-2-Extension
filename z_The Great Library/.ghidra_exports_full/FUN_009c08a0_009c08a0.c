// FUN_009c08a0 @ 009c08a0 body=[[009c08a0, 009c0909] [009c090d, 009c091e]]


/* WARNING: Removing unreachable block (ram,0x009c0904) */

int FUN_009c08a0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41148;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_009c0fb0();
  ExceptionList = local_10;
  return (DAT_0131ca28 - DAT_0131ca24) / 0x14 + -1;
}

