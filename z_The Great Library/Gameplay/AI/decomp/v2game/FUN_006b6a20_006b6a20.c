// FUN_006b6a20 @ 006b6a20 body=[[006b6a20, 006b6b0b] [006b6b15, 006b6b8e] [006b6b92, 006b6bb7]]


void FUN_006b6a20(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b50ca6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CNudgeIdler::vftable;
  param_1[0x22] = CNudgeIdler::vftable;
  local_8 = 0x13;
  if ((undefined4 *)param_1[0x2ab] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2ab])(1);
    param_1[0x2ab] = 0;
  }
  if ((undefined4 *)param_1[0x2ac] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2ac])(1);
    param_1[0x2ac] = 0;
  }
  param_1[0x298] = CCheckBoxObserver::vftable;
  param_1[0x294] = CRadioButtonGroupObserver::vftable;
  local_8._0_1_ = 0x10;
  FUN_009fa260(param_1 + 0x267);
  param_1[0x252] = CButtonObserver::vftable;
  param_1[0x23e] = CButtonObserver::vftable;
  param_1[0x22a] = CButtonObserver::vftable;
  param_1[0x216] = CButtonObserver::vftable;
  param_1[0x202] = CButtonObserver::vftable;
  param_1[0x1ee] = CButtonObserver::vftable;
  param_1[0x1da] = CButtonObserver::vftable;
  param_1[0x1c6] = CButtonObserver::vftable;
  param_1[0x1b2] = CButtonObserver::vftable;
  param_1[0x19e] = CButtonObserver::vftable;
  param_1[0x18a] = CButtonObserver::vftable;
  param_1[0x176] = CButtonObserver::vftable;
  if (param_1[0x16d] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x16d]);
  }
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  local_8._0_1_ = 2;
  FUN_0098b4c0();
  local_8._0_1_ = 0x14;
  if ((undefined4 *)param_1[0xee] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xee])(1);
  }
  param_1[0x2e] = C3dObject::vftable;
  FUN_009f8f70();
  param_1[0x22] = &PTR___purecall_00e38700;
  local_8 = CONCAT31(local_8._1_3_,0x15);
  FUN_009a4ca0(param_1 + 0x22);
  if (0xf < (uint)param_1[0x28]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x23]);
  }
  param_1[0x28] = 0xf;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  FUN_00647e40();
  ExceptionList = local_10;
  return;
}

