// FUN_007ea6c0 @ 007ea6c0 body=[[007ea6c0, 007ea71b] [007ea71f, 007ea746] [007ea74a, 007ea761] [007ea765, 007ea780]]


void FUN_007ea6c0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ecf6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CProjectionType::vftable;
  local_8 = 1;
  if (-1 < (int)param_1[0x25]) {
    FUN_009bcda0();
  }
  if (0xf < (uint)param_1[0x2b]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x26]);
  }
  param_1[0x2b] = 0xf;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  if (0xf < (uint)param_1[0xf]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[10]);
  }
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (0xf < (uint)param_1[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[2]);
  }
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  ExceptionList = local_10;
  return;
}

