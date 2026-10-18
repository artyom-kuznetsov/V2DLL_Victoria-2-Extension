// FUN_00985300 @ 00985300 body=[[00985300, 00985372] [00985376, 00985396]]


void FUN_00985300(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4f907;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CTutorialControl::vftable;
  local_8 = 3;
  if ((int *)in_ECX[8] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[8] + 0x50))();
  }
  in_ECX[0x21] = CButtonObserver::vftable;
  in_ECX[0x16] = CButtonObserver::vftable;
  in_ECX[0xb] = CButtonObserver::vftable;
  *in_ECX = &PTR___purecall_00e38700;
  local_8 = 4;
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

