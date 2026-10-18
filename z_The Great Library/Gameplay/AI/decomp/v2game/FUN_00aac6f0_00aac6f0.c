// FUN_00aac6f0 @ 00aac6f0 body=[[00aac6f0, 00aac7a2]]


void FUN_00aac6f0(undefined4 param_1)

{
  int iVar1;
  
  lua_pushnil(param_1);
  iVar1 = lua_next(param_1,0xfffffffe);
  while (iVar1 != 0) {
    lua_pushstring(param_1,"__init");
    iVar1 = lua_equal(param_1,0xffffffff,0xfffffffd);
    if (iVar1 == 0) {
      lua_settop(param_1,0xfffffffe);
      lua_pushstring(param_1,"__finalize");
      iVar1 = lua_equal(param_1,0xffffffff,0xfffffffd);
      if (iVar1 == 0) {
        lua_settop(param_1,0xfffffffe);
        lua_pushvalue(param_1,0xfffffffe);
        lua_insert(param_1,0xfffffffe);
        lua_settable(param_1,0xfffffffb);
      }
      else {
        lua_settop(param_1,0xfffffffd);
      }
    }
    else {
      lua_settop(param_1,0xfffffffd);
    }
    iVar1 = lua_next(param_1,0xfffffffe);
  }
  return;
}

