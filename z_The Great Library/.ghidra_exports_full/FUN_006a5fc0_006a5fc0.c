// FUN_006a5fc0 @ 006a5fc0 body=[[006a5fc0, 006a6034] [006a6038, 006a604a]]


void FUN_006a5fc0(byte param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3f30f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CMessageIcon::vftable;
  local_8 = 3;
  if ((undefined4 *)in_ECX[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[1])(1);
  }
  if ((undefined4 *)in_ECX[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[2])(1);
  }
  in_ECX[0x33] = CButtonObserver::vftable;
  in_ECX[0x28] = CButtonObserver::vftable;
  FUN_006a81a0();
  *in_ECX = CUpdateable::vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

