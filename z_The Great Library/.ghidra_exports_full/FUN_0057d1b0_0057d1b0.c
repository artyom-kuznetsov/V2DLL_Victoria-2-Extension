// FUN_0057d1b0 @ 0057d1b0 body=[[0057d1b0, 0057d2e2]]


undefined4 *
FUN_0057d1b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4619b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 0;
  param_1[0xb] = 0x5ca;
  param_1[0xc] = 0x5ca;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0x10] = param_6;
  param_1[9] = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  *param_1 = CConstructUnitCommand::vftable;
  param_1[0xf] = param_5;
  param_1[0x11] = param_3;
  DAT_0131ca68 = FUN_009c12d0();
  iVar1 = DAT_01258a9c + 1;
  DAT_01258a9c = iVar1;
  param_1[0x12] = DAT_01258a90 + 0x1268;
  param_1[0x13] = iVar1;
  DAT_0131ca68 = FUN_009c12d0();
  iVar1 = DAT_01258a9c + 1;
  DAT_01258a9c = iVar1;
  param_1[0x14] = DAT_01258a90 + 0x1268;
  param_1[0x15] = iVar1;
  DAT_0131ca68 = FUN_009c12d0();
  iVar1 = DAT_01258a9c + 1;
  DAT_01258a9c = iVar1;
  param_1[0x16] = DAT_01258a90 + 0x1268;
  param_1[0x17] = iVar1;
  param_1[0x18] = param_2;
  param_1[0x19] = param_4;
  ExceptionList = local_10;
  return param_1;
}

