// FUN_0086ce10 @ 0086ce10 body=[[0086ce10, 0086ce67]]


void FUN_0086ce10(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00aae9af(0x34);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = FUN_0086ec50;
    puVar1[7] = 0xf;
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0xfffffffe;
    *puVar1 = luabind::detail::
              function_object_impl<luabind::detail::construct<CString,std::auto_ptr<CString>,boost::mpl::vector3<void,luabind::adl::argument_const&,char_const*>_>,boost::mpl::vector3<void,luabind::adl::argument_const&,char_const*>,luabind::detail::null_type>
              ::vftable;
  }
  FUN_00aaa540();
  return;
}

