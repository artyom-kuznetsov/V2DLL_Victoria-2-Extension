// FUN_00aa9bb0 @ 00aa9bb0 body=[[00aa9bb0, 00aa9bc5]]


void FUN_00aa9bb0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = luabind::detail::registration::vftable;
  if ((undefined4 *)in_ECX[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[1])(1);
  }
  return;
}

