// FUN_00872d20 @ 00872d20 body=[[00872d20, 00872d39] [00872d3d, 00872d56] [00872d5a, 00872d6b] [00872d6f, 00872d76]]


void FUN_00872d20(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[3];
  if (piVar1 == (int *)0x0) {
    *in_ECX = luabind::detail::instance_holder::vftable;
    if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    return;
  }
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar1);
}

