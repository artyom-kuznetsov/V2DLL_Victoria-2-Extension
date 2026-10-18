// FUN_0060d740 @ 0060d740 body=[[0060d740, 0060d7d4] [0060d7d8, 0060d804]]


void FUN_0060d740(uint param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3afb0;
  local_10 = ExceptionList;
  if (0xaaaaaaa < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x18) < param_1) {
    ExceptionList = &local_10;
    iVar2 = FUN_0060d9a0();
    local_8 = 0;
    FUN_00610590(*in_ECX,param_1);
    iVar1 = *in_ECX;
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    in_ECX[2] = iVar2 + param_1 * 0x18;
    in_ECX[1] = iVar2 + ((in_ECX[1] - iVar1) / 0x18) * 0x18;
    *in_ECX = iVar2;
  }
  ExceptionList = local_10;
  return;
}

