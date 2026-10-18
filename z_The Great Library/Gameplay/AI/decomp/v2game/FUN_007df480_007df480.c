// FUN_007df480 @ 007df480 body=[[007df480, 007df515] [007df519, 007df545]]


void FUN_007df480(void)

{
  int iVar1;
  uint in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b430d0;
  local_10 = ExceptionList;
  if (0xfffffff < in_ECX) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)(DAT_01267a3c - DAT_01267a34 >> 4) < in_ECX) {
    ExceptionList = &local_10;
    iVar1 = FUN_0060da00();
    local_8 = 0;
    FUN_007df6f0(iVar1,iVar1);
    if (DAT_01267a34 != 0) {
      FUN_004651b0(DAT_01267a38);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(DAT_01267a34);
    }
    DAT_01267a3c = in_ECX * 0x10 + iVar1;
    DAT_01267a38 = (DAT_01267a38 - DAT_01267a34 & 0xfffffff0U) + iVar1;
    DAT_01267a34 = iVar1;
  }
  ExceptionList = local_10;
  return;
}

