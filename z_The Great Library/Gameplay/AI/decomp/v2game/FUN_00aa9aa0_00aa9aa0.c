// FUN_00aa9aa0 @ 00aa9aa0 body=[[00aa9aa0, 00aa9b94]]


void FUN_00aa9aa0(undefined4 param_1)

{
  int iVar1;
  
  lua_createtable(param_1,0,0);
  lua_pushboolean(param_1,1);
  lua_setfield(param_1,0xfffffffe,"__luabind_class");
  lua_pushnumber(param_1,0x3ff0000000000000);
  lua_pushcclosure(param_1,FUN_00aa9790,0);
  lua_rawset(param_1,0xfffffffd);
  lua_pushcclosure(param_1,FUN_00aa9a10,0);
  lua_setfield(param_1,0xfffffffe,&DAT_00dd8d88);
  lua_pushcclosure(param_1,FUN_00aa9790,0);
  lua_setfield(param_1,0xfffffffe,"__index");
  lua_pushcclosure(param_1,FUN_00aa9650,0);
  lua_setfield(param_1,0xfffffffe,"__newindex");
  iVar1 = 0;
  do {
    lua_pushstring(param_1,(&PTR_s___add_00ef200c)[iVar1]);
    lua_pushvalue(param_1,0xffffffff);
    lua_pushboolean();
    lua_pushcclosure(param_1,FUN_00aa9890,2);
    lua_settable(param_1,0xfffffffd);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xd);
  return;
}

