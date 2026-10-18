// FUN_004c2800 @ 004c2800 body=[[004c2800, 004c28a9] [004c28ad, 004c28dd]]


void FUN_004c2800(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4cfb0;
  local_10 = ExceptionList;
  if (0x1745d17 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0xb0) < param_1) {
    ExceptionList = &local_10;
    iVar1 = FUN_004c2900();
    local_8 = 0;
    FUN_004c2cc0(in_ECX[1],iVar1,param_1);
    local_8 = 0xffffffff;
    if (*in_ECX != 0) {
      FUN_004c2750();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = param_1 * 0xb0 + iVar1;
    in_ECX[1] = ((in_ECX[1] - *in_ECX) / 0xb0) * 0xb0 + iVar1;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

