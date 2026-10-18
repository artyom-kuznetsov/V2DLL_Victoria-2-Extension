// FUN_007a4750 @ 007a4750 body=[[007a4750, 007a4783] [007a4787, 007a47a8] [007a47ac, 007a47e0] [007a47e4, 007a4802]]


void FUN_007a4750(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3c988;
  local_10 = ExceptionList;
  local_8 = 0;
  if (0xf < (uint)param_1[0x22]) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x1d]);
  }
  ExceptionList = &local_10;
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  if (0xf < (uint)param_1[0x1b]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x16]);
  }
  param_1[0x1b] = 0xf;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0xc] = CLoginObservable::vftable;
  FUN_007a4b80();
  *param_1 = &PTR_FUN_00e3a544;
  FUN_009c1650();
  if (0xf < (uint)param_1[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[5]);
  }
  param_1[9] = 0;
  param_1[10] = 0xf;
  *(undefined1 *)(param_1 + 5) = 0;
  ExceptionList = local_10;
  return;
}

