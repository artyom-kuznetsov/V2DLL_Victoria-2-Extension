// FUN_008695f0 @ 008695f0 body=[[008695f0, 0086969e]]


undefined4 FUN_008695f0(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3a334;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00aae9af();
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00aa9ba0();
    *puVar1 = luabind::detail::
              function_registration<class_CArray<CCountry*>&_(__cdecl*)(void),luabind::detail::policy_cons<luabind::detail::clausewitz_iterator_policy,luabind::detail::null_type>_>
              ::vftable;
    puVar1[2] = "GetCountries";
    puVar1[3] = &LAB_008687b0;
  }
  local_8 = 2;
  FUN_00aa9e20();
  local_8._0_1_ = 3;
  FUN_00aa9be0();
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_0086a050();
  ExceptionList = local_10;
  return param_1;
}

