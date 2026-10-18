// FUN_00a80620 @ 00a80620 body=[[00a80620, 00a806c7] [00a806cb, 00a806ff]]


void FUN_00a80620(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d5b0;
  local_10 = ExceptionList;
  if (0x4444444 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x3c) < param_1) {
    ExceptionList = &local_10;
    iVar1 = FUN_00a80720();
    local_8 = 0;
    FUN_00a80a00(in_ECX[1],iVar1,param_1);
    if (*in_ECX != 0) {
      FUN_00a40310();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = iVar1 + param_1 * 0x3c;
    in_ECX[1] = iVar1 + ((in_ECX[1] - *in_ECX) / 0x3c) * 0x3c;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

