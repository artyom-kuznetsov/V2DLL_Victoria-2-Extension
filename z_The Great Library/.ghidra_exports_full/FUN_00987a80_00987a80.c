// FUN_00987a80 @ 00987a80 body=[[00987a80, 00987aab] [00987aaf, 00987ab6]]


undefined4 * FUN_00987a80(byte param_1)

{
  undefined4 *in_ECX;
  
  FUN_00987ac0(in_ECX);
  *in_ECX = std::ios_base::vftable;
  FUN_00aad52d();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX + -0x1e);
  }
  return in_ECX + -0x1e;
}

