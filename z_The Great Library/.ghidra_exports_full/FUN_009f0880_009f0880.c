// FUN_009f0880 @ 009f0880 body=[[009f0880, 009f0978]]


void FUN_009f0880(undefined4 param_1)

{
  int iVar1;
  int unaff_ESI;
  undefined4 unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b637c3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af();
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_009f2160();
    local_8._0_1_ = 1;
    FUN_009f2050();
    local_8._0_1_ = 2;
    FUN_00408ed0();
    local_8._0_1_ = 3;
    FUN_00408ed0(unaff_ESI + 0x13c,0,0xffffffff);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00a70250(iVar1,param_1,unaff_EDI,unaff_ESI + 0x104,
                 CONCAT22((short)*(undefined4 *)(unaff_ESI + 600),
                          (short)*(undefined4 *)(unaff_ESI + 0x254)));
  }
  ExceptionList = local_10;
  return;
}

