// FUN_00aaa4c0 @ 00aaa4c0 body=[[00aaa4c0, 00aaa531]]


bool FUN_00aaa4c0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  
  lua_rawgeti(*param_1,0xffffd8f0,param_1[1]);
  uVar1 = *param_1;
  iVar2 = lua_getupvalue(uVar1,0xffffffff,2);
  if (iVar2 == 0) {
    lua_settop(*param_1,0xfffffffe);
    return false;
  }
  puVar3 = (undefined *)lua_touserdata(uVar1,0xffffffff);
  lua_settop(uVar1,0xfffffffe);
  lua_settop(*param_1,0xfffffffe);
  return puVar3 == &DAT_00f1f854;
}

