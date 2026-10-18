// FUN_009b3740 @ 009b3740 body=[[009b3740, 009b377e] [009b3788, 009b3799] [009b37a0, 009b37a8] [009b37b2, 009b37da]]


void FUN_009b3740(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a829;
  local_10 = ExceptionList;
  local_8 = 3;
  ExceptionList = &local_10;
  FUN_009b3500();
  if (param_1[6] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[6]);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[2]);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = &PTR_FUN_00e4271c;
  *param_1 = &PTR_FUN_00e38728;
  ExceptionList = local_10;
  return;
}

