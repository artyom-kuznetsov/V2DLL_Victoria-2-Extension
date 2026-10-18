// FUN_00aab330 @ 00aab330 body=[[00aab330, 00aab769]]


void FUN_00aab330(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b368d1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  lua_pushstring(param_1,*(undefined4 *)(in_ECX + 8),DAT_00ef259c ^ (uint)&stack0xfffffffc);
  FUN_00aac990(param_1);
  lua_newuserdata(param_1,0x54);
  iVar3 = lua_touserdata(param_1,0xffffffff);
  local_8 = 0;
  local_20 = iVar3;
  local_1c = iVar3;
  if (iVar3 != 0) {
    FUN_00aac120(in_ECX + 0x2c,*(undefined4 *)(in_ECX + 8),param_1);
  }
  local_8 = 0xffffffff;
  FUN_00aad1b0(in_ECX + 0x2c,iVar3);
  lua_pushstring(param_1,"__luabind_class_map");
  lua_rawget(param_1,0xffffd8f0);
  local_14 = (int *)lua_touserdata(param_1,0xffffffff);
  lua_settop(param_1,0xfffffffe);
  uVar1 = *(uint *)(in_ECX + 0x30);
  if ((uint)(local_14[1] - *local_14 >> 2) <= uVar1) {
    FUN_00aa8390(uVar1 + 1);
  }
  *(int *)(*local_14 + uVar1 * 4) = iVar3;
  local_18 = *(undefined4 **)(in_ECX + 0x34);
  bVar7 = local_18 != (undefined4 *)DAT_013f3630;
  if (bVar7) {
    if ((uint)(local_14[1] - *local_14 >> 2) <= local_18) {
      FUN_00aa8390((int)local_18 + 1);
    }
    *(int *)(*local_14 + (int)local_18 * 4) = iVar3;
  }
  if (iVar3 + 0x38 != in_ECX + 0xc) {
    uVar4 = *(undefined4 *)(iVar3 + 0x3c);
    *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(in_ECX + 0x10);
    *(undefined4 *)(in_ECX + 0x10) = uVar4;
    local_18 = *(undefined4 **)(iVar3 + 0x40);
    *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(in_ECX + 0x14);
    *(undefined4 **)(in_ECX + 0x14) = local_18;
  }
  local_20 = FUN_00aac990(param_1);
  lua_rawgeti(param_1,0xffffd8f0,*(undefined4 *)(iVar3 + 0x2c));
  FUN_00aa9c70(param_1);
  FUN_00aa9c70(param_1);
  lua_settop(param_1,0xfffffffe);
  lua_rawgeti(param_1,0xffffd8f0,*(undefined4 *)(iVar3 + 0x24));
  FUN_00aa9c70(param_1);
  lua_settop(param_1,0xfffffffe);
  lua_pushstring(param_1,"__luabind_cast_graph");
  lua_gettable(param_1,0xffffd8f0);
  local_1c = lua_touserdata(param_1,0xffffffff);
  lua_settop(param_1,0xfffffffe);
  lua_pushstring(param_1,"__luabind_class_id_map");
  lua_gettable(param_1,0xffffd8f0);
  local_14 = (int *)lua_touserdata(param_1,0xffffffff);
  lua_settop(param_1,0xfffffffe);
  local_18 = *(undefined4 **)(in_ECX + 0x30);
  local_28 = *(int *)(in_ECX + 0x2c);
  uVar8 = 0;
  local_24 = 0;
  uVar4 = FUN_00aa8280(&local_28);
  FUN_00831e80(&local_28,uVar4,uVar8);
  *(undefined4 **)(local_28 + 0x10) = local_18;
  if (bVar7) {
    uVar4 = *(undefined4 *)(in_ECX + 0x34);
    local_28 = *(int *)(in_ECX + 0x38);
    uVar9 = 0;
    local_24 = 0;
    uVar8 = FUN_00aa8280(&local_28);
    FUN_00831e80(&local_28,uVar8,uVar9);
    *(undefined4 *)(local_28 + 0x10) = uVar4;
  }
  local_18 = *(undefined4 **)(in_ECX + 0x40);
  for (param_1 = *(undefined4 **)(in_ECX + 0x3c); param_1 != local_18; param_1 = param_1 + 3) {
    FUN_00aa9510(*param_1,param_1[1],param_1[2]);
  }
  iVar6 = *(int *)(in_ECX + 0x1c);
  if (iVar6 != *(int *)(in_ECX + 0x20)) {
    do {
      local_2c = FUN_00aad0e0(iVar6);
      local_30 = 0;
      local_14 = (int *)local_2c;
      FUN_00aac580(&local_30);
      lua_rawgeti(uVar2,0xffffd8f0,*(undefined4 *)(iVar3 + 0x24));
      lua_rawgeti(uVar2,0xffffd8f0,*(undefined4 *)((int)local_14 + 0x24));
      lua_pushnil(uVar2);
      iVar5 = lua_next(uVar2,0xfffffffe);
      while (iVar5 != 0) {
        lua_pushvalue(uVar2,0xfffffffe);
        lua_gettable(uVar2,0xfffffffb);
        iVar5 = lua_type(uVar2,0xffffffff);
        if (iVar5 == 0) {
          lua_settop(uVar2,0xfffffffe);
          lua_pushvalue(uVar2,0xfffffffe);
          lua_insert(uVar2,0xfffffffe);
          lua_settable(uVar2,0xfffffffb);
        }
        else {
          lua_settop(uVar2,0xfffffffd);
        }
        iVar5 = lua_next(uVar2,0xfffffffe);
      }
      lua_settop(uVar2,0xfffffffd);
      lua_rawgeti(uVar2,0xffffd8f0,*(undefined4 *)(iVar3 + 0x2c));
      lua_rawgeti(uVar2,0xffffd8f0,*(undefined4 *)((int)local_14 + 0x2c));
      lua_pushnil(uVar2);
      iVar5 = lua_next(uVar2,0xfffffffe);
      while (iVar5 != 0) {
        lua_pushvalue(uVar2,0xfffffffe);
        lua_gettable(uVar2,0xfffffffb);
        iVar5 = lua_type(uVar2,0xffffffff);
        if (iVar5 == 0) {
          lua_settop(uVar2,0xfffffffe);
          lua_pushvalue(uVar2,0xfffffffe);
          lua_insert(uVar2,0xfffffffe);
          lua_settable(uVar2,0xfffffffb);
        }
        else {
          lua_settop(uVar2,0xfffffffd);
        }
        iVar5 = lua_next(uVar2,0xfffffffe);
      }
      lua_settop(uVar2,0xfffffffd);
      iVar6 = iVar6 + 8;
    } while (iVar6 != *(int *)(in_ECX + 0x20));
  }
  lua_settable(uVar2,0xfffffffd);
  ExceptionList = local_10;
  return;
}

