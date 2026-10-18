// FUN_009b3af0 @ 009b3af0 body=[[009b3af0, 009b3bc8]]


undefined4 * FUN_009b3af0(undefined4 *param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41b7a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e39708;
  local_8 = 0;
  FUN_009a6a30(param_1 + 1,param_2);
  *param_1 = &PTR_FUN_00e395e8;
  param_1[1] = &PTR_FUN_00e39658;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1d] = &PTR_FUN_00e4271c;
  param_1[0x1c] = &PTR_FUN_00e39760;
  param_1[0x1d] = &PTR_LAB_00e397a4;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  DAT_013f08f8 = DAT_013f08f8 + 1;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x27] = &PTR_FUN_00e397b0;
  ExceptionList = local_10;
  return param_1;
}

