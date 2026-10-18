// FUN_006d2b30 @ 006d2b30 body=[[006d2b30, 006d2be1]]


void FUN_006d2b30(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b50b09;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CPoliticsView::vftable;
  local_8 = 0xe;
  if ((int *)in_ECX[0xb4] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0xb4] + 4))(1);
  }
  in_ECX[0xa9] = CButtonObserver::vftable;
  in_ECX[0x9e] = CButtonObserver::vftable;
  in_ECX[0x93] = CButtonObserver::vftable;
  in_ECX[0x88] = CButtonObserver::vftable;
  in_ECX[0x7d] = CButtonObserver::vftable;
  in_ECX[0x72] = CButtonObserver::vftable;
  in_ECX[0x67] = CButtonObserver::vftable;
  in_ECX[0x5c] = CButtonObserver::vftable;
  in_ECX[0x4e] = CButtonObserver::vftable;
  in_ECX[0x43] = CButtonObserver::vftable;
  in_ECX[0x38] = CButtonObserver::vftable;
  in_ECX[0x2d] = CButtonObserver::vftable;
  in_ECX[0x22] = CButtonObserver::vftable;
  in_ECX[0x17] = CButtonObserver::vftable;
  local_8 = 0xffffffff;
  FUN_007538f0();
  ExceptionList = local_10;
  return;
}

