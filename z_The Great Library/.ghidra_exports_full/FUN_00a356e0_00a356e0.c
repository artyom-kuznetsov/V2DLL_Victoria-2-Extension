// FUN_00a356e0 @ 00a356e0 body=[[00a356e0, 00a3570f] [00a35713, 00a35733] [00a35737, 00a3575d] [00a35761, 00a35780]]


void FUN_00a356e0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b45cc8;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1[0x17] != 0) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x17]);
  }
  ExceptionList = &local_10;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  if (param_1[0x13] != 0) {
    FUN_00413860();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x13]);
  }
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_00a360a0(param_1 + 0xf);
  *param_1 = CCommand::vftable;
  if (0xf < (uint)param_1[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[2]);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  ExceptionList = local_10;
  return;
}

