// FUN_009f0760 @ 009f0760 body=[[009f0760, 009f0875]]


void FUN_009f0760(undefined4 param_1)

{
  int iVar1;
  int unaff_ESI;
  undefined4 unaff_EDI;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b637f3;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar1 = FUN_00aae9af();
  local_c = 0;
  if (iVar1 != 0) {
    FUN_009f2160();
    local_c._0_1_ = 1;
    FUN_009f2050();
    local_c._0_1_ = 2;
    FUN_00408ed0();
    local_c._0_1_ = 3;
    FUN_00408ed0(unaff_ESI + 0x13c,0,0xffffffff);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00a6b930(iVar1,param_1,unaff_EDI,unaff_ESI + 0x104,
                 CONCAT22((short)*(undefined4 *)(unaff_ESI + 600),
                          (short)*(undefined4 *)(unaff_ESI + 0x254)));
  }
  ExceptionList = local_14;
  return;
}

