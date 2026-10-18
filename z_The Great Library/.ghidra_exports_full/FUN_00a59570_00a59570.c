// FUN_00a59570 @ 00a59570 body=[[00a59570, 00a5978c]]


undefined4 * FUN_00a59570(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40f1e;
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
  *param_1 = &PTR_FUN_00e41d4c;
  param_1[0x19] = &PTR_LAB_00e41d78;
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
  param_1[0x3b] = 0xf;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x46] = in_EDX;
  param_1[0x47] = param_2;
  param_1[0x48] = &PTR_FUN_00e41e84;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  puVar1 = param_1 + 0x51;
  *puVar1 = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x56] = 1;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x5d] = 0xf;
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  param_1[100] = 0xf;
  param_1[99] = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  local_8 = 10;
  *(undefined1 *)(param_1 + 0x66) = 0;
  param_2 = 0x2e;
  FUN_0043cb20(puVar1,*puVar1,&param_2);
  param_2 = 0x4b;
  FUN_0043cb20(puVar1,*puVar1,&param_2);
  param_2 = 0x99;
  FUN_0043cb20(puVar1,*puVar1,&param_2);
  param_2 = 0xb7;
  FUN_0043cb20(puVar1,*puVar1,&param_2);
  param_2 = 0x83;
  FUN_0043cb20(puVar1,*puVar1,&param_2);
  param_2 = 0xbf;
  FUN_0043cb20(puVar1,*puVar1,&param_2);
  ExceptionList = local_10;
  return param_1;
}

