// FUN_004dd0a0 @ 004dd0a0 body=[[004dd0a0, 004dd255]]


undefined4 * FUN_004dd0a0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3ffec;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CProductionType::vftable;
  param_1[1] = 0x18d;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00408ed0(param_2,0,0xffffffff);
  param_1[10] = 0x18d;
  param_1[9] = CGoodsPool::vftable;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  _memset(param_1 + 0xb,0,0x40);
  FUN_00423920();
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0x18d;
  param_1[0x24] = CGoodsPool::vftable;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  _memset(param_1 + 0x26,0,0x40);
  FUN_00423920();
  param_1[0x3b] = 0x18d;
  param_1[0x3a] = CEmployee::vftable;
  param_1[0x3c] = 0;
  param_1[0x3e] = 0x8000;
  param_1[0x3f] = 0;
  param_1[0x40] = 1000;
  param_1[0x41] = 3;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0xffffffff;
  param_1[0x4c] = 0;
  iVar1 = DAT_012586dc;
  param_1[0x4d] = 0;
  param_1[0x4e] = 3;
  *(undefined2 *)(param_1 + 0x4f) = 0;
  *(undefined1 *)((int)param_1 + 0x13e) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  iVar1 = *(int *)(iVar1 + 0x50);
  param_1[0x52] = *(undefined4 *)(iVar1 + 0x150);
  param_1[0x53] = *(undefined4 *)(iVar1 + 0x154);
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  ExceptionList = local_10;
  return param_1;
}

