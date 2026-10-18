// FUN_00a7d8a0 @ 00a7d8a0 body=[[00a7d8a0, 00a7d955] [00a7d959, 00a7d989]]


void FUN_00a7d8a0(uint param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d630;
  local_10 = ExceptionList;
  if (0x2aaaaaa < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x60) < param_1) {
    ExceptionList = &local_10;
    iVar2 = FUN_00a7d9a0();
    local_8 = 0;
    FUN_00a7df00(*in_ECX,in_ECX[1],iVar2,param_1);
    local_8 = 0xffffffff;
    iVar1 = *in_ECX;
    if (iVar1 != 0) {
      FUN_00a7da00(iVar1,in_ECX[1],in_ECX + 3,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = param_1 * 0x60 + iVar2;
    in_ECX[1] = ((in_ECX[1] - iVar1) / 0x60) * 0x60 + iVar2;
    *in_ECX = iVar2;
  }
  ExceptionList = local_10;
  return;
}

