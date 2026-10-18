// FUN_008976f0 @ 008976f0 body=[[008976f0, 0089777f] [00897783, 0089779d] [008977a1, 008977b5]]


undefined4 FUN_008976f0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *in_ECX;
  code *pcVar1;
  uint in_stack_00000020;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b425c8;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (*(int *)(param_2 + 0xc) == 0) {
    ExceptionList = &local_10;
    FUN_00409350("MONEY_EFFECT",0xc);
    local_8 = CONCAT31(local_8._1_3_,2);
    pcVar1 = *(code **)(*in_ECX + 0x34);
  }
  else {
    ExceptionList = &local_10;
    FUN_00409350("TREASURY_EFFECT",0xf);
    local_8 = CONCAT31(local_8._1_3_,1);
    pcVar1 = *(code **)(*in_ECX + 0x34);
  }
  (*pcVar1)(param_1,param_2,local_30);
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

