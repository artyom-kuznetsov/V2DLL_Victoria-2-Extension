// FUN_0085bae0 @ 0085bae0 body=[[0085bae0, 0085bb3d] [0085bb41, 0085bb50]]


void FUN_0085bae0(int param_1,undefined4 param_2)

{
  uint in_stack_0000001c;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 local_24;
  undefined *puStack_1c;
  undefined4 uStack_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a868;
  local_10 = ExceptionList;
  local_14 = local_38;
  local_8 = 0;
  local_28 = 0;
  local_24 = 0xf;
  local_38[0] = 0;
  ExceptionList = &local_10;
  FUN_00408ed0(&param_2,0,0xffffffff);
  FUN_0085c350(param_1 + 0x130);
  if (0xf < in_stack_0000001c) {
    uStack_18 = param_2;
                    /* WARNING: Subroutine does not return */
    puStack_1c = &UNK_0085bb3e;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

