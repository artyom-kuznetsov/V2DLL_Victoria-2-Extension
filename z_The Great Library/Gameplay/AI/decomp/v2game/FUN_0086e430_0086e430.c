// FUN_0086e430 @ 0086e430 body=[[0086e430, 0086e4a5]]


void FUN_0086e430(undefined4 param_1)

{
  int *piVar1;
  undefined4 local_54 [11];
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3c4e0;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffa0;
  ExceptionList = &pvStack_10;
  piVar1 = (int *)lua_touserdata(param_1,0xffffd8ed);
  local_20 = *piVar1;
  local_8 = 0;
  local_18 = local_18 & 0xffffff00;
  local_1c = local_1c & 0xffffff00;
  local_28 = 0;
  local_24 = 0;
  local_54[0] = 0x7fffffff;
  FUN_00870e40(param_1,local_20,local_54,local_20 + 0x30,local_1c,local_18,0);
  local_8 = 0xffffffff;
  FUN_0086e4d2();
  return;
}

