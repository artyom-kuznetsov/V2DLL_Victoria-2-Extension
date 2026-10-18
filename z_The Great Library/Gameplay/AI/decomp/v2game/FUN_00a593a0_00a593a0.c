// FUN_00a593a0 @ 00a593a0 body=[[00a593a0, 00a593e6] [00a593ea, 00a59417] [00a5941b, 00a5943c] [00a59440, 00a59471] [00a59475, 00a5949b] [00a5949f, 00a594c5] [00a594c9, 00a594ef] [00a594f3, 00a59513] [00a59517, 00a5953e]]


void FUN_00a593a0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3b776;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e41d4c;
  param_1[0x19] = &PTR_LAB_00e41d78;
  local_8 = 6;
  if (0xf < (uint)param_1[100]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x5f]);
  }
  param_1[100] = 0xf;
  param_1[99] = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  if (0xf < (uint)param_1[0x5d]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x58]);
  }
  param_1[0x5d] = 0xf;
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  if (param_1[0x51] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x51]);
  }
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  FUN_00a5c580();
  if (0xf < (uint)param_1[0x3b]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x36]);
  }
  param_1[0x3b] = 0xf;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  if (0xf < (uint)param_1[0x34]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x2f]);
  }
  param_1[0x34] = 0xf;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  if (0xf < (uint)param_1[0x2d]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x28]);
  }
  param_1[0x2d] = 0xf;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (0xf < (uint)param_1[0x26]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x21]);
  }
  param_1[0x26] = 0xf;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  if (0xf < (uint)param_1[0x1f]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x1a]);
  }
  param_1[0x1f] = 0xf;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x19] = &PTR_FUN_00e38318;
  FUN_006467c0();
  ExceptionList = local_10;
  return;
}

