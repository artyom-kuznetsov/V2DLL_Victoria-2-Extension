// FUN_00928c80 @ 00928c80 body=[[00928c80, 00928d34]]


undefined4 FUN_00928c80(undefined4 param_1,TypeDescriptor *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = (int *)param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d3f8;
  local_10 = ExceptionList;
  param_2 = (TypeDescriptor *)0x0;
  iVar1 = *piVar2;
  ExceptionList = &local_10;
  if (iVar1 == 0) {
    param_2 = &.X::RTTI_Type_Descriptor;
    ExceptionList = &local_10;
    piVar2 = (int *)FUN_00435e30(0,&param_2);
  }
  lua_rawgeti(iVar1,0xffffd8f0,piVar2[1]);
  local_8 = 0;
  iVar3 = lua_type(iVar1,0xffffffff);
  if ((int)-(uint)(iVar3 != 4) < 0) {
    param_2 = &std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               RTTI_Type_Descriptor;
    FUN_00435e30(iVar1,&param_2);
  }
  FUN_00435dd0(DAT_013f0814);
  lua_settop(iVar1,0xfffffffe);
  ExceptionList = local_10;
  return param_1;
}

