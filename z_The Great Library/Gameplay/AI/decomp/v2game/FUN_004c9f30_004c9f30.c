// FUN_004c9f30 @ 004c9f30 body=[[004c9f30, 004c9ffd]]


float10 FUN_004c9f30(void)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  float10 fVar3;
  TypeDescriptor *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b466e8;
  local_10 = ExceptionList;
  iVar1 = *unaff_ESI;
  ExceptionList = &local_10;
  if (iVar1 == 0) {
    local_14 = &.X::RTTI_Type_Descriptor;
    ExceptionList = &local_10;
    FUN_00435df0(0,&local_14);
  }
  lua_rawgeti(iVar1,0xffffd8f0,*(undefined4 *)(unaff_ESI[2] + 4));
  lua_pushvalue(*unaff_ESI,unaff_ESI[1]);
  lua_gettable(*unaff_ESI,0xfffffffe);
  lua_remove(*unaff_ESI,0xfffffffe);
  local_8 = 0;
  iVar2 = lua_type(iVar1,0xffffffff);
  if ((int)-(uint)(iVar2 != 3) < 0) {
    local_14 = &.M::RTTI_Type_Descriptor;
    FUN_00435df0(iVar1,&local_14);
  }
  fVar3 = (float10)lua_tonumber(iVar1,0xffffffff);
  local_14 = (TypeDescriptor *)(float)fVar3;
  lua_settop(iVar1,0xfffffffe);
  ExceptionList = local_10;
  return (float10)(float)local_14;
}

