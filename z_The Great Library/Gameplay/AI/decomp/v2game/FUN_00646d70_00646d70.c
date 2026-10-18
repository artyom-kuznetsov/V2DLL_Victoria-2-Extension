// FUN_00646d70 @ 00646d70 body=[[00646d70, 00646efe]]


undefined4 FUN_00646d70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b63833;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar1 = FUN_00aae9af();
  local_c = 0;
  if (iVar1 != 0) {
    FUN_00408ed0();
    local_c._0_1_ = 1;
    FUN_009f2020();
    local_c._0_1_ = 2;
    FUN_009f2160();
    local_c._0_1_ = 3;
    FUN_009f2050();
    local_c._0_1_ = 4;
    FUN_00408ed0();
    local_c._0_1_ = 5;
    FUN_00408ed0(in_ECX + 0x13c,0,0xffffffff);
    local_c = (uint)local_c._1_3_ << 8;
    uVar2 = FUN_00647130(in_ECX,param_1,param_2,in_ECX + 0x104,
                         CONCAT22((short)*(undefined4 *)(in_ECX + 600),
                                  (short)*(undefined4 *)(in_ECX + 0x254)));
    ExceptionList = local_14;
    return uVar2;
  }
  ExceptionList = local_14;
  return 0;
}

