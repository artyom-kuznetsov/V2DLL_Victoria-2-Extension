// FUN_0086e840 @ 0086e840 body=[[0086e840, 0086e8b0]]


void FUN_0086e840(undefined4 param_1)

{
  undefined4 *puVar1;
  uint local_1c;
  uint local_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3ab80;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  puVar1 = (undefined4 *)lua_touserdata(param_1,0xffffd8ed);
  local_8 = 0;
  local_18 = local_18 & 0xffffff00;
  local_1c = local_1c & 0xffffff00;
  FUN_008715d0(param_1,*puVar1,local_1c,local_18,0);
  local_8 = 0xffffffff;
  FUN_0086e8dd();
  return;
}

