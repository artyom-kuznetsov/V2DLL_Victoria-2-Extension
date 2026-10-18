// FUN_00aaa540 @ 00aaa540 body=[[00aaa540, 00aaa5ba]]


undefined4 * FUN_00aaa540(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)lua_newuserdata(param_2,4);
  FUN_00aaa430(param_2);
  *piVar1 = param_3;
  lua_setmetatable(param_2,0xfffffffe);
  lua_pushlightuserdata(param_2,&DAT_00f1f854);
  lua_pushcclosure(param_2,*(undefined4 *)(param_3 + 4),2);
  *param_1 = param_2;
  param_1[1] = 0xfffffffe;
  lua_pushvalue(param_2,0xffffffff);
  uVar2 = luaL_ref(param_2,0xffffd8f0);
  param_1[1] = uVar2;
  lua_settop(param_2,0xfffffffe);
  return param_1;
}

