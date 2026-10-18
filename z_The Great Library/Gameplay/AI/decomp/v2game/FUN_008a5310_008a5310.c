// FUN_008a5310 @ 008a5310 body=[[008a5310, 008a53bc] [008a53c0, 008a53db] [008a53df, 008a5421] [008a5425, 008a5439]]


undefined1 * FUN_008a5310(undefined1 *param_1)

{
  int iVar1;
  int in_ECX;
  uint in_stack_00000020;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b67db2;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 0;
  if (*(char *)(in_ECX + 0x20) == '\0') {
    ExceptionList = &local_10;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  else {
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("GREAT_WARS_ENABLE_DESC",0x16);
    local_8._0_1_ = 1;
    FUN_009a8ee0(local_28,local_44);
    local_8._0_1_ = 2;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

