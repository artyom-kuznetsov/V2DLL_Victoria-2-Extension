// FUN_009b2060 @ 009b2060 body=[[009b2060, 009b2083] [009b2087, 009b208d]]


void FUN_009b2060(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e391b8;
  in_ECX[1] = &PTR_FUN_00e39240;
  FUN_009b26b0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

