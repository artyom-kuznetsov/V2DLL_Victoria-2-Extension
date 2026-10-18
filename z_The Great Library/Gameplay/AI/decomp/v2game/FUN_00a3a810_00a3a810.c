// FUN_00a3a810 @ 00a3a810 body=[[00a3a810, 00a3a8b6] [00a3a8ba, 00a3a8e6]]


void FUN_00a3a810(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b489d0;
  local_10 = ExceptionList;
  if (0xccccccc < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x14) < param_1) {
    ExceptionList = &local_10;
    iVar1 = FUN_00804ab0();
    local_8 = 0;
    FUN_00a3abf0(in_ECX[1],iVar1,param_1);
    if (*in_ECX != 0) {
      FUN_00a3aac0(in_ECX[1],param_1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = iVar1 + param_1 * 0x14;
    in_ECX[1] = iVar1 + ((in_ECX[1] - *in_ECX) / 0x14) * 0x14;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

