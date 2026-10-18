// FUN_0068ed50 @ 0068ed50 body=[[0068ed50, 0068edd5] [0068edd9, 0068ee00]]


void FUN_0068ed50(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3af60;
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
    FUN_0068ff90(*in_ECX,in_ECX[1],iVar1,iVar1);
    if (*in_ECX != 0) {
      FUN_0068fa30(in_ECX[1],iVar1);
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

