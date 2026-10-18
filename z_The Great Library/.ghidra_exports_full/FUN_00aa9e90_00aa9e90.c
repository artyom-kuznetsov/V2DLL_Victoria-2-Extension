// FUN_00aa9e90 @ 00aa9e90 body=[[00aa9e90, 00aa9eaf]]


undefined4 FUN_00aa9e90(undefined4 param_1)

{
  lua_pushstring(param_1,
                 "DEPRECATION: \'super\' has been deprecated in favor of directly calling the base class __init() function. This error can be disabled by calling \'luabind::disable_super_deprecation()\'."
                );
  lua_error(param_1);
  return 0;
}

