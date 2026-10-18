// FUN_00a44940 @ 00a44940 body=[[00a44940, 00a449d4] [00a449d8, 00a44a02]]


void FUN_00a44940(uint param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3a6f0;
  local_10 = ExceptionList;
  if (0x4ec4ec4 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x34) < param_1) {
    ExceptionList = &local_10;
    iVar2 = FUN_00a44a20();
    local_8 = 0;
    FUN_00a44a70(in_ECX[1],param_1);
    iVar1 = *in_ECX;
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    in_ECX[2] = param_1 * 0x34 + iVar2;
    in_ECX[1] = ((in_ECX[1] - iVar1) / 0x34) * 0x34 + iVar2;
    *in_ECX = iVar2;
  }
  ExceptionList = local_10;
  return;
}

