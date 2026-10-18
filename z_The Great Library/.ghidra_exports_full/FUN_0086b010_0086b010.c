// FUN_0086b010 @ 0086b010 body=[[0086b010, 0086b0d8]]


void FUN_0086b010(int param_1)

{
  int in_ECX;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3ea20;
  local_10 = ExceptionList;
  local_14 = local_14 & 0xffffff00;
  ExceptionList = &local_10;
  FUN_0086cb10(param_1,param_1,local_14,*(undefined1 *)(in_ECX + 8));
  local_8 = 0;
  local_20 = param_1;
  local_1c = 0xfffffffe;
  lua_pushvalue(param_1,0xffffffff);
  local_1c = luaL_ref(param_1,0xffffd8f0);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00aaa780(&local_20,"__init",&local_18);
  if ((local_20 != 0) && (local_1c != -2)) {
    luaL_unref(local_20,0xffffd8f0,local_1c);
  }
  if ((local_18 != 0) && (local_14 != 0xfffffffe)) {
    luaL_unref(local_18,0xffffd8f0,local_14);
  }
  ExceptionList = local_10;
  return;
}

