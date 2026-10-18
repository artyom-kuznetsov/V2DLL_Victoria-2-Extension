// FUN_00a5b780 @ 00a5b780 body=[[00a5b780, 00a5b7c6] [00a5b7ca, 00a5b7f2] [00a5b7f6, 00a5b827] [00a5b82b, 00a5b851] [00a5b855, 00a5b87b] [00a5b87f, 00a5b89f] [00a5b8a3, 00a5b8ca]]


void FUN_00a5b780(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3b698;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e41e20;
  param_1[0x19] = &PTR_LAB_00e41e4c;
  local_8 = 5;
  if (0xf < (uint)param_1[0x50]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x4b]);
  }
  param_1[0x50] = 0xf;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  if (param_1[0x46] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x46]);
  }
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  FUN_00a5c580();
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

