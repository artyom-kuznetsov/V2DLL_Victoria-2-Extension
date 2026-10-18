// FUN_0098ea90 @ 0098ea90 body=[[0098ea90, 0098eb25] [0098eb29, 0098eb55]]


void FUN_0098ea90(void)

{
  int iVar1;
  uint in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e510;
  local_10 = ExceptionList;
  if (0xfffffff < in_ECX) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)(DAT_0131c8c4 - DAT_0131c8bc >> 4) < in_ECX) {
    ExceptionList = &local_10;
    iVar1 = FUN_0060da00();
    local_8 = 0;
    FUN_0098ec90(DAT_0131c8c0,iVar1,iVar1);
    if (DAT_0131c8bc != 0) {
      FUN_004651b0(DAT_0131c8c0);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(DAT_0131c8bc);
    }
    DAT_0131c8c4 = in_ECX * 0x10 + iVar1;
    DAT_0131c8c0 = (DAT_0131c8c0 - DAT_0131c8bc & 0xfffffff0U) + iVar1;
    DAT_0131c8bc = iVar1;
  }
  ExceptionList = local_10;
  return;
}

