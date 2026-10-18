// FUN_00aac870 @ 00aac870 body=[[00aac870, 00aac98e]]


undefined4 FUN_00aac870(undefined4 param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b36a61;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = lua_gettop(param_1,DAT_00ef259c ^ (uint)&stack0xfffffffc);
  if (iVar3 == 1) {
    iVar3 = lua_type(param_1,1);
    if (iVar3 == 4) {
      iVar3 = lua_isnumber(param_1,1);
      if (iVar3 == 0) goto LAB_00aac8da;
    }
  }
  lua_pushstring(param_1,"invalid construct, expected class name");
  lua_error(param_1);
LAB_00aac8da:
  pcVar4 = (char *)lua_tolstring(param_1,1,0);
  pcVar1 = pcVar4 + 1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  iVar3 = lua_objlen(param_1,1);
  if ((int)pcVar4 - (int)pcVar1 != iVar3) {
    lua_pushstring(param_1,"luabind does not support class names with extra nulls");
    lua_error(param_1);
  }
  uVar5 = lua_tolstring(param_1,1,0);
  iVar3 = lua_newuserdata(param_1,0x54);
  local_8 = 0;
  if (iVar3 != 0) {
    FUN_00aac350(param_1,uVar5);
  }
  lua_pushstring(param_1,uVar5);
  lua_pushvalue(param_1,0xfffffffe);
  lua_settable(param_1,0xffffd8ee);
  lua_pushcclosure(param_1,FUN_00aac7b0,1);
  ExceptionList = local_10;
  return 1;
}

