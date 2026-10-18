// FUN_0044f650 @ 0044f650 body=[[0044f650, 0044f6be] [0044f6c2, 0044f796]]


/* WARNING: Removing unreachable block (ram,0x0044f6f0) */
/* WARNING: Removing unreachable block (ram,0x0044f6b6) */

void FUN_0044f650(undefined4 *param_1)

{
  int *piVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4d637;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CMsgFilters::vftable;
  local_8 = 0x10;
  FUN_00409350("interface/msg_filters.gui",0x19);
  local_8._0_1_ = 0x11;
  FUN_009a4ca0(param_1);
  local_8._0_1_ = 0x10;
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 0x50))();
    param_1[2] = 0;
  }
  piVar1 = param_1 + 0xb5;
  local_14 = 0xb;
  do {
    if (*piVar1 != piVar1[1]) {
      piVar1[1] = *piVar1;
    }
    piVar1 = piVar1 + 4;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  local_8 = CONCAT31(local_8._1_3_,0xf);
  _eh_vector_destructor_iterator_(param_1 + 0xb5,0x10,0xb,FUN_00aa8540);
  param_1[0xa8] = CButtonObserver::vftable;
  param_1[0x9d] = CButtonObserver::vftable;
  param_1[0x92] = CButtonObserver::vftable;
  param_1[0x87] = CButtonObserver::vftable;
  param_1[0x7c] = CButtonObserver::vftable;
  param_1[0x71] = CButtonObserver::vftable;
  param_1[0x66] = CButtonObserver::vftable;
  param_1[0x5b] = CButtonObserver::vftable;
  param_1[0x50] = CButtonObserver::vftable;
  param_1[0x45] = CButtonObserver::vftable;
  param_1[0x3a] = CButtonObserver::vftable;
  param_1[0x2f] = CButtonObserver::vftable;
  param_1[0x24] = CButtonObserver::vftable;
  param_1[0x19] = CButtonObserver::vftable;
  param_1[0xe] = CButtonObserver::vftable;
  param_1[3] = CButtonObserver::vftable;
  ExceptionList = local_10;
  return;
}

