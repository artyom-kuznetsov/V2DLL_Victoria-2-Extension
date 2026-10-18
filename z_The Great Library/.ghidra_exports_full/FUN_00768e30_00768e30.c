// FUN_00768e30 @ 00768e30 body=[[00768e30, 00768e9e] [00768ea2, 00768eb4]]


void FUN_00768e30(byte param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e293;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  in_ECX[0xc] = CButtonObserver::vftable;
  *in_ECX = &PTR_FUN_00e392f0;
  in_ECX[7] = &PTR_FUN_00e39320;
  local_8 = 1;
  if ((int *)in_ECX[8] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[8] + 0x50))();
  }
  local_8 = 0xffffffff;
  in_ECX[7] = &PTR_FUN_00e39158;
  *in_ECX = &PTR_FUN_00e38708;
  FUN_009a62b0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

