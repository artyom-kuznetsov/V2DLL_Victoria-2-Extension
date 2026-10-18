// FUN_007538f0 @ 007538f0 body=[[007538f0, 00753966] [0075396a, 0075398a]]


void FUN_007538f0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5039e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CCountryView::vftable;
  local_8 = 1;
  if ((int *)in_ECX[0x13] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x13] + 0x50))();
  }
  if ((int *)in_ECX[0x14] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x14] + 0x50))();
  }
  in_ECX[8] = CButtonObserver::vftable;
  *in_ECX = &PTR___purecall_00e38700;
  local_8 = 2;
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

