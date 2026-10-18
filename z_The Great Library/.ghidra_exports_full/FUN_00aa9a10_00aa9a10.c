// FUN_00aa9a10 @ 00aa9a10 body=[[00aa9a10, 00aa9a93]]


undefined4 FUN_00aa9a10(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)lua_touserdata(param_1,1);
  lua_pushstring(param_1,"__finalize");
  lua_gettable(param_1,1);
  iVar2 = lua_type(param_1,0xffffffff);
  if (iVar2 == 0) {
    lua_settop(param_1,0xfffffffe);
  }
  else {
    lua_pushvalue(param_1,1);
    lua_call(param_1,1,0);
  }
  FUN_00aa9610(param_1);
  if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*piVar1)(0);
    if ((int *)*piVar1 != piVar1 + 2) {
      _free((int *)*piVar1);
    }
  }
  return 0;
}

