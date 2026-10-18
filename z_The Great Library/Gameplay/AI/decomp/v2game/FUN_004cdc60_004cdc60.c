// FUN_004cdc60 @ 004cdc60 body=[[004cdc60, 004cde5e]]


undefined4 * FUN_004cdc60(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  undefined4 local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b5af64;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e3a544;
  param_1[1] = 0x18d;
  param_1[2] = DAT_01268fec;
  param_1[3] = DAT_01268ff0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0xc] = CSelectable::vftable;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = CState::vftable;
  param_1[0xc] = CState::vftable;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = *param_2;
  param_1[0x17] = param_2[1];
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  local_8 = 5;
  uStack_7 = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  FUN_0044bc60(param_1 + 0x22);
  local_8 = 6;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  FUN_00968940(param_1 + 0x32);
  param_1[0x73] = 0x18d;
  param_1[0x72] = CPopProject::vftable;
  param_1[0x75] = 0x18d;
  param_1[0x74] = CGoodsPool::vftable;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  local_8 = 8;
  _memset(param_1 + 0x76,0,0x40);
  FUN_00423920();
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = param_1;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x91] = 4;
  param_1[0x94] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  _local_8 = CONCAT31(uStack_7,10);
  *(undefined1 *)(param_1 + 0x9f) = 0;
  param_1[0xa0] = 0;
  local_1c = 0x2d2d2d;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0x2d2d2d;
  FUN_004d5f50();
  if (param_3 != '\0') {
    local_18 = DAT_00f09720;
    local_1c = 0x2f;
    DAT_00f09720 = DAT_00f09720 + 1;
    FUN_009c1390(&local_1c);
  }
  ExceptionList = local_10;
  return param_1;
}

