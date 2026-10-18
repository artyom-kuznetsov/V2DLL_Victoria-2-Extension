// FUN_004c8e00 @ 004c8e00 body=[[004c8e00, 004c8e93] [004c8e97, 004c8ec3]]


void FUN_004c8e00(uint param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d0f0;
  local_10 = ExceptionList;
  if (0x71c71c7 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x24) < param_1) {
    ExceptionList = &local_10;
    iVar2 = FUN_00779af0();
    local_8 = 0;
    FUN_004ca0f0(param_1);
    iVar1 = *in_ECX;
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    in_ECX[2] = iVar2 + param_1 * 0x24;
    in_ECX[1] = iVar2 + ((in_ECX[1] - iVar1) / 0x24) * 0x24;
    *in_ECX = iVar2;
  }
  ExceptionList = local_10;
  return;
}

