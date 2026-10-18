// FUN_00a3a900 @ 00a3a900 body=[[00a3a900, 00a3a9b9] [00a3a9bd, 00a3a9f5]]


void FUN_00a3a900(uint param_1)

{
  int *in_ECX;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3dab0;
  local_10 = ExceptionList;
  if (0x4924924 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x38) < param_1) {
    if (param_1 == 0) {
      local_18 = 0;
      ExceptionList = &local_10;
    }
    else {
      ExceptionList = &local_10;
      local_18 = FUN_00993dd0();
    }
    local_8 = 0;
    FUN_00a3ac90(in_ECX[1],local_18,param_1);
    if (*in_ECX != 0) {
      FUN_00a3ab10(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = local_18 + param_1 * 0x38;
    in_ECX[1] = local_18 + ((in_ECX[1] - *in_ECX) / 0x38) * 0x38;
    *in_ECX = local_18;
  }
  ExceptionList = local_10;
  return;
}

