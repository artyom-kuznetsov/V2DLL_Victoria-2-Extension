// FUN_00737ef0 @ 00737ef0 body=[[00737ef0, 00737f84] [00737f88, 00737fb4]]


void FUN_00737ef0(uint param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3ae00;
  local_10 = ExceptionList;
  if (0xccccccc < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x14) < param_1) {
    ExceptionList = &local_10;
    iVar2 = FUN_00804ab0();
    local_8 = 0;
    FUN_00738a70(*in_ECX,param_1);
    iVar1 = *in_ECX;
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    in_ECX[2] = iVar2 + param_1 * 0x14;
    in_ECX[1] = iVar2 + ((in_ECX[1] - iVar1) / 0x14) * 0x14;
    *in_ECX = iVar2;
  }
  ExceptionList = local_10;
  return;
}

