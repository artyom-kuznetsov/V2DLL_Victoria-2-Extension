// FUN_008049b0 @ 008049b0 body=[[008049b0, 00804a5c] [00804a60, 00804a8c]]


void FUN_008049b0(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3ac10;
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
    FUN_00a76c20(*in_ECX,param_1);
    local_8 = 0xffffffff;
    if (*in_ECX != 0) {
      FUN_00804e70(in_ECX[1],param_1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = iVar1 + param_1 * 0x24;
    in_ECX[1] = iVar1 + ((in_ECX[1] - *in_ECX) / 0x24) * 0x24;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

