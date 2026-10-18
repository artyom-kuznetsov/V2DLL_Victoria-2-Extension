// FUN_0097f9d0 @ 0097f9d0 body=[[0097f9d0, 0097fa4c] [0097fa56, 0097fa6b] [0097fa6f, 0097fa84] [0097fa88, 0097fa9d] [0097faa1, 0097fad0] [0097fad4, 0097faf0]]


void FUN_0097f9d0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4f9be;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CPopDetailsView::vftable;
  local_8 = 0xb;
  if ((int *)in_ECX[8] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[8] + 0x50))();
    in_ECX[8] = 0;
  }
  in_ECX[0x5f] = CButtonObserver::vftable;
  in_ECX[0x54] = CButtonObserver::vftable;
  in_ECX[0x49] = CButtonObserver::vftable;
  in_ECX[0x3e] = CButtonObserver::vftable;
  in_ECX[0x33] = CButtonObserver::vftable;
  in_ECX[0x28] = CButtonObserver::vftable;
  in_ECX[0x1d] = CButtonObserver::vftable;
  if (in_ECX[0x19] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x19]);
  }
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  if (in_ECX[0x15] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x15]);
  }
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  if (in_ECX[0x11] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x11]);
  }
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  if (in_ECX[0xd] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xd]);
  }
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  *in_ECX = &PTR___purecall_00e38700;
  local_8 = 0xc;
  FUN_009a4ca0();
  if (0xf < (uint)in_ECX[6]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[1]);
  }
  in_ECX[5] = 0;
  in_ECX[6] = 0xf;
  *(undefined1 *)(in_ECX + 1) = 0;
  ExceptionList = local_10;
  return;
}

