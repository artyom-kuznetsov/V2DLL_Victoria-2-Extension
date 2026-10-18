// FUN_009732c0 @ 009732c0 body=[[009732c0, 009732f0] [009732fe, 00973346]]


void FUN_009732c0(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = DAT_01258a3c;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (DAT_01258a3c != 0) {
    ExceptionList = &local_10;
    FUN_009733b0(DAT_01258a3c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x3c);
  local_8 = 0;
  if (iVar1 != 0) {
    DAT_01258a3c = FUN_00973350();
    ExceptionList = local_10;
    return;
  }
  DAT_01258a3c = 0;
  ExceptionList = local_10;
  return;
}

