// FUN_004bf200 @ 004bf200 body=[[004bf200, 004bf2a9] [004bf2ad, 004bf2dd]]


void FUN_004bf200(uint param_1)

{
  int iVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4cfe0;
  local_10 = ExceptionList;
  if (0x67b23a < param_1) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((in_ECX[2] - *in_ECX) / 0x278) < param_1) {
    ExceptionList = &local_10;
    iVar1 = FUN_004bf4c0();
    local_8 = 0;
    FUN_004c0af0(in_ECX[1],iVar1,param_1);
    local_8 = 0xffffffff;
    if (*in_ECX != 0) {
      FUN_004be400();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*in_ECX);
    }
    in_ECX[2] = param_1 * 0x278 + iVar1;
    in_ECX[1] = ((in_ECX[1] - *in_ECX) / 0x278) * 0x278 + iVar1;
    *in_ECX = iVar1;
  }
  ExceptionList = local_10;
  return;
}

