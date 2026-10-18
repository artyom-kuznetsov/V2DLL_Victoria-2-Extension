// FUN_009a2ec0 @ 009a2ec0 body=[[009a2ec0, 009a2ff3]]


undefined4 * FUN_009a2ec0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4a146;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[2] = 0x18d;
  param_1[3] = &PTR_FUN_00e38318;
  local_8 = 1;
  uStack_7 = 0;
  *param_1 = &PTR_FUN_00e385c8;
  param_1[1] = &PTR_LAB_00e38648;
  param_1[3] = &PTR_LAB_00e38660;
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[0xc] = param_2;
  param_1[0xd] = &PTR_FUN_00e41e84;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x24] = 0xf;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x26] = 0;
  param_1[0x2a] = param_3;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  local_8 = 7;
  FUN_0098b350(param_1 + 0x2f);
  _local_8 = CONCAT31(uStack_7,8);
  *(undefined2 *)(param_1 + 0x8e) = 1;
  FUN_004bf300(64000);
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  DAT_01258a80 = param_1;
  *(undefined1 *)(param_1 + 0x8d) = 1;
  ExceptionList = local_10;
  return param_1;
}

