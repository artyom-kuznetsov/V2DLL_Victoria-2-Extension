// FUN_0047bc70 @ 0047bc70 body=[[0047bc70, 0047bd16] [0047bd1a, 0047bd44]]


void FUN_0047bc70(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b404d0;
  local_10 = ExceptionList;
  if (0x35e50d7 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x4c) < param_1) {
    ExceptionList = &local_10;
    iVar1 = FUN_0047bd60();
    local_8 = 0;
    FUN_0047c3c0(in_ECX[1],iVar1,param_1);
    if (*in_ECX != 0) {
      FUN_0047be30(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = param_1 * 0x4c + iVar1;
    in_ECX[1] = ((in_ECX[1] - *in_ECX) / 0x4c) * 0x4c + iVar1;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

