// FUN_007c7ff0 @ 007c7ff0 body=[[007c7ff0, 007c8096] [007c809a, 007c80ce]]


void FUN_007c7ff0(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3ee90;
  local_10 = ExceptionList;
  if (0x3c3c3c3 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x44) < param_1) {
    ExceptionList = &local_10;
    iVar1 = FUN_007c80f0();
    local_8 = 0;
    FUN_007cc560(in_ECX[1],iVar1,param_1);
    if (*in_ECX != 0) {
      FUN_007c8150(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = iVar1 + param_1 * 0x44;
    in_ECX[1] = iVar1 + ((in_ECX[1] - *in_ECX) / 0x44) * 0x44;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

