// FUN_00493ed0 @ 00493ed0 body=[[00493ed0, 004940a1] [004940a5, 004940b2] [004940b6, 004940ca]]


undefined4 *
FUN_00493ed0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_ECX;
  uint in_stack_00000024;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b956db;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00640680(param_1,&param_4);
  local_8._0_1_ = 1;
  *param_1 = CMessageDialog<CInGameIdler>::vftable;
  param_1[0x1a] = in_ECX;
  FUN_006a8070(param_1 + 0x1b);
  param_1[0x3b] = CButtonObserverGlue<CMessageDialog<CInGameIdler>_>::vftable;
  param_1[0x3c] = param_1;
  param_1[0x3d] = FUN_005ac6b0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = CButtonObserverGlue<CMessageDialog<CInGameIdler>_>::vftable;
  param_1[0x47] = param_1;
  param_1[0x48] = FUN_004940d0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x52] = in_stack_0000002c;
  param_1[0x53] = in_stack_00000030;
  param_1[0x54] = param_3;
  param_1[0x55] = CButtonObserverGlue<CMessageDialog<CInGameIdler>_>::vftable;
  param_1[0x56] = param_1;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = FUN_00494100;
  param_1[0x5f] = 0;
  param_1[0x60] = CButtonObserverGlue<CMessageDialog<CInGameIdler>_>::vftable;
  param_1[0x61] = param_1;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = FUN_0093ebf0;
  param_1[0x6a] = 0;
  local_8._0_1_ = 6;
  param_1[0x6b] = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("message_dialog",0xe);
  local_8 = CONCAT31(local_8._1_3_,7);
  (**(code **)(*(int *)(param_1[1] + 0x18) + 0x78))(local_2c);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_4);
  }
  ExceptionList = local_10;
  return param_1;
}

