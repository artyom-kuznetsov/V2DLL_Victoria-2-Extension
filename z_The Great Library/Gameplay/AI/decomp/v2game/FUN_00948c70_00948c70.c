// FUN_00948c70 @ 00948c70 body=[[00948c70, 00948cd2] [00948cd6, 00948ce8]]


void FUN_00948c70(byte param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4a861;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CCrisisBackDownDialog::vftable;
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

