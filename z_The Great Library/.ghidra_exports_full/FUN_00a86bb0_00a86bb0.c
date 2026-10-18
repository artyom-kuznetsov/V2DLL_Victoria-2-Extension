// FUN_00a86bb0 @ 00a86bb0 body=[[00a86bb0, 00a86c80]]


undefined4 *
FUN_00a86bb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  undefined4 unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b40b81;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009a6a30(param_1,param_2);
  param_1[0x15] = param_3;
  param_1[0x17] = param_5;
  param_1[0x16] = param_4;
  param_1[0x19] = param_7;
  param_1[0x18] = param_6;
  param_1[0x1b] = param_9;
  *param_1 = &PTR_FUN_00e44610;
  param_1[0x1a] = param_8;
  param_1[0x1c] = unaff_EDI;
  param_1[0x1e] = &PTR_FUN_00e4271c;
  param_1[0x1d] = &PTR_FUN_00e39760;
  param_1[0x1e] = &PTR_LAB_00e397a4;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  DAT_013f08f8 = DAT_013f08f8 + 1;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x28] = &PTR_FUN_00e397b0;
  local_8 = 7;
  (**(code **)(param_1[0x1d] + 0x38))(1);
  ExceptionList = local_10;
  return param_1;
}

