// FUN_00ae6360 @ 00ae6360 body=[[00ae6360, 00ae642f]]


undefined4 FUN_00ae6360(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined4 *local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00b37d9c;
  local_c = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  local_2c = 0;
  local_24 = 0;
  local_20 = 1;
  local_4 = 0;
  local_28 = 1;
  FUN_00ae64b0(2);
  local_4._0_1_ = 1;
  if ((local_28 + -1) * 0x34 + local_2c != 0) {
    FUN_00ae6820(param_4);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00ae50d0(local_1c,param_1,param_2,param_3,&local_2c);
  uVar1 = *local_1c[0];
  (*(code *)PTR__free_00f01b10)(local_1c[0],uVar2);
  local_4 = 0xffffffff;
  FUN_00ae6780();
  ExceptionList = local_c;
  return uVar1;
}

