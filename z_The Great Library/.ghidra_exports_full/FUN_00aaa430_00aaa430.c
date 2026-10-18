// FUN_00aaa430 @ 00aaa430 body=[[00aaa430, 00aaa4b5]]


void FUN_00aaa430(undefined4 param_1)

{
  int iVar1;
  
  lua_pushstring(param_1,"luabind.function");
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 != 5) {
    lua_settop(param_1,0xfffffffe);
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,&DAT_00dd8d88);
    lua_pushcclosure(param_1,FUN_00aaa400,0);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"luabind.function");
    lua_pushvalue(param_1,0xfffffffe);
    lua_rawset(param_1,0xffffd8f0);
  }
  return;
}

