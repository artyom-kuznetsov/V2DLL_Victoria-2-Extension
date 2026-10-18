// FUN_00a368a0 @ 00a368a0 body=[[00a368a0, 00a36946] [00a3694a, 00a36974]]


void FUN_00a368a0(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4e3e0;
  local_10 = ExceptionList;
  if (0x30c30c3 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x54) < param_1) {
    ExceptionList = &local_10;
    iVar1 = FUN_00a804a0();
    local_8 = 0;
    FUN_00a375d0(in_ECX[1],iVar1,param_1);
    if (*in_ECX != 0) {
      FUN_00a36a50(in_ECX[1],param_1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = param_1 * 0x54 + iVar1;
    in_ECX[1] = ((in_ECX[1] - *in_ECX) / 0x54) * 0x54 + iVar1;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

