// FUN_00aabad0 @ 00aabad0 body=[[00aabad0, 00aabbc7]]


undefined4 FUN_00aabad0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = lua_gettop(param_1);
  iVar2 = lua_touserdata(param_1,0xffffd8ed);
  iVar2 = *(int *)(*(int *)(iVar2 + 4) + 4);
  if (*(int *)(iVar2 + 4) == *(int *)(iVar2 + 8)) {
    lua_pushstring(param_1,"super");
    lua_pushnil(param_1);
    lua_settable(param_1,0xffffd8ee);
  }
  else {
    lua_pushstring(param_1,"super");
    lua_pushlightuserdata(param_1,iVar2);
    lua_pushvalue(param_1,0xffffd8ec);
    lua_pushcclosure(param_1,FUN_00aabad0,2);
    lua_settable(param_1,0xffffd8ee);
  }
  lua_rawgeti(param_1,0xffffd8f0,*(undefined4 *)(iVar2 + 0x24));
  lua_pushstring(param_1,"__init");
  lua_gettable(param_1,0xfffffffe);
  lua_insert(param_1,1);
  lua_settop(param_1,0xfffffffe);
  lua_pushvalue(param_1,0xffffd8ec);
  lua_insert(param_1,2);
  lua_call(param_1,iVar1 + 1,0);
  lua_pushstring(param_1,"super");
  lua_pushnil(param_1);
  lua_settable(param_1,0xffffd8ee);
  return 0;
}

