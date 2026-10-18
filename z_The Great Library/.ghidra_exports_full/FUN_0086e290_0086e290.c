// FUN_0086e290 @ 0086e290 body=[[0086e290, 0086e300]]


void FUN_0086e290(undefined4 param_1)

{
  undefined4 *puVar1;
  uint local_1c;
  uint local_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3ab90;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  puVar1 = (undefined4 *)lua_touserdata(param_1,0xffffd8ed);
  local_8 = 0;
  local_18 = local_18 & 0xffffff00;
  local_1c = local_1c & 0xffffff00;
  FUN_00870c10(param_1,*puVar1,local_1c,local_18,0);
  local_8 = 0xffffffff;
  FUN_0086e32d();
  return;
}

