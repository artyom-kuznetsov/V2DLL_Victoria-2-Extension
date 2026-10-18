// FUN_005c4f70 @ 005c4f70 body=[[005c4f70, 005c4f90] [005c4f94, 005c4f9a]]


void FUN_005c4f70(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CUniqueUnitName::vftable;
  FUN_005c5190(in_ECX + 2);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

