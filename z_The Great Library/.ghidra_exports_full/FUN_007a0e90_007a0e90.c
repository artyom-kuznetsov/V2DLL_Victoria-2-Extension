// FUN_007a0e90 @ 007a0e90 body=[[007a0e90, 007a0edf] [007a0ee3, 007a0f0d] [007a0f11, 007a0f4e] [007a0f52, 007a0f70]]


void FUN_007a0e90(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3c9cc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CChatMessagehandler::vftable;
  local_8 = 3;
  if ((undefined4 *)param_1[0xf] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xf])(1);
  }
  if (0xf < (uint)param_1[0x2e]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x29]);
  }
  param_1[0x2e] = 0xf;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (0xf < (uint)param_1[0x27]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x22]);
  }
  param_1[0x27] = 0xf;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x16] = CButtonObserver::vftable;
  param_1[0x11] = CTextBufferObserver::vftable;
  *param_1 = &PTR_FUN_00e3a544;
  FUN_009c1650();
  if (0xf < (uint)param_1[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[5]);
  }
  param_1[9] = 0;
  param_1[10] = 0xf;
  *(undefined1 *)(param_1 + 5) = 0;
  ExceptionList = local_10;
  return;
}

