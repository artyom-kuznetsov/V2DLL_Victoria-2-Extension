// FUN_007df560 @ 007df560 body=[[007df560, 007df5e4] [007df5e8, 007df60f]]


void FUN_007df560(uint param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3ac20;
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
    FUN_00476090(*in_ECX,iVar1);
    iVar2 = *in_ECX;
    if (iVar2 != 0) {
      for (; iVar2 != in_ECX[1]; iVar2 = iVar2 + 0x10) {
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = param_1 * 0x10 + iVar1;
    in_ECX[1] = (in_ECX[1] - iVar2 & 0xfffffff0U) + iVar1;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

