// FUN_00aabc30 @ 00aabc30 body=[[00aabc30, 00aabd2e]]


undefined4 FUN_00aabc30(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = lua_touserdata(param_1,1);
  uVar2 = lua_gettop(param_1);
  FUN_00aa99b0(param_1,iVar1);
  if (((DAT_00f1f86c != '\0') && (*(int *)(iVar1 + 0x30) == 1)) &&
     (*(int *)(iVar1 + 4) != *(int *)(iVar1 + 8))) {
    lua_pushstring(param_1,"super");
    lua_pushvalue(param_1,1);
    lua_pushvalue(param_1,0xfffffffd);
    lua_pushcclosure(param_1,FUN_00aabad0,2);
    lua_settable(param_1,0xffffd8ee);
  }
  lua_pushvalue(param_1,0xffffffff);
  lua_replace(param_1,1);
  lua_rawgeti(param_1,0xffffd8f0,*(undefined4 *)(iVar1 + 0x24));
  lua_pushlstring(param_1,"__init",6);
  lua_gettable(param_1,0xfffffffe);
  lua_insert(param_1,1);
  lua_settop(param_1,0xfffffffe);
  lua_insert(param_1,1);
  lua_call(param_1,uVar2,0);
  if (DAT_00f1f86c != '\0') {
    lua_pushstring(param_1,"super");
    lua_pushnil(param_1);
    lua_settable(param_1,0xffffd8ee);
  }
  return 1;
}

