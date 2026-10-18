// FUN_00aa9890 @ 00aa9890 body=[[00aa9890, 00aa99aa]]


undefined4 FUN_00aa9890(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = 1;
  do {
    iVar2 = lua_touserdata(param_1,iVar6);
    if (iVar2 != 0) {
      iVar3 = lua_getmetatable(param_1,iVar6);
      if (iVar3 != 0) {
        lua_rawgeti(param_1,0xffffffff,1);
        pcVar4 = (code *)lua_tocfunction(param_1,0xffffffff);
        if (pcVar4 != FUN_00aa9790) {
          iVar2 = 0;
        }
        lua_settop(param_1,0xfffffffd);
        if (iVar2 != 0) {
          uVar5 = lua_gettop(param_1);
          lua_pushvalue(param_1,0xffffd8ed);
          lua_gettable(param_1,iVar6);
          iVar2 = lua_type(param_1,0xffffffff);
          if (iVar2 != 0) {
            lua_insert(param_1,1);
            iVar6 = lua_toboolean(param_1,0xffffd8ec);
            if (iVar6 != 0) {
              uVar5 = 1;
            }
            iVar6 = lua_toboolean(param_1,0xffffd8ec);
            if (iVar6 != 0) {
              lua_remove(param_1,3);
            }
            lua_call(param_1,uVar5,1);
            return 1;
          }
          lua_settop(param_1,0xfffffffe);
        }
      }
    }
    bVar1 = iVar6 < 2;
    iVar6 = iVar6 + 1;
  } while (bVar1);
  iVar6 = lua_gettop(param_1);
  lua_settop(param_1,-1 - iVar6);
  lua_pushstring(param_1,"No such operator defined");
  lua_error(param_1);
  return 0;
}

