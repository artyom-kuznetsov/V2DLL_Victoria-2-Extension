// FUN_006cabb0 @ 006cabb0 body=[[006cabb0, 006cabf0] [006cabf4, 006cac14]]


void FUN_006cabb0(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_004010c0();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*in_ECX);
  }
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}

