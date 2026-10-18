// FUN_006a46b0 @ 006a46b0 body=[[006a46b0, 006a4739]]


void FUN_006a46b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3f023;
  local_10 = ExceptionList;
  puVar1 = param_1 + 1;
  ExceptionList = &local_10;
  *param_1 = CRightClickCloseItem::vftable;
  *puVar1 = CRightClickCloseItem::vftable;
  param_1[8] = CRightClickCloseItem::vftable;
  param_1[0xc] = CButtonObserver::vftable;
  *puVar1 = &PTR_FUN_00e392f0;
  param_1[8] = &PTR_FUN_00e39320;
  local_8 = 1;
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 0x50))();
  }
  local_8 = 0xffffffff;
  param_1[8] = &PTR_FUN_00e39158;
  *puVar1 = &PTR_FUN_00e38708;
  FUN_009a62b0();
  ExceptionList = local_10;
  return;
}

