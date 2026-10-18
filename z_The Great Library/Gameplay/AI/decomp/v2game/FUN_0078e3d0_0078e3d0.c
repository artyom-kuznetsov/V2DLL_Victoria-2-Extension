// FUN_0078e3d0 @ 0078e3d0 body=[[0078e3d0, 0078e40e] [0078e412, 0078e489]]


void FUN_0078e3d0(undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3f023;
  local_10 = ExceptionList;
  iVar1 = param_1[0x98];
  ExceptionList = &local_10;
  *param_1 = CSingleUnitButtons::vftable;
  param_1[7] = CSingleUnitButtons::vftable;
  if (iVar1 != 0) {
    FUN_0078e490();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  param_1[0x82] = CButtonObserver::vftable;
  param_1[0x6e] = CButtonObserver::vftable;
  param_1[0x5a] = CButtonObserver::vftable;
  param_1[0x46] = CButtonObserver::vftable;
  param_1[0x32] = CButtonObserver::vftable;
  param_1[0x1e] = CButtonObserver::vftable;
  param_1[10] = CButtonObserver::vftable;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  local_8 = 1;
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 0x50))();
  }
  local_8 = 0xffffffff;
  param_1[7] = &PTR_FUN_00e39158;
  *param_1 = &PTR_FUN_00e38708;
  FUN_009a62b0();
  ExceptionList = local_10;
  return;
}

