// FUN_00409040 @ 00409040 body=[[00409040, 004090e6] [004090ea, 00409114]]


void FUN_00409040(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b40a00;
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
    FUN_0040a1d0(in_ECX[1],iVar1,param_1);
    if (*in_ECX != 0) {
      FUN_0040a110(in_ECX[1],param_1);
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

