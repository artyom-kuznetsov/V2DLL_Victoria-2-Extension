// FUN_00aac7b0 @ 00aac7b0 body=[[00aac7b0, 00aac865]]


undefined4 FUN_00aac7b0(undefined4 param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_c;
  undefined4 *local_8;
  
  puVar2 = (undefined4 *)lua_touserdata(param_1,0xffffd8ed);
  cVar1 = FUN_00aaba40(param_1,1);
  if (cVar1 == '\0') {
    lua_pushstring(param_1,"expected class to derive from or a newline");
    lua_error(param_1);
  }
  puVar3 = (undefined4 *)lua_touserdata(param_1,1);
  local_c = 0;
  local_8 = puVar3;
  FUN_00aac580(&local_c);
  lua_rawgeti(param_1,0xffffd8f0,puVar2[9]);
  lua_rawgeti(param_1,0xffffd8f0,puVar3[9]);
  FUN_00aac6f0(param_1);
  lua_rawgeti(param_1,0xffffd8f0,puVar2[0xb]);
  lua_rawgeti(param_1,0xffffd8f0,puVar3[0xb]);
  FUN_00aac6f0(param_1);
  *puVar2 = *puVar3;
  return 0;
}

