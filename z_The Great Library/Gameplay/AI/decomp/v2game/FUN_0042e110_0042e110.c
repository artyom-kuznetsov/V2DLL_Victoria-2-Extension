// FUN_0042e110 @ 0042e110 body=[[0042e110, 0042e24d]]


undefined4 * FUN_0042e110(undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  int local_30 [3];
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d418;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00435920(local_30,&stack0x0000000c);
  FUN_00435960(&local_24);
  local_1c = local_24;
  local_18 = -NAN;
  if (local_24 != 0) {
    lua_rawgeti(local_24,0xffffd8f0,local_20);
    local_18 = (float)luaL_ref(local_24,0xffffd8f0);
  }
  fVar1 = local_18;
  local_8 = 0;
  if ((local_24 != 0) && (local_20 != -2)) {
    luaL_unref(local_24,0xffffd8f0,local_20);
  }
  if (local_30[0] != 0) {
    lua_settop(local_30[0],0xfffffffe);
  }
  lua_rawgeti(local_24,0xffffd8f0,fVar1);
  iVar2 = lua_type(local_24,0xffffffff);
  lua_settop(local_24,0xfffffffe);
  if (iVar2 == 3) {
    fVar4 = (float10)FUN_00435c40(&local_1c);
    local_18 = (float)(fVar4 + (float10)0.0005000000237487257) * 1000.0;
    FUN_00401000(local_18);
    uVar3 = FUN_00b31c00();
    *param_1 = uVar3;
  }
  else {
    *param_1 = 0;
  }
  if ((local_24 != 0) && (fVar1 != -NAN)) {
    luaL_unref(local_24,0xffffd8f0,fVar1);
  }
  ExceptionList = local_10;
  return param_1;
}

