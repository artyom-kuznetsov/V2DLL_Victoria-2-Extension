// FUN_0056a060 @ 0056a060 body=[[0056a060, 0056a0bd] [0056a0c7, 0056a0eb] [0056a0f5, 0056a11f] [0056a123, 0056a15b] [0056a15f, 0056a188] [0056a18c, 0056a1c1]]


void FUN_0056a060(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3fd5c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CTechnology::vftable;
  local_8 = 7;
  FUN_008601b0(param_1 + 0xcc);
  local_8._0_1_ = 6;
  FUN_008ae2f0();
  if (param_1[0xd7] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xd7]);
  }
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  if (param_1[0xcc] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xcc]);
  }
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  if (0xf < (uint)param_1[0xca]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xc5]);
  }
  param_1[0xca] = 0xf;
  param_1[0xc9] = 0;
  *(undefined1 *)(param_1 + 0xc5) = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_008b32d0();
  if (0xf < (uint)param_1[0xb7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xb2]);
  }
  param_1[0xb7] = 0xf;
  param_1[0xb6] = 0;
  *(undefined1 *)(param_1 + 0xb2) = 0;
  if (0xf < (uint)param_1[0xb0]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xab]);
  }
  param_1[0xb0] = 0xf;
  param_1[0xaf] = 0;
  *(undefined1 *)(param_1 + 0xab) = 0;
  local_8 = 0xffffffff;
  FUN_00568180(param_1);
  ExceptionList = local_10;
  return;
}

