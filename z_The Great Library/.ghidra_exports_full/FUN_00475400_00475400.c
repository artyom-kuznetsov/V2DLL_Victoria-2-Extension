// FUN_00475400 @ 00475400 body=[[00475400, 00475440] [00475444, 0047546a] [0047546e, 00475498] [0047549c, 004754c6] [004754ca, 004754f6]]


void FUN_00475400(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b60890;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CSettings::vftable;
  local_8 = 4;
  FUN_009d7fa0();
  if (param_1[0x5a] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x5a]);
  }
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  if (0xf < (uint)param_1[0x55]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x50]);
  }
  param_1[0x55] = 0xf;
  param_1[0x54] = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  if (0xf < (uint)param_1[0x4e]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x49]);
  }
  param_1[0x4e] = 0xf;
  param_1[0x4d] = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  if (0xf < (uint)param_1[0x47]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x42]);
  }
  param_1[0x47] = 0xf;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  FUN_00475300();
  ExceptionList = local_10;
  return;
}

