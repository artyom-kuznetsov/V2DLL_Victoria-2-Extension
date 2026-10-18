// FUN_0086d390 @ 0086d390 body=[[0086d390, 0086d461]]


void FUN_0086d390(int param_1)

{
  undefined1 uVar1;
  int in_ECX;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e9f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_0058cfd0(0);
  local_14 = CONCAT31(local_14._1_3_,uVar1);
  FUN_0086f530(param_1,*(undefined4 *)(in_ECX + 0xc),local_14,*(undefined1 *)(in_ECX + 0x10));
  local_8 = 0;
  local_1c = param_1;
  local_18 = 0xfffffffe;
  lua_pushvalue(param_1,0xffffffff);
  local_18 = luaL_ref(param_1,0xffffd8f0);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00aaa780(&local_1c,*(undefined4 *)(in_ECX + 8),&local_24);
  if ((local_1c != 0) && (local_18 != -2)) {
    luaL_unref(local_1c,0xffffd8f0,local_18);
  }
  if ((local_24 != 0) && (local_20 != -2)) {
    luaL_unref(local_24,0xffffd8f0,local_20);
  }
  ExceptionList = local_10;
  return;
}

