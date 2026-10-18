// FUN_0086cc30 @ 0086cc30 body=[[0086cc30, 0086cc87]]


void FUN_0086cc30(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00aae9af(0x34);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = FUN_0086e840;
    puVar1[7] = 0xf;
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0xfffffffe;
    *puVar1 = luabind::detail::
              function_object_impl<luabind::detail::construct<CFixedPoint,std::auto_ptr<CFixedPoint>,boost::mpl::vector2<void,luabind::adl::argument_const&>_>,boost::mpl::vector2<void,luabind::adl::argument_const&>,luabind::detail::null_type>
              ::vftable;
  }
  FUN_00aaa540();
  return;
}

