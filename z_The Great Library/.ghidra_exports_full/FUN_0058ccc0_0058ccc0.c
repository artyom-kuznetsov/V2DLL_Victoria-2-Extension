// FUN_0058ccc0 @ 0058ccc0 body=[[0058ccc0, 0058cd58]]


undefined4 *
FUN_0058ccc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
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
  param_1[0xb] = 0x8e6;
  param_1[0xc] = 0x8e6;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0x10] = param_3;
  param_1[9] = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0x11) = param_4;
  *param_1 = CChangeBuyfromStockpile::vftable;
  param_1[0xf] = param_2;
  ExceptionList = local_10;
  return param_1;
}

