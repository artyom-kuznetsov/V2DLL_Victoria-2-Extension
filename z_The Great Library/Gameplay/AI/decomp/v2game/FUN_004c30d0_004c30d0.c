// FUN_004c30d0 @ 004c30d0 body=[[004c30d0, 004c3206] [004c3210, 004c3436]]


void FUN_004c30d0(void)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  int local_88;
  int local_7c;
  int local_70;
  int local_64;
  int local_58;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4673b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009be180();
  FUN_0042d7e0();
  local_8 = 0;
  FUN_004c9560();
  FUN_00435960(&local_38);
  iVar1 = local_34;
  iVar2 = local_38;
  local_30 = local_38;
  local_2c = -2;
  if (local_38 != 0) {
    lua_rawgeti(local_38,0xffffd8f0,local_34);
    local_2c = luaL_ref(local_30,0xffffd8f0);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  if ((iVar2 != 0) && (iVar1 != -2)) {
    luaL_unref(iVar2,0xffffd8f0,iVar1);
  }
  if (local_4c != 0) {
    lua_settop(local_4c,0xfffffffe);
  }
  if (local_30 != 0) {
    FUN_004c9590();
    FUN_00435960(&local_28);
    iVar2 = local_24;
    local_38 = local_28;
    local_34 = -2;
    if (local_28 != 0) {
      lua_rawgeti(local_28,0xffffd8f0,local_24);
      local_34 = luaL_ref(local_38,0xffffd8f0);
      if (iVar2 != -2) {
        luaL_unref(local_28,0xffffd8f0,iVar2);
      }
    }
    if (local_4c != 0) {
      lua_settop(local_4c,0xfffffffe);
    }
    local_18 = 0;
    do {
      local_1c = local_18 * 7;
      local_14 = 0;
      do {
        iVar2 = local_1c;
        FUN_004c95c0(&local_18);
        FUN_004c95c0(&local_14);
        FUN_004c95f0();
        local_28 = local_48;
        local_24 = -2;
        if (local_48 != 0) {
          lua_rawgeti(local_48,0xffffd8f0,local_44);
          local_24 = luaL_ref(local_28,0xffffd8f0);
          if (local_44 != -2) {
            luaL_unref(local_48,0xffffd8f0,local_44);
          }
        }
        if (local_58 != 0) {
          lua_settop(local_58,0xfffffffe);
        }
        if (local_64 != 0) {
          lua_settop(local_64,0xfffffffe);
        }
        FUN_004c9630(&DAT_00dfd420);
        local_8 = CONCAT31(local_8._1_3_,4);
        fVar3 = (float10)FUN_004c9f30();
        local_20 = (float)fVar3;
        iVar2 = iVar2 + local_14;
        (&DAT_00f0b070)[iVar2 * 3] = local_20;
        if (local_70 != 0) {
          lua_settop(local_70,0xfffffffe);
        }
        FUN_004c9630(&DAT_00dfd424);
        local_8 = CONCAT31(local_8._1_3_,5);
        fVar3 = (float10)FUN_004c9f30();
        local_20 = (float)fVar3;
        (&DAT_00f0b074)[iVar2 * 3] = local_20;
        if (local_7c != 0) {
          lua_settop(local_7c,0xfffffffe);
        }
        FUN_004c9630(&DAT_00dfd428);
        local_8 = CONCAT31(local_8._1_3_,6);
        fVar3 = (float10)FUN_004c9f30();
        local_20 = (float)fVar3;
        (&DAT_00f0b078)[iVar2 * 3] = local_20;
        if (local_88 != 0) {
          lua_settop(local_88,0xfffffffe);
        }
        local_8 = CONCAT31(local_8._1_3_,2);
        if ((local_28 != 0) && (local_24 != -2)) {
          luaL_unref(local_28,0xffffd8f0,local_24);
        }
        local_14 = local_14 + 1;
      } while (local_14 < 7);
      local_18 = local_18 + 1;
    } while (local_18 < 2);
    if ((local_38 != 0) && (local_34 != -2)) {
      luaL_unref(local_38,0xffffd8f0,local_34);
    }
    if ((local_30 != 0) && (local_2c != -2)) {
      luaL_unref(local_30,0xffffd8f0,local_2c);
    }
  }
  if ((local_40 != 0) && (local_3c != -2)) {
    luaL_unref(local_40,0xffffd8f0,local_3c);
  }
  ExceptionList = local_10;
  return;
}

