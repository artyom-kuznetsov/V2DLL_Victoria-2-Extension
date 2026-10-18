// FUN_00928af0 @ 00928af0 body=[[00928af0, 00928c5b]]


undefined1 * FUN_00928af0(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int local_30 [3];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4a908;
  local_10 = ExceptionList;
  local_18 = 0;
  local_14 = &DAT_00e33aa4;
  ExceptionList = &local_10;
  FUN_00435920(local_30,&local_14);
  FUN_00435960(&local_1c);
  iVar2 = local_18;
  local_24 = local_1c;
  local_20 = -2;
  if (local_1c != 0) {
    lua_rawgeti(local_1c,0xffffd8f0,local_18);
    local_20 = luaL_ref(local_1c,0xffffd8f0);
  }
  iVar1 = local_20;
  local_8 = 0;
  if ((local_1c != 0) && (iVar2 != -2)) {
    luaL_unref(local_1c,0xffffd8f0,iVar2);
  }
  if (local_30[0] != 0) {
    lua_settop(local_30[0],0xfffffffe);
  }
  lua_rawgeti(local_1c,0xffffd8f0,iVar1);
  local_18 = lua_type(local_1c,0xffffffff);
  lua_settop(local_1c,0xfffffffe);
  if (local_18 != 3) {
    lua_rawgeti(local_1c,0xffffd8f0,iVar1);
    local_18 = lua_type(local_1c,0xffffffff);
    lua_settop(local_1c,0xfffffffe);
    if (local_18 != 4) {
      *(undefined4 *)(param_1 + 0x14) = 0xf;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *param_1 = 0;
      pcVar3 = (char *)0x0;
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar4 != '\0');
      FUN_00409350(0,pcVar4);
      goto LAB_00928c30;
    }
  }
  FUN_00928c60();
LAB_00928c30:
  if ((local_1c != 0) && (iVar1 != -2)) {
    luaL_unref(local_1c,0xffffd8f0,iVar1);
  }
  ExceptionList = local_10;
  return param_1;
}

