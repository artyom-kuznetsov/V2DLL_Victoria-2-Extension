// FUN_008905c0 @ 008905c0 body=[[008905c0, 0089061c] [00890620, 0089063b] [0089063f, 00890652]]


undefined4 FUN_008905c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint in_stack_00000020;
  undefined4 local_30;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b68e60;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = FUN_0055dd40();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0042c180(param_1,uVar1);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30);
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  ExceptionList = local_10;
  return param_1;
}

