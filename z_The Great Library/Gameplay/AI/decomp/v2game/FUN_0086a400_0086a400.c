// FUN_0086a400 @ 0086a400 body=[[0086a400, 0086a49e]]


void FUN_0086a400(void)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3a1c6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00aae9af(0xc);
  local_8 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00aa9ba0();
    *puVar1 = luabind::detail::
              constructor_registration<CArray<CFixedPoint>,luabind::detail::null_type,boost::mpl::vector3<void,luabind::adl::argument_const&,unsigned_int>,luabind::detail::null_type>
              ::vftable;
  }
  local_8 = 0xffffffff;
  FUN_00aaaae0(puVar1);
  puVar1 = (undefined4 *)FUN_00aae9af(0xc);
  local_8 = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00aa9ba0();
    *puVar1 = luabind::detail::
              constructor_registration<CArray<CFixedPoint>,luabind::detail::null_type,boost::mpl::vector3<void,luabind::adl::argument_const&,unsigned_int>,luabind::detail::null_type>
              ::vftable;
  }
  local_8 = 0xffffffff;
  FUN_00aaab70(puVar1);
  ExceptionList = local_10;
  return;
}

