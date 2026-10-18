// FUN_00675a80 @ 00675a80 body=[[00675a80, 00675bd6]]


void FUN_00675a80(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9e3ac;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_00f20c18 == (int *)0x0) {
    ExceptionList = &local_10;
    DAT_00f20c18 = (int *)FUN_00aae9af();
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  (**(code **)(*DAT_00f20c18 + 0x30))();
  (**(code **)(**(int **)(*(int *)(param_1 + 0x17e8) + 0xe4) + 0x10))();
  local_8 = 0;
  iVar1 = FUN_00aae9af();
  local_8._0_1_ = 1;
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00409350(&DAT_00ded94d,0);
    puVar2 = (undefined4 *)FUN_00992740(iVar1,in_ECX,1);
  }
  FUN_00993a80();
  local_8._0_1_ = 2;
  (**(code **)(*DAT_012588e8 + 4))();
  local_8 = (uint)local_8._1_3_ << 8;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)();
  }
  local_8 = 0xffffffff;
  (**(code **)(**(int **)(*(int *)(param_1 + 0x17e8) + 0xe4) + 0x10))();
  FUN_0066eee0();
  ExceptionList = local_10;
  return;
}

