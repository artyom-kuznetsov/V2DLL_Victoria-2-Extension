// FUN_00a584a0 @ 00a584a0 body=[[00a584a0, 00a5861c]]


undefined4 FUN_00a584a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_ESI;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b524a3;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar1 = FUN_00aae9af();
  local_c = 0;
  if (iVar1 != 0) {
    (**(code **)(*unaff_ESI + 0x18))();
    FUN_00408ed0();
    local_c._0_1_ = 1;
    FUN_00408ed0();
    local_c._0_1_ = 2;
    FUN_00408ed0();
    local_c._0_1_ = 3;
    FUN_00408ed0(unaff_ESI + 0x1e,0,0xffffffff);
    local_c = (uint)local_c._1_3_ << 8;
    uVar2 = FUN_009b5400(iVar1,param_1,param_2);
    ExceptionList = local_14;
    return uVar2;
  }
  ExceptionList = local_14;
  return 0;
}

