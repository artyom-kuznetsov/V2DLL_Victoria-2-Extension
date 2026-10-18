// FUN_0067ad80 @ 0067ad80 body=[[0067ad80, 0067adf8] [0067adfc, 0067ae0b]]


void FUN_0067ad80(int param_1,int param_2,undefined4 param_3)

{
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b50e88;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00408ed0(&param_3,0,0xffffffff);
  FUN_0067aec0(param_1,param_2,(param_2 - param_1) / 0x1c);
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

