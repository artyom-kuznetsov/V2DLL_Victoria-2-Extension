// FUN_009b1b20 @ 009b1b20 body=[[009b1b20, 009b1bc9] [009b1bcd, 009b1bfd]]


void FUN_009b1b20(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e2c0;
  local_10 = ExceptionList;
  if (0x18f9c18 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0xa4) < param_1) {
    ExceptionList = &local_10;
    iVar1 = FUN_009b18a0();
    local_8 = 0;
    FUN_009b1c20(in_ECX[1],iVar1,param_1);
    local_8 = 0xffffffff;
    if (*in_ECX != 0) {
      FUN_009b1880();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = param_1 * 0xa4 + iVar1;
    in_ECX[1] = ((in_ECX[1] - *in_ECX) / 0xa4) * 0xa4 + iVar1;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

