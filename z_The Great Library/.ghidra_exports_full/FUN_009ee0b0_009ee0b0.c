// FUN_009ee0b0 @ 009ee0b0 body=[[009ee0b0, 009ee147]]


undefined4 * FUN_009ee0b0(undefined4 *param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b4967b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009a6a30(param_1,param_2);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = &PTR_FUN_00e3a598;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  *param_1 = &PTR_FUN_00e3a6d8;
  param_1[0x15] = &PTR_LAB_00e3a7f0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  DAT_013f091c = DAT_013f091c + 1;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  ExceptionList = local_10;
  return param_1;
}

