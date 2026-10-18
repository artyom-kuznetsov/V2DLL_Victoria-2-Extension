// FUN_0079ece0 @ 0079ece0 body=[[0079ece0, 0079ed86] [0079ed8a, 0079edb6]]


void FUN_0079ece0(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3efe0;
  local_10 = ExceptionList;
  if (0x6666666 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x28) < param_1) {
    ExceptionList = &local_10;
    iVar1 = FUN_0079eee0();
    local_8 = 0;
    FUN_005e5f40(in_ECX[1],iVar1,param_1);
    if (*in_ECX != 0) {
      FUN_005e5d30(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = iVar1 + param_1 * 0x28;
    in_ECX[1] = iVar1 + ((in_ECX[1] - *in_ECX) / 0x28) * 0x28;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

