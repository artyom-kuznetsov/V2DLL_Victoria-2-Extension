// FUN_00779700 @ 00779700 body=[[00779700, 007797a5] [007797a9, 007797d5]]


void FUN_00779700(uint param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3ca50;
  local_10 = ExceptionList;
  if (0x71c71c7 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x24) < param_1) {
    ExceptionList = &local_10;
    iVar1 = FUN_00779af0();
    local_8 = 0;
    FUN_0077a040(param_1);
    iVar2 = *in_ECX;
    if (iVar2 != 0) {
      for (; iVar2 != in_ECX[1]; iVar2 = iVar2 + 0x24) {
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = iVar1 + param_1 * 0x24;
    in_ECX[1] = iVar1 + ((in_ECX[1] - iVar2) / 0x24) * 0x24;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

