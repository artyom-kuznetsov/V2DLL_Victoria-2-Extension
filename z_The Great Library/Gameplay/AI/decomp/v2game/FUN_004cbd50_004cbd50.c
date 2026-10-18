// FUN_004cbd50 @ 004cbd50 body=[[004cbd50, 004cbdcc] [004cbdd0, 004cbe08] [004cbe0c, 004cbe1c]]


void FUN_004cbd50(void)

{
  int iVar1;
  int in_ECX;
  uint local_2c;
  undefined1 local_24 [4];
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b75a3a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009a8ee0(local_24,in_ECX + 0x18);
  local_8 = 0;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00408ed0();
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 2;
  FUN_009adb70();
  if (local_20 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

