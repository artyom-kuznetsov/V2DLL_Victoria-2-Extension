// FUN_00adbad0 @ 00adbad0 body=[[00adbad0, 00adbb6e]]


undefined4 FUN_00adbad0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined **local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b375d8;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  local_28 = &PTR_FUN_00ddcc88;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x400;
  local_10 = 0;
  local_4 = 0;
  FUN_00b18720(param_1,param_2);
  uVar2 = FUN_00ada5b0(&local_28);
  local_28 = &PTR_FUN_00ddcc88;
  local_4 = 1;
  FUN_00b18780(uVar1);
  ExceptionList = local_c;
  return uVar2;
}

