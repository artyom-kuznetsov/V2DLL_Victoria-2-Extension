// FUN_0072b7d0 @ 0072b7d0 body=[[0072b7d0, 0072b833] [0072b837, 0072b846]]


void FUN_0072b7d0(undefined4 param_1)

{
  int in_ECX;
  undefined4 local_2c [5];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009a2520(param_1);
  FUN_0043acd0(in_ECX + 0x3c,local_2c);
  local_8 = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

