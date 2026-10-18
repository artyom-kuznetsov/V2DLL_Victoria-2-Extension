// FUN_0086aaa0 @ 0086aaa0 body=[[0086aaa0, 0086aafd]]


void FUN_0086aaa0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00aae9af(0x38);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = FUN_0086c6a0;
    puVar1[7] = 0xf;
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0xfffffffe;
    *puVar1 = luabind::detail::
              function_object_impl<class_CArray<CCountry*>&_(__cdecl*)(void),boost::mpl::vector1<CArray<CCountry*>&>,luabind::detail::policy_cons<luabind::detail::clausewitz_iterator_policy,luabind::detail::null_type>_>
              ::vftable;
    puVar1[0xc] = param_2;
  }
  FUN_00aaa540();
  return;
}

