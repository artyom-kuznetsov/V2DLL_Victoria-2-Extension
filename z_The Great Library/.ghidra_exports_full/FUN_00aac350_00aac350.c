// FUN_00aac350 @ 00aac350 body=[[00aac350, 00aac57e]]


void FUN_00aac350(undefined4 param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  undefined **local_20 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b36a27;
  local_10 = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = &luabind::detail::null_type::RTTI_Type_Descriptor;
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
  in_ECX[0xc] = 1;
  local_8 = 3;
  uStack_7 = 0;
  in_ECX[0x10] = 0;
  iVar3 = FUN_00aae9af(0x18,uVar2);
  if (iVar3 != 0) {
    in_ECX[0xf] = iVar3;
    *(int *)iVar3 = iVar3;
    *(undefined4 *)(in_ECX[0xf] + 4) = in_ECX[0xf];
    *(undefined4 *)(in_ECX[0xf] + 8) = in_ECX[0xf];
    *(undefined1 *)(in_ECX[0xf] + 0x14) = 1;
    *(undefined1 *)(in_ECX[0xf] + 0x15) = 1;
    _local_8 = CONCAT31(uStack_7,4);
    in_ECX[0x12] = 0;
    lua_createtable(param_1,0,0);
    lua_pushvalue(param_1,0xffffffff);
    uVar4 = luaL_ref(param_1,0xffffd8f0);
    iVar3 = in_ECX[8];
    in_ECX[8] = param_1;
    iVar1 = in_ECX[9];
    in_ECX[9] = uVar4;
    if ((iVar3 != 0) && (iVar1 != -2)) {
      luaL_unref(iVar3,0xffffd8f0,iVar1);
    }
    lua_createtable(param_1,0,0);
    lua_pushvalue(param_1,0xffffffff);
    uVar4 = luaL_ref(param_1,0xffffd8f0);
    iVar3 = in_ECX[10];
    in_ECX[10] = param_1;
    iVar1 = in_ECX[0xb];
    in_ECX[0xb] = uVar4;
    if ((iVar3 != 0) && (iVar1 != -2)) {
      luaL_unref(iVar3,0xffffd8f0,iVar1);
    }
    lua_settop(param_1,0xfffffffd);
    param_2 = (char *)FUN_00aac990(param_1);
    lua_rawgeti(param_1,0xffffd8f0,*(undefined4 *)(param_2 + 0x18));
    lua_setmetatable(param_1,0xfffffffe);
    lua_pushvalue(param_1,0xffffffff);
    if ((in_ECX[6] != 0) && (in_ECX[7] != -2)) {
      luaL_unref(in_ECX[6],0xffffd8f0,in_ECX[7]);
    }
    in_ECX[7] = 0xfffffffe;
    in_ECX[6] = param_1;
    uVar4 = luaL_ref(param_1,0xffffd8f0);
    in_ECX[7] = uVar4;
    in_ECX[0xd] = *(undefined4 *)(param_2 + 0x10);
    lua_pushstring(param_1,"__luabind_cast_graph");
    lua_gettable(param_1,0xffffd8f0);
    uVar4 = lua_touserdata(param_1,0xffffffff);
    in_ECX[0x13] = uVar4;
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"__luabind_class_id_map");
    lua_gettable(param_1,0xffffd8f0);
    uVar4 = lua_touserdata(param_1,0xffffffff);
    in_ECX[0x14] = uVar4;
    lua_settop(param_1,0xfffffffe);
    ExceptionList = local_10;
    return;
  }
  param_2 = (char *)0x0;
  std::exception::exception((exception *)local_20,&param_2);
  local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_20,&DAT_00e6fb20);
}

