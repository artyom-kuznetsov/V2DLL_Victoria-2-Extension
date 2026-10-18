// FUN_008aff40 @ 008aff40 body=[[008aff40, 008aff5d] [008aff61, 008aff67]]


void FUN_008aff40(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CNullMission::vftable;
  FUN_008afac0(in_ECX);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

