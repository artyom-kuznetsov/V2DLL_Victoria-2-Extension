// FUN_00aac990 @ 00aac990 body=[[00aac990, 00aac9c8]]


undefined4 FUN_00aac990(undefined4 param_1)

{
  undefined4 uVar1;
  
  lua_pushstring(param_1,"__luabind_classes");
  lua_gettable(param_1,0xffffd8f0);
  uVar1 = lua_touserdata(param_1,0xffffffff);
  lua_settop(param_1,0xfffffffe);
  return uVar1;
}

