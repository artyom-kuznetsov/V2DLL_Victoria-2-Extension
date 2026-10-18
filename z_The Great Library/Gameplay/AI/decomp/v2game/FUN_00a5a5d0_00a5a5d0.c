// FUN_00a5a5d0 @ 00a5a5d0 body=[[00a5a5d0, 00a5a631] [00a5a635, 00a5a667] [00a5a66b, 00a5a6a5]]


void FUN_00a5a5d0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3b715;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e41db0;
  param_1[0x19] = &PTR_LAB_00e41ddc;
  local_8 = 5;
  if (param_1[0x29] != 0) {
    FUN_009a4a60(param_1[0x29],0);
  }
  if (param_1[0x31] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x31]);
  }
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00a5c580();
  if (0xf < (uint)param_1[0x23]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x1e]);
  }
  param_1[0x23] = 0xf;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  FUN_004097a0(param_1 + 0x1a);
  param_1[0x19] = &PTR_FUN_00e38318;
  FUN_006467c0();
  ExceptionList = local_10;
  return;
}

