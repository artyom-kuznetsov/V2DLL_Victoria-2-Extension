// FUN_0086a890 @ 0086a890 body=[[0086a890, 0086a93e]]


undefined4 FUN_0086a890(undefined4 param_1)

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
              function_registration<class_CCountryTag_const&_(__cdecl*)(void),luabind::detail::null_type>
              ::vftable;
    puVar1[2] = "GetPlayer";
    puVar1[3] = &LAB_008687c0;
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

