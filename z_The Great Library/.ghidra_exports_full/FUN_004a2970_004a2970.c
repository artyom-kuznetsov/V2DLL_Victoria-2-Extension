// FUN_004a2970 @ 004a2970 body=[[004a2970, 004a29f0] [004a29f4, 004a2a1b]]


void FUN_004a2970(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d1a0;
  local_10 = ExceptionList;
  if (0xfffffff < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)(in_ECX[2] - *in_ECX >> 4) < param_1) {
    ExceptionList = &local_10;
    iVar1 = FUN_0060da00();
    local_8 = 0;
    FUN_004a3cf0(in_ECX[1],iVar1,iVar1);
    if (*in_ECX != 0) {
      FUN_004651b0(in_ECX[1]);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = param_1 * 0x10 + iVar1;
    in_ECX[1] = (in_ECX[1] - *in_ECX & 0xfffffff0U) + iVar1;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

