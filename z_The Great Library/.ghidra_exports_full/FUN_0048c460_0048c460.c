// FUN_0048c460 @ 0048c460 body=[[0048c460, 0048c4d5] [0048c4d9, 0048c500]]


void FUN_0048c460(uint param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3a4d0;
  local_10 = ExceptionList;
  if (0xfffffff < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)(in_ECX[2] - *in_ECX >> 4) < param_1) {
    ExceptionList = &local_10;
    iVar2 = FUN_0060da00();
    local_8 = 0;
    FUN_0048cf60(*in_ECX,iVar2);
    iVar1 = *in_ECX;
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    in_ECX[2] = param_1 * 0x10 + iVar2;
    in_ECX[1] = (in_ECX[1] - iVar1 & 0xfffffff0U) + iVar2;
    *in_ECX = iVar2;
  }
  ExceptionList = local_10;
  return;
}

