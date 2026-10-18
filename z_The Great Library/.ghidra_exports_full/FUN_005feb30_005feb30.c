// FUN_005feb30 @ 005feb30 body=[[005feb30, 005febaa] [005febae, 005febcf] [005febd3, 005febf4] [005febf8, 005fec37]]


void FUN_005feb30(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b511b2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CBudgetView::vftable;
  local_8 = 9;
  if ((int *)in_ECX[0x7e] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x7e] + 4))(1);
  }
  local_8 = CONCAT31(local_8._1_3_,8);
  if ((int *)in_ECX[0x7d] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x7d] + 4))(1);
  }
  in_ECX[0x72] = CButtonObserver::vftable;
  in_ECX[0x67] = CButtonObserver::vftable;
  if (in_ECX[0x53] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x53]);
  }
  in_ECX[0x53] = 0;
  in_ECX[0x54] = 0;
  in_ECX[0x55] = 0;
  if (in_ECX[0x4f] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x4f]);
  }
  in_ECX[0x4f] = 0;
  in_ECX[0x50] = 0;
  in_ECX[0x51] = 0;
  if (in_ECX[0x39] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x39]);
  }
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x2d] = CButtonObserver::vftable;
  in_ECX[0x22] = CButtonObserver::vftable;
  in_ECX[0x17] = CButtonObserver::vftable;
  local_8 = 0xffffffff;
  FUN_007538f0();
  ExceptionList = local_10;
  return;
}

