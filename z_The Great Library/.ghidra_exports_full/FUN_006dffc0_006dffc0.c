// FUN_006dffc0 @ 006dffc0 body=[[006dffc0, 006e0062] [006e0066, 006e0096]]


void FUN_006dffc0(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3f2d0;
  local_10 = ExceptionList;
  if (0x5555555 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x30) < param_1) {
    ExceptionList = &local_10;
    iVar1 = FUN_006e00f0();
    local_8 = 0;
    FUN_006e0a80(in_ECX[1],iVar1,param_1);
    if (*in_ECX != 0) {
      FUN_006e00b0();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = param_1 * 0x30 + iVar1;
    in_ECX[1] = ((in_ECX[1] - *in_ECX) / 0x30) * 0x30 + iVar1;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

