// FUN_00a181c0 @ 00a181c0 body=[[00a181c0, 00a18218] [00a18222, 00a18239] [00a1823d, 00a18259] [00a1825d, 00a18273] [00a18277, 00a18291]]


void FUN_00a181c0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5d329;
  local_10 = ExceptionList;
  local_8 = 3;
  ExceptionList = &local_10;
  if (param_1[0x1e] != 0) {
    ExceptionList = &local_10;
    FUN_00a174f0(param_1[0x1e],param_1);
  }
  if (param_1[0x1f] != 0) {
    FUN_00a169b0();
  }
  FUN_00a18af0(param_1);
  if (param_1[0x1a] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x1a]);
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  if (0xf < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x11]);
  }
  param_1[0x16] = 0xf;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  if (0xf < (uint)param_1[0xc]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[7]);
  }
  param_1[0xc] = 0xf;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if (0xf < (uint)param_1[5]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*param_1);
  }
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  ExceptionList = local_10;
  return;
}

