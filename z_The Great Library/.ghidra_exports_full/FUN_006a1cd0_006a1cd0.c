// FUN_006a1cd0 @ 006a1cd0 body=[[006a1cd0, 006a1d76] [006a1d7a, 006a1da4]]


void FUN_006a1cd0(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4c250;
  local_10 = ExceptionList;
  if (0x2e8ba2e < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x58) < param_1) {
    ExceptionList = &local_10;
    iVar1 = FUN_004095f0();
    local_8 = 0;
    FUN_006a2e70(in_ECX[1],iVar1,param_1);
    if (*in_ECX != 0) {
      FUN_006a20c0(in_ECX[1],param_1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = param_1 * 0x58 + iVar1;
    in_ECX[1] = ((in_ECX[1] - *in_ECX) / 0x58) * 0x58 + iVar1;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

