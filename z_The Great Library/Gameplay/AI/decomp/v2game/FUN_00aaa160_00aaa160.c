// FUN_00aaa160 @ 00aaa160 body=[[00aaa160, 00aaa3ff]]


void FUN_00aaa160(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined **local_24 [3];
  char *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b36733;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = lua_pushthread(param_1,DAT_00ef259c ^ (uint)&stack0xfffffffc);
  lua_settop(param_1,0xfffffffe);
  if (iVar1 != 1) {
    local_14 = "luabind::open() must be called with the main thread lua_State*";
    std::exception::exception((exception *)local_24,&local_14);
    local_24[0] = std::runtime_error::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_24,&DAT_00e6fb74);
  }
  iVar1 = FUN_00aac990(param_1);
  if (iVar1 == 0) {
    lua_pushstring(param_1,"__luabind_classes");
    pcVar2 = (char *)lua_newuserdata(param_1,0x20);
    local_14 = pcVar2;
    lua_createtable(param_1,0,0);
    lua_pushstring(param_1,&DAT_00dd8d88);
    lua_pushcclosure(param_1,FUN_00aaa0f0,0);
    lua_settable(param_1,0xfffffffd);
    lua_setmetatable(param_1,0xfffffffe);
    local_8 = 0;
    local_18 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      FUN_00aad1d0(param_1);
    }
    lua_settable(param_1,0xffffd8f0);
    lua_pushstring(param_1,"__luabind_class_id_map");
    local_18 = (char *)lua_newuserdata(param_1,0x14);
    local_8 = 1;
    local_14 = local_18;
    if (local_18 != (char *)0x0) {
      FUN_00aaa000();
    }
    lua_createtable(param_1,0,0);
    lua_pushcclosure(param_1,FUN_00aaa080,0);
    lua_setfield(param_1,0xfffffffe,&DAT_00dd8d88);
    lua_setmetatable(param_1,0xfffffffe);
    lua_settable(param_1,0xffffd8f0);
    lua_pushstring(param_1,"__luabind_cast_graph");
    local_18 = (char *)lua_newuserdata(param_1,4);
    local_8 = 2;
    local_14 = local_18;
    if (local_18 != (char *)0x0) {
      FUN_00aa9520();
    }
    lua_createtable(param_1,0,0);
    lua_pushcclosure(param_1,FUN_00aa9eb0,0);
    lua_setfield(param_1,0xfffffffe,&DAT_00dd8d88);
    lua_setmetatable(param_1,0xfffffffe);
    lua_settable(param_1,0xffffd8f0);
    lua_pushstring(param_1,"__luabind_class_map");
    puVar3 = (undefined4 *)lua_newuserdata(param_1,0x10);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
    }
    lua_createtable(param_1,0,0);
    lua_pushcclosure(param_1,FUN_00aa9fc0,0);
    lua_setfield(param_1,0xfffffffe,&DAT_00dd8d88);
    lua_setmetatable(param_1,0xfffffffe);
    lua_settable(param_1,0xffffd8f0);
    lua_pushstring(param_1,"class");
    lua_pushcclosure(param_1,FUN_00aac870,0);
    lua_settable(param_1,0xffffd8ee);
    lua_pushstring(param_1,"property");
    lua_pushcclosure(param_1,FUN_00aa9e30,0);
    lua_settable(param_1,0xffffd8ee);
    lua_pushlightuserdata(param_1,&DAT_00f1f844);
    lua_pushlightuserdata(param_1,param_1);
    lua_rawset(param_1,0xffffd8f0);
    lua_pushstring(param_1,"super");
    lua_pushcclosure(param_1,FUN_00aa9e90,0);
    lua_settable(param_1,0xffffd8ee);
  }
  ExceptionList = local_10;
  return;
}

