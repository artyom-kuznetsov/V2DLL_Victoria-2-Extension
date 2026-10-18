// FUN_00adc330 @ 00adc330 body=[[00adc330, 00adc3d3]]


undefined4 FUN_00adc330(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  
  puStack_8 = &LAB_00b376d6;
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
  uVar2 = FUN_00adbb70(&local_28,param_3);
  local_28 = &PTR_FUN_00ddcc88;
  local_4 = 1;
  FUN_00b18780(uVar1);
  ExceptionList = local_c;
  return uVar2;
}

