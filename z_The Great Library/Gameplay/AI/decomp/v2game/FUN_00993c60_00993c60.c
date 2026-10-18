// FUN_00993c60 @ 00993c60 body=[[00993c60, 00993d32] [00993d39, 00993d77]]


void FUN_00993c60(uint param_1)

{
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e4d0;
  local_10 = ExceptionList;
  if (0x4924924 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((DAT_0131c8f4 - DAT_0131c8ec) / 0x38) < param_1) {
    if (param_1 == 0) {
      local_18 = 0;
      ExceptionList = &local_10;
    }
    else {
      ExceptionList = &local_10;
      local_18 = FUN_00993dd0();
    }
    local_8 = 0;
    FUN_00a3ac90(DAT_0131c8f0,local_18,param_1);
    if (DAT_0131c8ec != 0) {
      FUN_00a3ab10(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(DAT_0131c8ec);
    }
    DAT_0131c8f4 = local_18 + param_1 * 0x38;
    DAT_0131c8f0 = local_18 + ((DAT_0131c8f0 - DAT_0131c8ec) / 0x38) * 0x38;
    DAT_0131c8ec = local_18;
  }
  ExceptionList = local_10;
  return;
}

