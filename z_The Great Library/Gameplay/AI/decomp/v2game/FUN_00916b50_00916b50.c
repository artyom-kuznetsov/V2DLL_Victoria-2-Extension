// FUN_00916b50 @ 00916b50 body=[[00916b50, 00916bf1]]


undefined4 * FUN_00916b50(undefined4 *param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e865;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CDiplomaticAction::vftable;
  param_1[2] = *(undefined4 *)(param_2 + 8);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = *(undefined4 *)(param_2 + 0x24);
  local_8 = 0;
  *param_1 = CPeaceAction::vftable;
  FUN_00916c00(param_1 + 10);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0092a7c0(param_1[2],param_1[3],param_1[4],param_1[5]);
  ExceptionList = local_10;
  return param_1;
}

