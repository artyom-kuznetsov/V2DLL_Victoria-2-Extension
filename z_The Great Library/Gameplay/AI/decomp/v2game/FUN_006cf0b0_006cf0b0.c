// FUN_006cf0b0 @ 006cf0b0 body=[[006cf0b0, 006cf10b] [006cf10f, 006cf121]]


void FUN_006cf0b0(byte param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b50b73;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = _anon_47068A4C::CConfirmCreateVassal::vftable;
  local_8 = 1;
  if ((undefined4 *)in_ECX[0x1b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x1b])(1);
  }
  in_ECX[0x1c] = CButtonObserver::vftable;
  local_8 = 0xffffffff;
  FUN_00640880();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

