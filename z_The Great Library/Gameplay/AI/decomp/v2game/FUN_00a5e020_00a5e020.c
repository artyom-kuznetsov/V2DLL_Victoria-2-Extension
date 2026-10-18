// FUN_00a5e020 @ 00a5e020 body=[[00a5e020, 00a5e1d9]]


undefined4 FUN_00a5e020(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_ESI;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5244b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar2 = FUN_00aae9af();
  local_c = 0;
  if (iVar2 == 0) {
    ExceptionList = local_14;
    return 0;
  }
  iVar1 = unaff_ESI[0x3f];
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 8);
    FUN_0057aab0();
  }
  local_c._1_3_ = (uint3)((uint)local_c >> 8);
  local_c._0_1_ = 1;
  (**(code **)(*unaff_ESI + 0x18))();
  FUN_00408ed0();
  local_c._0_1_ = 2;
  FUN_00408ed0();
  local_c._0_1_ = 3;
  FUN_00408ed0();
  local_c._0_1_ = 4;
  FUN_00408ed0(unaff_ESI + 0x1b,0,0xffffffff);
  local_c = (uint)local_c._1_3_ << 8;
  uVar3 = FUN_009e6d40(iVar2,param_1,param_2);
  ExceptionList = local_14;
  return uVar3;
}

