// FUN_00945c00 @ 00945c00 body=[[00945c00, 00945c62] [00945c66, 00945c78]]


void FUN_00945c00(byte param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4a861;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CPeaceDialog::vftable;
  local_8 = 2;
  if ((undefined4 *)in_ECX[0x1b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x1b])(1);
  }
  in_ECX[0x27] = CButtonObserver::vftable;
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

