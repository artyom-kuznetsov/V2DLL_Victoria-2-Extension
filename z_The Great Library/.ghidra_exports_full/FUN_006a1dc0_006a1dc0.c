// FUN_006a1dc0 @ 006a1dc0 body=[[006a1dc0, 006a1e47] [006a1e4e, 006a1e75]]


void FUN_006a1dc0(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3f3c0;
  local_10 = ExceptionList;
  if (0x3ffffff < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)(in_ECX[2] - *in_ECX >> 6) < param_1) {
    ExceptionList = &local_10;
    iVar1 = FUN_004a3a70();
    local_8 = 0;
    FUN_006a2f00(in_ECX[1],iVar1,param_1);
    if (*in_ECX != 0) {
      FUN_006a2140(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = param_1 * 0x40 + iVar1;
    in_ECX[1] = (in_ECX[1] - *in_ECX & 0xffffffc0U) + iVar1;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

