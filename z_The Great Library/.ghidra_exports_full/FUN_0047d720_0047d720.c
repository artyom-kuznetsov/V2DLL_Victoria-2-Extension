// FUN_0047d720 @ 0047d720 body=[[0047d720, 0047d76e] [0047d778, 0047d7a4]]


void FUN_0047d720(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a4e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CVariables::vftable;
  param_1[9] = CVariables::vftable;
  local_8 = 0;
  FUN_009e6ac0(param_1[1]);
  param_1[1] = 0;
  if (param_1[5] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[5]);
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[3] = 0;
  local_8 = 0xffffffff;
  FUN_0047d900();
  ExceptionList = local_10;
  return;
}

