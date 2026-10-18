// FUN_005b6110 @ 005b6110 body=[[005b6110, 005b612d] [005b6131, 005b6137]]


void FUN_005b6110(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CNullLeader::vftable;
  FUN_005b6570(in_ECX);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

