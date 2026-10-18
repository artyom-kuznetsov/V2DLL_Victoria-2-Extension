// FUN_004bf100 @ 004bf100 body=[[004bf100, 004bf1a9] [004bf1ad, 004bf1dd]]


void FUN_004bf100(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b51790;
  local_10 = ExceptionList;
  if (0x787878 < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x220) < param_1) {
    ExceptionList = &local_10;
    iVar1 = FUN_004bf460();
    local_8 = 0;
    FUN_004c0a50(in_ECX[1],iVar1,param_1);
    local_8 = 0xffffffff;
    if (*in_ECX != 0) {
      FUN_004be3e0();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = param_1 * 0x220 + iVar1;
    in_ECX[1] = ((in_ECX[1] - *in_ECX) / 0x220) * 0x220 + iVar1;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

