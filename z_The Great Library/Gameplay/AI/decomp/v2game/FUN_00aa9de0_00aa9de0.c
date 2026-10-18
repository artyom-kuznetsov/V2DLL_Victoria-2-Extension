// FUN_00aa9de0 @ 00aa9de0 body=[[00aa9de0, 00aa9e06] [00aa9e0a, 00aa9e10]]


void FUN_00aa9de0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = luabind::detail::registration::vftable;
  if ((undefined4 *)in_ECX[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[1])(1);
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

