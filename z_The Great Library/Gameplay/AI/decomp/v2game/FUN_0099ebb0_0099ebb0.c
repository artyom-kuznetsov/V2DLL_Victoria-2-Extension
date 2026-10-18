// FUN_0099ebb0 @ 0099ebb0 body=[[0099ebb0, 0099ec42] [0099ec46, 0099ec72]]


void FUN_0099ebb0(uint param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3bf70;
  local_10 = ExceptionList;
  if (0x15555555 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0xc) < param_1) {
    ExceptionList = &local_10;
    iVar2 = FUN_007d8af0();
    local_8 = 0;
    FUN_0099eea0(*in_ECX,param_1);
    iVar1 = *in_ECX;
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    in_ECX[2] = iVar2 + param_1 * 0xc;
    in_ECX[1] = iVar2 + ((in_ECX[1] - iVar1) / 0xc) * 0xc;
    *in_ECX = iVar2;
  }
  ExceptionList = local_10;
  return;
}

