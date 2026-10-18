// FUN_007b1940 @ 007b1940 body=[[007b1940, 007b19d2] [007b19d6, 007b1b09]]


undefined4 * FUN_007b1940(undefined4 *param_1)

{
  int iVar1;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b973c5;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("micro_interface",0xf);
  local_8 = 0;
  iVar1 = (**(code **)(*DAT_01258a80 + 0x48))(local_2c);
  *param_1 = &PTR___purecall_00e38700;
  param_1[6] = 0xf;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_00408ed0(iVar1 + 0x24,0,0xffffffff);
  local_8._0_1_ = 1;
  FUN_009a4bd0(param_1 + 1,param_1);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  *param_1 = CMicrotransactionInterface::vftable;
  param_1[8] = 0;
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0x15] = 0xf;
  param_1[0x14] = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = CRadioButtonGroupObserverGlue<CMicrotransactionInterface>::vftable;
  param_1[0x1a] = param_1;
  param_1[0x1b] = FUN_007b37b0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  local_8._0_1_ = 7;
  FUN_009fa120(param_1 + 0x25,DAT_01258a74,DAT_01258a80);
  param_1[0x52] = CButtonObserverGlue<CMicrotransactionInterface>::vftable;
  param_1[0x53] = param_1;
  param_1[0x54] = FUN_007b2a90;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = CButtonObserverGlue<CMicrotransactionInterface>::vftable;
  param_1[0x5e] = param_1;
  param_1[0x5f] = FUN_007b3660;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  local_8 = CONCAT31(local_8._1_3_,10);
  FUN_007b1ca0();
  (**(code **)(*(int *)(param_1[8] + 0x18) + 0x38))();
  ExceptionList = local_10;
  return param_1;
}

