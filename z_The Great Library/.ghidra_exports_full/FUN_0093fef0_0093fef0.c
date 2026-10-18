// FUN_0093fef0 @ 0093fef0 body=[[0093fef0, 0093ff4b] [0093ff4f, 0093ff61]]


void FUN_0093fef0(byte param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b50b73;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CWarGoalDialog::vftable;
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

