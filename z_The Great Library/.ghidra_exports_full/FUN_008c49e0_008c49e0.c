// FUN_008c49e0 @ 008c49e0 body=[[008c49e0, 008c4a6b]]


undefined4 * FUN_008c49e0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b619e3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  local_8 = 0;
  param_1[8] = param_2;
  iVar1 = DAT_01258a40;
  *param_1 = CIssueGroupTrigger::vftable;
  if (iVar1 == 0) {
    iVar1 = FUN_00aae9af(0x1d8);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (iVar1 == 0) {
      iVar1 = 0;
      DAT_01258a40 = iVar1;
    }
    else {
      iVar1 = FUN_009747a0();
      DAT_01258a40 = iVar1;
    }
  }
  param_1[9] = iVar1;
  ExceptionList = local_10;
  return param_1;
}

