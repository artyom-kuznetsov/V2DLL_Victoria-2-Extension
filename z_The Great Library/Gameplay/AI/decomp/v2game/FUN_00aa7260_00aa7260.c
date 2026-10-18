// FUN_00aa7260 @ 00aa7260 body=[[00aa7260, 00aa72f8]]


void FUN_00aa7260(undefined4 param_1)

{
  int iVar1;
  
  lua_pushlightuserdata(param_1,&DAT_00f1f820);
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 0) {
    lua_settop(param_1,0xfffffffe);
    lua_createtable(param_1,0,0);
    lua_createtable(param_1,0,0);
    lua_pushlstring(param_1,"__mode",6);
    lua_pushlstring(param_1,&DAT_00dd8cec,1);
    lua_rawset(param_1,0xfffffffd);
    lua_setmetatable(param_1,0xfffffffe);
    lua_pushlightuserdata(param_1,&DAT_00f1f820);
    lua_pushvalue(param_1,0xfffffffe);
    lua_rawset(param_1,0xffffd8f0);
  }
  return;
}

