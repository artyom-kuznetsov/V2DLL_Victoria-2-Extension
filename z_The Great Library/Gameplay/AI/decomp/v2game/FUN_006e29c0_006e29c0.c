// FUN_006e29c0 @ 006e29c0 body=[[006e29c0, 006e2a12] [006e2a16, 006e2a28]]


void FUN_006e29c0(byte param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ae48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CFilterWindow::vftable;
  local_8 = 0;
  if ((int *)in_ECX[1] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[1] + 0x50))();
    in_ECX[1] = 0;
  }
  *in_ECX = CButtonObserver::vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

