// FUN_00aa99b0 @ 00aa99b0 body=[[00aa99b0, 00aa9a0e]]


undefined4 * FUN_00aa99b0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)lua_newuserdata(param_1,0x30);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[0xb] = 0;
    puVar1[10] = param_2;
    puVar2 = puVar1;
  }
  lua_rawgeti(param_1,0xffffd8f0,*(undefined4 *)(param_2 + 0x24));
  lua_setfenv(param_1,0xfffffffe);
  lua_rawgeti(param_1,0xffffd8f0,*(undefined4 *)(param_2 + 0x34));
  lua_setmetatable(param_1,0xfffffffe);
  return puVar2;
}

