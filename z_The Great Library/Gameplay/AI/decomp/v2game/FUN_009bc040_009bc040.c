// FUN_009bc040 @ 009bc040 body=[[009bc040, 009bc0e2] [009bc0e6, 009bc112]]


void FUN_009bc040(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b49e90;
  local_10 = ExceptionList;
  if (0xaaaaaaa < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x18) < param_1) {
    ExceptionList = &local_10;
    iVar1 = FUN_0060d9a0();
    local_8 = 0;
    FUN_009bc130(in_ECX[1],iVar1,param_1);
    if (*in_ECX != 0) {
      FUN_00475f00(in_ECX[1]);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = iVar1 + param_1 * 0x18;
    in_ECX[1] = iVar1 + ((in_ECX[1] - *in_ECX) / 0x18) * 0x18;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

