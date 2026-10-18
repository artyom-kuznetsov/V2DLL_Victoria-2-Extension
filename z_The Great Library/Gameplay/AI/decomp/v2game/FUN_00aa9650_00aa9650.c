// FUN_00aa9650 @ 00aa9650 body=[[00aa9650, 00aa9789]]


undefined4 FUN_00aa9650(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  lua_getfenv(param_1,1);
  lua_pushvalue(param_1,2);
  lua_rawget(param_1,0xfffffffe);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 0) {
    iVar1 = lua_getmetatable(param_1,0xfffffffe);
    if (iVar1 != 0) {
      lua_pushvalue(param_1,2);
      lua_rawget(param_1,0xfffffffe);
      lua_replace(param_1,0xfffffffd);
      lua_settop(param_1,0xfffffffe);
    }
  }
  pcVar2 = (code *)lua_tocfunction(param_1,0xffffffff);
  if (pcVar2 == FUN_00aab9a0) {
    lua_getupvalue(param_1,0xffffffff,2);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 0) {
      uVar3 = lua_tolstring(param_1,2,0);
      lua_pushfstring(param_1,"property \'%s\' is read only",uVar3);
      lua_error(param_1);
    }
    lua_pushvalue(param_1,1);
    lua_pushvalue(param_1,3);
    lua_call(param_1,2,0);
    return 0;
  }
  lua_settop(param_1,0xfffffffe);
  iVar1 = lua_getmetatable(param_1,4);
  if (iVar1 == 0) {
    lua_createtable(param_1,0,0);
    lua_pushvalue(param_1,0xffffffff);
    lua_setfenv(param_1,1);
    lua_pushvalue(param_1,4);
    lua_setmetatable(param_1,0xfffffffe);
  }
  else {
    lua_settop(param_1,0xfffffffe);
  }
  lua_pushvalue(param_1,2);
  lua_pushvalue(param_1,3);
  lua_rawset(param_1,0xfffffffd);
  return 0;
}

