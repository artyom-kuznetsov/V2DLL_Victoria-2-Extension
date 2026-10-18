// FUN_00a40750 @ 00a40750 body=[[00a40750, 00a407fa] [00a407fe, 00a40828]]


void FUN_00a40750(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d9e0;
  local_10 = ExceptionList;
  if (0x234f72c < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x74) < param_1) {
    ExceptionList = &local_10;
    iVar1 = FUN_00a40890();
    local_8 = 0;
    FUN_00a40f80(in_ECX[1],iVar1,param_1);
    if (*in_ECX != 0) {
      FUN_00a409d0(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = param_1 * 0x74 + iVar1;
    in_ECX[1] = ((in_ECX[1] - *in_ECX) / 0x74) * 0x74 + iVar1;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

