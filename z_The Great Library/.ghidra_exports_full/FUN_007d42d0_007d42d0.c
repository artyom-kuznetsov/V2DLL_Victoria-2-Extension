// FUN_007d42d0 @ 007d42d0 body=[[007d42d0, 007d4374] [007d4378, 007d43b0]]


void FUN_007d42d0(uint param_1)

{
  int iVar1;
  int *in_ECX;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3ac90;
  local_10 = ExceptionList;
  if (0x9249249 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x1c) < param_1) {
    if (param_1 == 0) {
      local_18 = 0;
      ExceptionList = &local_10;
    }
    else {
      ExceptionList = &local_10;
      local_18 = FUN_009b6bb0();
    }
    local_8 = 0;
    FUN_007d43d0(*in_ECX,param_1);
    iVar1 = *in_ECX;
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    in_ECX[2] = local_18 + param_1 * 0x1c;
    in_ECX[1] = local_18 + ((in_ECX[1] - iVar1) / 0x1c) * 0x1c;
    *in_ECX = local_18;
  }
  ExceptionList = local_10;
  return;
}

