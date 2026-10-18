// FUN_00aaba40 @ 00aaba40 body=[[00aaba40, 00aaba96]]


undefined4 FUN_00aaba40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = lua_getmetatable(param_1,param_2);
  if (iVar1 != 0) {
    lua_pushstring(param_1,"__luabind_classrep");
    lua_gettable(param_1,0xfffffffe);
    iVar1 = lua_toboolean(param_1,0xffffffff);
    if (iVar1 != 0) {
      lua_settop(param_1,0xfffffffd);
      return 1;
    }
    lua_settop(param_1,0xfffffffd);
  }
  return 0;
}

