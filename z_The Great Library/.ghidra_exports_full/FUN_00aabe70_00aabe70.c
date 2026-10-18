// FUN_00aabe70 @ 00aabe70 body=[[00aabe70, 00aabff9] [00aabffd, 00aac02c]]


void FUN_00aabe70(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 ***pppuVar7;
  char *local_38;
  int local_34;
  undefined4 **local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b36978;
  local_10 = ExceptionList;
  local_14 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = lua_touserdata(param_1,1,local_14);
  lua_rawgeti(param_1,0xffffd8f0,*(undefined4 *)(iVar2 + 0x2c));
  lua_pushvalue(param_1,2);
  lua_gettable(param_1,0xfffffffe);
  iVar3 = lua_type(param_1,0xffffffff);
  if (iVar3 == 0) {
    lua_settop(param_1,0xfffffffd);
    pcVar4 = (char *)lua_tolstring(param_1,2,0);
    pcVar5 = pcVar4;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_34 = (int)pcVar5 - (int)(pcVar4 + 1);
    local_38 = pcVar4;
    iVar3 = lua_objlen(param_1,2);
    if (local_34 == iVar3) {
      piVar6 = (int *)FUN_00aabd30(&local_34,&local_38);
      if (*piVar6 == *(int *)(iVar2 + 0x3c)) {
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = (undefined4 **)((uint)local_30[0] & 0xffffff00);
        FUN_00409350("no static \'",0xb);
        local_8 = 0;
        pcVar5 = pcVar4;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00448740(pcVar4,(int)pcVar5 - (int)(pcVar4 + 1));
        FUN_00448740("\' in class \'",0xc);
        pcVar5 = *(char **)(iVar2 + 0x14);
        pcVar4 = pcVar5;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        FUN_00448740(pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
        FUN_00448740(&DAT_00dfe3cc,1);
        pppuVar7 = (undefined4 ***)local_30[0];
        if (local_1c < 0x10) {
          pppuVar7 = local_30;
        }
        lua_pushstring(param_1,pppuVar7);
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        lua_error();
        lua_pushnil(param_1);
      }
      else {
        lua_pushnumber(param_1,(double)*(int *)(*piVar6 + 0x10));
      }
    }
    else {
      lua_pushnil();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

