// FUN_008043f0 @ 008043f0 body=[[008043f0, 0080440e] [00804412, 00804429]]


void FUN_008043f0(void)

{
  int *unaff_ESI;
  
  if (*unaff_ESI != 0) {
    FUN_00804e70(unaff_ESI[1]);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*unaff_ESI);
  }
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  return;
}

