// FUN_0044e340 @ 0044e340 body=[[0044e340, 0044e3b8] [0044e3bc, 0044e3cb]]


void FUN_0044e340(undefined4 param_1)

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
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  FUN_0043acd0(in_ECX + 0xc,local_2c);
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

