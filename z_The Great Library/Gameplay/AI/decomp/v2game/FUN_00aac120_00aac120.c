// FUN_00aac120 @ 00aac120 body=[[00aac120, 00aac34b]]


void FUN_00aac120(char *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  undefined **local_20 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b36a27;
  local_10 = ExceptionList;
  uVar3 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = *(undefined4 *)param_1;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[5] = param_2;
  in_ECX[6] = 0;
  in_ECX[7] = 0xfffffffe;
  in_ECX[8] = 0;
  in_ECX[9] = 0xfffffffe;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0xfffffffe;
  in_ECX[0xc] = 0;
  local_8 = 3;
  uStack_7 = 0;
  in_ECX[0x10] = 0;
  iVar4 = FUN_00aae9af(0x18,uVar3);
  uVar2 = param_3;
  if (iVar4 != 0) {
    in_ECX[0xf] = iVar4;
    *(int *)iVar4 = iVar4;
    *(undefined4 *)(in_ECX[0xf] + 4) = in_ECX[0xf];
    *(undefined4 *)(in_ECX[0xf] + 8) = in_ECX[0xf];
    *(undefined1 *)(in_ECX[0xf] + 0x14) = 1;
    *(undefined1 *)(in_ECX[0xf] + 0x15) = 1;
    _local_8 = CONCAT31(uStack_7,4);
    in_ECX[0x12] = 0;
    lua_createtable(param_3,0,0);
    lua_pushvalue(uVar2,0xffffffff);
    uVar5 = luaL_ref(uVar2,0xffffd8f0);
    iVar4 = in_ECX[8];
    in_ECX[8] = uVar2;
    iVar1 = in_ECX[9];
    in_ECX[9] = uVar5;
    if ((iVar4 != 0) && (iVar1 != -2)) {
      luaL_unref(iVar4,0xffffd8f0,iVar1);
    }
    lua_createtable(uVar2,0,0);
    lua_pushvalue(uVar2,0xffffffff);
    uVar5 = luaL_ref(uVar2,0xffffd8f0);
    iVar4 = in_ECX[10];
    in_ECX[10] = uVar2;
    iVar1 = in_ECX[0xb];
    in_ECX[0xb] = uVar5;
    if ((iVar4 != 0) && (iVar1 != -2)) {
      luaL_unref(iVar4,0xffffd8f0,iVar1);
    }
    lua_settop(uVar2,0xfffffffd);
    param_1 = (char *)FUN_00aac990(uVar2);
    lua_rawgeti(uVar2,0xffffd8f0,*(undefined4 *)(param_1 + 0x14));
    lua_setmetatable(uVar2,0xfffffffe);
    lua_pushvalue(uVar2,0xffffffff);
    if ((in_ECX[6] != 0) && (in_ECX[7] != -2)) {
      luaL_unref(in_ECX[6],0xffffd8f0,in_ECX[7]);
    }
    in_ECX[7] = 0xfffffffe;
    in_ECX[6] = uVar2;
    uVar5 = luaL_ref(uVar2,0xffffd8f0);
    in_ECX[7] = uVar5;
    in_ECX[0xd] = *(undefined4 *)(param_1 + 0x10);
    lua_pushstring(uVar2,"__luabind_cast_graph");
    lua_gettable(uVar2,0xffffd8f0);
    uVar5 = lua_touserdata(uVar2,0xffffffff);
    in_ECX[0x13] = uVar5;
    lua_settop(uVar2,0xfffffffe);
    lua_pushstring(uVar2,"__luabind_class_id_map");
    lua_gettable(uVar2,0xffffd8f0);
    uVar5 = lua_touserdata(uVar2,0xffffffff);
    in_ECX[0x14] = uVar5;
    lua_settop(uVar2,0xfffffffe);
    ExceptionList = local_10;
    return;
  }
  param_1 = (char *)0x0;
  std::exception::exception((exception *)local_20,&param_1);
  local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_20,&DAT_00e6fb20);
}

