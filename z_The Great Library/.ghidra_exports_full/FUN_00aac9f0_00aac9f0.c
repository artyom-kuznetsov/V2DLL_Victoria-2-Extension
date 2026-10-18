// FUN_00aac9f0 @ 00aac9f0 body=[[00aac9f0, 00aacab2]]


void FUN_00aac9f0(undefined4 param_1)

{
  lua_createtable(param_1,0,0);
  lua_pushstring(param_1,"__luabind_classrep");
  lua_pushboolean(param_1,1);
  lua_rawset(param_1,0xfffffffd);
  lua_pushstring(param_1,&DAT_00dd8d88);
  lua_pushcclosure(param_1,FUN_00aac9d0,0);
  lua_rawset(param_1,0xfffffffd);
  lua_pushstring(param_1,"__call");
  lua_pushcclosure(param_1,FUN_00aabc30,0);
  lua_rawset(param_1,0xfffffffd);
  lua_pushstring(param_1,"__index");
  lua_pushcclosure(param_1,FUN_00aabe70,0);
  lua_rawset(param_1,0xfffffffd);
  lua_pushstring(param_1,"__newindex");
  lua_pushcclosure(param_1,FUN_00aab9c0,0);
  lua_rawset(param_1,0xfffffffd);
  luaL_ref(param_1,0xffffd8f0);
  return;
}

