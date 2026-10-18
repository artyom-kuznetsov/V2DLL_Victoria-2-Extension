// FUN_0057b640 @ 0057b640 body=[[0057b640, 0057b718]]


undefined4 * FUN_0057b640(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  param_1[0xb] = 0x26e;
  param_1[0xc] = 0x26e;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[0x10] = param_4;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  *param_1 = CConstructBuildingCommand::vftable;
  param_1[0xf] = param_3;
  DAT_0131ca68 = FUN_009c12d0();
  iVar1 = DAT_01258a9c + 1;
  DAT_01258a9c = iVar1;
  param_1[0x11] = DAT_01258a90 + 0x1268;
  param_1[0x12] = iVar1;
  iVar1 = *(int *)(param_2 + 0x6c);
  param_1[0x13] = *(undefined4 *)(iVar1 + 0x58);
  param_1[0x14] = *(undefined4 *)(iVar1 + 0x5c);
  *(undefined1 *)(param_1 + 0x15) = 1;
  ExceptionList = local_10;
  return param_1;
}

