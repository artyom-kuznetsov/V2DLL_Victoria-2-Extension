// FUN_004df3d0 @ 004df3d0 body=[[004df3d0, 004df479] [004df47d, 004df4ad]]


void FUN_004df3d0(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4cf80;
  local_10 = ExceptionList;
  if (0xba2e8b < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x160) < param_1) {
    ExceptionList = &local_10;
    iVar1 = FUN_004df4d0();
    local_8 = 0;
    FUN_004e0490(in_ECX[1],iVar1,param_1);
    local_8 = 0xffffffff;
    if (*in_ECX != 0) {
      FUN_004defe0();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = param_1 * 0x160 + iVar1;
    in_ECX[1] = ((in_ECX[1] - *in_ECX) / 0x160) * 0x160 + iVar1;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

