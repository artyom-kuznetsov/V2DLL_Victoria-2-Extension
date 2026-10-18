// FUN_00761710 @ 00761710 body=[[00761710, 007617e0]]


void FUN_00761710(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ade8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CSettingsScreen::vftable;
  local_8 = 0x15;
  (**(code **)(*(int *)in_ECX[0xd3] + 0x50))();
  in_ECX[0xf7] = CButtonObserver::vftable;
  in_ECX[0xec] = CButtonObserver::vftable;
  in_ECX[0xe1] = CButtonObserver::vftable;
  in_ECX[0xd6] = CButtonObserver::vftable;
  in_ECX[0xb8] = CScrollbarObserver::vftable;
  in_ECX[0xbe] = CCheckBoxObserver::vftable;
  in_ECX[0xaf] = CCheckBoxObserver::vftable;
  in_ECX[0xa4] = CButtonObserver::vftable;
  in_ECX[0x99] = CButtonObserver::vftable;
  in_ECX[0x8e] = CButtonObserver::vftable;
  in_ECX[0x83] = CButtonObserver::vftable;
  in_ECX[0x78] = CButtonObserver::vftable;
  in_ECX[0x6d] = CButtonObserver::vftable;
  in_ECX[0x62] = CButtonObserver::vftable;
  in_ECX[0x4f] = CButtonObserver::vftable;
  in_ECX[0x44] = CButtonObserver::vftable;
  in_ECX[0x39] = CButtonObserver::vftable;
  in_ECX[0x2e] = CButtonObserver::vftable;
  in_ECX[0x23] = CButtonObserver::vftable;
  in_ECX[0x18] = CButtonObserver::vftable;
  in_ECX[0xd] = CButtonObserver::vftable;
  in_ECX[2] = CButtonObserver::vftable;
  ExceptionList = local_10;
  return;
}

