// FUN_00aaa780 @ 00aaa780 body=[[00aaa780, 00aaa9bb]]


void FUN_00aaa780(undefined4 param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int local_2c [3];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar8 = param_3;
  puVar4 = (undefined4 *)FUN_00aaa5c0(&local_18,param_3,1);
  uVar1 = *puVar4;
  lua_rawgeti(uVar1,0xffffd8f0,puVar4[1]);
  piVar5 = (int *)lua_touserdata(uVar1,0xffffffff);
  lua_settop(uVar1,0xfffffffe);
  local_8 = *piVar5;
  if ((local_18 != 0) && (local_14 != -2)) {
    luaL_unref(local_18,0xffffd8f0,local_14);
  }
  pcVar6 = param_2;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  FUN_00409350(param_2,(int)pcVar6 - (int)(param_2 + 1));
  FUN_00435920(local_2c,&param_2);
  FUN_00435960(&local_20);
  iVar7 = local_1c;
  iVar2 = local_20;
  local_10 = local_20;
  local_c = -2;
  if (local_20 != 0) {
    lua_rawgeti(local_20,0xffffd8f0,local_1c);
    local_c = luaL_ref(iVar2,0xffffd8f0);
    if (iVar7 != -2) {
      luaL_unref(iVar2,0xffffd8f0,iVar7);
    }
  }
  if (local_2c[0] != 0) {
    lua_settop(local_2c[0],0xfffffffe);
  }
  if (iVar2 != 0) {
    lua_rawgeti(iVar2,0xffffd8f0,local_c);
    iVar7 = lua_toboolean(iVar2,0xffffffff);
    lua_settop(iVar2,0xfffffffe);
    if (iVar7 == 1) {
      cVar3 = FUN_00aaa4c0(&local_10);
      if (cVar3 != '\0') {
        cVar3 = FUN_00aaa4c0(iVar8);
        if (cVar3 != '\0') {
          puVar4 = (undefined4 *)FUN_00aaa5c0(&local_20,&local_10,1);
          uVar1 = *puVar4;
          lua_rawgeti(uVar1,0xffffd8f0,puVar4[1]);
          puVar4 = (undefined4 *)lua_touserdata(uVar1,0xffffffff);
          lua_settop(uVar1,0xfffffffe);
          *(undefined4 *)(local_8 + 0x24) = *puVar4;
          if ((local_20 != 0) && (local_1c != -2)) {
            luaL_unref(local_20,0xffffd8f0,local_1c);
          }
          FUN_00aaa720(&local_10);
          iVar8 = param_3;
        }
      }
    }
    if (local_c != -2) {
      luaL_unref(iVar2,0xffffd8f0,local_c);
    }
  }
  puVar4 = (undefined4 *)FUN_00435920(local_2c,&param_2);
  lua_rawgeti(*puVar4,0xffffd8f0,*(undefined4 *)(puVar4[2] + 4));
  uVar1 = *puVar4;
  lua_pushvalue(uVar1,puVar4[1]);
  lua_rawgeti(*puVar4,0xffffd8f0,*(undefined4 *)(iVar8 + 4));
  lua_settable(*puVar4,0xfffffffd);
  lua_settop(uVar1,0xfffffffe);
  if (local_2c[0] != 0) {
    lua_settop(local_2c[0],0xfffffffe);
  }
  return;
}

