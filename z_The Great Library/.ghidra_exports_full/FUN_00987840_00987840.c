// FUN_00987840 @ 00987840 body=[[00987840, 009878d5] [009878d9, 00987905]]


void FUN_00987840(void)

{
  int iVar1;
  uint in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b41de0;
  local_10 = ExceptionList;
  if (0xfffffff < in_ECX) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)(DAT_0131c534 - DAT_0131c52c >> 4) < in_ECX) {
    ExceptionList = &local_10;
    iVar1 = FUN_0060da00();
    local_8 = 0;
    FUN_0098ec90(DAT_0131c530,iVar1,iVar1);
    if (DAT_0131c52c != 0) {
      FUN_004651b0(DAT_0131c530);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(DAT_0131c52c);
    }
    DAT_0131c534 = in_ECX * 0x10 + iVar1;
    DAT_0131c530 = (DAT_0131c530 - DAT_0131c52c & 0xfffffff0U) + iVar1;
    DAT_0131c52c = iVar1;
  }
  ExceptionList = local_10;
  return;
}

