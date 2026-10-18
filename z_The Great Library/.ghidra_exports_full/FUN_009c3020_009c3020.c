// FUN_009c3020 @ 009c3020 body=[[009c3020, 009c3043] [009c3047, 009c304d]]


void FUN_009c3020(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e3a6d8;
  in_ECX[0x15] = &PTR_LAB_00e3a7f0;
  FUN_009c2f40();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

