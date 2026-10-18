// FUN_00435960 @ 00435960 body=[[00435960, 004359da]]


undefined4 * FUN_00435960(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  
  uVar1 = *in_ECX;
  lua_rawgeti(uVar1,0xffffd8f0,*(undefined4 *)(in_ECX[2] + 4));
  lua_pushvalue(*in_ECX,in_ECX[1]);
  lua_gettable(*in_ECX,0xfffffffe);
  lua_remove(*in_ECX,0xfffffffe);
  uVar2 = *in_ECX;
  *param_1 = uVar2;
  param_1[1] = 0xfffffffe;
  lua_pushvalue(uVar2,0xffffffff);
  uVar2 = luaL_ref(uVar2,0xffffd8f0);
  param_1[1] = uVar2;
  lua_settop(uVar1,0xfffffffe);
  return param_1;
}

