// FUN_00973250 @ 00973250 body=[[00973250, 00973269] [0097326d, 0097328b] [0097328f, 009732a8] [009732b2, 009732be]]


void FUN_00973250(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = CIdeologyGroup::vftable;
  if (0xf < (uint)in_ECX[0x12]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xd]);
  }
  in_ECX[0x12] = 0xf;
  in_ECX[0x11] = 0;
  *(undefined1 *)(in_ECX + 0xd) = 0;
  if (0xf < (uint)in_ECX[0xb]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[6]);
  }
  in_ECX[0xb] = 0xf;
  in_ECX[10] = 0;
  *(undefined1 *)(in_ECX + 6) = 0;
  if (in_ECX[2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[2]);
  }
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}

