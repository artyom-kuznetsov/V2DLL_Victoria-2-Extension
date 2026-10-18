// FUN_00a5b670 @ 00a5b670 body=[[00a5b670, 00a5b76b]]


undefined4 * FUN_00a5b670(undefined4 *param_1,undefined4 param_2)

{
  undefined4 in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3b715;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0x15] = 0xf;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = &PTR_FUN_00e38318;
  *param_1 = &PTR_FUN_00e41de8;
  param_1[0x19] = &PTR_LAB_00e41e14;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x23] = 0xf;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x26] = param_2;
  param_1[0x27] = in_EDX;
  param_1[0x28] = &PTR_FUN_00e41e84;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  local_8 = 5;
  param_2 = 0x8a;
  FUN_0043cb20(param_1 + 0x31,0,&param_2);
  ExceptionList = local_10;
  return param_1;
}

