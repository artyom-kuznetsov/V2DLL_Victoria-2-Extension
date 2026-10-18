// FUN_0077b380 @ 0077b380 body=[[0077b380, 0077b412] [0077b416, 0077b438]]


void FUN_0077b380(void)

{
  int iVar1;
  undefined4 *in_ECX;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b43ce1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CTutorialScreen::vftable;
  local_8 = 3;
  if ((int *)in_ECX[0x24] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x24] + 4))(1);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("back_button",0xb);
  local_8 = CONCAT31(local_8._1_3_,4);
  iVar1 = (**(code **)(*(int *)in_ECX[2] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))(in_ECX + 0x19);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  in_ECX[0x19] = CButtonObserver::vftable;
  in_ECX[0xe] = CButtonObserver::vftable;
  in_ECX[3] = CButtonObserver::vftable;
  *in_ECX = CFrontEndView::vftable;
  ExceptionList = local_10;
  return;
}

