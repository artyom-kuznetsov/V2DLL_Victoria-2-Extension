// FUN_00649110 @ 00649110 body=[[00649110, 00649159] [00649160, 00649168] [00649172, 006491c1]]


void FUN_00649110(undefined4 *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ccc4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CMultiplayerHandler::vftable;
  local_8 = 5;
  piVar1 = (int *)(**(code **)(*(int *)param_1[1] + 0x44))();
  (**(code **)(*piVar1 + 8))(param_1);
  if (param_1[0x28] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x28]);
  }
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  FUN_0067a300(param_1 + 0x24);
  param_1[0x19] = CButtonObserver::vftable;
  param_1[0xe] = CButtonObserver::vftable;
  param_1[3] = CButtonObserver::vftable;
  *param_1 = CSessionInfoObserver::vftable;
  ExceptionList = local_10;
  return;
}

