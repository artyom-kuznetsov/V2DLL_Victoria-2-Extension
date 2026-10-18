// FUN_00972a30 @ 00972a30 body=[[00972a30, 00972b0a] [00972b0e, 00972b1d]]


void FUN_00972a30(undefined4 param_1)

{
  int in_ECX;
  double dVar1;
  undefined4 local_2c [5];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  dVar1 = (double)((*(int *)(in_ECX + 0x1d0) + -43800000) / 0x18) / 365.0;
  if ((1 < (int)dVar1) &&
     (((int)dVar1 < 2 ||
      (1 < (int)((double)((*(int *)(in_ECX + 0x1d4) + -43800000) / 0x18) / 365.0))))) {
    ExceptionList = &local_10;
    FUN_0043acd0(in_ECX + 0x1d4,local_2c);
    local_8 = 0;
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

