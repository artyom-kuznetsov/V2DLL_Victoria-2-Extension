// FUN_00aaa5c0 @ 00aaa5c0 body=[[00aaa5c0, 00aaa621]]


undefined4 * FUN_00aaa5c0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_2;
  lua_rawgeti(uVar1,0xffffd8f0,param_2[1]);
  lua_getupvalue(uVar1,0xffffffff,param_3);
  *param_1 = uVar1;
  param_1[1] = 0xfffffffe;
  lua_pushvalue(uVar1,0xffffffff);
  uVar2 = luaL_ref(uVar1,0xffffd8f0);
  param_1[1] = uVar2;
  lua_settop(uVar1,0xfffffffd);
  return param_1;
}

