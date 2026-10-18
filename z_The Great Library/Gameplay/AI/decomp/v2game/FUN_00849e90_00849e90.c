// FUN_00849e90 @ 00849e90  (requested 00849E90, first bytes: 57 8B F9 8B 07 85 C0 74)


void FUN_00849e90(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*in_ECX);
  }
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}

