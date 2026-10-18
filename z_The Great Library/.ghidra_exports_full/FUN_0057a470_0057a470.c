// FUN_0057a470 @ 0057a470 body=[[0057a470, 0057a48a] [0057a48e, 0057a4ad] [0057a4b1, 0057a4b7]]


void FUN_0057a470(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CNullTechSchool::vftable;
  if (0xf < (uint)in_ECX[0x11]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xc]);
  }
  in_ECX[0x11] = 0xf;
  in_ECX[0x10] = 0;
  *(undefined1 *)(in_ECX + 0xc) = 0;
  FUN_0044be00();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

