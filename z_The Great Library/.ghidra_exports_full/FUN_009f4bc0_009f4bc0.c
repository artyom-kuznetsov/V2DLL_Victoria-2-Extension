// FUN_009f4bc0 @ 009f4bc0 body=[[009f4bc0, 009f4cd9]]


undefined4 * FUN_009f4bc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4939b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f092c = DAT_013f092c + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  local_8 = 2;
  *param_1 = &PTR_FUN_00e3d158;
  param_1[0xb] = 0xf;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = &PTR_FUN_00e3d13c;
  *(undefined2 *)(param_1 + 0x10) = 1;
  param_1[0x12] = 0x400100;
  *(undefined2 *)(param_1 + 0x13) = 0x101;
  param_1[0x18] = 0;
  param_1[0x19] = 0xf;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((int)param_1 + 0x6e) = 0;
  param_1[0x1d] = param_2;
  param_1[0x1e] = param_3;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0x10100;
  param_1[0x27] = 0xffffffff;
  param_1[0x28] = 1000000;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined2 *)(param_1 + 0x2d) = 0x101;
  ExceptionList = local_10;
  return param_1;
}

