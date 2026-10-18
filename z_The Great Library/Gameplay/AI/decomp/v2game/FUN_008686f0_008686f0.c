// FUN_008686f0 @ 008686f0 body=[[008686f0, 00868726] [0086872a, 0086873d]]


void FUN_008686f0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = luabind::detail::function_object::vftable;
  if ((in_ECX[10] != 0) && (in_ECX[0xb] != -2)) {
    luaL_unref(in_ECX[10],0xffffd8f0,in_ECX[0xb]);
  }
  if (0xf < (uint)in_ECX[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[2]);
  }
  in_ECX[7] = 0xf;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 2) = 0;
  return;
}

