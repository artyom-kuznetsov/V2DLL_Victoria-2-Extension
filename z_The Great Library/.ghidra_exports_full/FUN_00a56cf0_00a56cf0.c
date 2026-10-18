// FUN_00a56cf0 @ 00a56cf0 body=[[00a56cf0, 00a56d51] [00a56d55, 00a56d8e] [00a56d92, 00a56dbb] [00a56dbf, 00a56de8] [00a56dec, 00a56e15] [00a56e19, 00a56e42] [00a56e46, 00a56e6f] [00a56e73, 00a56e96] [00a56e9a, 00a56ec5]]


void FUN_00a56cf0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3b80e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e41c90;
  param_1[0x19] = &PTR_LAB_00e41cbc;
  local_8 = 10;
  if (param_1[0x59] != 0) {
    FUN_009a4a60(param_1[0x59],0);
  }
  if (param_1[0x62] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x62]);
  }
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  local_8 = CONCAT31(local_8._1_3_,8);
  FUN_00a5c580();
  if (0xf < (uint)param_1[0x49]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x44]);
  }
  param_1[0x49] = 0xf;
  param_1[0x48] = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  if (0xf < (uint)param_1[0x42]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x3d]);
  }
  param_1[0x42] = 0xf;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
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

