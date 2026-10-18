// FUN_00419660 @ 00419660 body=[[00419660, 00419715] [00419719, 00419751]]


void FUN_00419660(uint param_1)

{
  int *in_ECX;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d490;
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
    FUN_00419c20(in_ECX[1],local_18,param_1);
    if (*in_ECX != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = local_18 + param_1 * 0x1c;
    in_ECX[1] = local_18 + ((in_ECX[1] - *in_ECX) / 0x1c) * 0x1c;
    *in_ECX = local_18;
  }
  ExceptionList = local_10;
  return;
}

