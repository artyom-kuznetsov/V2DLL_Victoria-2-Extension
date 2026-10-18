// FUN_00970ac0 @ 00970ac0 body=[[00970ac0, 00970b4e] [00970b52, 00970b65]]


undefined4 FUN_00970ac0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b713db;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  FUN_009a8ee0(local_28,in_ECX + 0x24);
  local_8 = 1;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_14 = 1;
  local_8 = 2;
  FUN_009adb70();
  if (local_24 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

