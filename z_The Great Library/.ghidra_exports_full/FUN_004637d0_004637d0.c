// FUN_004637d0 @ 004637d0 body=[[004637d0, 00463857] [0046385e, 00463885]]


void FUN_004637d0(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b40680;
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
    FUN_004642d0(in_ECX[1],iVar1,param_1);
    if (*in_ECX != 0) {
      FUN_00a6b610(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = param_1 * 0x20 + iVar1;
    in_ECX[1] = (in_ECX[1] - *in_ECX & 0xffffffe0U) + iVar1;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

