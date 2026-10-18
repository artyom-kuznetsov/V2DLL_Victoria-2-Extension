// FUN_00804540 @ 00804540 body=[[00804540, 0080455e] [00804562, 00804579]]


void FUN_00804540(void)

{
  int *unaff_ESI;
  
  if (*unaff_ESI != 0) {
    FUN_00804f40(unaff_ESI[1]);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*unaff_ESI);
  }
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  return;
}

