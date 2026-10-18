// FUN_00a45df0 @ 00a45df0 body=[[00a45df0, 00a45e59] [00a45e5d, 00a45e6e]]


/* WARNING: Removing unreachable block (ram,0x00a45e54) */

int FUN_00a45df0(void)

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
  return (DAT_013f0484 - DAT_013f0480) / 0x14 + -1;
}

