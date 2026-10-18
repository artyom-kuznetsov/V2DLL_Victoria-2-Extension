// FUN_007d8940 @ 007d8940 body=[[007d8940, 007d89d1] [007d89d5, 007d8a01]]


void FUN_007d8940(uint param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3ac30;
  local_10 = ExceptionList;
  if (0x15555555 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0xc) < param_1) {
    ExceptionList = &local_10;
    iVar2 = FUN_007d8af0();
    local_8 = 0;
    FUN_007d90d0(param_1);
    iVar1 = *in_ECX;
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    in_ECX[2] = iVar2 + param_1 * 0xc;
    in_ECX[1] = iVar2 + ((in_ECX[1] - iVar1) / 0xc) * 0xc;
    *in_ECX = iVar2;
  }
  ExceptionList = local_10;
  return;
}

