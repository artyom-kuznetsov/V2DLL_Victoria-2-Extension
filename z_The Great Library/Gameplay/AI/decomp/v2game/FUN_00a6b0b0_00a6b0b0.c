// FUN_00a6b0b0 @ 00a6b0b0 body=[[00a6b0b0, 00a6b157] [00a6b15b, 00a6b187]]


void FUN_00a6b0b0(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b40d10;
  local_10 = ExceptionList;
  if (0x71c71c7 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x24) < param_1) {
    ExceptionList = &local_10;
    iVar1 = FUN_00779af0();
    local_8 = 0;
    FUN_00a6b7d0(*in_ECX,in_ECX[1],iVar1,param_1);
    if (*in_ECX != 0) {
      FUN_00a6b5d0(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = iVar1 + param_1 * 0x24;
    in_ECX[1] = iVar1 + ((in_ECX[1] - *in_ECX) / 0x24) * 0x24;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

