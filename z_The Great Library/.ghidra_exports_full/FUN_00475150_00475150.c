// FUN_00475150 @ 00475150 body=[[00475150, 004752ca]]


undefined4 * FUN_00475150(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b60890;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009d7960(param_1);
  uVar2 = DAT_00f14420;
  local_8 = 0;
  *param_1 = CSettings::vftable;
  param_1[0x38] = 0x18d;
  param_1[0x37] = CMapRenderingOptions::vftable;
  *(undefined1 *)((int)param_1 + 0xe6) = 0;
  param_1[0x3a] = 0xffff;
  param_1[0x3b] = 0xffff;
  param_1[0x3c] = 0;
  param_1[0x3e] = uVar2;
  param_1[0x3f] = uVar2;
  param_1[0x40] = 0x78;
  *(undefined2 *)(param_1 + 0x39) = 1;
  *(undefined1 *)(param_1 + 0x3d) = 1;
  param_1[0x41] = 1000;
  param_1[0x47] = 0xf;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 1;
  param_1[0x4e] = 0xf;
  param_1[0x4d] = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 2;
  param_1[0x55] = 0xf;
  param_1[0x54] = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  FUN_00409350("diplomacy.valkyrienet.com",0x19);
  param_1[0x57] = 0;
  piVar1 = param_1 + 0x5a;
  param_1[0x58] = 3;
  *(undefined1 *)((int)param_1 + 0x165) = 1;
  *piVar1 = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  local_8 = CONCAT31(local_8._1_3_,4);
  param_1[0x5e] = DAT_00f092fc;
  *(undefined1 *)(param_1 + 0x5f) = 1;
  FUN_0068ea30(6);
  *(undefined4 *)*piVar1 = 1;
  *(undefined4 *)(*piVar1 + 4) = 1;
  *(undefined4 *)(*piVar1 + 8) = 1;
  *(undefined4 *)(*piVar1 + 0xc) = 1;
  *(undefined4 *)(*piVar1 + 0x10) = 1;
  *(undefined4 *)(*piVar1 + 0x14) = 1;
  ExceptionList = local_10;
  return param_1;
}

