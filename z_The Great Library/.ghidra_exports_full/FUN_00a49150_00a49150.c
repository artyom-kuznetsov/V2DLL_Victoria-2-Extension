// FUN_00a49150 @ 00a49150 body=[[00a49150, 00a4924d]]


undefined4 * FUN_00a49150(undefined4 *param_1)

{
  undefined4 *puVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41066;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[9] = 0;
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x23] = CLostDeviceInterface::vftable;
  *param_1 = &PTR_FUN_00e413b8;
  param_1[0x23] = &PTR_LAB_00e41438;
  param_1[0x29] = 0xf;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  local_8 = 1;
  local_14 = 99;
  puVar1 = param_1 + 0x2e;
  do {
    puVar1[-1] = 0;
    *puVar1 = DAT_00f092fc;
    FUN_00408e70(puVar1 + 1,0x18,3,FUN_005ec4a0);
    *(undefined8 *)(puVar1 + 0x18) = 0;
    puVar1 = puVar1 + 0x1c;
    local_14 = local_14 + -1;
  } while (-1 < local_14);
  FUN_0068f390();
  param_1[0x2b] = 0;
  ExceptionList = local_10;
  return param_1;
}

