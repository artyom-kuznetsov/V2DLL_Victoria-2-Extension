// FUN_0086e5d0 @ 0086e5d0 body=[[0086e5d0, 0086e640]]


void FUN_0086e5d0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 local_54 [11];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e9d0;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffa0;
  ExceptionList = &pvStack_10;
  puVar1 = (undefined4 *)lua_touserdata(param_1,0xffffd8ed);
  local_20 = *puVar1;
  local_8 = 0;
  local_18 = local_18 & 0xffffff00;
  local_1c = local_1c & 0xffffff00;
  local_28 = 0;
  local_24 = 0;
  local_54[0] = 0x7fffffff;
  FUN_00871160(local_20,local_54,local_1c,local_18,0);
  local_8 = 0xffffffff;
  FUN_0086e66d();
  return;
}

