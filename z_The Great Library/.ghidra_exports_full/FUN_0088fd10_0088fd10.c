// FUN_0088fd10 @ 0088fd10 body=[[0088fd10, 0088fd7e] [0088fd82, 0088fd9d] [0088fda1, 0088fdb4]]


undefined4 FUN_0088fd10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint in_stack_00000020;
  undefined4 local_34;
  uint local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b68020;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = FUN_004f97a0();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0042c180(param_1,uVar1);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34);
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  ExceptionList = local_10;
  return param_1;
}

