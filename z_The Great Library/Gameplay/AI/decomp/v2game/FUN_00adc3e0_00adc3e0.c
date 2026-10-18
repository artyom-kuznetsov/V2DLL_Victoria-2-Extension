// FUN_00adc3e0 @ 00adc3e0 body=[[00adc3e0, 00adc4a9]]


int FUN_00adc3e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
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
  
  puStack_8 = &LAB_00b37701;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffc8;
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
  iVar2 = FUN_00adbe20(&local_28,param_3);
  if ((iVar2 == 0) && (*(char *)(in_ECX + 0x34) != '\0')) {
    FUN_00b15d30("Failed to load actor from memory location 0x%x",param_1,uVar1);
  }
  FUN_00b18780();
  local_28 = &PTR_FUN_00ddcc88;
  local_4 = 1;
  FUN_00b18780();
  ExceptionList = local_c;
  return iVar2;
}

