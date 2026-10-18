// FUN_009c4b50 @ 009c4b50 body=[[009c4b50, 009c4c99]]


undefined4 *
FUN_009c4b50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b61834;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009d9070(param_1,param_2);
  local_8 = 0;
  param_1[0x53] = CLostDeviceInterface::vftable;
  *(undefined2 *)(param_1 + 0x57) = 0;
  *param_1 = &PTR_LAB_00e3abe8;
  param_1[0x53] = &PTR_FUN_00e3ad58;
  param_1[0x54] = 0;
  param_1[0x56] = 0;
  param_1[0x5d] = 0xf;
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  FUN_00409350("animated",8);
  uVar1 = DAT_00f092fc;
  local_8._0_1_ = 1;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x61] = uVar1;
  param_1[0x62] = param_5;
  param_1[0x67] = 0;
  param_1[0x68] = 0xf;
  *(undefined1 *)(param_1 + 99) = 0;
  FUN_00408ed0(param_3,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,2);
  param_1[0x6a] = 0;
  param_1[0x55] = param_4;
  FUN_0068f390();
  param_1[1] = *(undefined4 *)(param_1[0x55] + 0x24);
  FUN_00409350(&DAT_00e12e7c,2);
  uVar1 = FUN_009bc490(param_1[0x62] + 0x158,param_1 + 99,0,0,1);
  param_1[0x6a] = uVar1;
  ExceptionList = local_10;
  return param_1;
}

