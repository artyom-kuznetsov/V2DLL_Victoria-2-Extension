// FUN_006e2c90 @ 006e2c90 body=[[006e2c90, 006e2ce5] [006e2ce9, 006e2d3b]]


void FUN_006e2c90(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3cc1d;
  local_10 = ExceptionList;
  local_8 = 7;
  ExceptionList = &local_10;
  if ((int *)*in_ECX != (int *)0x0) {
    ExceptionList = &local_10;
    (**(code **)(*(int *)*in_ECX + 0x50))();
    *in_ECX = 0;
  }
  FUN_00459820();
  if (in_ECX[0x6b] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x6b]);
  }
  in_ECX[0x6b] = 0;
  in_ECX[0x6c] = 0;
  in_ECX[0x6d] = 0;
  in_ECX[0x4e] = (int)CButtonObserver::vftable;
  in_ECX[0x43] = (int)CButtonObserver::vftable;
  in_ECX[0x38] = (int)CButtonObserver::vftable;
  in_ECX[0x2d] = (int)CButtonObserver::vftable;
  in_ECX[0x22] = (int)CButtonObserver::vftable;
  in_ECX[0x17] = (int)CButtonObserver::vftable;
  ExceptionList = local_10;
  return;
}

