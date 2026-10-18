// FUN_00aa9790 @ 00aa9790 body=[[00aa9790, 00aa9818]]


undefined4 FUN_00aa9790(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  
  lua_getfenv(param_1,1);
  lua_pushvalue(param_1,2);
  lua_rawget(param_1,0xfffffffe);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 0) {
    iVar1 = lua_getmetatable(param_1,0xfffffffe);
    if (iVar1 != 0) {
      lua_pushvalue(param_1,2);
      lua_rawget(param_1,0xfffffffe);
    }
  }
  pcVar2 = (code *)lua_tocfunction(param_1,0xffffffff);
  if (pcVar2 == FUN_00aab9a0) {
    lua_getupvalue(param_1,0xffffffff,1);
    lua_pushvalue(param_1,1);
    lua_call(param_1,1,1);
  }
  return 1;
}

