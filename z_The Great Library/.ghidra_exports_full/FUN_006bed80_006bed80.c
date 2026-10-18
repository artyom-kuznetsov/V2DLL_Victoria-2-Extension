// FUN_006bed80 @ 006bed80 body=[[006bed80, 006bee3c]]


undefined1 FUN_006bed80(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8b610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00416e30();
  uVar2 = FUN_004f97a0();
  local_8 = 0;
  FUN_00416e30();
  uVar3 = FUN_004f97a0();
  local_8._0_1_ = 1;
  uVar1 = thunk_FUN_0098ab20(uVar3,uVar3,uVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00408ad0();
  local_8 = 0xffffffff;
  FUN_00408ad0();
  ExceptionList = local_10;
  return uVar1;
}

