// FUN_0060d8e0 @ 0060d8e0 body=[[0060d8e0, 0060d955] [0060d959, 0060d980]]


void FUN_0060d8e0(uint param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3af90;
  local_10 = ExceptionList;
  if (0x7ffffff < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)(in_ECX[2] - *in_ECX >> 5) < param_1) {
    ExceptionList = &local_10;
    iVar2 = FUN_0047b7c0();
    local_8 = 0;
    FUN_00610610(*in_ECX,iVar2);
    iVar1 = *in_ECX;
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    in_ECX[2] = param_1 * 0x20 + iVar2;
    in_ECX[1] = (in_ECX[1] - iVar1 & 0xffffffe0U) + iVar2;
    *in_ECX = iVar2;
  }
  ExceptionList = local_10;
  return;
}

