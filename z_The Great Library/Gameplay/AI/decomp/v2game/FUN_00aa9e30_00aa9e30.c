// FUN_00aa9e30 @ 00aa9e30 body=[[00aa9e30, 00aa9e86]]


undefined4 FUN_00aa9e30(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = lua_gettop(param_1);
  if ((iVar1 == 0) || (2 < iVar1)) {
    lua_pushstring(param_1,"make_property() called with wrong number of arguments.");
    lua_error(param_1);
  }
  if (iVar1 == 1) {
    lua_pushnil(param_1);
  }
  lua_pushcclosure(param_1,FUN_00aab9a0,2);
  return 1;
}

