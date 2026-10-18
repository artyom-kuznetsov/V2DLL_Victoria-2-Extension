// FUN_00435cf0 @ 00435cf0 body=[[00435cf0, 00435dc9]]


undefined4 FUN_00435cf0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  TypeDescriptor *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b466e8;
  local_10 = ExceptionList;
  local_14 = (TypeDescriptor *)0x0;
  iVar1 = *in_ECX;
  ExceptionList = &local_10;
  if (iVar1 == 0) {
    local_14 = &.X::RTTI_Type_Descriptor;
    ExceptionList = &local_10;
    FUN_00435e30(0,&local_14);
  }
  lua_rawgeti(iVar1,0xffffd8f0,*(undefined4 *)(in_ECX[2] + 4));
  lua_pushvalue(*in_ECX,in_ECX[1]);
  lua_gettable(*in_ECX,0xfffffffe);
  lua_remove(*in_ECX,0xfffffffe);
  local_8 = 0;
  iVar2 = lua_type(iVar1,0xffffffff);
  if ((int)-(uint)(iVar2 != 4) < 0) {
    local_14 = &std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                RTTI_Type_Descriptor;
    FUN_00435e30(iVar1,&local_14);
  }
  FUN_00435dd0(DAT_013f0814);
  lua_settop(iVar1,0xfffffffe);
  ExceptionList = local_10;
  return param_1;
}

