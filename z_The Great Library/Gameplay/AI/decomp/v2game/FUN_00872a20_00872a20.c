// FUN_00872a20 @ 00872a20 body=[[00872a20, 00872a6a]]


undefined4 FUN_00872a20(undefined4 param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)lua_touserdata(param_1,0xffffd8ed);
  if ((*(uint *)puVar1[1] <= *puVar1) && (*puVar1 < ((uint *)puVar1[1])[1])) {
    FUN_00873740();
    *puVar1 = *puVar1 + 4;
    return 1;
  }
  lua_pushnil(param_1);
  return 1;
}

