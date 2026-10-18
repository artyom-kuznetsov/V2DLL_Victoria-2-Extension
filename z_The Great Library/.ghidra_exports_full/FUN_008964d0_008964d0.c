// FUN_008964d0 @ 008964d0 body=[[008964d0, 0089653f] [00896543, 0089655d] [00896561, 00896575]]


undefined4 FUN_008964d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *in_ECX;
  uint in_stack_00000020;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b68e60;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("PLURALITY_EFFECT",0x10);
  local_8 = CONCAT31(local_8._1_3_,1);
  (**(code **)(*in_ECX + 0x34))(param_1,param_2,local_30);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  ExceptionList = local_10;
  return param_1;
}

