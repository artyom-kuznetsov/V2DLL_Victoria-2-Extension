// FUN_009740b0 @ 009740b0 body=[[009740b0, 009741cd]]


undefined4 *
FUN_009740b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b582f7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0044bc60(param_1);
  local_8 = 0;
  *param_1 = CIssue::vftable;
  param_1[0x12] = 0xf;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  FUN_00408ed0(param_3,0,0xffffffff);
  param_1[0x14] = param_4;
  param_1[0x15] = param_2;
  param_1[0x17] = 0x18d;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  param_1[0x16] = CAndTrigger::vftable;
  local_8._0_1_ = 2;
  FUN_00473f70(param_1 + 0x1d);
  uVar1 = DAT_00f092fc;
  param_1[0x66] = CColor::vftable;
  param_1[0x68] = uVar1;
  param_1[0x69] = uVar1;
  param_1[0x6a] = uVar1;
  param_1[0x6b] = uVar1;
  *(undefined1 *)(param_1 + 0x6c) = 1;
  param_1[0x67] = 0x18d;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0x8000;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  param_1[0x73] = 0x18d;
  param_1[0x72] = CIssueOnExecute::vftable;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_009b7500();
  uVar1 = FUN_009902d0(param_3,0);
  param_1[0xc] = uVar1;
  ExceptionList = local_10;
  return param_1;
}

