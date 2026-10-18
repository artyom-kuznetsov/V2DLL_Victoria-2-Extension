// FUN_00a802e0 @ 00a802e0 body=[[00a802e0, 00a80374] [00a80378, 00a803a2]]


void FUN_00a802e0(uint param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3a5c0;
  local_10 = ExceptionList;
  if (0x30c30c3 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x54) < param_1) {
    ExceptionList = &local_10;
    iVar2 = FUN_00a804a0();
    local_8 = 0;
    FUN_00a80810(in_ECX[1],param_1);
    iVar1 = *in_ECX;
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    in_ECX[2] = param_1 * 0x54 + iVar2;
    in_ECX[1] = ((in_ECX[1] - iVar1) / 0x54) * 0x54 + iVar2;
    *in_ECX = iVar2;
  }
  ExceptionList = local_10;
  return;
}

