// FUN_00a5c8d0 @ 00a5c8d0 body=[[00a5c8d0, 00a5cad3]]


undefined4 * FUN_00a5c8d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40e80;
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
  puVar1 = param_1 + 0x19;
  *param_1 = &PTR_FUN_00e41ea4;
  *puVar1 = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x29] = 0xf;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x30] = 0xf;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x37] = 0xf;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x3e] = 0xf;
  param_1[0x3d] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x45] = 0xf;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  param_1[0x4c] = 0xf;
  param_1[0x4b] = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x53] = 0xf;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  local_8 = 9;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x5a] = param_2;
  param_1[0x5b] = param_3;
  param_2 = 0xa9;
  FUN_0043cb20(puVar1,*puVar1,&param_2);
  param_2 = 0x84;
  FUN_0043cb20(puVar1,*puVar1,&param_2);
  param_2 = 0x90;
  FUN_0043cb20(puVar1,*puVar1,&param_2);
  param_2 = 0x4b;
  FUN_0043cb20(puVar1,*puVar1,&param_2);
  param_2 = 0x91;
  FUN_0043cb20(puVar1,*puVar1,&param_2);
  param_2 = 0x8f;
  FUN_0043cb20(puVar1,*puVar1,&param_2);
  param_2 = 0xaa;
  FUN_0043cb20(puVar1,*puVar1,&param_2);
  param_2 = 0xab;
  FUN_0043cb20(puVar1,*puVar1,&param_2);
  param_2 = 0xac;
  FUN_0043cb20(puVar1,*puVar1,&param_2);
  ExceptionList = local_10;
  return param_1;
}

