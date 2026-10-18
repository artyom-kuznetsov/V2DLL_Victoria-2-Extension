// FUN_00874090 @ 00874090 body=[[00874090, 008740ab] [008740af, 008740c5] [008740c9, 008740da] [008740de, 008740e5]]


void FUN_00874090(byte param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[3];
  if (puVar1 == (undefined4 *)0x0) {
    *in_ECX = luabind::detail::instance_holder::vftable;
    if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    return;
  }
  if (0xf < (uint)puVar1[5]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*puVar1);
  }
  puVar1[5] = 0xf;
  puVar1[4] = 0;
  *(undefined1 *)puVar1 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(puVar1);
}

