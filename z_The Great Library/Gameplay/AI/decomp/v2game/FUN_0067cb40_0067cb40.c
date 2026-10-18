// FUN_0067cb40 @ 0067cb40 body=[[0067cb40, 0067cbc6] [0067cbca, 0067cbd8]]


void FUN_0067cb40(undefined4 param_1,undefined4 param_2)

{
  uint in_stack_0000001c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b50e28;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00408ed0();
  FUN_00408ed0(&param_2,0,0xffffffff);
  FUN_0067c7c0();
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

