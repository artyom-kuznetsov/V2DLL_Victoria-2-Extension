// FUN_0047b6f0 @ 0047b6f0 body=[[0047b6f0, 0047b775] [0047b779, 0047b7a0]]


void FUN_0047b6f0(uint param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b404e0;
  local_10 = ExceptionList;
  if (0x7ffffff < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)(in_ECX[2] - *in_ECX >> 5) < param_1) {
    ExceptionList = &local_10;
    iVar1 = FUN_0047b7c0();
    local_8 = 0;
    FUN_0047bfe0(iVar1);
    iVar2 = *in_ECX;
    if (iVar2 != 0) {
      for (; iVar2 != in_ECX[1]; iVar2 = iVar2 + 0x20) {
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = param_1 * 0x20 + iVar1;
    in_ECX[1] = (in_ECX[1] - iVar2 & 0xffffffe0U) + iVar1;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

