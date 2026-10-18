// FUN_00409130 @ 00409130 body=[[00409130, 004091d6] [004091da, 00409204]]


void FUN_00409130(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b409f0;
  local_10 = ExceptionList;
  if (0x4ec4ec4 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x34) < param_1) {
    ExceptionList = &local_10;
    iVar1 = FUN_00a44a20();
    local_8 = 0;
    FUN_0040a260(in_ECX[1],iVar1,param_1);
    if (*in_ECX != 0) {
      FUN_0040a190(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = param_1 * 0x34 + iVar1;
    in_ECX[1] = ((in_ECX[1] - *in_ECX) / 0x34) * 0x34 + iVar1;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

