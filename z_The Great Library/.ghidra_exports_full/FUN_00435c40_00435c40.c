// FUN_00435c40 @ 00435c40 body=[[00435c40, 00435cea]]


float10 FUN_00435c40(TypeDescriptor *param_1)

{
  void *pvVar1;
  TypeDescriptor *pTVar2;
  int iVar3;
  float10 fVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d3f8;
  local_10 = ExceptionList;
  pvVar1 = param_1->pVFTable;
  pTVar2 = param_1;
  ExceptionList = &local_10;
  if (pvVar1 == (void *)0x0) {
    param_1 = &.X::RTTI_Type_Descriptor;
    ExceptionList = &local_10;
    pTVar2 = (TypeDescriptor *)FUN_00435df0(0,&param_1);
  }
  lua_rawgeti(pvVar1,0xffffd8f0,pTVar2->spare);
  local_8 = 0;
  iVar3 = lua_type(pvVar1,0xffffffff);
  if ((int)-(uint)(iVar3 != 3) < 0) {
    param_1 = &.M::RTTI_Type_Descriptor;
    FUN_00435df0(pvVar1,&param_1);
  }
  fVar4 = (float10)lua_tonumber(pvVar1,0xffffffff);
  param_1 = (TypeDescriptor *)(float)fVar4;
  lua_settop(pvVar1,0xfffffffe);
  ExceptionList = local_10;
  return (float10)(float)param_1;
}

