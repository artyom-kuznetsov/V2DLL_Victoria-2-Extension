// FUN_00928880 @ 00928880 body=[[00928880, 00928ae0]]


undefined1 * FUN_00928880(undefined1 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int aiStack_24 [4];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4a938;
  pvStack_14 = ExceptionList;
  local_48 = 0;
  ExceptionList = &pvStack_14;
  FUN_009be180();
  FUN_0042d7e0();
  local_c = 0;
  FUN_004c9560();
  FUN_00435960(&local_40);
  iVar2 = local_3c;
  iVar1 = local_40;
  local_48 = local_40;
  local_44 = -2;
  if (local_40 != 0) {
    lua_rawgeti(local_40,0xffffd8f0,local_3c);
    local_44 = luaL_ref(local_48,0xffffd8f0);
  }
  local_c = CONCAT31(local_c._1_3_,1);
  if ((iVar1 != 0) && (iVar2 != -2)) {
    luaL_unref(iVar1,0xffffd8f0,iVar2);
  }
  if (local_30 != 0) {
    lua_settop(local_30,0xfffffffe);
  }
  if (local_48 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    pcVar3 = (char *)0x0;
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    FUN_00409350(0,pcVar4);
  }
  else if (param_2 == 0) {
    FUN_00928af0(param_1,&local_48);
  }
  else {
    FUN_00435920(aiStack_24,&param_2);
    FUN_00435960(&local_30);
    local_40 = local_30;
    local_3c = -2;
    if (local_30 != 0) {
      lua_rawgeti(local_30,0xffffd8f0,iStack_2c);
      local_3c = luaL_ref(local_40,0xffffd8f0);
    }
    local_c = CONCAT31(local_c._1_3_,2);
    if ((local_30 != 0) && (iStack_2c != -2)) {
      luaL_unref(local_30,0xffffd8f0,iStack_2c);
    }
    if (aiStack_24[0] != 0) {
      lua_settop(aiStack_24[0],0xfffffffe);
    }
    if (local_40 == 0) {
      FUN_004471e0(0);
    }
    else {
      FUN_00928af0(param_1,&local_40);
    }
    if ((local_40 != 0) && (local_3c != -2)) {
      luaL_unref(local_40,0xffffd8f0,local_3c);
    }
  }
  if ((local_48 != 0) && (local_44 != -2)) {
    luaL_unref(local_48,0xffffd8f0,local_44);
  }
  if ((local_38 != 0) && (iStack_34 != -2)) {
    luaL_unref(local_38,0xffffd8f0,iStack_34);
  }
  ExceptionList = pvStack_14;
  return param_1;
}

