// FUN_00aa9cd0 @ 00aa9cd0 body=[[00aa9cd0, 00aa9d8c] [00aa9d90, 00aa9dd4]]


void FUN_00aa9cd0(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b366e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    lua_pushvalue(*in_ECX,0xffffd8ee,DAT_00ef259c ^ (uint)&stack0xfffffffc);
  }
  else {
    lua_pushstring(*in_ECX,in_ECX[1]);
    lua_gettable(*in_ECX,0xffffd8ee);
    iVar3 = lua_type(*in_ECX,0xffffffff);
    if (iVar3 != 5) {
      lua_settop(*in_ECX,0xfffffffe);
      lua_createtable(*in_ECX,0,0);
      lua_pushstring(*in_ECX,in_ECX[1]);
      lua_pushvalue(*in_ECX,0xfffffffe);
      lua_settable(*in_ECX,0xffffd8ee);
    }
  }
  uVar1 = *in_ECX;
  local_8 = CONCAT31(local_8._1_3_,1);
  for (piVar2 = param_1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    (**(code **)(*piVar2 + 4))(uVar1);
  }
  lua_settop(uVar1,0xfffffffe);
  local_8 = 0xffffffff;
  if (param_1 != (int *)0x0) {
    (**(code **)*param_1)(1);
  }
  ExceptionList = local_10;
  return;
}

