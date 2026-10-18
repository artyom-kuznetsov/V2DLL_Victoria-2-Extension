// FUN_009cdf90 @ 009cdf90 body=[[009cdf90, 009ce1de]]


undefined4 FUN_009cdf90(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_ESI;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9014b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar2 = FUN_00aae9af();
  local_c = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(unaff_ESI + 0x1d4);
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x20);
      FUN_00408db0();
    }
    local_c._1_3_ = (uint3)((uint)local_c >> 8);
    local_c._0_1_ = 1;
    iVar1 = *(int *)(unaff_ESI + 0x1b4);
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x20);
      FUN_00408db0();
    }
    local_c._0_1_ = 2;
    iVar1 = *(int *)(unaff_ESI + 0x184);
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x20);
      FUN_00408db0();
    }
    local_c._0_1_ = 3;
    DAT_0131c898 = 1;
    FUN_00408ed0();
    local_c._0_1_ = 4;
    FUN_00408ed0();
    local_c._0_1_ = 5;
    FUN_00408ed0();
    local_c._0_1_ = 6;
    FUN_00408ed0(unaff_ESI + 0x84,0,0xffffffff);
    local_c = (uint)local_c._1_3_ << 8;
    uVar3 = FUN_00a6c290(iVar2,param_1,param_2,unaff_ESI);
    ExceptionList = local_14;
    return uVar3;
  }
  ExceptionList = local_14;
  return 0;
}

