// FUN_006d1e00 @ 006d1e00 body=[[006d1e00, 006d1e80] [006d1e84, 006d1ea4]]


void FUN_006d1e00(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b50b49;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CListPartiesWindow::vftable;
  local_8 = 2;
  if (in_ECX[8] != 0) {
    (**(code **)(*(int *)(in_ECX[8] + 0x18) + 0x38))();
    (**(code **)(*(int *)in_ECX[8] + 0x50))();
    in_ECX[8] = 0;
  }
  in_ECX[0x15] = CButtonObserver::vftable;
  in_ECX[10] = CButtonObserver::vftable;
  *in_ECX = &PTR___purecall_00e38700;
  local_8 = 3;
  FUN_009a4ca0();
  if (0xf < (uint)in_ECX[6]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[1]);
  }
  in_ECX[6] = 0xf;
  in_ECX[5] = 0;
  *(undefined1 *)(in_ECX + 1) = 0;
  ExceptionList = local_10;
  return;
}

