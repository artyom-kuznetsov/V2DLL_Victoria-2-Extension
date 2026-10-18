// FUN_0048bec0 @ 0048bec0 body=[[0048bec0, 0048bf64] [0048bf68, 0048bf9c]]


void FUN_0048bec0(uint param_1)

{
  int iVar1;
  int *in_ECX;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3b090;
  local_10 = ExceptionList;
  if (0x2222222 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x78) < param_1) {
    if (param_1 == 0) {
      local_18 = 0;
      ExceptionList = &local_10;
    }
    else {
      ExceptionList = &local_10;
      local_18 = FUN_0048c0d0();
    }
    local_8 = 0;
    FUN_0048cba0(in_ECX[1],param_1);
    iVar1 = *in_ECX;
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    in_ECX[2] = local_18 + param_1 * 0x78;
    in_ECX[1] = local_18 + ((in_ECX[1] - iVar1) / 0x78) * 0x78;
    *in_ECX = local_18;
  }
  ExceptionList = local_10;
  return;
}

