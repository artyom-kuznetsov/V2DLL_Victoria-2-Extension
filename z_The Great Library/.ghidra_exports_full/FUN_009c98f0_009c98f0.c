// FUN_009c98f0 @ 009c98f0 body=[[009c98f0, 009c9990] [009c9994, 009c99aa] [009c99ae, 009c99c4] [009c99c8, 009c99db]]


undefined4 FUN_009c98f0(undefined4 param_1,char param_2,undefined4 param_3)

{
  uint in_stack_00000020;
  undefined4 local_4c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4f118;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 0;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  local_1c = 0xf;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00e0acc0,2);
  if (param_2 == '\0') {
    local_8._0_1_ = 3;
    FUN_00988fa0(&param_3);
    local_8 = CONCAT31(local_8._1_3_,4);
  }
  else {
    local_8._0_1_ = 1;
    FUN_00988fa0(&param_3);
    local_8 = CONCAT31(local_8._1_3_,2);
  }
  FUN_00988f20(local_30);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c);
  }
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_30[0] = local_30[0] & 0xffffff00;
  local_20 = 0;
  local_1c = 0xf;
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  ExceptionList = local_10;
  return param_1;
}

