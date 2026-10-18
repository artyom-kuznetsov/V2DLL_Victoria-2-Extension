// FUN_0086c9f0 @ 0086c9f0 body=[[0086c9f0, 0086ca47]]


void FUN_0086c9f0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00aae9af(0x34);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = FUN_0086e360;
    puVar1[7] = 0xf;
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0xfffffffe;
    *puVar1 = luabind::detail::
              function_object_impl<luabind::detail::construct<CArray<float>,std::auto_ptr<CArray<float>_>,boost::mpl::vector3<void,luabind::adl::argument_const&,unsigned_int>_>,boost::mpl::vector3<void,luabind::adl::argument_const&,unsigned_int>,luabind::detail::null_type>
              ::vftable;
  }
  FUN_00aaa540();
  return;
}

