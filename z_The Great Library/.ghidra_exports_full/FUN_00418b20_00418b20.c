// FUN_00418b20 @ 00418b20 body=[[00418b20, 00418b36] [00418b3a, 00418b4e]]


void FUN_00418b20(void)

{
  int *unaff_ESI;
  
  if (*unaff_ESI != 0) {
    FUN_00418de0(unaff_ESI[1]);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*unaff_ESI);
  }
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  return;
}

