// FUN_00a5ce50 @ 00a5ce50 body=[[00a5ce50, 00a5d01b]]


undefined4 FUN_00a5ce50(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6327b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar1 = FUN_00aae9af();
  local_c = 0;
  if (iVar1 != 0) {
    FUN_00408ed0();
    local_c._0_1_ = 1;
    FUN_00408ed0();
    local_c._0_1_ = 2;
    FUN_00a5db70();
    local_c._0_1_ = 3;
    FUN_00a5dcd0();
    local_c._0_1_ = 4;
    FUN_00a5dc20();
    local_c._0_1_ = 5;
    FUN_00408ed0();
    local_c._0_1_ = 6;
    FUN_00408ed0(unaff_ESI + 0x74,0,0xffffffff);
    local_c = (uint)local_c._1_3_ << 8;
    uVar2 = FUN_00a87900(iVar1,*(undefined4 *)(unaff_ESI + 0x168),*(undefined4 *)(unaff_ESI + 0x16c)
                         ,unaff_ESI + 0x11c,
                         CONCAT22((short)*(undefined4 *)(unaff_ESI + 0x158),
                                  (short)*(undefined4 *)(unaff_ESI + 0x154)));
    ExceptionList = local_14;
    return uVar2;
  }
  ExceptionList = local_14;
  return 0;
}

