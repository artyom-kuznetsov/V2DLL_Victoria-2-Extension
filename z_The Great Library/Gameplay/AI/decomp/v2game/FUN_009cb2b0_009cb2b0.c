// FUN_009cb2b0 @ 009cb2b0 body=[[009cb2b0, 009cb307] [009cb30b, 009cb396] [009cb39a, 009cb3b9]]


void FUN_009cb2b0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b3bc76;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e3b0e0;
  param_1[0x15] = &PTR_LAB_00e3b198;
  param_1[0x1b] = &PTR_LAB_00e3b1d8;
  local_8 = 6;
  param_1[0x98] = &PTR_FUN_00e38350;
  if (0xf < (uint)param_1[0xdf]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xda]);
  }
  param_1[0xdf] = 0xf;
  param_1[0xde] = 0;
  *(undefined1 *)(param_1 + 0xda) = 0;
  FUN_009f8f70();
  if ((undefined4 *)param_1[0x82] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x82])(1);
  }
  param_1[0x6c] = CButtonObserver::vftable;
  param_1[0x56] = CButtonObserver::vftable;
  param_1[0x40] = CButtonObserver::vftable;
  param_1[0x2c] = CButtonObserver::vftable;
  param_1[0x1b] = CButtonObserver::vftable;
  local_8 = local_8 & 0xffffff00;
  FUN_009cd410();
  *param_1 = &PTR_FUN_00e387f8;
  if (*(undefined4 **)(param_1[0xd] + 0x98) == param_1) {
    *(undefined4 *)(param_1[0xd] + 0x98) = 0;
  }
  DAT_01258a84 = DAT_01258a84 + -1;
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

