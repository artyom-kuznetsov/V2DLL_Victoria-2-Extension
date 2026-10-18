// FUN_00aab9c0 @ 00aab9c0 body=[[00aab9c0, 00aaba32]]


undefined4 FUN_00aab9c0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = lua_touserdata(param_1,1);
  lua_rawgeti(param_1,0xffffd8f0,*(undefined4 *)(iVar1 + 0x24));
  lua_pushvalue(param_1,0xfffffffd);
  lua_pushvalue(param_1,0xfffffffd);
  lua_rawset(param_1,0xfffffffd);
  lua_settop(param_1,0xfffffffe);
  lua_rawgeti(param_1,0xffffd8f0,*(undefined4 *)(iVar1 + 0x2c));
  lua_replace(param_1,1);
  lua_rawset(param_1,0xfffffffd);
  *(undefined4 *)(iVar1 + 0x48) = 0;
  return 0;
}

