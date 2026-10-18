// FUN_009bf0c0 @ 009bf0c0 body=[[009bf0c0, 009bf0d9] [009bf0dd, 009bf0f2]]


void FUN_009bf0c0(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_009c0f70(in_ECX[1]);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*in_ECX);
  }
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}

