// FUN_00a5b900 @ 00a5b900 body=[[00a5b900, 00a5ba8b]]


undefined4 * FUN_00a5b900(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b486c2;
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
  *param_1 = &PTR_FUN_00e41e20;
  param_1[0x19] = &PTR_LAB_00e41e4c;
  param_1[0x1f] = 0xf;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x26] = 0xf;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x2d] = 0xf;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x34] = 0xf;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3b] = in_ECX;
  param_1[0x3c] = param_2;
  param_1[0x3d] = &PTR_FUN_00e41e84;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  puVar1 = param_1 + 0x46;
  *puVar1 = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  local_8 = 7;
  uStack_7 = 0;
  param_1[0x50] = 0xf;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  FUN_00409350("UPPER_LEFT",10);
  _local_8 = CONCAT31(uStack_7,8);
  param_2 = 0x2e;
  FUN_0043cb20(puVar1,*puVar1,&param_2);
  param_2 = 0x4b;
  FUN_0043cb20(puVar1,*puVar1,&param_2);
  param_2 = 0x99;
  FUN_0043cb20(puVar1,*puVar1,&param_2);
  ExceptionList = local_10;
  return param_1;
}

