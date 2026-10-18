// FUN_004a3850 @ 004a3850 body=[[004a3850, 004a38d7] [004a38de, 004a3905]]


void FUN_004a3850(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b401a0;
  local_10 = ExceptionList;
  if (0x3ffffff < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)(in_ECX[2] - *in_ECX >> 6) < param_1) {
    ExceptionList = &local_10;
    iVar1 = FUN_004a3a70();
    local_8 = 0;
    FUN_004a3fb0(in_ECX[1],iVar1,param_1);
    if (*in_ECX != 0) {
      FUN_004a3ac0(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = param_1 * 0x40 + iVar1;
    in_ECX[1] = (in_ECX[1] - *in_ECX & 0xffffffc0U) + iVar1;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

