// FUN_0042e2a0 @ 0042e2a0 body=[[0042e2a0, 0042e3f5]]


undefined8 * FUN_0042e2a0(undefined8 *param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  undefined8 uVar5;
  int local_34 [3];
  undefined8 local_28;
  int local_1c;
  float local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d418;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00435920(local_34,&stack0x0000000c);
  FUN_00435960(&local_28);
  iVar1 = (int)local_28;
  iVar3 = local_28._4_4_;
  local_1c = (int)local_28;
  local_18 = -NAN;
  if ((int)local_28 != 0) {
    lua_rawgeti((int)local_28,0xffffd8f0,local_28._4_4_);
    local_18 = (float)luaL_ref(iVar1,0xffffd8f0);
  }
  fVar2 = local_18;
  local_8 = 0;
  if ((iVar1 != 0) && (iVar3 != -2)) {
    luaL_unref(iVar1,0xffffd8f0,iVar3);
  }
  if (local_34[0] != 0) {
    lua_settop(local_34[0],0xfffffffe);
  }
  lua_rawgeti(iVar1,0xffffd8f0,fVar2);
  iVar3 = lua_type(iVar1,0xffffffff);
  lua_settop(iVar1,0xfffffffe);
  if (iVar3 == 3) {
    fVar4 = (float10)FUN_00435c40(&local_1c);
    local_18 = (float)fVar4;
    if (local_18 < 0.0) {
      local_28 = 0xbfe0000000000000;
    }
    else {
      local_28 = 0x3fe0000000000000;
    }
    uVar5 = FUN_00b31c36();
    *param_1 = uVar5;
  }
  else {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0;
  }
  if ((iVar1 != 0) && (fVar2 != -NAN)) {
    luaL_unref(iVar1,0xffffd8f0,fVar2);
  }
  ExceptionList = local_10;
  return param_1;
}

