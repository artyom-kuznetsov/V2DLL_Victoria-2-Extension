// FUN_0067b680 @ 0067b680 body=[[0067b680, 0067b6db] [0067b6df, 0067b6ec]]


void FUN_0067b680(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_stack_00000020;
  undefined1 local_30 [16];
  undefined4 local_20;
  undefined *local_1c;
  undefined4 uStack_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b50e88;
  local_10 = ExceptionList;
  local_14 = local_30;
  local_8 = 0;
  local_20 = 0;
  local_1c = (undefined *)0xf;
  local_30[0] = 0;
  ExceptionList = &local_10;
  FUN_00408ed0(&param_3,0,0xffffffff);
  FUN_0067bfa0(param_1);
  if (0xf < in_stack_00000020) {
    uStack_18 = param_3;
                    /* WARNING: Subroutine does not return */
    local_1c = &UNK_0067b6dc;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

