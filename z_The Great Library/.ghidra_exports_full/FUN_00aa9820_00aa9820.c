// FUN_00aa9820 @ 00aa9820 body=[[00aa9820, 00aa9880]]


int FUN_00aa9820(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  iVar1 = lua_touserdata(param_1,param_2);
  if (iVar1 != 0) {
    iVar2 = lua_getmetatable(param_1,param_2);
    if (iVar2 != 0) {
      lua_rawgeti(param_1,0xffffffff,1);
      pcVar3 = (code *)lua_tocfunction(param_1,0xffffffff);
      if (pcVar3 != FUN_00aa9790) {
        iVar1 = 0;
      }
      lua_settop(param_1,0xfffffffd);
      return iVar1;
    }
  }
  return 0;
}

